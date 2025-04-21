#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 76
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 61
#define ALIAS_COUNT 0
#define TOKEN_COUNT 31
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 7
#define PRODUCTION_ID_COUNT 1

enum ts_symbol_identifiers {
  anon_sym_DASH_DASH_DASHtypes_DASH_DASH_DASH = 1,
  anon_sym_DASH_DASH_DASHfunctions_DASH_DASH_DASH = 2,
  anon_sym_EQ = 3,
  anon_sym_SEMI = 4,
  anon_sym_DOT = 5,
  aux_sym_type_name_token1 = 6,
  anon_sym_LBRACE = 7,
  anon_sym_RBRACE = 8,
  anon_sym_COLON = 9,
  sym_parameter_name = 10,
  anon_sym_int = 11,
  anon_sym_long = 12,
  anon_sym_float = 13,
  anon_sym_double = 14,
  anon_sym_string = 15,
  aux_sym_optional_type_token1 = 16,
  anon_sym_QMARK = 17,
  anon_sym_LPAREN = 18,
  anon_sym_RPAREN = 19,
  anon_sym_PERCENT = 20,
  anon_sym_POUND = 21,
  anon_sym_AT = 22,
  anon_sym_read = 23,
  anon_sym_write = 24,
  anon_sym_readwrite = 25,
  anon_sym_any = 26,
  anon_sym_internal = 27,
  anon_sym_kphp = 28,
  aux_sym_magic_number_token1 = 29,
  sym_comment = 30,
  sym_source_file = 31,
  sym__definition = 32,
  sym_types_section = 33,
  sym_functions_section = 34,
  sym_function_definition = 35,
  sym_definition = 36,
  sym_name = 37,
  sym_type_name = 38,
  sym_namespace_name = 39,
  sym_type = 40,
  sym_parameter = 41,
  sym__nat_parameter = 42,
  sym_property = 43,
  sym__unnamed_property = 44,
  sym__named_property = 45,
  sym__type = 46,
  sym_builtin_type = 47,
  sym_optional_type = 48,
  sym_parametrized_type = 49,
  sym_user_defined_type = 50,
  sym_unboxed_type = 51,
  sym_nat_type = 52,
  sym_function_attribute = 53,
  sym_magic_number = 54,
  aux_sym_source_file_repeat1 = 55,
  aux_sym_types_section_repeat1 = 56,
  aux_sym_functions_section_repeat1 = 57,
  aux_sym_definition_repeat1 = 58,
  aux_sym_definition_repeat2 = 59,
  aux_sym_type_repeat1 = 60,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_DASH_DASH_DASHtypes_DASH_DASH_DASH] = "---types---",
  [anon_sym_DASH_DASH_DASHfunctions_DASH_DASH_DASH] = "---functions---",
  [anon_sym_EQ] = "=",
  [anon_sym_SEMI] = ";",
  [anon_sym_DOT] = ".",
  [aux_sym_type_name_token1] = "type_name_token1",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_COLON] = ":",
  [sym_parameter_name] = "parameter_name",
  [anon_sym_int] = "int",
  [anon_sym_long] = "long",
  [anon_sym_float] = "float",
  [anon_sym_double] = "double",
  [anon_sym_string] = "string",
  [aux_sym_optional_type_token1] = "optional_type_token1",
  [anon_sym_QMARK] = "\?",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_PERCENT] = "%",
  [anon_sym_POUND] = "#",
  [anon_sym_AT] = "@",
  [anon_sym_read] = "read",
  [anon_sym_write] = "write",
  [anon_sym_readwrite] = "readwrite",
  [anon_sym_any] = "any",
  [anon_sym_internal] = "internal",
  [anon_sym_kphp] = "kphp",
  [aux_sym_magic_number_token1] = "magic_number_token1",
  [sym_comment] = "comment",
  [sym_source_file] = "source_file",
  [sym__definition] = "_definition",
  [sym_types_section] = "types_section",
  [sym_functions_section] = "functions_section",
  [sym_function_definition] = "function_definition",
  [sym_definition] = "definition",
  [sym_name] = "name",
  [sym_type_name] = "type_name",
  [sym_namespace_name] = "namespace_name",
  [sym_type] = "type",
  [sym_parameter] = "parameter",
  [sym__nat_parameter] = "_nat_parameter",
  [sym_property] = "property",
  [sym__unnamed_property] = "_unnamed_property",
  [sym__named_property] = "_named_property",
  [sym__type] = "_type",
  [sym_builtin_type] = "builtin_type",
  [sym_optional_type] = "optional_type",
  [sym_parametrized_type] = "parametrized_type",
  [sym_user_defined_type] = "user_defined_type",
  [sym_unboxed_type] = "unboxed_type",
  [sym_nat_type] = "nat_type",
  [sym_function_attribute] = "function_attribute",
  [sym_magic_number] = "magic_number",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_types_section_repeat1] = "types_section_repeat1",
  [aux_sym_functions_section_repeat1] = "functions_section_repeat1",
  [aux_sym_definition_repeat1] = "definition_repeat1",
  [aux_sym_definition_repeat2] = "definition_repeat2",
  [aux_sym_type_repeat1] = "type_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_DASH_DASH_DASHtypes_DASH_DASH_DASH] = anon_sym_DASH_DASH_DASHtypes_DASH_DASH_DASH,
  [anon_sym_DASH_DASH_DASHfunctions_DASH_DASH_DASH] = anon_sym_DASH_DASH_DASHfunctions_DASH_DASH_DASH,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_DOT] = anon_sym_DOT,
  [aux_sym_type_name_token1] = aux_sym_type_name_token1,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_COLON] = anon_sym_COLON,
  [sym_parameter_name] = sym_parameter_name,
  [anon_sym_int] = anon_sym_int,
  [anon_sym_long] = anon_sym_long,
  [anon_sym_float] = anon_sym_float,
  [anon_sym_double] = anon_sym_double,
  [anon_sym_string] = anon_sym_string,
  [aux_sym_optional_type_token1] = aux_sym_optional_type_token1,
  [anon_sym_QMARK] = anon_sym_QMARK,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_PERCENT] = anon_sym_PERCENT,
  [anon_sym_POUND] = anon_sym_POUND,
  [anon_sym_AT] = anon_sym_AT,
  [anon_sym_read] = anon_sym_read,
  [anon_sym_write] = anon_sym_write,
  [anon_sym_readwrite] = anon_sym_readwrite,
  [anon_sym_any] = anon_sym_any,
  [anon_sym_internal] = anon_sym_internal,
  [anon_sym_kphp] = anon_sym_kphp,
  [aux_sym_magic_number_token1] = aux_sym_magic_number_token1,
  [sym_comment] = sym_comment,
  [sym_source_file] = sym_source_file,
  [sym__definition] = sym__definition,
  [sym_types_section] = sym_types_section,
  [sym_functions_section] = sym_functions_section,
  [sym_function_definition] = sym_function_definition,
  [sym_definition] = sym_definition,
  [sym_name] = sym_name,
  [sym_type_name] = sym_type_name,
  [sym_namespace_name] = sym_namespace_name,
  [sym_type] = sym_type,
  [sym_parameter] = sym_parameter,
  [sym__nat_parameter] = sym__nat_parameter,
  [sym_property] = sym_property,
  [sym__unnamed_property] = sym__unnamed_property,
  [sym__named_property] = sym__named_property,
  [sym__type] = sym__type,
  [sym_builtin_type] = sym_builtin_type,
  [sym_optional_type] = sym_optional_type,
  [sym_parametrized_type] = sym_parametrized_type,
  [sym_user_defined_type] = sym_user_defined_type,
  [sym_unboxed_type] = sym_unboxed_type,
  [sym_nat_type] = sym_nat_type,
  [sym_function_attribute] = sym_function_attribute,
  [sym_magic_number] = sym_magic_number,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_types_section_repeat1] = aux_sym_types_section_repeat1,
  [aux_sym_functions_section_repeat1] = aux_sym_functions_section_repeat1,
  [aux_sym_definition_repeat1] = aux_sym_definition_repeat1,
  [aux_sym_definition_repeat2] = aux_sym_definition_repeat2,
  [aux_sym_type_repeat1] = aux_sym_type_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_DASH_DASH_DASHtypes_DASH_DASH_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH_DASH_DASHfunctions_DASH_DASH_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_type_name_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [sym_parameter_name] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_int] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_long] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_float] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_double] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_string] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_optional_type_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_QMARK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_POUND] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_read] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_write] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_readwrite] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_any] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_internal] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_kphp] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_magic_number_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym__definition] = {
    .visible = false,
    .named = true,
  },
  [sym_types_section] = {
    .visible = true,
    .named = true,
  },
  [sym_functions_section] = {
    .visible = true,
    .named = true,
  },
  [sym_function_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_name] = {
    .visible = true,
    .named = true,
  },
  [sym_type_name] = {
    .visible = true,
    .named = true,
  },
  [sym_namespace_name] = {
    .visible = true,
    .named = true,
  },
  [sym_type] = {
    .visible = true,
    .named = true,
  },
  [sym_parameter] = {
    .visible = true,
    .named = true,
  },
  [sym__nat_parameter] = {
    .visible = false,
    .named = true,
  },
  [sym_property] = {
    .visible = true,
    .named = true,
  },
  [sym__unnamed_property] = {
    .visible = false,
    .named = true,
  },
  [sym__named_property] = {
    .visible = false,
    .named = true,
  },
  [sym__type] = {
    .visible = false,
    .named = true,
  },
  [sym_builtin_type] = {
    .visible = true,
    .named = true,
  },
  [sym_optional_type] = {
    .visible = true,
    .named = true,
  },
  [sym_parametrized_type] = {
    .visible = true,
    .named = true,
  },
  [sym_user_defined_type] = {
    .visible = true,
    .named = true,
  },
  [sym_unboxed_type] = {
    .visible = true,
    .named = true,
  },
  [sym_nat_type] = {
    .visible = true,
    .named = true,
  },
  [sym_function_attribute] = {
    .visible = true,
    .named = true,
  },
  [sym_magic_number] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_types_section_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_functions_section_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_definition_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_definition_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_type_repeat1] = {
    .visible = false,
    .named = false,
  },
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 4,
  [5] = 5,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 14,
  [52] = 52,
  [53] = 22,
  [54] = 20,
  [55] = 23,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 58,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 74,
  [75] = 67,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(79);
      ADVANCE_MAP(
        '#', 187,
        '%', 186,
        '(', 184,
        ')', 185,
        '-', 8,
        '.', 84,
        '/', 14,
        ':', 127,
        ';', 83,
        '=', 82,
        '?', 183,
        '@', 188,
        'a', 39,
        'd', 47,
        'f', 36,
        'i', 42,
        'k', 51,
        'l', 48,
        'r', 21,
        's', 66,
        'w', 54,
        '{', 125,
        '}', 126,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('b' <= lookahead && lookahead <= 'e')) ADVANCE(77);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(182);
      END_STATE();
    case 1:
      ADVANCE_MAP(
        '#', 187,
        '%', 186,
        '(', 184,
        '/', 14,
        '_', 154,
        'd', 96,
        'f', 92,
        'i', 94,
        'l', 98,
        's', 100,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(175);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(104);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(124);
      END_STATE();
    case 2:
      ADVANCE_MAP(
        '#', 187,
        '%', 186,
        '(', 184,
        '/', 14,
        'd', 116,
        'f', 112,
        'i', 114,
        'l', 118,
        's', 120,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(2);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 3:
      ADVANCE_MAP(
        '#', 187,
        '.', 84,
        '/', 14,
        '=', 82,
        'd', 139,
        'f', 135,
        'i', 137,
        'l', 141,
        's', 143,
        '{', 125,
        '}', 126,
      );
      if (('a' <= lookahead && lookahead <= 'e')) ADVANCE(153);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(3);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F')) ADVANCE(77);
      if (lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(154);
      END_STATE();
    case 4:
      if (lookahead == ')') ADVANCE(185);
      if (lookahead == '.') ADVANCE(84);
      if (lookahead == '/') ADVANCE(14);
      if (lookahead == ';') ADVANCE(83);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(4);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(154);
      END_STATE();
    case 5:
      if (lookahead == '-') ADVANCE(27);
      END_STATE();
    case 6:
      if (lookahead == '-') ADVANCE(80);
      END_STATE();
    case 7:
      if (lookahead == '-') ADVANCE(81);
      END_STATE();
    case 8:
      if (lookahead == '-') ADVANCE(5);
      END_STATE();
    case 9:
      if (lookahead == '-') ADVANCE(6);
      END_STATE();
    case 10:
      if (lookahead == '-') ADVANCE(7);
      END_STATE();
    case 11:
      if (lookahead == '-') ADVANCE(9);
      END_STATE();
    case 12:
      if (lookahead == '-') ADVANCE(10);
      END_STATE();
    case 13:
      if (lookahead == '/') ADVANCE(14);
      if (lookahead == 'a') ADVANCE(38);
      if (lookahead == 'i') ADVANCE(45);
      if (lookahead == 'k') ADVANCE(51);
      if (lookahead == 'r') ADVANCE(21);
      if (lookahead == 'w') ADVANCE(54);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(13);
      END_STATE();
    case 14:
      if (lookahead == '/') ADVANCE(196);
      END_STATE();
    case 15:
      if (lookahead == 'a') ADVANCE(20);
      END_STATE();
    case 16:
      if (lookahead == 'a') ADVANCE(35);
      END_STATE();
    case 17:
      if (lookahead == 'a') ADVANCE(61);
      END_STATE();
    case 18:
      if (lookahead == 'b') ADVANCE(37);
      END_STATE();
    case 19:
      if (lookahead == 'c') ADVANCE(63);
      END_STATE();
    case 20:
      if (lookahead == 'd') ADVANCE(189);
      END_STATE();
    case 21:
      if (lookahead == 'e') ADVANCE(15);
      END_STATE();
    case 22:
      if (lookahead == 'e') ADVANCE(190);
      END_STATE();
    case 23:
      if (lookahead == 'e') ADVANCE(167);
      END_STATE();
    case 24:
      if (lookahead == 'e') ADVANCE(58);
      END_STATE();
    case 25:
      if (lookahead == 'e') ADVANCE(191);
      END_STATE();
    case 26:
      if (lookahead == 'e') ADVANCE(56);
      END_STATE();
    case 27:
      if (lookahead == 'f') ADVANCE(68);
      if (lookahead == 't') ADVANCE(70);
      END_STATE();
    case 28:
      if (lookahead == 'g') ADVANCE(159);
      END_STATE();
    case 29:
      if (lookahead == 'g') ADVANCE(171);
      END_STATE();
    case 30:
      if (lookahead == 'h') ADVANCE(52);
      END_STATE();
    case 31:
      if (lookahead == 'i') ADVANCE(43);
      END_STATE();
    case 32:
      if (lookahead == 'i') ADVANCE(62);
      END_STATE();
    case 33:
      if (lookahead == 'i') ADVANCE(64);
      END_STATE();
    case 34:
      if (lookahead == 'i') ADVANCE(50);
      END_STATE();
    case 35:
      if (lookahead == 'l') ADVANCE(193);
      END_STATE();
    case 36:
      if (lookahead == 'l') ADVANCE(49);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(76);
      END_STATE();
    case 37:
      if (lookahead == 'l') ADVANCE(23);
      END_STATE();
    case 38:
      if (lookahead == 'n') ADVANCE(69);
      END_STATE();
    case 39:
      if (lookahead == 'n') ADVANCE(69);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(76);
      END_STATE();
    case 40:
      if (lookahead == 'n') ADVANCE(28);
      END_STATE();
    case 41:
      if (lookahead == 'n') ADVANCE(19);
      END_STATE();
    case 42:
      if (lookahead == 'n') ADVANCE(60);
      END_STATE();
    case 43:
      if (lookahead == 'n') ADVANCE(29);
      END_STATE();
    case 44:
      if (lookahead == 'n') ADVANCE(16);
      END_STATE();
    case 45:
      if (lookahead == 'n') ADVANCE(65);
      END_STATE();
    case 46:
      if (lookahead == 'n') ADVANCE(59);
      END_STATE();
    case 47:
      if (lookahead == 'o') ADVANCE(67);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(76);
      END_STATE();
    case 48:
      if (lookahead == 'o') ADVANCE(40);
      END_STATE();
    case 49:
      if (lookahead == 'o') ADVANCE(17);
      END_STATE();
    case 50:
      if (lookahead == 'o') ADVANCE(46);
      END_STATE();
    case 51:
      if (lookahead == 'p') ADVANCE(30);
      END_STATE();
    case 52:
      if (lookahead == 'p') ADVANCE(194);
      END_STATE();
    case 53:
      if (lookahead == 'p') ADVANCE(24);
      END_STATE();
    case 54:
      if (lookahead == 'r') ADVANCE(32);
      END_STATE();
    case 55:
      if (lookahead == 'r') ADVANCE(31);
      END_STATE();
    case 56:
      if (lookahead == 'r') ADVANCE(44);
      END_STATE();
    case 57:
      if (lookahead == 'r') ADVANCE(33);
      END_STATE();
    case 58:
      if (lookahead == 's') ADVANCE(11);
      END_STATE();
    case 59:
      if (lookahead == 's') ADVANCE(12);
      END_STATE();
    case 60:
      if (lookahead == 't') ADVANCE(155);
      END_STATE();
    case 61:
      if (lookahead == 't') ADVANCE(163);
      END_STATE();
    case 62:
      if (lookahead == 't') ADVANCE(22);
      END_STATE();
    case 63:
      if (lookahead == 't') ADVANCE(34);
      END_STATE();
    case 64:
      if (lookahead == 't') ADVANCE(25);
      END_STATE();
    case 65:
      if (lookahead == 't') ADVANCE(26);
      END_STATE();
    case 66:
      if (lookahead == 't') ADVANCE(55);
      END_STATE();
    case 67:
      if (lookahead == 'u') ADVANCE(18);
      END_STATE();
    case 68:
      if (lookahead == 'u') ADVANCE(41);
      END_STATE();
    case 69:
      if (lookahead == 'y') ADVANCE(192);
      END_STATE();
    case 70:
      if (lookahead == 'y') ADVANCE(53);
      END_STATE();
    case 71:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(195);
      END_STATE();
    case 72:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(71);
      END_STATE();
    case 73:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(72);
      END_STATE();
    case 74:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(73);
      END_STATE();
    case 75:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(74);
      END_STATE();
    case 76:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(75);
      END_STATE();
    case 77:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(76);
      END_STATE();
    case 78:
      if (eof) ADVANCE(79);
      if (lookahead == '-') ADVANCE(8);
      if (lookahead == '/') ADVANCE(14);
      if (lookahead == '@') ADVANCE(188);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(78);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_DASH_DASH_DASHtypes_DASH_DASH_DASH);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_DASH_DASH_DASHfunctions_DASH_DASH_DASH);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(aux_sym_type_name_token1);
      if (lookahead == '_') ADVANCE(154);
      if (lookahead == 'a') ADVANCE(102);
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(104);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(124);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(aux_sym_type_name_token1);
      if (lookahead == '_') ADVANCE(154);
      if (lookahead == 'b') ADVANCE(91);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(104);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(124);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(aux_sym_type_name_token1);
      if (lookahead == '_') ADVANCE(154);
      if (lookahead == 'e') ADVANCE(168);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(104);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(124);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(aux_sym_type_name_token1);
      if (lookahead == '_') ADVANCE(154);
      if (lookahead == 'g') ADVANCE(160);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(104);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(124);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(aux_sym_type_name_token1);
      if (lookahead == '_') ADVANCE(154);
      if (lookahead == 'g') ADVANCE(172);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(104);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(124);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(aux_sym_type_name_token1);
      if (lookahead == '_') ADVANCE(154);
      if (lookahead == 'i') ADVANCE(95);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(104);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(124);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(aux_sym_type_name_token1);
      if (lookahead == '_') ADVANCE(154);
      if (lookahead == 'l') ADVANCE(87);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(104);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(124);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(aux_sym_type_name_token1);
      if (lookahead == '_') ADVANCE(154);
      if (lookahead == 'l') ADVANCE(97);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(104);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(124);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(aux_sym_type_name_token1);
      if (lookahead == '_') ADVANCE(154);
      if (lookahead == 'n') ADVANCE(88);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(104);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(124);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(aux_sym_type_name_token1);
      if (lookahead == '_') ADVANCE(154);
      if (lookahead == 'n') ADVANCE(101);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(104);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(124);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(aux_sym_type_name_token1);
      if (lookahead == '_') ADVANCE(154);
      if (lookahead == 'n') ADVANCE(89);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(104);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(124);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(aux_sym_type_name_token1);
      if (lookahead == '_') ADVANCE(154);
      if (lookahead == 'o') ADVANCE(103);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(104);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(124);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(aux_sym_type_name_token1);
      if (lookahead == '_') ADVANCE(154);
      if (lookahead == 'o') ADVANCE(85);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(104);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(124);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(aux_sym_type_name_token1);
      if (lookahead == '_') ADVANCE(154);
      if (lookahead == 'o') ADVANCE(93);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(104);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(124);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(aux_sym_type_name_token1);
      if (lookahead == '_') ADVANCE(154);
      if (lookahead == 'r') ADVANCE(90);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(104);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(124);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(aux_sym_type_name_token1);
      if (lookahead == '_') ADVANCE(154);
      if (lookahead == 't') ADVANCE(99);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(104);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(124);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(aux_sym_type_name_token1);
      if (lookahead == '_') ADVANCE(154);
      if (lookahead == 't') ADVANCE(156);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(104);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(124);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(aux_sym_type_name_token1);
      if (lookahead == '_') ADVANCE(154);
      if (lookahead == 't') ADVANCE(164);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(104);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(124);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(aux_sym_type_name_token1);
      if (lookahead == '_') ADVANCE(154);
      if (lookahead == 'u') ADVANCE(86);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(104);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(124);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(aux_sym_type_name_token1);
      if (lookahead == '_') ADVANCE(154);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(124);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(104);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(aux_sym_type_name_token1);
      if (lookahead == 'a') ADVANCE(122);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(aux_sym_type_name_token1);
      if (lookahead == 'b') ADVANCE(111);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(aux_sym_type_name_token1);
      if (lookahead == 'e') ADVANCE(170);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(aux_sym_type_name_token1);
      if (lookahead == 'g') ADVANCE(162);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(aux_sym_type_name_token1);
      if (lookahead == 'g') ADVANCE(174);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(aux_sym_type_name_token1);
      if (lookahead == 'i') ADVANCE(115);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(aux_sym_type_name_token1);
      if (lookahead == 'l') ADVANCE(107);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(aux_sym_type_name_token1);
      if (lookahead == 'l') ADVANCE(117);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(aux_sym_type_name_token1);
      if (lookahead == 'n') ADVANCE(108);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(aux_sym_type_name_token1);
      if (lookahead == 'n') ADVANCE(121);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(aux_sym_type_name_token1);
      if (lookahead == 'n') ADVANCE(109);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(aux_sym_type_name_token1);
      if (lookahead == 'o') ADVANCE(123);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(aux_sym_type_name_token1);
      if (lookahead == 'o') ADVANCE(105);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(aux_sym_type_name_token1);
      if (lookahead == 'o') ADVANCE(113);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(aux_sym_type_name_token1);
      if (lookahead == 'r') ADVANCE(110);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(aux_sym_type_name_token1);
      if (lookahead == 't') ADVANCE(119);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(aux_sym_type_name_token1);
      if (lookahead == 't') ADVANCE(158);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(aux_sym_type_name_token1);
      if (lookahead == 't') ADVANCE(166);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(aux_sym_type_name_token1);
      if (lookahead == 'u') ADVANCE(106);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(aux_sym_type_name_token1);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym_parameter_name);
      if (lookahead == 'a') ADVANCE(145);
      if (lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(154);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym_parameter_name);
      if (lookahead == 'b') ADVANCE(134);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(154);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym_parameter_name);
      if (lookahead == 'e') ADVANCE(169);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(154);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym_parameter_name);
      if (lookahead == 'g') ADVANCE(161);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(154);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym_parameter_name);
      if (lookahead == 'g') ADVANCE(173);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(154);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym_parameter_name);
      if (lookahead == 'i') ADVANCE(138);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(154);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym_parameter_name);
      if (lookahead == 'l') ADVANCE(130);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(154);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym_parameter_name);
      if (lookahead == 'l') ADVANCE(140);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(152);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F')) ADVANCE(76);
      if (lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(154);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym_parameter_name);
      if (lookahead == 'n') ADVANCE(131);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(154);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym_parameter_name);
      if (lookahead == 'n') ADVANCE(144);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(154);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym_parameter_name);
      if (lookahead == 'n') ADVANCE(132);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(154);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym_parameter_name);
      if (lookahead == 'o') ADVANCE(146);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(152);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F')) ADVANCE(76);
      if (lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(154);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym_parameter_name);
      if (lookahead == 'o') ADVANCE(128);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(154);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym_parameter_name);
      if (lookahead == 'o') ADVANCE(136);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(154);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym_parameter_name);
      if (lookahead == 'r') ADVANCE(133);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(154);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym_parameter_name);
      if (lookahead == 't') ADVANCE(142);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(154);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym_parameter_name);
      if (lookahead == 't') ADVANCE(157);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(154);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym_parameter_name);
      if (lookahead == 't') ADVANCE(165);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(154);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym_parameter_name);
      if (lookahead == 'u') ADVANCE(129);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(154);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym_parameter_name);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(154);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F')) ADVANCE(195);
      if (lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(154);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym_parameter_name);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(149);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F')) ADVANCE(72);
      if (lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(154);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym_parameter_name);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(147);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F')) ADVANCE(71);
      if (lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(154);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym_parameter_name);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(148);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F')) ADVANCE(73);
      if (lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(154);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym_parameter_name);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(150);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F')) ADVANCE(74);
      if (lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(154);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym_parameter_name);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(151);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F')) ADVANCE(75);
      if (lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(154);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym_parameter_name);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(152);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F')) ADVANCE(76);
      if (lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(154);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym_parameter_name);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(154);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(anon_sym_int);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(anon_sym_int);
      if (lookahead == '_') ADVANCE(154);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(124);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(104);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(anon_sym_int);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(154);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(anon_sym_int);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(anon_sym_long);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(anon_sym_long);
      if (lookahead == '_') ADVANCE(154);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(124);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(104);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(anon_sym_long);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(154);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(anon_sym_long);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(anon_sym_float);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(anon_sym_float);
      if (lookahead == '_') ADVANCE(154);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(124);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(104);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(anon_sym_float);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(154);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(anon_sym_float);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(anon_sym_double);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(anon_sym_double);
      if (lookahead == '_') ADVANCE(154);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(124);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(104);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(anon_sym_double);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(154);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(anon_sym_double);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(anon_sym_string);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(anon_sym_string);
      if (lookahead == '_') ADVANCE(154);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(124);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(104);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(anon_sym_string);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(154);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(anon_sym_string);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(aux_sym_optional_type_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(175);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(aux_sym_optional_type_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(175);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(195);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(aux_sym_optional_type_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(178);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(72);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(aux_sym_optional_type_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(176);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(71);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(aux_sym_optional_type_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(177);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(73);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(aux_sym_optional_type_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(179);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(74);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(aux_sym_optional_type_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(180);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(75);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(aux_sym_optional_type_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(181);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(76);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(anon_sym_QMARK);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(anon_sym_read);
      if (lookahead == 'w') ADVANCE(57);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(anon_sym_write);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(anon_sym_readwrite);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(anon_sym_any);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(anon_sym_internal);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(anon_sym_kphp);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(aux_sym_magic_number_token1);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(196);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 1},
  [3] = {.lex_state = 3},
  [4] = {.lex_state = 2},
  [5] = {.lex_state = 2},
  [6] = {.lex_state = 3},
  [7] = {.lex_state = 3},
  [8] = {.lex_state = 3},
  [9] = {.lex_state = 3},
  [10] = {.lex_state = 3},
  [11] = {.lex_state = 3},
  [12] = {.lex_state = 3},
  [13] = {.lex_state = 3},
  [14] = {.lex_state = 3},
  [15] = {.lex_state = 3},
  [16] = {.lex_state = 3},
  [17] = {.lex_state = 78},
  [18] = {.lex_state = 78},
  [19] = {.lex_state = 3},
  [20] = {.lex_state = 3},
  [21] = {.lex_state = 78},
  [22] = {.lex_state = 3},
  [23] = {.lex_state = 3},
  [24] = {.lex_state = 3},
  [25] = {.lex_state = 3},
  [26] = {.lex_state = 3},
  [27] = {.lex_state = 3},
  [28] = {.lex_state = 3},
  [29] = {.lex_state = 3},
  [30] = {.lex_state = 3},
  [31] = {.lex_state = 3},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 13},
  [38] = {.lex_state = 78},
  [39] = {.lex_state = 78},
  [40] = {.lex_state = 78},
  [41] = {.lex_state = 78},
  [42] = {.lex_state = 78},
  [43] = {.lex_state = 78},
  [44] = {.lex_state = 78},
  [45] = {.lex_state = 78},
  [46] = {.lex_state = 78},
  [47] = {.lex_state = 78},
  [48] = {.lex_state = 4},
  [49] = {.lex_state = 4},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 4},
  [52] = {.lex_state = 4},
  [53] = {.lex_state = 4},
  [54] = {.lex_state = 4},
  [55] = {.lex_state = 4},
  [56] = {.lex_state = 4},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 78},
  [59] = {.lex_state = 78},
  [60] = {.lex_state = 78},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 1},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_DASH_DASH_DASHtypes_DASH_DASH_DASH] = ACTIONS(1),
    [anon_sym_DASH_DASH_DASHfunctions_DASH_DASH_DASH] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_int] = ACTIONS(1),
    [anon_sym_long] = ACTIONS(1),
    [anon_sym_float] = ACTIONS(1),
    [anon_sym_double] = ACTIONS(1),
    [anon_sym_string] = ACTIONS(1),
    [aux_sym_optional_type_token1] = ACTIONS(1),
    [anon_sym_QMARK] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_PERCENT] = ACTIONS(1),
    [anon_sym_POUND] = ACTIONS(1),
    [anon_sym_AT] = ACTIONS(1),
    [anon_sym_read] = ACTIONS(1),
    [anon_sym_write] = ACTIONS(1),
    [anon_sym_readwrite] = ACTIONS(1),
    [anon_sym_any] = ACTIONS(1),
    [anon_sym_kphp] = ACTIONS(1),
    [aux_sym_magic_number_token1] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
  },
  [1] = {
    [sym_source_file] = STATE(61),
    [sym__definition] = STATE(32),
    [sym_types_section] = STATE(32),
    [sym_functions_section] = STATE(32),
    [aux_sym_source_file_repeat1] = STATE(32),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_DASH_DASH_DASHtypes_DASH_DASH_DASH] = ACTIONS(7),
    [anon_sym_DASH_DASH_DASHfunctions_DASH_DASH_DASH] = ACTIONS(9),
    [sym_comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      aux_sym_type_name_token1,
    ACTIONS(13), 1,
      sym_parameter_name,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      anon_sym_PERCENT,
    ACTIONS(21), 1,
      anon_sym_POUND,
    STATE(20), 1,
      sym_type_name,
    STATE(26), 1,
      sym_nat_type,
    STATE(29), 1,
      sym_name,
    STATE(67), 1,
      sym_namespace_name,
    ACTIONS(15), 5,
      anon_sym_int,
      anon_sym_long,
      anon_sym_float,
      anon_sym_double,
      anon_sym_string,
    STATE(28), 6,
      sym__type,
      sym_builtin_type,
      sym_optional_type,
      sym_parametrized_type,
      sym_user_defined_type,
      sym_unboxed_type,
  [46] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(23), 1,
      anon_sym_EQ,
    ACTIONS(25), 1,
      anon_sym_LBRACE,
    ACTIONS(27), 1,
      sym_parameter_name,
    ACTIONS(29), 1,
      anon_sym_POUND,
    STATE(7), 1,
      sym_magic_number,
    STATE(26), 1,
      sym_nat_type,
    STATE(6), 2,
      sym_parameter,
      aux_sym_definition_repeat1,
    STATE(9), 2,
      sym_property,
      aux_sym_definition_repeat2,
    STATE(27), 3,
      sym__unnamed_property,
      sym__named_property,
      sym_builtin_type,
    ACTIONS(15), 5,
      anon_sym_int,
      anon_sym_long,
      anon_sym_float,
      anon_sym_double,
      anon_sym_string,
  [88] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      aux_sym_type_name_token1,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      anon_sym_PERCENT,
    ACTIONS(21), 1,
      anon_sym_POUND,
    STATE(20), 1,
      sym_type_name,
    STATE(26), 1,
      sym_nat_type,
    STATE(29), 1,
      sym_name,
    STATE(67), 1,
      sym_namespace_name,
    ACTIONS(15), 5,
      anon_sym_int,
      anon_sym_long,
      anon_sym_float,
      anon_sym_double,
      anon_sym_string,
    STATE(30), 5,
      sym__type,
      sym_builtin_type,
      sym_parametrized_type,
      sym_user_defined_type,
      sym_unboxed_type,
  [130] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      aux_sym_type_name_token1,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      anon_sym_PERCENT,
    ACTIONS(21), 1,
      anon_sym_POUND,
    STATE(20), 1,
      sym_type_name,
    STATE(26), 1,
      sym_nat_type,
    STATE(29), 1,
      sym_name,
    STATE(67), 1,
      sym_namespace_name,
    ACTIONS(15), 5,
      anon_sym_int,
      anon_sym_long,
      anon_sym_float,
      anon_sym_double,
      anon_sym_string,
    STATE(25), 5,
      sym__type,
      sym_builtin_type,
      sym_parametrized_type,
      sym_user_defined_type,
      sym_unboxed_type,
  [172] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_POUND,
    ACTIONS(25), 1,
      anon_sym_LBRACE,
    ACTIONS(27), 1,
      sym_parameter_name,
    ACTIONS(31), 1,
      anon_sym_EQ,
    STATE(26), 1,
      sym_nat_type,
    STATE(10), 2,
      sym_property,
      aux_sym_definition_repeat2,
    STATE(13), 2,
      sym_parameter,
      aux_sym_definition_repeat1,
    STATE(27), 3,
      sym__unnamed_property,
      sym__named_property,
      sym_builtin_type,
    ACTIONS(15), 5,
      anon_sym_int,
      anon_sym_long,
      anon_sym_float,
      anon_sym_double,
      anon_sym_string,
  [211] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_POUND,
    ACTIONS(25), 1,
      anon_sym_LBRACE,
    ACTIONS(27), 1,
      sym_parameter_name,
    ACTIONS(31), 1,
      anon_sym_EQ,
    STATE(26), 1,
      sym_nat_type,
    STATE(8), 2,
      sym_parameter,
      aux_sym_definition_repeat1,
    STATE(10), 2,
      sym_property,
      aux_sym_definition_repeat2,
    STATE(27), 3,
      sym__unnamed_property,
      sym__named_property,
      sym_builtin_type,
    ACTIONS(15), 5,
      anon_sym_int,
      anon_sym_long,
      anon_sym_float,
      anon_sym_double,
      anon_sym_string,
  [250] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_POUND,
    ACTIONS(25), 1,
      anon_sym_LBRACE,
    ACTIONS(27), 1,
      sym_parameter_name,
    ACTIONS(33), 1,
      anon_sym_EQ,
    STATE(26), 1,
      sym_nat_type,
    STATE(12), 2,
      sym_property,
      aux_sym_definition_repeat2,
    STATE(13), 2,
      sym_parameter,
      aux_sym_definition_repeat1,
    STATE(27), 3,
      sym__unnamed_property,
      sym__named_property,
      sym_builtin_type,
    ACTIONS(15), 5,
      anon_sym_int,
      anon_sym_long,
      anon_sym_float,
      anon_sym_double,
      anon_sym_string,
  [289] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_POUND,
    ACTIONS(27), 1,
      sym_parameter_name,
    ACTIONS(31), 1,
      anon_sym_EQ,
    STATE(26), 1,
      sym_nat_type,
    STATE(11), 2,
      sym_property,
      aux_sym_definition_repeat2,
    STATE(27), 3,
      sym__unnamed_property,
      sym__named_property,
      sym_builtin_type,
    ACTIONS(15), 5,
      anon_sym_int,
      anon_sym_long,
      anon_sym_float,
      anon_sym_double,
      anon_sym_string,
  [321] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_POUND,
    ACTIONS(27), 1,
      sym_parameter_name,
    ACTIONS(33), 1,
      anon_sym_EQ,
    STATE(26), 1,
      sym_nat_type,
    STATE(11), 2,
      sym_property,
      aux_sym_definition_repeat2,
    STATE(27), 3,
      sym__unnamed_property,
      sym__named_property,
      sym_builtin_type,
    ACTIONS(15), 5,
      anon_sym_int,
      anon_sym_long,
      anon_sym_float,
      anon_sym_double,
      anon_sym_string,
  [353] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(35), 1,
      anon_sym_EQ,
    ACTIONS(37), 1,
      sym_parameter_name,
    ACTIONS(43), 1,
      anon_sym_POUND,
    STATE(26), 1,
      sym_nat_type,
    STATE(11), 2,
      sym_property,
      aux_sym_definition_repeat2,
    STATE(27), 3,
      sym__unnamed_property,
      sym__named_property,
      sym_builtin_type,
    ACTIONS(40), 5,
      anon_sym_int,
      anon_sym_long,
      anon_sym_float,
      anon_sym_double,
      anon_sym_string,
  [385] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_POUND,
    ACTIONS(27), 1,
      sym_parameter_name,
    ACTIONS(46), 1,
      anon_sym_EQ,
    STATE(26), 1,
      sym_nat_type,
    STATE(11), 2,
      sym_property,
      aux_sym_definition_repeat2,
    STATE(27), 3,
      sym__unnamed_property,
      sym__named_property,
      sym_builtin_type,
    ACTIONS(15), 5,
      anon_sym_int,
      anon_sym_long,
      anon_sym_float,
      anon_sym_double,
      anon_sym_string,
  [417] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(50), 1,
      anon_sym_LBRACE,
    ACTIONS(48), 2,
      anon_sym_EQ,
      anon_sym_POUND,
    STATE(13), 2,
      sym_parameter,
      aux_sym_definition_repeat1,
    ACTIONS(53), 6,
      sym_parameter_name,
      anon_sym_int,
      anon_sym_long,
      anon_sym_float,
      anon_sym_double,
      anon_sym_string,
  [440] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(57), 1,
      anon_sym_DOT,
    ACTIONS(55), 3,
      anon_sym_EQ,
      anon_sym_LBRACE,
      anon_sym_POUND,
    ACTIONS(59), 6,
      sym_parameter_name,
      anon_sym_int,
      anon_sym_long,
      anon_sym_float,
      anon_sym_double,
      anon_sym_string,
  [460] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(61), 3,
      anon_sym_EQ,
      anon_sym_RBRACE,
      anon_sym_POUND,
    ACTIONS(63), 6,
      sym_parameter_name,
      anon_sym_int,
      anon_sym_long,
      anon_sym_float,
      anon_sym_double,
      anon_sym_string,
  [477] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      aux_sym_magic_number_token1,
    ACTIONS(61), 2,
      anon_sym_EQ,
      anon_sym_POUND,
    ACTIONS(63), 6,
      sym_parameter_name,
      anon_sym_int,
      anon_sym_long,
      anon_sym_float,
      anon_sym_double,
      anon_sym_string,
  [496] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(69), 1,
      aux_sym_type_name_token1,
    STATE(3), 1,
      sym_name,
    STATE(20), 1,
      sym_type_name,
    STATE(67), 1,
      sym_namespace_name,
    STATE(21), 2,
      sym_definition,
      aux_sym_types_section_repeat1,
    ACTIONS(67), 3,
      ts_builtin_sym_end,
      anon_sym_DASH_DASH_DASHtypes_DASH_DASH_DASH,
      anon_sym_DASH_DASH_DASHfunctions_DASH_DASH_DASH,
  [521] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(73), 1,
      aux_sym_type_name_token1,
    STATE(3), 1,
      sym_name,
    STATE(20), 1,
      sym_type_name,
    STATE(67), 1,
      sym_namespace_name,
    STATE(18), 2,
      sym_definition,
      aux_sym_types_section_repeat1,
    ACTIONS(71), 3,
      ts_builtin_sym_end,
      anon_sym_DASH_DASH_DASHtypes_DASH_DASH_DASH,
      anon_sym_DASH_DASH_DASHfunctions_DASH_DASH_DASH,
  [546] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(76), 3,
      anon_sym_EQ,
      anon_sym_LBRACE,
      anon_sym_POUND,
    ACTIONS(78), 6,
      sym_parameter_name,
      anon_sym_int,
      anon_sym_long,
      anon_sym_float,
      anon_sym_double,
      anon_sym_string,
  [563] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(80), 3,
      anon_sym_EQ,
      anon_sym_LBRACE,
      anon_sym_POUND,
    ACTIONS(82), 6,
      sym_parameter_name,
      anon_sym_int,
      anon_sym_long,
      anon_sym_float,
      anon_sym_double,
      anon_sym_string,
  [580] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(69), 1,
      aux_sym_type_name_token1,
    STATE(3), 1,
      sym_name,
    STATE(20), 1,
      sym_type_name,
    STATE(67), 1,
      sym_namespace_name,
    STATE(18), 2,
      sym_definition,
      aux_sym_types_section_repeat1,
    ACTIONS(84), 3,
      ts_builtin_sym_end,
      anon_sym_DASH_DASH_DASHtypes_DASH_DASH_DASH,
      anon_sym_DASH_DASH_DASHfunctions_DASH_DASH_DASH,
  [605] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(86), 3,
      anon_sym_EQ,
      anon_sym_LBRACE,
      anon_sym_POUND,
    ACTIONS(88), 6,
      sym_parameter_name,
      anon_sym_int,
      anon_sym_long,
      anon_sym_float,
      anon_sym_double,
      anon_sym_string,
  [622] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(55), 3,
      anon_sym_EQ,
      anon_sym_LBRACE,
      anon_sym_POUND,
    ACTIONS(59), 6,
      sym_parameter_name,
      anon_sym_int,
      anon_sym_long,
      anon_sym_float,
      anon_sym_double,
      anon_sym_string,
  [639] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(90), 3,
      anon_sym_EQ,
      anon_sym_LBRACE,
      anon_sym_POUND,
    ACTIONS(92), 6,
      sym_parameter_name,
      anon_sym_int,
      anon_sym_long,
      anon_sym_float,
      anon_sym_double,
      anon_sym_string,
  [656] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(94), 2,
      anon_sym_EQ,
      anon_sym_POUND,
    ACTIONS(96), 6,
      sym_parameter_name,
      anon_sym_int,
      anon_sym_long,
      anon_sym_float,
      anon_sym_double,
      anon_sym_string,
  [672] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(98), 2,
      anon_sym_EQ,
      anon_sym_POUND,
    ACTIONS(100), 6,
      sym_parameter_name,
      anon_sym_int,
      anon_sym_long,
      anon_sym_float,
      anon_sym_double,
      anon_sym_string,
  [688] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(102), 2,
      anon_sym_EQ,
      anon_sym_POUND,
    ACTIONS(104), 6,
      sym_parameter_name,
      anon_sym_int,
      anon_sym_long,
      anon_sym_float,
      anon_sym_double,
      anon_sym_string,
  [704] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(106), 2,
      anon_sym_EQ,
      anon_sym_POUND,
    ACTIONS(108), 6,
      sym_parameter_name,
      anon_sym_int,
      anon_sym_long,
      anon_sym_float,
      anon_sym_double,
      anon_sym_string,
  [720] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(110), 2,
      anon_sym_EQ,
      anon_sym_POUND,
    ACTIONS(112), 6,
      sym_parameter_name,
      anon_sym_int,
      anon_sym_long,
      anon_sym_float,
      anon_sym_double,
      anon_sym_string,
  [736] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(114), 2,
      anon_sym_EQ,
      anon_sym_POUND,
    ACTIONS(116), 6,
      sym_parameter_name,
      anon_sym_int,
      anon_sym_long,
      anon_sym_float,
      anon_sym_double,
      anon_sym_string,
  [752] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(118), 2,
      anon_sym_EQ,
      anon_sym_POUND,
    ACTIONS(120), 6,
      sym_parameter_name,
      anon_sym_int,
      anon_sym_long,
      anon_sym_float,
      anon_sym_double,
      anon_sym_string,
  [768] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_DASH_DASH_DASHtypes_DASH_DASH_DASH,
    ACTIONS(9), 1,
      anon_sym_DASH_DASH_DASHfunctions_DASH_DASH_DASH,
    ACTIONS(122), 1,
      ts_builtin_sym_end,
    STATE(36), 4,
      sym__definition,
      sym_types_section,
      sym_functions_section,
      aux_sym_source_file_repeat1,
  [787] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(126), 1,
      anon_sym_AT,
    STATE(39), 1,
      sym_function_attribute,
    STATE(33), 2,
      sym_function_definition,
      aux_sym_functions_section_repeat1,
    ACTIONS(124), 3,
      ts_builtin_sym_end,
      anon_sym_DASH_DASH_DASHtypes_DASH_DASH_DASH,
      anon_sym_DASH_DASH_DASHfunctions_DASH_DASH_DASH,
  [806] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(131), 1,
      anon_sym_AT,
    STATE(39), 1,
      sym_function_attribute,
    STATE(35), 2,
      sym_function_definition,
      aux_sym_functions_section_repeat1,
    ACTIONS(129), 3,
      ts_builtin_sym_end,
      anon_sym_DASH_DASH_DASHtypes_DASH_DASH_DASH,
      anon_sym_DASH_DASH_DASHfunctions_DASH_DASH_DASH,
  [825] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(131), 1,
      anon_sym_AT,
    STATE(39), 1,
      sym_function_attribute,
    STATE(33), 2,
      sym_function_definition,
      aux_sym_functions_section_repeat1,
    ACTIONS(133), 3,
      ts_builtin_sym_end,
      anon_sym_DASH_DASH_DASHtypes_DASH_DASH_DASH,
      anon_sym_DASH_DASH_DASHfunctions_DASH_DASH_DASH,
  [844] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(135), 1,
      ts_builtin_sym_end,
    ACTIONS(137), 1,
      anon_sym_DASH_DASH_DASHtypes_DASH_DASH_DASH,
    ACTIONS(140), 1,
      anon_sym_DASH_DASH_DASHfunctions_DASH_DASH_DASH,
    STATE(36), 4,
      sym__definition,
      sym_types_section,
      sym_functions_section,
      aux_sym_source_file_repeat1,
  [863] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(143), 1,
      anon_sym_read,
    ACTIONS(145), 5,
      anon_sym_write,
      anon_sym_readwrite,
      anon_sym_any,
      anon_sym_internal,
      anon_sym_kphp,
  [877] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(147), 5,
      ts_builtin_sym_end,
      anon_sym_DASH_DASH_DASHtypes_DASH_DASH_DASH,
      anon_sym_DASH_DASH_DASHfunctions_DASH_DASH_DASH,
      aux_sym_type_name_token1,
      anon_sym_AT,
  [888] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(69), 1,
      aux_sym_type_name_token1,
    STATE(3), 1,
      sym_name,
    STATE(20), 1,
      sym_type_name,
    STATE(50), 1,
      sym_definition,
    STATE(67), 1,
      sym_namespace_name,
  [907] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(149), 1,
      aux_sym_type_name_token1,
    STATE(52), 1,
      sym_name,
    STATE(54), 1,
      sym_type_name,
    STATE(66), 1,
      sym_type,
    STATE(75), 1,
      sym_namespace_name,
  [926] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(149), 1,
      aux_sym_type_name_token1,
    STATE(52), 1,
      sym_name,
    STATE(54), 1,
      sym_type_name,
    STATE(65), 1,
      sym_type,
    STATE(75), 1,
      sym_namespace_name,
  [945] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(149), 1,
      aux_sym_type_name_token1,
    STATE(52), 1,
      sym_name,
    STATE(54), 1,
      sym_type_name,
    STATE(69), 1,
      sym_type,
    STATE(75), 1,
      sym_namespace_name,
  [964] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(151), 5,
      ts_builtin_sym_end,
      anon_sym_DASH_DASH_DASHtypes_DASH_DASH_DASH,
      anon_sym_DASH_DASH_DASHfunctions_DASH_DASH_DASH,
      aux_sym_type_name_token1,
      anon_sym_AT,
  [975] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(149), 1,
      aux_sym_type_name_token1,
    STATE(52), 1,
      sym_name,
    STATE(54), 1,
      sym_type_name,
    STATE(70), 1,
      sym_type,
    STATE(75), 1,
      sym_namespace_name,
  [994] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(153), 5,
      ts_builtin_sym_end,
      anon_sym_DASH_DASH_DASHtypes_DASH_DASH_DASH,
      anon_sym_DASH_DASH_DASHfunctions_DASH_DASH_DASH,
      aux_sym_type_name_token1,
      anon_sym_AT,
  [1005] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(149), 1,
      aux_sym_type_name_token1,
    STATE(52), 1,
      sym_name,
    STATE(54), 1,
      sym_type_name,
    STATE(73), 1,
      sym_type,
    STATE(75), 1,
      sym_namespace_name,
  [1024] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(155), 5,
      ts_builtin_sym_end,
      anon_sym_DASH_DASH_DASHtypes_DASH_DASH_DASH,
      anon_sym_DASH_DASH_DASHfunctions_DASH_DASH_DASH,
      aux_sym_type_name_token1,
      anon_sym_AT,
  [1035] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(159), 1,
      sym_parameter_name,
    STATE(48), 1,
      aux_sym_type_repeat1,
    ACTIONS(157), 2,
      anon_sym_SEMI,
      anon_sym_RPAREN,
  [1049] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(164), 1,
      sym_parameter_name,
    STATE(48), 1,
      aux_sym_type_repeat1,
    ACTIONS(162), 2,
      anon_sym_SEMI,
      anon_sym_RPAREN,
  [1063] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(166), 4,
      ts_builtin_sym_end,
      anon_sym_DASH_DASH_DASHtypes_DASH_DASH_DASH,
      anon_sym_DASH_DASH_DASHfunctions_DASH_DASH_DASH,
      anon_sym_AT,
  [1073] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(57), 1,
      anon_sym_DOT,
    ACTIONS(55), 3,
      anon_sym_SEMI,
      sym_parameter_name,
      anon_sym_RPAREN,
  [1085] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(170), 1,
      sym_parameter_name,
    STATE(49), 1,
      aux_sym_type_repeat1,
    ACTIONS(168), 2,
      anon_sym_SEMI,
      anon_sym_RPAREN,
  [1099] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(86), 3,
      anon_sym_SEMI,
      sym_parameter_name,
      anon_sym_RPAREN,
  [1108] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(80), 3,
      anon_sym_SEMI,
      sym_parameter_name,
      anon_sym_RPAREN,
  [1117] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(55), 3,
      anon_sym_SEMI,
      sym_parameter_name,
      anon_sym_RPAREN,
  [1126] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(172), 1,
      sym_parameter_name,
    STATE(71), 1,
      sym__nat_parameter,
  [1136] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_POUND,
    STATE(64), 1,
      sym_nat_type,
  [1146] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(174), 1,
      aux_sym_type_name_token1,
    STATE(53), 1,
      sym_type_name,
  [1156] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(176), 1,
      aux_sym_type_name_token1,
    STATE(22), 1,
      sym_type_name,
  [1166] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(178), 1,
      aux_sym_type_name_token1,
  [1173] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(180), 1,
      ts_builtin_sym_end,
  [1180] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(182), 1,
      anon_sym_COLON,
  [1187] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(184), 1,
      anon_sym_COLON,
  [1194] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(186), 1,
      anon_sym_RBRACE,
  [1201] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(188), 1,
      anon_sym_SEMI,
  [1208] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(190), 1,
      anon_sym_RPAREN,
  [1215] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(192), 1,
      anon_sym_DOT,
  [1222] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(194), 1,
      aux_sym_optional_type_token1,
  [1229] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(196), 1,
      anon_sym_SEMI,
  [1236] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(198), 1,
      anon_sym_SEMI,
  [1243] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(200), 1,
      anon_sym_RBRACE,
  [1250] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(202), 1,
      anon_sym_QMARK,
  [1257] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(204), 1,
      anon_sym_SEMI,
  [1264] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(206), 1,
      anon_sym_DOT,
  [1271] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(208), 1,
      anon_sym_DOT,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 46,
  [SMALL_STATE(4)] = 88,
  [SMALL_STATE(5)] = 130,
  [SMALL_STATE(6)] = 172,
  [SMALL_STATE(7)] = 211,
  [SMALL_STATE(8)] = 250,
  [SMALL_STATE(9)] = 289,
  [SMALL_STATE(10)] = 321,
  [SMALL_STATE(11)] = 353,
  [SMALL_STATE(12)] = 385,
  [SMALL_STATE(13)] = 417,
  [SMALL_STATE(14)] = 440,
  [SMALL_STATE(15)] = 460,
  [SMALL_STATE(16)] = 477,
  [SMALL_STATE(17)] = 496,
  [SMALL_STATE(18)] = 521,
  [SMALL_STATE(19)] = 546,
  [SMALL_STATE(20)] = 563,
  [SMALL_STATE(21)] = 580,
  [SMALL_STATE(22)] = 605,
  [SMALL_STATE(23)] = 622,
  [SMALL_STATE(24)] = 639,
  [SMALL_STATE(25)] = 656,
  [SMALL_STATE(26)] = 672,
  [SMALL_STATE(27)] = 688,
  [SMALL_STATE(28)] = 704,
  [SMALL_STATE(29)] = 720,
  [SMALL_STATE(30)] = 736,
  [SMALL_STATE(31)] = 752,
  [SMALL_STATE(32)] = 768,
  [SMALL_STATE(33)] = 787,
  [SMALL_STATE(34)] = 806,
  [SMALL_STATE(35)] = 825,
  [SMALL_STATE(36)] = 844,
  [SMALL_STATE(37)] = 863,
  [SMALL_STATE(38)] = 877,
  [SMALL_STATE(39)] = 888,
  [SMALL_STATE(40)] = 907,
  [SMALL_STATE(41)] = 926,
  [SMALL_STATE(42)] = 945,
  [SMALL_STATE(43)] = 964,
  [SMALL_STATE(44)] = 975,
  [SMALL_STATE(45)] = 994,
  [SMALL_STATE(46)] = 1005,
  [SMALL_STATE(47)] = 1024,
  [SMALL_STATE(48)] = 1035,
  [SMALL_STATE(49)] = 1049,
  [SMALL_STATE(50)] = 1063,
  [SMALL_STATE(51)] = 1073,
  [SMALL_STATE(52)] = 1085,
  [SMALL_STATE(53)] = 1099,
  [SMALL_STATE(54)] = 1108,
  [SMALL_STATE(55)] = 1117,
  [SMALL_STATE(56)] = 1126,
  [SMALL_STATE(57)] = 1136,
  [SMALL_STATE(58)] = 1146,
  [SMALL_STATE(59)] = 1156,
  [SMALL_STATE(60)] = 1166,
  [SMALL_STATE(61)] = 1173,
  [SMALL_STATE(62)] = 1180,
  [SMALL_STATE(63)] = 1187,
  [SMALL_STATE(64)] = 1194,
  [SMALL_STATE(65)] = 1201,
  [SMALL_STATE(66)] = 1208,
  [SMALL_STATE(67)] = 1215,
  [SMALL_STATE(68)] = 1222,
  [SMALL_STATE(69)] = 1229,
  [SMALL_STATE(70)] = 1236,
  [SMALL_STATE(71)] = 1243,
  [SMALL_STATE(72)] = 1250,
  [SMALL_STATE(73)] = 1257,
  [SMALL_STATE(74)] = 1264,
  [SMALL_STATE(75)] = 1271,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_definition_repeat2, 2, 0, 0),
  [37] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_definition_repeat2, 2, 0, 0), SHIFT_REPEAT(63),
  [40] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_definition_repeat2, 2, 0, 0), SHIFT_REPEAT(26),
  [43] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_definition_repeat2, 2, 0, 0), SHIFT_REPEAT(15),
  [46] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [48] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_definition_repeat1, 2, 0, 0),
  [50] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_definition_repeat1, 2, 0, 0), SHIFT_REPEAT(56),
  [53] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_definition_repeat1, 2, 0, 0),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_name, 1, 0, 0),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_namespace_name, 1, 0, 0),
  [59] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_name, 1, 0, 0),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nat_type, 1, 0, 0),
  [63] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_nat_type, 1, 0, 0),
  [65] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_types_section, 1, 0, 0),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_types_section_repeat1, 2, 0, 0),
  [73] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_types_section_repeat1, 2, 0, 0), SHIFT_REPEAT(14),
  [76] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_magic_number, 2, 0, 0),
  [78] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_magic_number, 2, 0, 0),
  [80] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_name, 1, 0, 0),
  [82] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_name, 1, 0, 0),
  [84] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_types_section, 2, 0, 0),
  [86] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_name, 3, 0, 0),
  [88] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_name, 3, 0, 0),
  [90] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 3, 0, 0),
  [92] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parameter, 3, 0, 0),
  [94] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_optional_type, 5, 0, 0),
  [96] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_optional_type, 5, 0, 0),
  [98] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_builtin_type, 1, 0, 0),
  [100] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_builtin_type, 1, 0, 0),
  [102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property, 1, 0, 0),
  [104] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_property, 1, 0, 0),
  [106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__named_property, 3, 0, 0),
  [108] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__named_property, 3, 0, 0),
  [110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_user_defined_type, 1, 0, 0),
  [112] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_user_defined_type, 1, 0, 0),
  [114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unboxed_type, 2, 0, 0),
  [116] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unboxed_type, 2, 0, 0),
  [118] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parametrized_type, 3, 0, 0),
  [120] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parametrized_type, 3, 0, 0),
  [122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_functions_section_repeat1, 2, 0, 0),
  [126] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_functions_section_repeat1, 2, 0, 0), SHIFT_REPEAT(37),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_functions_section, 1, 0, 0),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_functions_section, 2, 0, 0),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [137] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(17),
  [140] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(34),
  [143] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_definition, 4, 0, 0),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_definition, 5, 0, 0),
  [153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_definition, 6, 0, 0),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_definition, 7, 0, 0),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_type_repeat1, 2, 0, 0),
  [159] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_repeat1, 2, 0, 0), SHIFT_REPEAT(48),
  [162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 2, 0, 0),
  [164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [166] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 2, 0, 0),
  [168] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 1, 0, 0),
  [170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [178] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_attribute, 2, 0, 0),
  [180] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [186] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__nat_parameter, 3, 0, 0),
  [188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef TREE_SITTER_HIDE_SYMBOLS
#define TS_PUBLIC
#elif defined(_WIN32)
#define TS_PUBLIC __declspec(dllexport)
#else
#define TS_PUBLIC __attribute__((visibility("default")))
#endif

TS_PUBLIC const TSLanguage *tree_sitter_tl(void) {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
