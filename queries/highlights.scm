; =============================================================================
; highlights.scm — Tree-sitter highlight queries for TL (Type Language)
; =============================================================================
;
; Capture names follow the standard tree-sitter / Neovim convention so this
; file works out of the box with nvim-treesitter and Helix.
;
; Precedence: more specific patterns must come BEFORE more general ones,
; because tree-sitter applies the FIRST matching capture.
; =============================================================================


; -----------------------------------------------------------------------------
; Comments
; -----------------------------------------------------------------------------

(comment) @comment


; -----------------------------------------------------------------------------
; Section markers
; -----------------------------------------------------------------------------

"---types---"     @keyword
"---functions---" @keyword


; -----------------------------------------------------------------------------
; Function attributes  (@read, @write, …)
; -----------------------------------------------------------------------------

(function_attribute
  "@" @operator)

(function_attribute
  [
    "read" "write" "readwrite" "any" "internal" "kphp"
  ] @attribute)


; -----------------------------------------------------------------------------
; Constructor / combinator name
; (the lhs lc-ident before the magic number and fields)
; -----------------------------------------------------------------------------

; Namespaced constructor:  messages.sendMessage#...
(combinator_id
  (lc_ident_ns
    namespace: (lc_ident) @namespace
    (lc_ident) @function))

; Plain constructor:  sendMessage#...
(combinator_id
  (lc_ident_ns
    (lc_ident) @function))

; Anonymous combinator  _
(combinator_id "_" @function.builtin)


; -----------------------------------------------------------------------------
; Magic (CRC32) number
; -----------------------------------------------------------------------------

(magic_number) @constant.numeric.integer


; -----------------------------------------------------------------------------
; Result type  ( = SomeType ; )
; -----------------------------------------------------------------------------

; Namespaced result type:  = messages.Messages
(result_type
  (uc_ident_ns
    namespace: (lc_ident) @namespace
    (uc_ident) @type))

; Plain result type:  = Messages
(result_type
  (uc_ident_ns
    (uc_ident) @type))

; Result type subexpr arguments (nat or type var after the type name)
(result_type
  (lc_ident_ns
    (lc_ident) @variable))

(result_type
  (nat_const) @number)


; -----------------------------------------------------------------------------
; Field names
; -----------------------------------------------------------------------------

(field
  (field_name (lc_ident) @variable.member))

(field
  (field_name "_" @variable.member))


; -----------------------------------------------------------------------------
; Conditional (flags) definition   flags.0?
; -----------------------------------------------------------------------------

(conditional_def
  (var_ident (lc_ident) @variable))

; ".0"  ".31"  — the bit-index suffix as an atomic token
(conditional_def
  (cond_bit) @number)

(conditional_def "?" @operator)


; -----------------------------------------------------------------------------
; Type expressions — builtin types
; -----------------------------------------------------------------------------

(builtin_type) @type.builtin

(nat_type) @type.builtin


; -----------------------------------------------------------------------------
; Type expressions — user-defined boxed types
; -----------------------------------------------------------------------------

; Namespaced boxed type in field:  some_field: messages.Message
(boxed_type
  (uc_ident_ns
    namespace: (lc_ident) @namespace
    (uc_ident) @type))

; Plain boxed type:  some_field: Message
(boxed_type
  (uc_ident_ns
    (uc_ident) @type))

; Type variable reference (lowercase):  some_field: t
(boxed_type
  (lc_ident_ns
    (lc_ident) @type.parameter))


; -----------------------------------------------------------------------------
; Type expressions — angle-bracket generics   Vector<Message>
; -----------------------------------------------------------------------------

; Namespaced generic head:  messages.Vector<t>
(angle_type_expr
  (uc_ident_ns
    namespace: (lc_ident) @namespace
    (uc_ident) @type))

; Plain generic head:  Vector<t>
(angle_type_expr
  (uc_ident_ns
    (uc_ident) @type))

(angle_type_expr ["<" ">" ","] @punctuation.bracket)


; -----------------------------------------------------------------------------
; Type expressions — bare (unboxed) types   %Vector<t>  %(Vector t)
; -----------------------------------------------------------------------------

(bare_type "%" @operator)


; -----------------------------------------------------------------------------
; Type expressions — parenthesised application   (Vector t)
; -----------------------------------------------------------------------------

(paren_type_expr ["(" ")"] @punctuation.bracket)


; -----------------------------------------------------------------------------
; Optional (type-variable) arguments   {t : Type}  {n : #}
; -----------------------------------------------------------------------------

(opt_args
  (var_ident (lc_ident) @variable.parameter))

(opt_args
  (var_ident "_" @variable.parameter))

(opt_args ["{" "}"] @punctuation.bracket)


; -----------------------------------------------------------------------------
; Operators and punctuation
; -----------------------------------------------------------------------------

"=" @operator
":" @punctuation.delimiter
"." @punctuation.delimiter
";" @punctuation.delimiter
