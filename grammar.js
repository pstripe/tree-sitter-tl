/**
 * @file VK.com's TL language parser
 * @author Pavel Smirnov <striped.page@gmail.com>
 * @license MIT
 */

/// <reference types="tree-sitter-cli/dsl" />
// @ts-check

module.exports = grammar({
  name: 'tl',

  extras: $ => [
    /\s/,
    $.comment,
  ],

  rules: {
    source_file: $ => repeat($._definition),

    _definition: $ => choice(
      $.types_section,
      $.functions_section
    ),

    types_section: $ => seq(
      '---types---',
      repeat($.definition)
    ),

    functions_section: $ => seq(
      '---functions---',
      repeat($.function_definition),
    ),

    function_definition: $ => seq($.function_attribute, $.definition),

    definition: $ => seq(
      $.name,
      optional($.magic_number),
      repeat($.parameter),
      repeat($.property),
      '=',
      $.type,
      ';'
    ),

    name: $ => choice(
      $.type_name,
      seq($.namespace_name, '.', $.type_name),
    ),

    type_name: $ => /[a-zA-Z]+/,
    namespace_name: $ => /[a-zA-Z]+/,

    type: $ => seq(
      $.name,
      repeat($.parameter_name),
    ),

    // TODO: add type parameter
    parameter: $ => seq(
      '{',
      $._nat_parameter,
      '}'
    ),

    _nat_parameter: $ => seq($.parameter_name, ':', $.nat_type),

    parameter_name: $ => /[a-z_]+/,

    property: $ => choice(
      $._named_property,
      $._unnamed_property,
    ),

    _unnamed_property: $ => $.builtin_type,
    _named_property: $ => seq($.parameter_name, ':', choice($._type, $.optional_type)),

    _type: $ => choice(
      $.builtin_type,
      $.parametrized_type,
      $.user_defined_type,
      $.unboxed_type,
    ),

    // TODO: add builtin arrays
    builtin_type: $ => choice('int', 'long', 'float', 'double', 'string', $.nat_type),

    optional_type: $ => seq($.parameter_name, '.', /[0-9]+/, '?', $._type),
    parametrized_type: $ => seq('(', $.type, ')'),
    user_defined_type: $ => $.name, // TODO: choice(boxed, unboxed)
    unboxed_type: $ => seq('%', $._type),

    nat_type: $ => '#',

    function_attribute: $ => seq('@', choice(
      'read',
      'write',
      'readwrite',
      'any',
      'internal',
      'kphp'
    )),
    magic_number: $ => seq('#', /[0-9a-fA-F]{8}/),

    // TODO: add multiline comments
    comment: $ => token(seq('//', /.*/))
  }
});
