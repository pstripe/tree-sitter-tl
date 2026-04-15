/**
 * @file TL (Type Language) grammar for tree-sitter
 * @author Pavel Smirnov <striped.page@gmail.com>
 * @license MIT
 *
 * Reference: https://core.telegram.org/mtproto/TL-formal
 *            https://core.telegram.org/mtproto/TL-combinators
 *
 * ── Formal BNF (relevant excerpt) ─────────────────────────────────────────
 *
 *  lc-ident      ::= lc-letter { ident-char }
 *  uc-ident      ::= uc-letter { ident-char }
 *  namespace-ident ::= lc-ident
 *  lc-ident-ns   ::= [ namespace-ident '.' ] lc-ident
 *  uc-ident-ns   ::= [ namespace-ident '.' ] uc-ident
 *  lc-ident-full ::= lc-ident-ns [ '#' hex-digit*8 ]
 *
 *  combinator-decl ::= full-combinator-id opt-args* args* '=' result-type ';'
 *  full-combinator-id ::= lc-ident-full | '_'
 *  opt-args  ::= '{' var-ident+ ':' ['!'] type-expr '}'
 *  args      ::= var-ident-opt ':' [ cond-def ] ['!'] type-term
 *             |  ['!'] type-term
 *  cond-def  ::= var-ident [ '.' nat-const ] '?'
 *  result-type ::= uc-ident-ns subexpr*
 *               |  uc-ident-ns '<' subexpr (',' subexpr)* '>'
 *
 * ── Design decisions ───────────────────────────────────────────────────────
 *
 *  • All leaf identifiers are named rules (not inline regexes) so that
 *    tree-sitter keeps them as distinct symbol IDs and they show up as
 *    separate named nodes in the syntax tree.
 *
 *  • magic_number is a single atomic token() so '#' inside it is never
 *    confused with the nat_type '#' terminal.
 *
 *  • builtin_type keywords ('int', 'long', …) are declared via the 'word'
 *    mechanism so that they are excluded from lc_ident matches.
 *
 *  • The field / anonymous_field ambiguity (both can start with an lc_ident)
 *    is resolved by LR(1) lookahead on ':' and is also declared in conflicts
 *    for the GLR fallback path.
 */

/// <reference types="tree-sitter-cli/dsl" />
// @ts-check

module.exports = grammar({
  name: 'tl',

  // Whitespace and comments are transparent everywhere.
  extras: $ => [
    /\s+/,
    $.comment,
  ],

  // Keyword extraction: tell tree-sitter that lc_ident is the base "word"
  // token. Any string literal that matches /[a-z][a-zA-Z0-9_]*/ (e.g. 'int',
  // 'string', 'read') will be treated as a keyword and NOT matched as lc_ident.
  word: $ => $.lc_ident,


  conflicts: $ => [
    [$.lc_ident_ns, $.uc_ident_ns, $.var_ident],
  ],

  rules: {

    // =========================================================================
    // Top-level structure
    // =========================================================================

    // A TL schema is optionally divided into a types section and a functions
    // section. Either section may be absent (e.g. types-only schemas).
    source_file: $ => seq(
      optional($.types_section),
      optional($.functions_section),
    ),

    types_section: $ => seq(
      '---types---',
      repeat($.combinator_decl),
    ),

    functions_section: $ => seq(
      '---functions---',
      repeat($.function_decl),
    ),

    // =========================================================================
    // Declarations
    // =========================================================================

    // A function declaration is a combinator prefixed by one or more VK-style
    // @attributes (@read, @write, …).
    function_decl: $ => seq(
      repeat1($.function_attribute),
      $.combinator_decl,
    ),

    // combinator-decl ::= full-combinator-id opt-args* args* '=' result-type ';'
    combinator_decl: $ => seq(
      $.combinator_id,
      repeat($.opt_args),
      repeat($.args),
      '=',
      $.result_type,
      ';',
    ),

    // full-combinator-id ::= lc-ident-ns [ '#' hex*8 ] | '_'
    combinator_id: $ => choice(
      seq($.lc_ident_ns, optional($.magic_number)),
      '_',
    ),

    // =========================================================================
    // Optional (type-variable) arguments  {t : Type}  /  {n : #}
    // =========================================================================

    // opt-args ::= '{' var-ident+ ':' ['!'] type-expr '}'
    // Multiple variable names sharing one type are valid: {m n : #}
    opt_args: $ => seq(
      '{',
      repeat1($.var_ident),
      ':',
      optional('!'),
      $._type_expr,
      '}',
    ),

    // =========================================================================
    // Regular arguments / fields
    // =========================================================================

    // Each field is one of:
    //   named   — var-ident-opt ':' [cond-def] ['!'] type-term
    //   unnamed — ['!'] type-term  (bare type alias shorthand)
    args: $ => choice(
      $.field,
      $.anonymous_field,
    ),

    // named field: some_name:flags.0?string  or  some_name:Vector<t>
    field: $ => seq(
      $.field_name,
      ':',
      optional($.conditional_def),
      optional('!'),
      $._type_expr,
    ),

    // conditional-arg-def ::= var-ident [ '.' nat-const ] '?'
    // Examples:  flags?   flags.0?   flags.31?
    conditional_def: $ => seq(
      $.var_ident,
      optional(seq('.', $.nat_const)),
      '?',
    ),

    // unnamed field: just a type expression standing alone
    anonymous_field: $ => seq(
      optional('!'),
      $._type_expr,
    ),

    // =========================================================================
    // Type expressions
    // =========================================================================

    // _type_expr is the core workhorse covering every type that can appear
    // after ':' or as a bare term.
    _type_expr: $ => choice(
      $.builtin_type,       // int / long / string / … / Type
      $.nat_type,           // #
      $.boxed_type,         // SomeName  or  ns.SomeName  or  typeVar
      $.bare_type,          // %SomeType  or  %(expr)
      $.paren_type_expr,    // (Vector t)
      $.angle_type_expr,    // Vector<t>
    ),

    // Scalar builtin types and the pseudo-type 'Type'.
    // Declared as string literals so they are extracted as keywords by the
    // 'word' mechanism and never collide with lc_ident.
    builtin_type: $ => choice(
      'int', 'long', 'float', 'double', 'string', 'bytes', 'Bool', 'True', 'Type',
    ),

    // # — natural number type (flags mask, multiplicity counter)
    // Wrapped in token() to be a single atomic terminal, preventing any
    // ambiguity with the '#' inside magic_number.
    nat_type: $ => token('#'),

    // A boxed type reference.  Per spec: uc-ident-ns for concrete types,
    // lc-ident-ns for type-variable references (e.g. the 't' in 'Vector t').
    boxed_type: $ => choice(
      $.uc_ident_ns,
      $.lc_ident_ns,
    ),

    // Bare (unboxed) type:  %SomeType  or  %(SomeType arg)
    bare_type: $ => seq(
      '%',
      choice(
        $.angle_type_expr,   // must come before boxed_type to avoid partial match
        $.boxed_type,
        $.paren_type_expr,
      ),
    ),

    // Parenthesised type application: (Vector int)  /  (Tuple t n)
    paren_type_expr: $ => seq(
      '(',
      $._type_expr,
      repeat($._type_expr),
      ')',
    ),

    // Angle-bracket generic:  Vector<int>  /  CoupleInt<alpha>
    // Only uppercase types can be generic heads per the spec.
    angle_type_expr: $ => seq(
      $.uc_ident_ns,
      '<',
      $._type_expr,
      repeat(seq(',', $._type_expr)),
      '>',
    ),

    // =========================================================================
    // Result type
    // =========================================================================

    // result-type ::= uc-ident-ns subexpr*
    //              |  uc-ident-ns '<' subexpr (',' subexpr)* '>'
    //
    // subexpr in result position can be a nat-const or a type reference.
    result_type: $ => choice(
      seq($.uc_ident_ns, repeat($._subexpr)),
      seq($.uc_ident_ns, '<', $._subexpr, repeat(seq(',', $._subexpr)), '>'),
    ),

    // A subexpression used as a type argument in result position.
    _subexpr: $ => choice(
      $.nat_const,
      $.lc_ident_ns,
      $.uc_ident_ns,
    ),

    // =========================================================================
    // Identifiers
    // =========================================================================

    // lc-ident: lowercase-starting identifier (constructor names, field names,
    // type-variable names). Also the 'word' token for keyword extraction.
    lc_ident: $ => token(/[a-z][a-zA-Z0-9_]*/),

    // uc-ident: uppercase-starting identifier (type names).
    uc_ident: $ => token(/[A-Z][a-zA-Z0-9_]*/),

    // Namespace-qualified lowercase identifier:  lc-ident  |  ns.lc-ident
    // Namespace-qualified lowercase identifier:  lc-ident  |  ns.lc-ident
    //
    // There is no separate namespace_ident rule: any named rule with the same
    // regex as lc_ident would either duplicate the 'word' token (rejected by
    // tree-sitter) or require token(prec(...)) which raises tokenizer priority
    // globally and causes namespace_ident to steal tokens in non-namespace positions.
    //
    // Instead, the namespace part is a plain $.lc_ident accessed via a named
    // field 'namespace'. Queries can use (lc_ident_ns namespace: (lc_ident) @ns).
    lc_ident_ns: $ => choice(
      $.lc_ident,
      seq(field('namespace', $.lc_ident), '.', $.lc_ident),
    ),

    // Namespace-qualified uppercase identifier:  uc-ident  |  ns.uc-ident
    uc_ident_ns: $ => choice(
      $.uc_ident,
      seq(field('namespace', $.lc_ident), '.', $.uc_ident),
    ),

    // var-ident: used in opt-args and conditional_def.
    // '_' is the anonymous/wildcard variable.
    var_ident: $ => choice($.lc_ident, '_'),

    // field_name: alias for var_ident in the field name position.
    // Keeping it separate gives a more descriptive node name in the AST.
    field_name: $ => choice($.lc_ident, '_'),

    // nat-const: a non-negative decimal integer (bit index, multiplicity, …)
    nat_const: $ => token(/[0-9]+/),

    // =========================================================================
    // Terminals
    // =========================================================================

    // magic_number: '#' + exactly 8 lower-hex digits.
    // Atomic token so the '#' here is NEVER tokenised as nat_type.
    magic_number: $ => token(seq('#', /[0-9a-fA-F]{8}/)),

    // VK-specific function attribute: @read, @write, …
    function_attribute: $ => seq(
      '@',
      choice('read', 'write', 'readwrite', 'any', 'internal', 'kphp'),
    ),

    // Comments: single-line // and block /* */ (non-nested, C-style).
    comment: $ => token(choice(
      seq('//', /.*/),
      seq('/*', /[^*]*\*+([^/*][^*]*\*+)*/, '/'),
    )),
  },
});
