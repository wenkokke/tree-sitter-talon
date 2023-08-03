#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 165
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 99
#define ALIAS_COUNT 0
#define TOKEN_COUNT 48
#define EXTERNAL_TOKEN_COUNT 10
#define FIELD_COUNT 10
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 12

enum {
  sym_comment = 1,
  anon_sym_and = 2,
  anon_sym_not = 3,
  anon_sym_COLON = 4,
  anon_sym_PIPE = 5,
  sym_start_anchor = 6,
  sym_end_anchor = 7,
  sym_word = 8,
  anon_sym_LBRACE = 9,
  anon_sym_RBRACE = 10,
  anon_sym_LT = 11,
  anon_sym_GT = 12,
  anon_sym_LBRACK = 13,
  anon_sym_RBRACK = 14,
  anon_sym_STAR = 15,
  anon_sym_PLUS = 16,
  anon_sym_LPAREN = 17,
  anon_sym_RPAREN = 18,
  sym__settings_binding = 19,
  sym__tag_binding = 20,
  anon_sym_EQ = 21,
  anon_sym_DASH = 22,
  anon_sym_SLASH = 23,
  anon_sym_PERCENT = 24,
  anon_sym_or = 25,
  anon_sym_key_LPAREN = 26,
  anon_sym_sleep_LPAREN = 27,
  aux_sym__implicit_string_argument_token1 = 28,
  anon_sym_LPAREN2 = 29,
  anon_sym_COMMA = 30,
  sym_identifier = 31,
  sym_integer = 32,
  sym_float = 33,
  sym_implicit_string = 34,
  anon_sym_LBRACE_LBRACE = 35,
  anon_sym_RBRACE_RBRACE = 36,
  sym_string_escape_sequence = 37,
  sym__not_escapesequence = 38,
  sym__matches_start = 39,
  sym__matches_end = 40,
  sym__matches_empty = 41,
  sym__newline = 42,
  sym__indent = 43,
  sym__dedent = 44,
  sym__string_start = 45,
  sym_string_content = 46,
  sym__string_end = 47,
  sym_source_file = 48,
  sym_matches = 49,
  sym_match_modifier = 50,
  sym_match = 51,
  sym_declarations = 52,
  sym_declaration = 53,
  sym_command_declaration = 54,
  sym_tag_import_declaration = 55,
  sym_key_binding_declaration = 56,
  sym_settings_declaration = 57,
  sym_rule = 58,
  sym__optional_choice = 59,
  sym_choice = 60,
  sym__optional_anchor = 61,
  sym__optional_seq = 62,
  sym_seq = 63,
  sym__primary_rule = 64,
  sym_list = 65,
  sym_capture = 66,
  sym_optional = 67,
  sym_repeat = 68,
  sym_repeat1 = 69,
  sym_parenthesized_rule = 70,
  sym__key_binding = 71,
  sym__statements = 72,
  sym_block = 73,
  sym_statement = 74,
  sym_assignment_statement = 75,
  sym_expression_statement = 76,
  sym_expression = 77,
  sym_variable = 78,
  sym_parenthesized_expression = 79,
  sym_binary_operator = 80,
  sym_unary_operator = 81,
  sym_key_action = 82,
  sym_sleep_action = 83,
  sym__implicit_string_argument = 84,
  sym_action = 85,
  sym_argument_list = 86,
  sym_string = 87,
  sym_interpolation = 88,
  sym__escape_interpolation = 89,
  sym__not_interpolation = 90,
  aux_sym_matches_repeat1 = 91,
  aux_sym_match_repeat1 = 92,
  aux_sym_declarations_repeat1 = 93,
  aux_sym_choice_repeat1 = 94,
  aux_sym_seq_repeat1 = 95,
  aux_sym_block_repeat1 = 96,
  aux_sym_argument_list_repeat1 = 97,
  aux_sym_string_repeat1 = 98,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_comment] = "comment",
  [anon_sym_and] = "and",
  [anon_sym_not] = "not",
  [anon_sym_COLON] = ":",
  [anon_sym_PIPE] = "|",
  [sym_start_anchor] = "start_anchor",
  [sym_end_anchor] = "end_anchor",
  [sym_word] = "word",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_LT] = "<",
  [anon_sym_GT] = ">",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_STAR] = "*",
  [anon_sym_PLUS] = "+",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [sym__settings_binding] = "_settings_binding",
  [sym__tag_binding] = "_tag_binding",
  [anon_sym_EQ] = "=",
  [anon_sym_DASH] = "operator",
  [anon_sym_SLASH] = "operator",
  [anon_sym_PERCENT] = "operator",
  [anon_sym_or] = "operator",
  [anon_sym_key_LPAREN] = "key(",
  [anon_sym_sleep_LPAREN] = "sleep(",
  [aux_sym__implicit_string_argument_token1] = "implicit_string",
  [anon_sym_LPAREN2] = "(",
  [anon_sym_COMMA] = ",",
  [sym_identifier] = "identifier",
  [sym_integer] = "integer",
  [sym_float] = "float",
  [sym_implicit_string] = "implicit_string",
  [anon_sym_LBRACE_LBRACE] = "{",
  [anon_sym_RBRACE_RBRACE] = "}",
  [sym_string_escape_sequence] = "string_escape_sequence",
  [sym__not_escapesequence] = "string_content",
  [sym__matches_start] = "_matches_start",
  [sym__matches_end] = "_matches_end",
  [sym__matches_empty] = "_matches_empty",
  [sym__newline] = "_newline",
  [sym__indent] = "_indent",
  [sym__dedent] = "_dedent",
  [sym__string_start] = "\"",
  [sym_string_content] = "string_content",
  [sym__string_end] = "\"",
  [sym_source_file] = "source_file",
  [sym_matches] = "matches",
  [sym_match_modifier] = "match_modifier",
  [sym_match] = "match",
  [sym_declarations] = "declarations",
  [sym_declaration] = "declaration",
  [sym_command_declaration] = "command_declaration",
  [sym_tag_import_declaration] = "tag_import_declaration",
  [sym_key_binding_declaration] = "key_binding_declaration",
  [sym_settings_declaration] = "settings_declaration",
  [sym_rule] = "rule",
  [sym__optional_choice] = "_optional_choice",
  [sym_choice] = "choice",
  [sym__optional_anchor] = "_optional_anchor",
  [sym__optional_seq] = "_optional_seq",
  [sym_seq] = "seq",
  [sym__primary_rule] = "_primary_rule",
  [sym_list] = "list",
  [sym_capture] = "capture",
  [sym_optional] = "optional",
  [sym_repeat] = "repeat",
  [sym_repeat1] = "repeat1",
  [sym_parenthesized_rule] = "parenthesized_rule",
  [sym__key_binding] = "_key_binding",
  [sym__statements] = "_statements",
  [sym_block] = "block",
  [sym_statement] = "statement",
  [sym_assignment_statement] = "assignment_statement",
  [sym_expression_statement] = "expression_statement",
  [sym_expression] = "expression",
  [sym_variable] = "variable",
  [sym_parenthesized_expression] = "parenthesized_expression",
  [sym_binary_operator] = "binary_operator",
  [sym_unary_operator] = "unary_operator",
  [sym_key_action] = "key_action",
  [sym_sleep_action] = "sleep_action",
  [sym__implicit_string_argument] = "_implicit_string_argument",
  [sym_action] = "action",
  [sym_argument_list] = "argument_list",
  [sym_string] = "string",
  [sym_interpolation] = "interpolation",
  [sym__escape_interpolation] = "string_content",
  [sym__not_interpolation] = "string_content",
  [aux_sym_matches_repeat1] = "matches_repeat1",
  [aux_sym_match_repeat1] = "match_repeat1",
  [aux_sym_declarations_repeat1] = "declarations_repeat1",
  [aux_sym_choice_repeat1] = "choice_repeat1",
  [aux_sym_seq_repeat1] = "seq_repeat1",
  [aux_sym_block_repeat1] = "block_repeat1",
  [aux_sym_argument_list_repeat1] = "argument_list_repeat1",
  [aux_sym_string_repeat1] = "string_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_comment] = sym_comment,
  [anon_sym_and] = anon_sym_and,
  [anon_sym_not] = anon_sym_not,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_PIPE] = anon_sym_PIPE,
  [sym_start_anchor] = sym_start_anchor,
  [sym_end_anchor] = sym_end_anchor,
  [sym_word] = sym_word,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [sym__settings_binding] = sym__settings_binding,
  [sym__tag_binding] = sym__tag_binding,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_SLASH] = anon_sym_DASH,
  [anon_sym_PERCENT] = anon_sym_DASH,
  [anon_sym_or] = anon_sym_DASH,
  [anon_sym_key_LPAREN] = anon_sym_key_LPAREN,
  [anon_sym_sleep_LPAREN] = anon_sym_sleep_LPAREN,
  [aux_sym__implicit_string_argument_token1] = sym_implicit_string,
  [anon_sym_LPAREN2] = anon_sym_LPAREN,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [sym_identifier] = sym_identifier,
  [sym_integer] = sym_integer,
  [sym_float] = sym_float,
  [sym_implicit_string] = sym_implicit_string,
  [anon_sym_LBRACE_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE_RBRACE] = anon_sym_RBRACE,
  [sym_string_escape_sequence] = sym_string_escape_sequence,
  [sym__not_escapesequence] = sym_string_content,
  [sym__matches_start] = sym__matches_start,
  [sym__matches_end] = sym__matches_end,
  [sym__matches_empty] = sym__matches_empty,
  [sym__newline] = sym__newline,
  [sym__indent] = sym__indent,
  [sym__dedent] = sym__dedent,
  [sym__string_start] = sym__string_start,
  [sym_string_content] = sym_string_content,
  [sym__string_end] = sym__string_start,
  [sym_source_file] = sym_source_file,
  [sym_matches] = sym_matches,
  [sym_match_modifier] = sym_match_modifier,
  [sym_match] = sym_match,
  [sym_declarations] = sym_declarations,
  [sym_declaration] = sym_declaration,
  [sym_command_declaration] = sym_command_declaration,
  [sym_tag_import_declaration] = sym_tag_import_declaration,
  [sym_key_binding_declaration] = sym_key_binding_declaration,
  [sym_settings_declaration] = sym_settings_declaration,
  [sym_rule] = sym_rule,
  [sym__optional_choice] = sym__optional_choice,
  [sym_choice] = sym_choice,
  [sym__optional_anchor] = sym__optional_anchor,
  [sym__optional_seq] = sym__optional_seq,
  [sym_seq] = sym_seq,
  [sym__primary_rule] = sym__primary_rule,
  [sym_list] = sym_list,
  [sym_capture] = sym_capture,
  [sym_optional] = sym_optional,
  [sym_repeat] = sym_repeat,
  [sym_repeat1] = sym_repeat1,
  [sym_parenthesized_rule] = sym_parenthesized_rule,
  [sym__key_binding] = sym__key_binding,
  [sym__statements] = sym__statements,
  [sym_block] = sym_block,
  [sym_statement] = sym_statement,
  [sym_assignment_statement] = sym_assignment_statement,
  [sym_expression_statement] = sym_expression_statement,
  [sym_expression] = sym_expression,
  [sym_variable] = sym_variable,
  [sym_parenthesized_expression] = sym_parenthesized_expression,
  [sym_binary_operator] = sym_binary_operator,
  [sym_unary_operator] = sym_unary_operator,
  [sym_key_action] = sym_key_action,
  [sym_sleep_action] = sym_sleep_action,
  [sym__implicit_string_argument] = sym__implicit_string_argument,
  [sym_action] = sym_action,
  [sym_argument_list] = sym_argument_list,
  [sym_string] = sym_string,
  [sym_interpolation] = sym_interpolation,
  [sym__escape_interpolation] = sym_string_content,
  [sym__not_interpolation] = sym_string_content,
  [aux_sym_matches_repeat1] = aux_sym_matches_repeat1,
  [aux_sym_match_repeat1] = aux_sym_match_repeat1,
  [aux_sym_declarations_repeat1] = aux_sym_declarations_repeat1,
  [aux_sym_choice_repeat1] = aux_sym_choice_repeat1,
  [aux_sym_seq_repeat1] = aux_sym_seq_repeat1,
  [aux_sym_block_repeat1] = aux_sym_block_repeat1,
  [aux_sym_argument_list_repeat1] = aux_sym_argument_list_repeat1,
  [aux_sym_string_repeat1] = aux_sym_string_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_and] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_not] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE] = {
    .visible = true,
    .named = false,
  },
  [sym_start_anchor] = {
    .visible = true,
    .named = true,
  },
  [sym_end_anchor] = {
    .visible = true,
    .named = true,
  },
  [sym_word] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS] = {
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
  [sym__settings_binding] = {
    .visible = false,
    .named = true,
  },
  [sym__tag_binding] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SLASH] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_PERCENT] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_or] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_key_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_sleep_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__implicit_string_argument_token1] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LPAREN2] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_integer] = {
    .visible = true,
    .named = true,
  },
  [sym_float] = {
    .visible = true,
    .named = true,
  },
  [sym_implicit_string] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LBRACE_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [sym_string_escape_sequence] = {
    .visible = true,
    .named = true,
  },
  [sym__not_escapesequence] = {
    .visible = true,
    .named = true,
  },
  [sym__matches_start] = {
    .visible = false,
    .named = true,
  },
  [sym__matches_end] = {
    .visible = false,
    .named = true,
  },
  [sym__matches_empty] = {
    .visible = false,
    .named = true,
  },
  [sym__newline] = {
    .visible = false,
    .named = true,
  },
  [sym__indent] = {
    .visible = false,
    .named = true,
  },
  [sym__dedent] = {
    .visible = false,
    .named = true,
  },
  [sym__string_start] = {
    .visible = true,
    .named = false,
  },
  [sym_string_content] = {
    .visible = true,
    .named = true,
  },
  [sym__string_end] = {
    .visible = true,
    .named = false,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_matches] = {
    .visible = true,
    .named = true,
  },
  [sym_match_modifier] = {
    .visible = true,
    .named = true,
  },
  [sym_match] = {
    .visible = true,
    .named = true,
  },
  [sym_declarations] = {
    .visible = true,
    .named = true,
  },
  [sym_declaration] = {
    .visible = false,
    .named = true,
    .supertype = true,
  },
  [sym_command_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_tag_import_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_key_binding_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_settings_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_rule] = {
    .visible = true,
    .named = true,
  },
  [sym__optional_choice] = {
    .visible = false,
    .named = true,
  },
  [sym_choice] = {
    .visible = true,
    .named = true,
  },
  [sym__optional_anchor] = {
    .visible = false,
    .named = true,
  },
  [sym__optional_seq] = {
    .visible = false,
    .named = true,
  },
  [sym_seq] = {
    .visible = true,
    .named = true,
  },
  [sym__primary_rule] = {
    .visible = false,
    .named = true,
  },
  [sym_list] = {
    .visible = true,
    .named = true,
  },
  [sym_capture] = {
    .visible = true,
    .named = true,
  },
  [sym_optional] = {
    .visible = true,
    .named = true,
  },
  [sym_repeat] = {
    .visible = true,
    .named = true,
  },
  [sym_repeat1] = {
    .visible = true,
    .named = true,
  },
  [sym_parenthesized_rule] = {
    .visible = true,
    .named = true,
  },
  [sym__key_binding] = {
    .visible = false,
    .named = true,
  },
  [sym__statements] = {
    .visible = false,
    .named = true,
  },
  [sym_block] = {
    .visible = true,
    .named = true,
  },
  [sym_statement] = {
    .visible = false,
    .named = true,
    .supertype = true,
  },
  [sym_assignment_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_expression_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_expression] = {
    .visible = false,
    .named = true,
    .supertype = true,
  },
  [sym_variable] = {
    .visible = true,
    .named = true,
  },
  [sym_parenthesized_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_binary_operator] = {
    .visible = true,
    .named = true,
  },
  [sym_unary_operator] = {
    .visible = true,
    .named = true,
  },
  [sym_key_action] = {
    .visible = true,
    .named = true,
  },
  [sym_sleep_action] = {
    .visible = true,
    .named = true,
  },
  [sym__implicit_string_argument] = {
    .visible = false,
    .named = true,
  },
  [sym_action] = {
    .visible = true,
    .named = true,
  },
  [sym_argument_list] = {
    .visible = true,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [sym_interpolation] = {
    .visible = true,
    .named = true,
  },
  [sym__escape_interpolation] = {
    .visible = true,
    .named = true,
  },
  [sym__not_interpolation] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_matches_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_match_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_declarations_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_choice_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_seq_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_block_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_argument_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum {
  field_action_name = 1,
  field_arguments = 2,
  field_capture_name = 3,
  field_expression = 4,
  field_left = 5,
  field_list_name = 6,
  field_modifiers = 7,
  field_operator = 8,
  field_right = 9,
  field_variable_name = 10,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_action_name] = "action_name",
  [field_arguments] = "arguments",
  [field_capture_name] = "capture_name",
  [field_expression] = "expression",
  [field_left] = "left",
  [field_list_name] = "list_name",
  [field_modifiers] = "modifiers",
  [field_operator] = "operator",
  [field_right] = "right",
  [field_variable_name] = "variable_name",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 1},
  [3] = {.index = 2, .length = 1},
  [4] = {.index = 3, .length = 2},
  [6] = {.index = 5, .length = 1},
  [7] = {.index = 6, .length = 2},
  [8] = {.index = 8, .length = 2},
  [9] = {.index = 10, .length = 1},
  [10] = {.index = 11, .length = 3},
  [11] = {.index = 14, .length = 3},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_list_name, 1},
  [1] =
    {field_capture_name, 1},
  [2] =
    {field_variable_name, 0},
  [3] =
    {field_left, 0},
    {field_right, 2},
  [5] =
    {field_arguments, 1},
  [6] =
    {field_operator, 0},
    {field_right, 1},
  [8] =
    {field_action_name, 0},
    {field_arguments, 1},
  [10] =
    {field_expression, 0},
  [11] =
    {field_left, 1},
    {field_modifiers, 0},
    {field_right, 3},
  [14] =
    {field_left, 0},
    {field_operator, 1},
    {field_right, 2},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [5] = {
    [0] = sym_block,
  },
  [11] = {
    [1] = anon_sym_DASH,
  },
};

static const uint16_t ts_non_terminal_alias_map[] = {
  sym_statement, 2,
    sym_statement,
    sym_block,
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
  [14] = 13,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 17,
  [22] = 20,
  [23] = 23,
  [24] = 24,
  [25] = 23,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 24,
  [30] = 30,
  [31] = 30,
  [32] = 32,
  [33] = 32,
  [34] = 26,
  [35] = 27,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 41,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 42,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 55,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 53,
  [74] = 74,
  [75] = 75,
  [76] = 76,
  [77] = 50,
  [78] = 78,
  [79] = 67,
  [80] = 62,
  [81] = 81,
  [82] = 82,
  [83] = 74,
  [84] = 84,
  [85] = 85,
  [86] = 86,
  [87] = 87,
  [88] = 88,
  [89] = 89,
  [90] = 90,
  [91] = 91,
  [92] = 92,
  [93] = 93,
  [94] = 94,
  [95] = 95,
  [96] = 96,
  [97] = 84,
  [98] = 69,
  [99] = 99,
  [100] = 100,
  [101] = 61,
  [102] = 72,
  [103] = 99,
  [104] = 85,
  [105] = 81,
  [106] = 100,
  [107] = 86,
  [108] = 76,
  [109] = 109,
  [110] = 88,
  [111] = 82,
  [112] = 71,
  [113] = 75,
  [114] = 78,
  [115] = 70,
  [116] = 87,
  [117] = 109,
  [118] = 118,
  [119] = 119,
  [120] = 120,
  [121] = 121,
  [122] = 122,
  [123] = 123,
  [124] = 124,
  [125] = 125,
  [126] = 126,
  [127] = 127,
  [128] = 128,
  [129] = 129,
  [130] = 130,
  [131] = 131,
  [132] = 132,
  [133] = 130,
  [134] = 134,
  [135] = 134,
  [136] = 136,
  [137] = 136,
  [138] = 138,
  [139] = 139,
  [140] = 140,
  [141] = 141,
  [142] = 142,
  [143] = 143,
  [144] = 144,
  [145] = 145,
  [146] = 146,
  [147] = 147,
  [148] = 148,
  [149] = 146,
  [150] = 150,
  [151] = 151,
  [152] = 139,
  [153] = 153,
  [154] = 154,
  [155] = 151,
  [156] = 156,
  [157] = 157,
  [158] = 158,
  [159] = 159,
  [160] = 160,
  [161] = 161,
  [162] = 162,
  [163] = 163,
  [164] = 164,
};

static inline bool sym_word_character_set_1(int32_t c) {
  return (c < 6688
    ? (c < 3077
      ? (c < 2406
        ? (c < 1488
          ? (c < 750
            ? (c < 188
              ? (c < 170
                ? (c < 'A'
                  ? (c >= '0' && c <= '9')
                  : (c <= 'Z' || (c >= 'a' && c <= 'z')))
                : (c <= 170 || (c < 181
                  ? (c >= 178 && c <= 179)
                  : (c <= 181 || (c >= 185 && c <= 186)))))
              : (c <= 190 || (c < 710
                ? (c < 216
                  ? (c >= 192 && c <= 214)
                  : (c <= 246 || (c >= 248 && c <= 705)))
                : (c <= 721 || (c < 748
                  ? (c >= 736 && c <= 740)
                  : c <= 748)))))
            : (c <= 750 || (c < 910
              ? (c < 895
                ? (c < 886
                  ? (c >= 880 && c <= 884)
                  : (c <= 887 || (c >= 890 && c <= 893)))
                : (c <= 895 || (c < 904
                  ? c == 902
                  : (c <= 906 || c == 908))))
              : (c <= 929 || (c < 1329
                ? (c < 1015
                  ? (c >= 931 && c <= 1013)
                  : (c <= 1153 || (c >= 1162 && c <= 1327)))
                : (c <= 1366 || (c < 1376
                  ? c == 1369
                  : c <= 1416)))))))
          : (c <= 1514 || (c < 2036
            ? (c < 1774
              ? (c < 1646
                ? (c < 1568
                  ? (c >= 1519 && c <= 1522)
                  : (c <= 1610 || (c >= 1632 && c <= 1641)))
                : (c <= 1647 || (c < 1749
                  ? (c >= 1649 && c <= 1747)
                  : (c <= 1749 || (c >= 1765 && c <= 1766)))))
              : (c <= 1788 || (c < 1869
                ? (c < 1808
                  ? c == 1791
                  : (c <= 1808 || (c >= 1810 && c <= 1839)))
                : (c <= 1957 || (c < 1984
                  ? c == 1969
                  : c <= 2026)))))
            : (c <= 2037 || (c < 2160
              ? (c < 2084
                ? (c < 2048
                  ? c == 2042
                  : (c <= 2069 || c == 2074))
                : (c <= 2084 || (c < 2112
                  ? c == 2088
                  : (c <= 2136 || (c >= 2144 && c <= 2154)))))
              : (c <= 2183 || (c < 2365
                ? (c < 2208
                  ? (c >= 2185 && c <= 2190)
                  : (c <= 2249 || (c >= 2308 && c <= 2361)))
                : (c <= 2365 || (c < 2392
                  ? c == 2384
                  : c <= 2401)))))))))
        : (c <= 2415 || (c < 2738
          ? (c < 2565
            ? (c < 2493
              ? (c < 2451
                ? (c < 2437
                  ? (c >= 2417 && c <= 2432)
                  : (c <= 2444 || (c >= 2447 && c <= 2448)))
                : (c <= 2472 || (c < 2482
                  ? (c >= 2474 && c <= 2480)
                  : (c <= 2482 || (c >= 2486 && c <= 2489)))))
              : (c <= 2493 || (c < 2534
                ? (c < 2524
                  ? c == 2510
                  : (c <= 2525 || (c >= 2527 && c <= 2529)))
                : (c <= 2545 || (c < 2556
                  ? (c >= 2548 && c <= 2553)
                  : c <= 2556)))))
            : (c <= 2570 || (c < 2654
              ? (c < 2610
                ? (c < 2579
                  ? (c >= 2575 && c <= 2576)
                  : (c <= 2600 || (c >= 2602 && c <= 2608)))
                : (c <= 2611 || (c < 2616
                  ? (c >= 2613 && c <= 2614)
                  : (c <= 2617 || (c >= 2649 && c <= 2652)))))
              : (c <= 2654 || (c < 2703
                ? (c < 2674
                  ? (c >= 2662 && c <= 2671)
                  : (c <= 2676 || (c >= 2693 && c <= 2701)))
                : (c <= 2705 || (c < 2730
                  ? (c >= 2707 && c <= 2728)
                  : c <= 2736)))))))
          : (c <= 2739 || (c < 2911
            ? (c < 2831
              ? (c < 2784
                ? (c < 2749
                  ? (c >= 2741 && c <= 2745)
                  : (c <= 2749 || c == 2768))
                : (c <= 2785 || (c < 2809
                  ? (c >= 2790 && c <= 2799)
                  : (c <= 2809 || (c >= 2821 && c <= 2828)))))
              : (c <= 2832 || (c < 2869
                ? (c < 2858
                  ? (c >= 2835 && c <= 2856)
                  : (c <= 2864 || (c >= 2866 && c <= 2867)))
                : (c <= 2873 || (c < 2908
                  ? c == 2877
                  : c <= 2909)))))
            : (c <= 2913 || (c < 2972
              ? (c < 2949
                ? (c < 2929
                  ? (c >= 2918 && c <= 2927)
                  : (c <= 2935 || c == 2947))
                : (c <= 2954 || (c < 2962
                  ? (c >= 2958 && c <= 2960)
                  : (c <= 2965 || (c >= 2969 && c <= 2970)))))
              : (c <= 2972 || (c < 2990
                ? (c < 2979
                  ? (c >= 2974 && c <= 2975)
                  : (c <= 2980 || (c >= 2984 && c <= 2986)))
                : (c <= 3001 || (c < 3046
                  ? c == 3024
                  : c <= 3058)))))))))))
      : (c <= 3084 || (c < 4186
        ? (c < 3461
          ? (c < 3253
            ? (c < 3174
              ? (c < 3133
                ? (c < 3090
                  ? (c >= 3086 && c <= 3088)
                  : (c <= 3112 || (c >= 3114 && c <= 3129)))
                : (c <= 3133 || (c < 3165
                  ? (c >= 3160 && c <= 3162)
                  : (c <= 3165 || (c >= 3168 && c <= 3169)))))
              : (c <= 3183 || (c < 3214
                ? (c < 3200
                  ? (c >= 3192 && c <= 3198)
                  : (c <= 3200 || (c >= 3205 && c <= 3212)))
                : (c <= 3216 || (c < 3242
                  ? (c >= 3218 && c <= 3240)
                  : c <= 3251)))))
            : (c <= 3257 || (c < 3346
              ? (c < 3302
                ? (c < 3293
                  ? c == 3261
                  : (c <= 3294 || (c >= 3296 && c <= 3297)))
                : (c <= 3311 || (c < 3332
                  ? (c >= 3313 && c <= 3314)
                  : (c <= 3340 || (c >= 3342 && c <= 3344)))))
              : (c <= 3386 || (c < 3416
                ? (c < 3406
                  ? c == 3389
                  : (c <= 3406 || (c >= 3412 && c <= 3414)))
                : (c <= 3425 || (c < 3450
                  ? (c >= 3430 && c <= 3448)
                  : c <= 3455)))))))
          : (c <= 3478 || (c < 3751
            ? (c < 3648
              ? (c < 3520
                ? (c < 3507
                  ? (c >= 3482 && c <= 3505)
                  : (c <= 3515 || c == 3517))
                : (c <= 3526 || (c < 3585
                  ? (c >= 3558 && c <= 3567)
                  : (c <= 3632 || (c >= 3634 && c <= 3635)))))
              : (c <= 3654 || (c < 3718
                ? (c < 3713
                  ? (c >= 3664 && c <= 3673)
                  : (c <= 3714 || c == 3716))
                : (c <= 3722 || (c < 3749
                  ? (c >= 3724 && c <= 3747)
                  : c <= 3749)))))
            : (c <= 3760 || (c < 3872
              ? (c < 3782
                ? (c < 3773
                  ? (c >= 3762 && c <= 3763)
                  : (c <= 3773 || (c >= 3776 && c <= 3780)))
                : (c <= 3782 || (c < 3804
                  ? (c >= 3792 && c <= 3801)
                  : (c <= 3807 || c == 3840))))
              : (c <= 3891 || (c < 4096
                ? (c < 3913
                  ? (c >= 3904 && c <= 3911)
                  : (c <= 3948 || (c >= 3976 && c <= 3980)))
                : (c <= 4138 || (c < 4176
                  ? (c >= 4159 && c <= 4169)
                  : c <= 4181)))))))))
        : (c <= 4189 || (c < 5112
          ? (c < 4698
            ? (c < 4295
              ? (c < 4213
                ? (c < 4197
                  ? c == 4193
                  : (c <= 4198 || (c >= 4206 && c <= 4208)))
                : (c <= 4225 || (c < 4240
                  ? c == 4238
                  : (c <= 4249 || (c >= 4256 && c <= 4293)))))
              : (c <= 4295 || (c < 4682
                ? (c < 4304
                  ? c == 4301
                  : (c <= 4346 || (c >= 4348 && c <= 4680)))
                : (c <= 4685 || (c < 4696
                  ? (c >= 4688 && c <= 4694)
                  : c <= 4696)))))
            : (c <= 4701 || (c < 4808
              ? (c < 4786
                ? (c < 4746
                  ? (c >= 4704 && c <= 4744)
                  : (c <= 4749 || (c >= 4752 && c <= 4784)))
                : (c <= 4789 || (c < 4800
                  ? (c >= 4792 && c <= 4798)
                  : (c <= 4800 || (c >= 4802 && c <= 4805)))))
              : (c <= 4822 || (c < 4969
                ? (c < 4882
                  ? (c >= 4824 && c <= 4880)
                  : (c <= 4885 || (c >= 4888 && c <= 4954)))
                : (c <= 4988 || (c < 5024
                  ? (c >= 4992 && c <= 5007)
                  : c <= 5109)))))))
          : (c <= 5117 || (c < 6128
            ? (c < 5952
              ? (c < 5792
                ? (c < 5743
                  ? (c >= 5121 && c <= 5740)
                  : (c <= 5759 || (c >= 5761 && c <= 5786)))
                : (c <= 5866 || (c < 5888
                  ? (c >= 5870 && c <= 5880)
                  : (c <= 5905 || (c >= 5919 && c <= 5937)))))
              : (c <= 5969 || (c < 6103
                ? (c < 5998
                  ? (c >= 5984 && c <= 5996)
                  : (c <= 6000 || (c >= 6016 && c <= 6067)))
                : (c <= 6103 || (c < 6112
                  ? c == 6108
                  : c <= 6121)))))
            : (c <= 6137 || (c < 6400
              ? (c < 6279
                ? (c < 6176
                  ? (c >= 6160 && c <= 6169)
                  : (c <= 6264 || (c >= 6272 && c <= 6276)))
                : (c <= 6312 || (c < 6320
                  ? c == 6314
                  : c <= 6389)))
              : (c <= 6430 || (c < 6576
                ? (c < 6512
                  ? (c >= 6470 && c <= 6509)
                  : (c <= 6516 || (c >= 6528 && c <= 6571)))
                : (c <= 6601 || (c < 6656
                  ? (c >= 6608 && c <= 6618)
                  : c <= 6678)))))))))))))
    : (c <= 6740 || (c < 43138
      ? (c < 11264
        ? (c < 8118
          ? (c < 7401
            ? (c < 7086
              ? (c < 6917
                ? (c < 6800
                  ? (c >= 6784 && c <= 6793)
                  : (c <= 6809 || c == 6823))
                : (c <= 6963 || (c < 6992
                  ? (c >= 6981 && c <= 6988)
                  : (c <= 7001 || (c >= 7043 && c <= 7072)))))
              : (c <= 7141 || (c < 7296
                ? (c < 7232
                  ? (c >= 7168 && c <= 7203)
                  : (c <= 7241 || (c >= 7245 && c <= 7293)))
                : (c <= 7304 || (c < 7357
                  ? (c >= 7312 && c <= 7354)
                  : c <= 7359)))))
            : (c <= 7404 || (c < 8008
              ? (c < 7424
                ? (c < 7413
                  ? (c >= 7406 && c <= 7411)
                  : (c <= 7414 || c == 7418))
                : (c <= 7615 || (c < 7960
                  ? (c >= 7680 && c <= 7957)
                  : (c <= 7965 || (c >= 7968 && c <= 8005)))))
              : (c <= 8013 || (c < 8029
                ? (c < 8025
                  ? (c >= 8016 && c <= 8023)
                  : (c <= 8025 || c == 8027))
                : (c <= 8029 || (c < 8064
                  ? (c >= 8031 && c <= 8061)
                  : c <= 8116)))))))
          : (c <= 8124 || (c < 8458
            ? (c < 8182
              ? (c < 8144
                ? (c < 8130
                  ? c == 8126
                  : (c <= 8132 || (c >= 8134 && c <= 8140)))
                : (c <= 8147 || (c < 8160
                  ? (c >= 8150 && c <= 8155)
                  : (c <= 8172 || (c >= 8178 && c <= 8180)))))
              : (c <= 8188 || (c < 8336
                ? (c < 8308
                  ? (c >= 8304 && c <= 8305)
                  : (c <= 8313 || (c >= 8319 && c <= 8329)))
                : (c <= 8348 || (c < 8455
                  ? c == 8450
                  : c <= 8455)))))
            : (c <= 8467 || (c < 8508
              ? (c < 8486
                ? (c < 8473
                  ? c == 8469
                  : (c <= 8477 || c == 8484))
                : (c <= 8486 || (c < 8490
                  ? c == 8488
                  : (c <= 8493 || (c >= 8495 && c <= 8505)))))
              : (c <= 8511 || (c < 9312
                ? (c < 8526
                  ? (c >= 8517 && c <= 8521)
                  : (c <= 8526 || (c >= 8528 && c <= 8585)))
                : (c <= 9371 || (c < 10102
                  ? (c >= 9450 && c <= 9471)
                  : c <= 10131)))))))))
        : (c <= 11492 || (c < 12704
          ? (c < 11720
            ? (c < 11631
              ? (c < 11520
                ? (c < 11506
                  ? (c >= 11499 && c <= 11502)
                  : (c <= 11507 || c == 11517))
                : (c <= 11557 || (c < 11565
                  ? c == 11559
                  : (c <= 11565 || (c >= 11568 && c <= 11623)))))
              : (c <= 11631 || (c < 11696
                ? (c < 11680
                  ? (c >= 11648 && c <= 11670)
                  : (c <= 11686 || (c >= 11688 && c <= 11694)))
                : (c <= 11702 || (c < 11712
                  ? (c >= 11704 && c <= 11710)
                  : c <= 11718)))))
            : (c <= 11726 || (c < 12353
              ? (c < 12293
                ? (c < 11736
                  ? (c >= 11728 && c <= 11734)
                  : (c <= 11742 || c == 11823))
                : (c <= 12295 || (c < 12337
                  ? (c >= 12321 && c <= 12329)
                  : (c <= 12341 || (c >= 12344 && c <= 12348)))))
              : (c <= 12438 || (c < 12549
                ? (c < 12449
                  ? (c >= 12445 && c <= 12447)
                  : (c <= 12538 || (c >= 12540 && c <= 12543)))
                : (c <= 12591 || (c < 12690
                  ? (c >= 12593 && c <= 12686)
                  : c <= 12693)))))))
          : (c <= 12735 || (c < 42623
            ? (c < 19903
              ? (c < 12881
                ? (c < 12832
                  ? (c >= 12784 && c <= 12799)
                  : (c <= 12841 || (c >= 12872 && c <= 12879)))
                : (c <= 12895 || (c < 12977
                  ? (c >= 12928 && c <= 12937)
                  : (c <= 12991 || c == 13312))))
              : (c <= 19903 || (c < 42240
                ? (c < 40959
                  ? c == 19968
                  : (c <= 42124 || (c >= 42192 && c <= 42237)))
                : (c <= 42508 || (c < 42560
                  ? (c >= 42512 && c <= 42539)
                  : c <= 42606)))))
            : (c <= 42653 || (c < 42965
              ? (c < 42891
                ? (c < 42775
                  ? (c >= 42656 && c <= 42735)
                  : (c <= 42783 || (c >= 42786 && c <= 42888)))
                : (c <= 42954 || (c < 42963
                  ? (c >= 42960 && c <= 42961)
                  : c <= 42963)))
              : (c <= 42969 || (c < 43020
                ? (c < 43011
                  ? (c >= 42994 && c <= 43009)
                  : (c <= 43013 || (c >= 43015 && c <= 43018)))
                : (c <= 43042 || (c < 43072
                  ? (c >= 43056 && c <= 43061)
                  : c <= 43123)))))))))))
      : (c <= 43187 || (c < 65345
        ? (c < 43808
          ? (c < 43600
            ? (c < 43396
              ? (c < 43261
                ? (c < 43250
                  ? (c >= 43216 && c <= 43225)
                  : (c <= 43255 || c == 43259))
                : (c <= 43262 || (c < 43312
                  ? (c >= 43264 && c <= 43301)
                  : (c <= 43334 || (c >= 43360 && c <= 43388)))))
              : (c <= 43442 || (c < 43520
                ? (c < 43488
                  ? (c >= 43471 && c <= 43481)
                  : (c <= 43492 || (c >= 43494 && c <= 43518)))
                : (c <= 43560 || (c < 43588
                  ? (c >= 43584 && c <= 43586)
                  : c <= 43595)))))
            : (c <= 43609 || (c < 43714
              ? (c < 43697
                ? (c < 43642
                  ? (c >= 43616 && c <= 43638)
                  : (c <= 43642 || (c >= 43646 && c <= 43695)))
                : (c <= 43697 || (c < 43705
                  ? (c >= 43701 && c <= 43702)
                  : (c <= 43709 || c == 43712))))
              : (c <= 43714 || (c < 43777
                ? (c < 43744
                  ? (c >= 43739 && c <= 43741)
                  : (c <= 43754 || (c >= 43762 && c <= 43764)))
                : (c <= 43782 || (c < 43793
                  ? (c >= 43785 && c <= 43790)
                  : c <= 43798)))))))
          : (c <= 43814 || (c < 64287
            ? (c < 55216
              ? (c < 43888
                ? (c < 43824
                  ? (c >= 43816 && c <= 43822)
                  : (c <= 43866 || (c >= 43868 && c <= 43881)))
                : (c <= 44002 || (c < 44032
                  ? (c >= 44016 && c <= 44025)
                  : (c <= 44032 || c == 55203))))
              : (c <= 55238 || (c < 64256
                ? (c < 63744
                  ? (c >= 55243 && c <= 55291)
                  : (c <= 64109 || (c >= 64112 && c <= 64217)))
                : (c <= 64262 || (c < 64285
                  ? (c >= 64275 && c <= 64279)
                  : c <= 64285)))))
            : (c <= 64296 || (c < 64848
              ? (c < 64320
                ? (c < 64312
                  ? (c >= 64298 && c <= 64310)
                  : (c <= 64316 || c == 64318))
                : (c <= 64321 || (c < 64326
                  ? (c >= 64323 && c <= 64324)
                  : (c <= 64433 || (c >= 64467 && c <= 64829)))))
              : (c <= 64911 || (c < 65142
                ? (c < 65008
                  ? (c >= 64914 && c <= 64967)
                  : (c <= 65019 || (c >= 65136 && c <= 65140)))
                : (c <= 65276 || (c < 65313
                  ? (c >= 65296 && c <= 65305)
                  : c <= 65338)))))))))
        : (c <= 65370 || (c < 66816
          ? (c < 65930
            ? (c < 65576
              ? (c < 65490
                ? (c < 65474
                  ? (c >= 65382 && c <= 65470)
                  : (c <= 65479 || (c >= 65482 && c <= 65487)))
                : (c <= 65495 || (c < 65536
                  ? (c >= 65498 && c <= 65500)
                  : (c <= 65547 || (c >= 65549 && c <= 65574)))))
              : (c <= 65594 || (c < 65664
                ? (c < 65599
                  ? (c >= 65596 && c <= 65597)
                  : (c <= 65613 || (c >= 65616 && c <= 65629)))
                : (c <= 65786 || (c < 65856
                  ? (c >= 65799 && c <= 65843)
                  : c <= 65912)))))
            : (c <= 65931 || (c < 66464
              ? (c < 66304
                ? (c < 66208
                  ? (c >= 66176 && c <= 66204)
                  : (c <= 66256 || (c >= 66273 && c <= 66299)))
                : (c <= 66339 || (c < 66384
                  ? (c >= 66349 && c <= 66378)
                  : (c <= 66421 || (c >= 66432 && c <= 66461)))))
              : (c <= 66499 || (c < 66720
                ? (c < 66513
                  ? (c >= 66504 && c <= 66511)
                  : (c <= 66517 || (c >= 66560 && c <= 66717)))
                : (c <= 66729 || (c < 66776
                  ? (c >= 66736 && c <= 66771)
                  : c <= 66811)))))))
          : (c <= 66855 || (c < 67506
            ? (c < 66995
              ? (c < 66956
                ? (c < 66928
                  ? (c >= 66864 && c <= 66915)
                  : (c <= 66938 || (c >= 66940 && c <= 66954)))
                : (c <= 66962 || (c < 66967
                  ? (c >= 66964 && c <= 66965)
                  : (c <= 66977 || (c >= 66979 && c <= 66993)))))
              : (c <= 67001 || (c < 67424
                ? (c < 67072
                  ? (c >= 67003 && c <= 67004)
                  : (c <= 67382 || (c >= 67392 && c <= 67413)))
                : (c <= 67431 || (c < 67463
                  ? (c >= 67456 && c <= 67461)
                  : c <= 67504)))))
            : (c <= 67514 || (c < 67672
              ? (c < 67639
                ? (c < 67592
                  ? (c >= 67584 && c <= 67589)
                  : (c <= 67592 || (c >= 67594 && c <= 67637)))
                : (c <= 67640 || (c < 67647
                  ? c == 67644
                  : c <= 67669)))
              : (c <= 67702 || (c < 67828
                ? (c < 67751
                  ? (c >= 67705 && c <= 67742)
                  : (c <= 67759 || (c >= 67808 && c <= 67826)))
                : (c <= 67829 || (c < 67872
                  ? (c >= 67835 && c <= 67867)
                  : c <= 67883)))))))))))))));
}

static inline bool sym_word_character_set_2(int32_t c) {
  return (c < 6656
    ? (c < 3024
      ? (c < 2384
        ? (c < 1369
          ? (c < 736
            ? (c < 181
              ? (c < 'A'
                ? (c < '-'
                  ? c == '\''
                  : (c <= '-' || (c >= '0' && c <= '9')))
                : (c <= 'Z' || (c < 170
                  ? (c >= 'a' && c <= 'z')
                  : (c <= 170 || (c >= 178 && c <= 179)))))
              : (c <= 181 || (c < 216
                ? (c < 188
                  ? (c >= 185 && c <= 186)
                  : (c <= 190 || (c >= 192 && c <= 214)))
                : (c <= 246 || (c < 710
                  ? (c >= 248 && c <= 705)
                  : c <= 721)))))
            : (c <= 740 || (c < 904
              ? (c < 886
                ? (c < 750
                  ? c == 748
                  : (c <= 750 || (c >= 880 && c <= 884)))
                : (c <= 887 || (c < 895
                  ? (c >= 890 && c <= 893)
                  : (c <= 895 || c == 902))))
              : (c <= 906 || (c < 1015
                ? (c < 910
                  ? c == 908
                  : (c <= 929 || (c >= 931 && c <= 1013)))
                : (c <= 1153 || (c < 1329
                  ? (c >= 1162 && c <= 1327)
                  : c <= 1366)))))))
          : (c <= 1369 || (c < 1969
            ? (c < 1749
              ? (c < 1568
                ? (c < 1488
                  ? (c >= 1376 && c <= 1416)
                  : (c <= 1514 || (c >= 1519 && c <= 1522)))
                : (c <= 1610 || (c < 1646
                  ? (c >= 1632 && c <= 1641)
                  : (c <= 1647 || (c >= 1649 && c <= 1747)))))
              : (c <= 1749 || (c < 1808
                ? (c < 1774
                  ? (c >= 1765 && c <= 1766)
                  : (c <= 1788 || c == 1791))
                : (c <= 1808 || (c < 1869
                  ? (c >= 1810 && c <= 1839)
                  : c <= 1957)))))
            : (c <= 1969 || (c < 2112
              ? (c < 2048
                ? (c < 2036
                  ? (c >= 1984 && c <= 2026)
                  : (c <= 2037 || c == 2042))
                : (c <= 2069 || (c < 2084
                  ? c == 2074
                  : (c <= 2084 || c == 2088))))
              : (c <= 2136 || (c < 2208
                ? (c < 2160
                  ? (c >= 2144 && c <= 2154)
                  : (c <= 2183 || (c >= 2185 && c <= 2190)))
                : (c <= 2249 || (c < 2365
                  ? (c >= 2308 && c <= 2361)
                  : c <= 2365)))))))))
        : (c <= 2384 || (c < 2707
          ? (c < 2548
            ? (c < 2482
              ? (c < 2437
                ? (c < 2406
                  ? (c >= 2392 && c <= 2401)
                  : (c <= 2415 || (c >= 2417 && c <= 2432)))
                : (c <= 2444 || (c < 2451
                  ? (c >= 2447 && c <= 2448)
                  : (c <= 2472 || (c >= 2474 && c <= 2480)))))
              : (c <= 2482 || (c < 2524
                ? (c < 2493
                  ? (c >= 2486 && c <= 2489)
                  : (c <= 2493 || c == 2510))
                : (c <= 2525 || (c < 2534
                  ? (c >= 2527 && c <= 2529)
                  : c <= 2545)))))
            : (c <= 2553 || (c < 2616
              ? (c < 2579
                ? (c < 2565
                  ? c == 2556
                  : (c <= 2570 || (c >= 2575 && c <= 2576)))
                : (c <= 2600 || (c < 2610
                  ? (c >= 2602 && c <= 2608)
                  : (c <= 2611 || (c >= 2613 && c <= 2614)))))
              : (c <= 2617 || (c < 2674
                ? (c < 2654
                  ? (c >= 2649 && c <= 2652)
                  : (c <= 2654 || (c >= 2662 && c <= 2671)))
                : (c <= 2676 || (c < 2703
                  ? (c >= 2693 && c <= 2701)
                  : c <= 2705)))))))
          : (c <= 2728 || (c < 2877
            ? (c < 2809
              ? (c < 2749
                ? (c < 2738
                  ? (c >= 2730 && c <= 2736)
                  : (c <= 2739 || (c >= 2741 && c <= 2745)))
                : (c <= 2749 || (c < 2784
                  ? c == 2768
                  : (c <= 2785 || (c >= 2790 && c <= 2799)))))
              : (c <= 2809 || (c < 2858
                ? (c < 2831
                  ? (c >= 2821 && c <= 2828)
                  : (c <= 2832 || (c >= 2835 && c <= 2856)))
                : (c <= 2864 || (c < 2869
                  ? (c >= 2866 && c <= 2867)
                  : c <= 2873)))))
            : (c <= 2877 || (c < 2962
              ? (c < 2929
                ? (c < 2911
                  ? (c >= 2908 && c <= 2909)
                  : (c <= 2913 || (c >= 2918 && c <= 2927)))
                : (c <= 2935 || (c < 2949
                  ? c == 2947
                  : (c <= 2954 || (c >= 2958 && c <= 2960)))))
              : (c <= 2965 || (c < 2979
                ? (c < 2972
                  ? (c >= 2969 && c <= 2970)
                  : (c <= 2972 || (c >= 2974 && c <= 2975)))
                : (c <= 2980 || (c < 2990
                  ? (c >= 2984 && c <= 2986)
                  : c <= 3001)))))))))))
      : (c <= 3024 || (c < 4159
        ? (c < 3430
          ? (c < 3218
            ? (c < 3165
              ? (c < 3090
                ? (c < 3077
                  ? (c >= 3046 && c <= 3058)
                  : (c <= 3084 || (c >= 3086 && c <= 3088)))
                : (c <= 3112 || (c < 3133
                  ? (c >= 3114 && c <= 3129)
                  : (c <= 3133 || (c >= 3160 && c <= 3162)))))
              : (c <= 3165 || (c < 3200
                ? (c < 3174
                  ? (c >= 3168 && c <= 3169)
                  : (c <= 3183 || (c >= 3192 && c <= 3198)))
                : (c <= 3200 || (c < 3214
                  ? (c >= 3205 && c <= 3212)
                  : c <= 3216)))))
            : (c <= 3240 || (c < 3332
              ? (c < 3293
                ? (c < 3253
                  ? (c >= 3242 && c <= 3251)
                  : (c <= 3257 || c == 3261))
                : (c <= 3294 || (c < 3302
                  ? (c >= 3296 && c <= 3297)
                  : (c <= 3311 || (c >= 3313 && c <= 3314)))))
              : (c <= 3340 || (c < 3406
                ? (c < 3346
                  ? (c >= 3342 && c <= 3344)
                  : (c <= 3386 || c == 3389))
                : (c <= 3406 || (c < 3416
                  ? (c >= 3412 && c <= 3414)
                  : c <= 3425)))))))
          : (c <= 3448 || (c < 3724
            ? (c < 3585
              ? (c < 3507
                ? (c < 3461
                  ? (c >= 3450 && c <= 3455)
                  : (c <= 3478 || (c >= 3482 && c <= 3505)))
                : (c <= 3515 || (c < 3520
                  ? c == 3517
                  : (c <= 3526 || (c >= 3558 && c <= 3567)))))
              : (c <= 3632 || (c < 3713
                ? (c < 3648
                  ? (c >= 3634 && c <= 3635)
                  : (c <= 3654 || (c >= 3664 && c <= 3673)))
                : (c <= 3714 || (c < 3718
                  ? c == 3716
                  : c <= 3722)))))
            : (c <= 3747 || (c < 3804
              ? (c < 3773
                ? (c < 3751
                  ? c == 3749
                  : (c <= 3760 || (c >= 3762 && c <= 3763)))
                : (c <= 3773 || (c < 3782
                  ? (c >= 3776 && c <= 3780)
                  : (c <= 3782 || (c >= 3792 && c <= 3801)))))
              : (c <= 3807 || (c < 3913
                ? (c < 3872
                  ? c == 3840
                  : (c <= 3891 || (c >= 3904 && c <= 3911)))
                : (c <= 3948 || (c < 4096
                  ? (c >= 3976 && c <= 3980)
                  : c <= 4138)))))))))
        : (c <= 4169 || (c < 4992
          ? (c < 4688
            ? (c < 4240
              ? (c < 4197
                ? (c < 4186
                  ? (c >= 4176 && c <= 4181)
                  : (c <= 4189 || c == 4193))
                : (c <= 4198 || (c < 4213
                  ? (c >= 4206 && c <= 4208)
                  : (c <= 4225 || c == 4238))))
              : (c <= 4249 || (c < 4304
                ? (c < 4295
                  ? (c >= 4256 && c <= 4293)
                  : (c <= 4295 || c == 4301))
                : (c <= 4346 || (c < 4682
                  ? (c >= 4348 && c <= 4680)
                  : c <= 4685)))))
            : (c <= 4694 || (c < 4800
              ? (c < 4746
                ? (c < 4698
                  ? c == 4696
                  : (c <= 4701 || (c >= 4704 && c <= 4744)))
                : (c <= 4749 || (c < 4786
                  ? (c >= 4752 && c <= 4784)
                  : (c <= 4789 || (c >= 4792 && c <= 4798)))))
              : (c <= 4800 || (c < 4882
                ? (c < 4808
                  ? (c >= 4802 && c <= 4805)
                  : (c <= 4822 || (c >= 4824 && c <= 4880)))
                : (c <= 4885 || (c < 4969
                  ? (c >= 4888 && c <= 4954)
                  : c <= 4988)))))))
          : (c <= 5007 || (c < 6108
            ? (c < 5888
              ? (c < 5743
                ? (c < 5112
                  ? (c >= 5024 && c <= 5109)
                  : (c <= 5117 || (c >= 5121 && c <= 5740)))
                : (c <= 5759 || (c < 5792
                  ? (c >= 5761 && c <= 5786)
                  : (c <= 5866 || (c >= 5870 && c <= 5880)))))
              : (c <= 5905 || (c < 5998
                ? (c < 5952
                  ? (c >= 5919 && c <= 5937)
                  : (c <= 5969 || (c >= 5984 && c <= 5996)))
                : (c <= 6000 || (c < 6103
                  ? (c >= 6016 && c <= 6067)
                  : c <= 6103)))))
            : (c <= 6108 || (c < 6320
              ? (c < 6176
                ? (c < 6128
                  ? (c >= 6112 && c <= 6121)
                  : (c <= 6137 || (c >= 6160 && c <= 6169)))
                : (c <= 6264 || (c < 6279
                  ? (c >= 6272 && c <= 6276)
                  : (c <= 6312 || c == 6314))))
              : (c <= 6389 || (c < 6528
                ? (c < 6470
                  ? (c >= 6400 && c <= 6430)
                  : (c <= 6509 || (c >= 6512 && c <= 6516)))
                : (c <= 6571 || (c < 6608
                  ? (c >= 6576 && c <= 6601)
                  : c <= 6618)))))))))))))
    : (c <= 6678 || (c < 43138
      ? (c < 10102
        ? (c < 8064
          ? (c < 7357
            ? (c < 7043
              ? (c < 6823
                ? (c < 6784
                  ? (c >= 6688 && c <= 6740)
                  : (c <= 6793 || (c >= 6800 && c <= 6809)))
                : (c <= 6823 || (c < 6981
                  ? (c >= 6917 && c <= 6963)
                  : (c <= 6988 || (c >= 6992 && c <= 7001)))))
              : (c <= 7072 || (c < 7245
                ? (c < 7168
                  ? (c >= 7086 && c <= 7141)
                  : (c <= 7203 || (c >= 7232 && c <= 7241)))
                : (c <= 7293 || (c < 7312
                  ? (c >= 7296 && c <= 7304)
                  : c <= 7354)))))
            : (c <= 7359 || (c < 7968
              ? (c < 7418
                ? (c < 7406
                  ? (c >= 7401 && c <= 7404)
                  : (c <= 7411 || (c >= 7413 && c <= 7414)))
                : (c <= 7418 || (c < 7680
                  ? (c >= 7424 && c <= 7615)
                  : (c <= 7957 || (c >= 7960 && c <= 7965)))))
              : (c <= 8005 || (c < 8027
                ? (c < 8016
                  ? (c >= 8008 && c <= 8013)
                  : (c <= 8023 || c == 8025))
                : (c <= 8027 || (c < 8031
                  ? c == 8029
                  : c <= 8061)))))))
          : (c <= 8116 || (c < 8455
            ? (c < 8178
              ? (c < 8134
                ? (c < 8126
                  ? (c >= 8118 && c <= 8124)
                  : (c <= 8126 || (c >= 8130 && c <= 8132)))
                : (c <= 8140 || (c < 8150
                  ? (c >= 8144 && c <= 8147)
                  : (c <= 8155 || (c >= 8160 && c <= 8172)))))
              : (c <= 8180 || (c < 8319
                ? (c < 8304
                  ? (c >= 8182 && c <= 8188)
                  : (c <= 8305 || (c >= 8308 && c <= 8313)))
                : (c <= 8329 || (c < 8450
                  ? (c >= 8336 && c <= 8348)
                  : c <= 8450)))))
            : (c <= 8455 || (c < 8495
              ? (c < 8484
                ? (c < 8469
                  ? (c >= 8458 && c <= 8467)
                  : (c <= 8469 || (c >= 8473 && c <= 8477)))
                : (c <= 8484 || (c < 8488
                  ? c == 8486
                  : (c <= 8488 || (c >= 8490 && c <= 8493)))))
              : (c <= 8505 || (c < 8528
                ? (c < 8517
                  ? (c >= 8508 && c <= 8511)
                  : (c <= 8521 || c == 8526))
                : (c <= 8585 || (c < 9450
                  ? (c >= 9312 && c <= 9371)
                  : c <= 9471)))))))))
        : (c <= 10131 || (c < 12690
          ? (c < 11712
            ? (c < 11568
              ? (c < 11517
                ? (c < 11499
                  ? (c >= 11264 && c <= 11492)
                  : (c <= 11502 || (c >= 11506 && c <= 11507)))
                : (c <= 11517 || (c < 11559
                  ? (c >= 11520 && c <= 11557)
                  : (c <= 11559 || c == 11565))))
              : (c <= 11623 || (c < 11688
                ? (c < 11648
                  ? c == 11631
                  : (c <= 11670 || (c >= 11680 && c <= 11686)))
                : (c <= 11694 || (c < 11704
                  ? (c >= 11696 && c <= 11702)
                  : c <= 11710)))))
            : (c <= 11718 || (c < 12344
              ? (c < 11823
                ? (c < 11728
                  ? (c >= 11720 && c <= 11726)
                  : (c <= 11734 || (c >= 11736 && c <= 11742)))
                : (c <= 11823 || (c < 12321
                  ? (c >= 12293 && c <= 12295)
                  : (c <= 12329 || (c >= 12337 && c <= 12341)))))
              : (c <= 12348 || (c < 12540
                ? (c < 12445
                  ? (c >= 12353 && c <= 12438)
                  : (c <= 12447 || (c >= 12449 && c <= 12538)))
                : (c <= 12543 || (c < 12593
                  ? (c >= 12549 && c <= 12591)
                  : c <= 12686)))))))
          : (c <= 12693 || (c < 42560
            ? (c < 13312
              ? (c < 12872
                ? (c < 12784
                  ? (c >= 12704 && c <= 12735)
                  : (c <= 12799 || (c >= 12832 && c <= 12841)))
                : (c <= 12879 || (c < 12928
                  ? (c >= 12881 && c <= 12895)
                  : (c <= 12937 || (c >= 12977 && c <= 12991)))))
              : (c <= 13312 || (c < 42192
                ? (c < 19968
                  ? c == 19903
                  : (c <= 19968 || (c >= 40959 && c <= 42124)))
                : (c <= 42237 || (c < 42512
                  ? (c >= 42240 && c <= 42508)
                  : c <= 42539)))))
            : (c <= 42606 || (c < 42965
              ? (c < 42786
                ? (c < 42656
                  ? (c >= 42623 && c <= 42653)
                  : (c <= 42735 || (c >= 42775 && c <= 42783)))
                : (c <= 42888 || (c < 42960
                  ? (c >= 42891 && c <= 42954)
                  : (c <= 42961 || c == 42963))))
              : (c <= 42969 || (c < 43020
                ? (c < 43011
                  ? (c >= 42994 && c <= 43009)
                  : (c <= 43013 || (c >= 43015 && c <= 43018)))
                : (c <= 43042 || (c < 43072
                  ? (c >= 43056 && c <= 43061)
                  : c <= 43123)))))))))))
      : (c <= 43187 || (c < 65345
        ? (c < 43808
          ? (c < 43600
            ? (c < 43396
              ? (c < 43261
                ? (c < 43250
                  ? (c >= 43216 && c <= 43225)
                  : (c <= 43255 || c == 43259))
                : (c <= 43262 || (c < 43312
                  ? (c >= 43264 && c <= 43301)
                  : (c <= 43334 || (c >= 43360 && c <= 43388)))))
              : (c <= 43442 || (c < 43520
                ? (c < 43488
                  ? (c >= 43471 && c <= 43481)
                  : (c <= 43492 || (c >= 43494 && c <= 43518)))
                : (c <= 43560 || (c < 43588
                  ? (c >= 43584 && c <= 43586)
                  : c <= 43595)))))
            : (c <= 43609 || (c < 43714
              ? (c < 43697
                ? (c < 43642
                  ? (c >= 43616 && c <= 43638)
                  : (c <= 43642 || (c >= 43646 && c <= 43695)))
                : (c <= 43697 || (c < 43705
                  ? (c >= 43701 && c <= 43702)
                  : (c <= 43709 || c == 43712))))
              : (c <= 43714 || (c < 43777
                ? (c < 43744
                  ? (c >= 43739 && c <= 43741)
                  : (c <= 43754 || (c >= 43762 && c <= 43764)))
                : (c <= 43782 || (c < 43793
                  ? (c >= 43785 && c <= 43790)
                  : c <= 43798)))))))
          : (c <= 43814 || (c < 64287
            ? (c < 55216
              ? (c < 43888
                ? (c < 43824
                  ? (c >= 43816 && c <= 43822)
                  : (c <= 43866 || (c >= 43868 && c <= 43881)))
                : (c <= 44002 || (c < 44032
                  ? (c >= 44016 && c <= 44025)
                  : (c <= 44032 || c == 55203))))
              : (c <= 55238 || (c < 64256
                ? (c < 63744
                  ? (c >= 55243 && c <= 55291)
                  : (c <= 64109 || (c >= 64112 && c <= 64217)))
                : (c <= 64262 || (c < 64285
                  ? (c >= 64275 && c <= 64279)
                  : c <= 64285)))))
            : (c <= 64296 || (c < 64848
              ? (c < 64320
                ? (c < 64312
                  ? (c >= 64298 && c <= 64310)
                  : (c <= 64316 || c == 64318))
                : (c <= 64321 || (c < 64326
                  ? (c >= 64323 && c <= 64324)
                  : (c <= 64433 || (c >= 64467 && c <= 64829)))))
              : (c <= 64911 || (c < 65142
                ? (c < 65008
                  ? (c >= 64914 && c <= 64967)
                  : (c <= 65019 || (c >= 65136 && c <= 65140)))
                : (c <= 65276 || (c < 65313
                  ? (c >= 65296 && c <= 65305)
                  : c <= 65338)))))))))
        : (c <= 65370 || (c < 66816
          ? (c < 65930
            ? (c < 65576
              ? (c < 65490
                ? (c < 65474
                  ? (c >= 65382 && c <= 65470)
                  : (c <= 65479 || (c >= 65482 && c <= 65487)))
                : (c <= 65495 || (c < 65536
                  ? (c >= 65498 && c <= 65500)
                  : (c <= 65547 || (c >= 65549 && c <= 65574)))))
              : (c <= 65594 || (c < 65664
                ? (c < 65599
                  ? (c >= 65596 && c <= 65597)
                  : (c <= 65613 || (c >= 65616 && c <= 65629)))
                : (c <= 65786 || (c < 65856
                  ? (c >= 65799 && c <= 65843)
                  : c <= 65912)))))
            : (c <= 65931 || (c < 66464
              ? (c < 66304
                ? (c < 66208
                  ? (c >= 66176 && c <= 66204)
                  : (c <= 66256 || (c >= 66273 && c <= 66299)))
                : (c <= 66339 || (c < 66384
                  ? (c >= 66349 && c <= 66378)
                  : (c <= 66421 || (c >= 66432 && c <= 66461)))))
              : (c <= 66499 || (c < 66720
                ? (c < 66513
                  ? (c >= 66504 && c <= 66511)
                  : (c <= 66517 || (c >= 66560 && c <= 66717)))
                : (c <= 66729 || (c < 66776
                  ? (c >= 66736 && c <= 66771)
                  : c <= 66811)))))))
          : (c <= 66855 || (c < 67506
            ? (c < 66995
              ? (c < 66956
                ? (c < 66928
                  ? (c >= 66864 && c <= 66915)
                  : (c <= 66938 || (c >= 66940 && c <= 66954)))
                : (c <= 66962 || (c < 66967
                  ? (c >= 66964 && c <= 66965)
                  : (c <= 66977 || (c >= 66979 && c <= 66993)))))
              : (c <= 67001 || (c < 67424
                ? (c < 67072
                  ? (c >= 67003 && c <= 67004)
                  : (c <= 67382 || (c >= 67392 && c <= 67413)))
                : (c <= 67431 || (c < 67463
                  ? (c >= 67456 && c <= 67461)
                  : c <= 67504)))))
            : (c <= 67514 || (c < 67672
              ? (c < 67639
                ? (c < 67592
                  ? (c >= 67584 && c <= 67589)
                  : (c <= 67592 || (c >= 67594 && c <= 67637)))
                : (c <= 67640 || (c < 67647
                  ? c == 67644
                  : c <= 67669)))
              : (c <= 67702 || (c < 67828
                ? (c < 67751
                  ? (c >= 67705 && c <= 67742)
                  : (c <= 67759 || (c >= 67808 && c <= 67826)))
                : (c <= 67829 || (c < 67872
                  ? (c >= 67835 && c <= 67867)
                  : c <= 67883)))))))))))))));
}

static inline bool sym_word_character_set_3(int32_t c) {
  return (c < 6656
    ? (c < 3024
      ? (c < 2384
        ? (c < 1369
          ? (c < 736
            ? (c < 181
              ? (c < 'A'
                ? (c < '-'
                  ? c == '\''
                  : (c <= '-' || (c >= '0' && c <= '9')))
                : (c <= 'Z' || (c < 170
                  ? (c >= 'b' && c <= 'z')
                  : (c <= 170 || (c >= 178 && c <= 179)))))
              : (c <= 181 || (c < 216
                ? (c < 188
                  ? (c >= 185 && c <= 186)
                  : (c <= 190 || (c >= 192 && c <= 214)))
                : (c <= 246 || (c < 710
                  ? (c >= 248 && c <= 705)
                  : c <= 721)))))
            : (c <= 740 || (c < 904
              ? (c < 886
                ? (c < 750
                  ? c == 748
                  : (c <= 750 || (c >= 880 && c <= 884)))
                : (c <= 887 || (c < 895
                  ? (c >= 890 && c <= 893)
                  : (c <= 895 || c == 902))))
              : (c <= 906 || (c < 1015
                ? (c < 910
                  ? c == 908
                  : (c <= 929 || (c >= 931 && c <= 1013)))
                : (c <= 1153 || (c < 1329
                  ? (c >= 1162 && c <= 1327)
                  : c <= 1366)))))))
          : (c <= 1369 || (c < 1969
            ? (c < 1749
              ? (c < 1568
                ? (c < 1488
                  ? (c >= 1376 && c <= 1416)
                  : (c <= 1514 || (c >= 1519 && c <= 1522)))
                : (c <= 1610 || (c < 1646
                  ? (c >= 1632 && c <= 1641)
                  : (c <= 1647 || (c >= 1649 && c <= 1747)))))
              : (c <= 1749 || (c < 1808
                ? (c < 1774
                  ? (c >= 1765 && c <= 1766)
                  : (c <= 1788 || c == 1791))
                : (c <= 1808 || (c < 1869
                  ? (c >= 1810 && c <= 1839)
                  : c <= 1957)))))
            : (c <= 1969 || (c < 2112
              ? (c < 2048
                ? (c < 2036
                  ? (c >= 1984 && c <= 2026)
                  : (c <= 2037 || c == 2042))
                : (c <= 2069 || (c < 2084
                  ? c == 2074
                  : (c <= 2084 || c == 2088))))
              : (c <= 2136 || (c < 2208
                ? (c < 2160
                  ? (c >= 2144 && c <= 2154)
                  : (c <= 2183 || (c >= 2185 && c <= 2190)))
                : (c <= 2249 || (c < 2365
                  ? (c >= 2308 && c <= 2361)
                  : c <= 2365)))))))))
        : (c <= 2384 || (c < 2707
          ? (c < 2548
            ? (c < 2482
              ? (c < 2437
                ? (c < 2406
                  ? (c >= 2392 && c <= 2401)
                  : (c <= 2415 || (c >= 2417 && c <= 2432)))
                : (c <= 2444 || (c < 2451
                  ? (c >= 2447 && c <= 2448)
                  : (c <= 2472 || (c >= 2474 && c <= 2480)))))
              : (c <= 2482 || (c < 2524
                ? (c < 2493
                  ? (c >= 2486 && c <= 2489)
                  : (c <= 2493 || c == 2510))
                : (c <= 2525 || (c < 2534
                  ? (c >= 2527 && c <= 2529)
                  : c <= 2545)))))
            : (c <= 2553 || (c < 2616
              ? (c < 2579
                ? (c < 2565
                  ? c == 2556
                  : (c <= 2570 || (c >= 2575 && c <= 2576)))
                : (c <= 2600 || (c < 2610
                  ? (c >= 2602 && c <= 2608)
                  : (c <= 2611 || (c >= 2613 && c <= 2614)))))
              : (c <= 2617 || (c < 2674
                ? (c < 2654
                  ? (c >= 2649 && c <= 2652)
                  : (c <= 2654 || (c >= 2662 && c <= 2671)))
                : (c <= 2676 || (c < 2703
                  ? (c >= 2693 && c <= 2701)
                  : c <= 2705)))))))
          : (c <= 2728 || (c < 2877
            ? (c < 2809
              ? (c < 2749
                ? (c < 2738
                  ? (c >= 2730 && c <= 2736)
                  : (c <= 2739 || (c >= 2741 && c <= 2745)))
                : (c <= 2749 || (c < 2784
                  ? c == 2768
                  : (c <= 2785 || (c >= 2790 && c <= 2799)))))
              : (c <= 2809 || (c < 2858
                ? (c < 2831
                  ? (c >= 2821 && c <= 2828)
                  : (c <= 2832 || (c >= 2835 && c <= 2856)))
                : (c <= 2864 || (c < 2869
                  ? (c >= 2866 && c <= 2867)
                  : c <= 2873)))))
            : (c <= 2877 || (c < 2962
              ? (c < 2929
                ? (c < 2911
                  ? (c >= 2908 && c <= 2909)
                  : (c <= 2913 || (c >= 2918 && c <= 2927)))
                : (c <= 2935 || (c < 2949
                  ? c == 2947
                  : (c <= 2954 || (c >= 2958 && c <= 2960)))))
              : (c <= 2965 || (c < 2979
                ? (c < 2972
                  ? (c >= 2969 && c <= 2970)
                  : (c <= 2972 || (c >= 2974 && c <= 2975)))
                : (c <= 2980 || (c < 2990
                  ? (c >= 2984 && c <= 2986)
                  : c <= 3001)))))))))))
      : (c <= 3024 || (c < 4159
        ? (c < 3430
          ? (c < 3218
            ? (c < 3165
              ? (c < 3090
                ? (c < 3077
                  ? (c >= 3046 && c <= 3058)
                  : (c <= 3084 || (c >= 3086 && c <= 3088)))
                : (c <= 3112 || (c < 3133
                  ? (c >= 3114 && c <= 3129)
                  : (c <= 3133 || (c >= 3160 && c <= 3162)))))
              : (c <= 3165 || (c < 3200
                ? (c < 3174
                  ? (c >= 3168 && c <= 3169)
                  : (c <= 3183 || (c >= 3192 && c <= 3198)))
                : (c <= 3200 || (c < 3214
                  ? (c >= 3205 && c <= 3212)
                  : c <= 3216)))))
            : (c <= 3240 || (c < 3332
              ? (c < 3293
                ? (c < 3253
                  ? (c >= 3242 && c <= 3251)
                  : (c <= 3257 || c == 3261))
                : (c <= 3294 || (c < 3302
                  ? (c >= 3296 && c <= 3297)
                  : (c <= 3311 || (c >= 3313 && c <= 3314)))))
              : (c <= 3340 || (c < 3406
                ? (c < 3346
                  ? (c >= 3342 && c <= 3344)
                  : (c <= 3386 || c == 3389))
                : (c <= 3406 || (c < 3416
                  ? (c >= 3412 && c <= 3414)
                  : c <= 3425)))))))
          : (c <= 3448 || (c < 3724
            ? (c < 3585
              ? (c < 3507
                ? (c < 3461
                  ? (c >= 3450 && c <= 3455)
                  : (c <= 3478 || (c >= 3482 && c <= 3505)))
                : (c <= 3515 || (c < 3520
                  ? c == 3517
                  : (c <= 3526 || (c >= 3558 && c <= 3567)))))
              : (c <= 3632 || (c < 3713
                ? (c < 3648
                  ? (c >= 3634 && c <= 3635)
                  : (c <= 3654 || (c >= 3664 && c <= 3673)))
                : (c <= 3714 || (c < 3718
                  ? c == 3716
                  : c <= 3722)))))
            : (c <= 3747 || (c < 3804
              ? (c < 3773
                ? (c < 3751
                  ? c == 3749
                  : (c <= 3760 || (c >= 3762 && c <= 3763)))
                : (c <= 3773 || (c < 3782
                  ? (c >= 3776 && c <= 3780)
                  : (c <= 3782 || (c >= 3792 && c <= 3801)))))
              : (c <= 3807 || (c < 3913
                ? (c < 3872
                  ? c == 3840
                  : (c <= 3891 || (c >= 3904 && c <= 3911)))
                : (c <= 3948 || (c < 4096
                  ? (c >= 3976 && c <= 3980)
                  : c <= 4138)))))))))
        : (c <= 4169 || (c < 4992
          ? (c < 4688
            ? (c < 4240
              ? (c < 4197
                ? (c < 4186
                  ? (c >= 4176 && c <= 4181)
                  : (c <= 4189 || c == 4193))
                : (c <= 4198 || (c < 4213
                  ? (c >= 4206 && c <= 4208)
                  : (c <= 4225 || c == 4238))))
              : (c <= 4249 || (c < 4304
                ? (c < 4295
                  ? (c >= 4256 && c <= 4293)
                  : (c <= 4295 || c == 4301))
                : (c <= 4346 || (c < 4682
                  ? (c >= 4348 && c <= 4680)
                  : c <= 4685)))))
            : (c <= 4694 || (c < 4800
              ? (c < 4746
                ? (c < 4698
                  ? c == 4696
                  : (c <= 4701 || (c >= 4704 && c <= 4744)))
                : (c <= 4749 || (c < 4786
                  ? (c >= 4752 && c <= 4784)
                  : (c <= 4789 || (c >= 4792 && c <= 4798)))))
              : (c <= 4800 || (c < 4882
                ? (c < 4808
                  ? (c >= 4802 && c <= 4805)
                  : (c <= 4822 || (c >= 4824 && c <= 4880)))
                : (c <= 4885 || (c < 4969
                  ? (c >= 4888 && c <= 4954)
                  : c <= 4988)))))))
          : (c <= 5007 || (c < 6108
            ? (c < 5888
              ? (c < 5743
                ? (c < 5112
                  ? (c >= 5024 && c <= 5109)
                  : (c <= 5117 || (c >= 5121 && c <= 5740)))
                : (c <= 5759 || (c < 5792
                  ? (c >= 5761 && c <= 5786)
                  : (c <= 5866 || (c >= 5870 && c <= 5880)))))
              : (c <= 5905 || (c < 5998
                ? (c < 5952
                  ? (c >= 5919 && c <= 5937)
                  : (c <= 5969 || (c >= 5984 && c <= 5996)))
                : (c <= 6000 || (c < 6103
                  ? (c >= 6016 && c <= 6067)
                  : c <= 6103)))))
            : (c <= 6108 || (c < 6320
              ? (c < 6176
                ? (c < 6128
                  ? (c >= 6112 && c <= 6121)
                  : (c <= 6137 || (c >= 6160 && c <= 6169)))
                : (c <= 6264 || (c < 6279
                  ? (c >= 6272 && c <= 6276)
                  : (c <= 6312 || c == 6314))))
              : (c <= 6389 || (c < 6528
                ? (c < 6470
                  ? (c >= 6400 && c <= 6430)
                  : (c <= 6509 || (c >= 6512 && c <= 6516)))
                : (c <= 6571 || (c < 6608
                  ? (c >= 6576 && c <= 6601)
                  : c <= 6618)))))))))))))
    : (c <= 6678 || (c < 43138
      ? (c < 10102
        ? (c < 8064
          ? (c < 7357
            ? (c < 7043
              ? (c < 6823
                ? (c < 6784
                  ? (c >= 6688 && c <= 6740)
                  : (c <= 6793 || (c >= 6800 && c <= 6809)))
                : (c <= 6823 || (c < 6981
                  ? (c >= 6917 && c <= 6963)
                  : (c <= 6988 || (c >= 6992 && c <= 7001)))))
              : (c <= 7072 || (c < 7245
                ? (c < 7168
                  ? (c >= 7086 && c <= 7141)
                  : (c <= 7203 || (c >= 7232 && c <= 7241)))
                : (c <= 7293 || (c < 7312
                  ? (c >= 7296 && c <= 7304)
                  : c <= 7354)))))
            : (c <= 7359 || (c < 7968
              ? (c < 7418
                ? (c < 7406
                  ? (c >= 7401 && c <= 7404)
                  : (c <= 7411 || (c >= 7413 && c <= 7414)))
                : (c <= 7418 || (c < 7680
                  ? (c >= 7424 && c <= 7615)
                  : (c <= 7957 || (c >= 7960 && c <= 7965)))))
              : (c <= 8005 || (c < 8027
                ? (c < 8016
                  ? (c >= 8008 && c <= 8013)
                  : (c <= 8023 || c == 8025))
                : (c <= 8027 || (c < 8031
                  ? c == 8029
                  : c <= 8061)))))))
          : (c <= 8116 || (c < 8455
            ? (c < 8178
              ? (c < 8134
                ? (c < 8126
                  ? (c >= 8118 && c <= 8124)
                  : (c <= 8126 || (c >= 8130 && c <= 8132)))
                : (c <= 8140 || (c < 8150
                  ? (c >= 8144 && c <= 8147)
                  : (c <= 8155 || (c >= 8160 && c <= 8172)))))
              : (c <= 8180 || (c < 8319
                ? (c < 8304
                  ? (c >= 8182 && c <= 8188)
                  : (c <= 8305 || (c >= 8308 && c <= 8313)))
                : (c <= 8329 || (c < 8450
                  ? (c >= 8336 && c <= 8348)
                  : c <= 8450)))))
            : (c <= 8455 || (c < 8495
              ? (c < 8484
                ? (c < 8469
                  ? (c >= 8458 && c <= 8467)
                  : (c <= 8469 || (c >= 8473 && c <= 8477)))
                : (c <= 8484 || (c < 8488
                  ? c == 8486
                  : (c <= 8488 || (c >= 8490 && c <= 8493)))))
              : (c <= 8505 || (c < 8528
                ? (c < 8517
                  ? (c >= 8508 && c <= 8511)
                  : (c <= 8521 || c == 8526))
                : (c <= 8585 || (c < 9450
                  ? (c >= 9312 && c <= 9371)
                  : c <= 9471)))))))))
        : (c <= 10131 || (c < 12690
          ? (c < 11712
            ? (c < 11568
              ? (c < 11517
                ? (c < 11499
                  ? (c >= 11264 && c <= 11492)
                  : (c <= 11502 || (c >= 11506 && c <= 11507)))
                : (c <= 11517 || (c < 11559
                  ? (c >= 11520 && c <= 11557)
                  : (c <= 11559 || c == 11565))))
              : (c <= 11623 || (c < 11688
                ? (c < 11648
                  ? c == 11631
                  : (c <= 11670 || (c >= 11680 && c <= 11686)))
                : (c <= 11694 || (c < 11704
                  ? (c >= 11696 && c <= 11702)
                  : c <= 11710)))))
            : (c <= 11718 || (c < 12344
              ? (c < 11823
                ? (c < 11728
                  ? (c >= 11720 && c <= 11726)
                  : (c <= 11734 || (c >= 11736 && c <= 11742)))
                : (c <= 11823 || (c < 12321
                  ? (c >= 12293 && c <= 12295)
                  : (c <= 12329 || (c >= 12337 && c <= 12341)))))
              : (c <= 12348 || (c < 12540
                ? (c < 12445
                  ? (c >= 12353 && c <= 12438)
                  : (c <= 12447 || (c >= 12449 && c <= 12538)))
                : (c <= 12543 || (c < 12593
                  ? (c >= 12549 && c <= 12591)
                  : c <= 12686)))))))
          : (c <= 12693 || (c < 42560
            ? (c < 13312
              ? (c < 12872
                ? (c < 12784
                  ? (c >= 12704 && c <= 12735)
                  : (c <= 12799 || (c >= 12832 && c <= 12841)))
                : (c <= 12879 || (c < 12928
                  ? (c >= 12881 && c <= 12895)
                  : (c <= 12937 || (c >= 12977 && c <= 12991)))))
              : (c <= 13312 || (c < 42192
                ? (c < 19968
                  ? c == 19903
                  : (c <= 19968 || (c >= 40959 && c <= 42124)))
                : (c <= 42237 || (c < 42512
                  ? (c >= 42240 && c <= 42508)
                  : c <= 42539)))))
            : (c <= 42606 || (c < 42965
              ? (c < 42786
                ? (c < 42656
                  ? (c >= 42623 && c <= 42653)
                  : (c <= 42735 || (c >= 42775 && c <= 42783)))
                : (c <= 42888 || (c < 42960
                  ? (c >= 42891 && c <= 42954)
                  : (c <= 42961 || c == 42963))))
              : (c <= 42969 || (c < 43020
                ? (c < 43011
                  ? (c >= 42994 && c <= 43009)
                  : (c <= 43013 || (c >= 43015 && c <= 43018)))
                : (c <= 43042 || (c < 43072
                  ? (c >= 43056 && c <= 43061)
                  : c <= 43123)))))))))))
      : (c <= 43187 || (c < 65345
        ? (c < 43808
          ? (c < 43600
            ? (c < 43396
              ? (c < 43261
                ? (c < 43250
                  ? (c >= 43216 && c <= 43225)
                  : (c <= 43255 || c == 43259))
                : (c <= 43262 || (c < 43312
                  ? (c >= 43264 && c <= 43301)
                  : (c <= 43334 || (c >= 43360 && c <= 43388)))))
              : (c <= 43442 || (c < 43520
                ? (c < 43488
                  ? (c >= 43471 && c <= 43481)
                  : (c <= 43492 || (c >= 43494 && c <= 43518)))
                : (c <= 43560 || (c < 43588
                  ? (c >= 43584 && c <= 43586)
                  : c <= 43595)))))
            : (c <= 43609 || (c < 43714
              ? (c < 43697
                ? (c < 43642
                  ? (c >= 43616 && c <= 43638)
                  : (c <= 43642 || (c >= 43646 && c <= 43695)))
                : (c <= 43697 || (c < 43705
                  ? (c >= 43701 && c <= 43702)
                  : (c <= 43709 || c == 43712))))
              : (c <= 43714 || (c < 43777
                ? (c < 43744
                  ? (c >= 43739 && c <= 43741)
                  : (c <= 43754 || (c >= 43762 && c <= 43764)))
                : (c <= 43782 || (c < 43793
                  ? (c >= 43785 && c <= 43790)
                  : c <= 43798)))))))
          : (c <= 43814 || (c < 64287
            ? (c < 55216
              ? (c < 43888
                ? (c < 43824
                  ? (c >= 43816 && c <= 43822)
                  : (c <= 43866 || (c >= 43868 && c <= 43881)))
                : (c <= 44002 || (c < 44032
                  ? (c >= 44016 && c <= 44025)
                  : (c <= 44032 || c == 55203))))
              : (c <= 55238 || (c < 64256
                ? (c < 63744
                  ? (c >= 55243 && c <= 55291)
                  : (c <= 64109 || (c >= 64112 && c <= 64217)))
                : (c <= 64262 || (c < 64285
                  ? (c >= 64275 && c <= 64279)
                  : c <= 64285)))))
            : (c <= 64296 || (c < 64848
              ? (c < 64320
                ? (c < 64312
                  ? (c >= 64298 && c <= 64310)
                  : (c <= 64316 || c == 64318))
                : (c <= 64321 || (c < 64326
                  ? (c >= 64323 && c <= 64324)
                  : (c <= 64433 || (c >= 64467 && c <= 64829)))))
              : (c <= 64911 || (c < 65142
                ? (c < 65008
                  ? (c >= 64914 && c <= 64967)
                  : (c <= 65019 || (c >= 65136 && c <= 65140)))
                : (c <= 65276 || (c < 65313
                  ? (c >= 65296 && c <= 65305)
                  : c <= 65338)))))))))
        : (c <= 65370 || (c < 66816
          ? (c < 65930
            ? (c < 65576
              ? (c < 65490
                ? (c < 65474
                  ? (c >= 65382 && c <= 65470)
                  : (c <= 65479 || (c >= 65482 && c <= 65487)))
                : (c <= 65495 || (c < 65536
                  ? (c >= 65498 && c <= 65500)
                  : (c <= 65547 || (c >= 65549 && c <= 65574)))))
              : (c <= 65594 || (c < 65664
                ? (c < 65599
                  ? (c >= 65596 && c <= 65597)
                  : (c <= 65613 || (c >= 65616 && c <= 65629)))
                : (c <= 65786 || (c < 65856
                  ? (c >= 65799 && c <= 65843)
                  : c <= 65912)))))
            : (c <= 65931 || (c < 66464
              ? (c < 66304
                ? (c < 66208
                  ? (c >= 66176 && c <= 66204)
                  : (c <= 66256 || (c >= 66273 && c <= 66299)))
                : (c <= 66339 || (c < 66384
                  ? (c >= 66349 && c <= 66378)
                  : (c <= 66421 || (c >= 66432 && c <= 66461)))))
              : (c <= 66499 || (c < 66720
                ? (c < 66513
                  ? (c >= 66504 && c <= 66511)
                  : (c <= 66517 || (c >= 66560 && c <= 66717)))
                : (c <= 66729 || (c < 66776
                  ? (c >= 66736 && c <= 66771)
                  : c <= 66811)))))))
          : (c <= 66855 || (c < 67506
            ? (c < 66995
              ? (c < 66956
                ? (c < 66928
                  ? (c >= 66864 && c <= 66915)
                  : (c <= 66938 || (c >= 66940 && c <= 66954)))
                : (c <= 66962 || (c < 66967
                  ? (c >= 66964 && c <= 66965)
                  : (c <= 66977 || (c >= 66979 && c <= 66993)))))
              : (c <= 67001 || (c < 67424
                ? (c < 67072
                  ? (c >= 67003 && c <= 67004)
                  : (c <= 67382 || (c >= 67392 && c <= 67413)))
                : (c <= 67431 || (c < 67463
                  ? (c >= 67456 && c <= 67461)
                  : c <= 67504)))))
            : (c <= 67514 || (c < 67672
              ? (c < 67639
                ? (c < 67592
                  ? (c >= 67584 && c <= 67589)
                  : (c <= 67592 || (c >= 67594 && c <= 67637)))
                : (c <= 67640 || (c < 67647
                  ? c == 67644
                  : c <= 67669)))
              : (c <= 67702 || (c < 67828
                ? (c < 67751
                  ? (c >= 67705 && c <= 67742)
                  : (c <= 67759 || (c >= 67808 && c <= 67826)))
                : (c <= 67829 || (c < 67872
                  ? (c >= 67835 && c <= 67867)
                  : c <= 67883)))))))))))))));
}

static inline bool sym_string_escape_sequence_character_set_1(int32_t c) {
  return (c < 'f'
    ? (c < '\\'
      ? (c < '\''
        ? c == '"'
        : c <= '\'')
      : (c <= '\\' || (c >= 'a' && c <= 'b')))
    : (c <= 'f' || (c < 't'
      ? (c < 'r'
        ? c == 'n'
        : c <= 'r')
      : (c <= 't' || c == 'v'))));
}

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(74);
      if (lookahead == '#') ADVANCE(77);
      if (lookahead == '$') ADVANCE(86);
      if (lookahead == '%') ADVANCE(119);
      if (lookahead == '(') ADVANCE(127);
      if (lookahead == ')') ADVANCE(113);
      if (lookahead == '*') ADVANCE(110);
      if (lookahead == '+') ADVANCE(111);
      if (lookahead == ',') ADVANCE(128);
      if (lookahead == '-') ADVANCE(117);
      if (lookahead == '.') ADVANCE(54);
      if (lookahead == '/') ADVANCE(118);
      if (lookahead == '0') ADVANCE(144);
      if (lookahead == ':') ADVANCE(83);
      if (lookahead == '<') ADVANCE(106);
      if (lookahead == '=') ADVANCE(116);
      if (lookahead == '>') ADVANCE(107);
      if (lookahead == '[') ADVANCE(108);
      if (lookahead == '\\') SKIP(69)
      if (lookahead == ']') ADVANCE(109);
      if (lookahead == '^') ADVANCE(85);
      if (lookahead == 'a') ADVANCE(40);
      if (lookahead == 'k') ADVANCE(33);
      if (lookahead == 'n') ADVANCE(42);
      if (lookahead == 'o') ADVANCE(44);
      if (lookahead == 's') ADVANCE(35);
      if (lookahead == 't') ADVANCE(31);
      if (lookahead == '{') ADVANCE(103);
      if (lookahead == '|') ADVANCE(84);
      if (lookahead == '}') ADVANCE(105);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(72)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(143);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(162);
      END_STATE();
    case 2:
      if (lookahead == '\n') SKIP(17)
      END_STATE();
    case 3:
      if (lookahead == '\n') SKIP(17)
      if (lookahead == '\r') SKIP(2)
      END_STATE();
    case 4:
      if (lookahead == '\n') SKIP(14)
      END_STATE();
    case 5:
      if (lookahead == '\n') SKIP(14)
      if (lookahead == '\r') SKIP(4)
      END_STATE();
    case 6:
      if (lookahead == '\n') SKIP(16)
      END_STATE();
    case 7:
      if (lookahead == '\n') SKIP(16)
      if (lookahead == '\r') SKIP(6)
      END_STATE();
    case 8:
      if (lookahead == '\n') SKIP(19)
      END_STATE();
    case 9:
      if (lookahead == '\n') SKIP(19)
      if (lookahead == '\r') SKIP(8)
      END_STATE();
    case 10:
      if (lookahead == '\n') SKIP(20)
      END_STATE();
    case 11:
      if (lookahead == '\n') SKIP(20)
      if (lookahead == '\r') SKIP(10)
      END_STATE();
    case 12:
      if (lookahead == '\n') SKIP(21)
      if (lookahead == '#') ADVANCE(76);
      if (lookahead == '\\') ADVANCE(154);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(12);
      if (lookahead == '\f' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) ADVANCE(156);
      if (lookahead != 0) ADVANCE(157);
      END_STATE();
    case 13:
      if (lookahead == '\n') SKIP(21)
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(52);
      if (lookahead != 0) ADVANCE(157);
      END_STATE();
    case 14:
      if (lookahead == '#') ADVANCE(77);
      if (lookahead == '$') ADVANCE(86);
      if (lookahead == '(') ADVANCE(112);
      if (lookahead == ')') ADVANCE(113);
      if (lookahead == '*') ADVANCE(110);
      if (lookahead == '+') ADVANCE(111);
      if (lookahead == ':') ADVANCE(83);
      if (lookahead == '<') ADVANCE(106);
      if (lookahead == '[') ADVANCE(108);
      if (lookahead == '\\') SKIP(5)
      if (lookahead == ']') ADVANCE(109);
      if (lookahead == '^') ADVANCE(85);
      if (lookahead == '{') ADVANCE(102);
      if (lookahead == '|') ADVANCE(84);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(14)
      if (sym_word_character_set_1(lookahead)) ADVANCE(101);
      END_STATE();
    case 15:
      if (lookahead == '#') ADVANCE(77);
      if (lookahead == '%') ADVANCE(119);
      if (lookahead == '(') ADVANCE(127);
      if (lookahead == ')') ADVANCE(113);
      if (lookahead == '*') ADVANCE(110);
      if (lookahead == '+') ADVANCE(111);
      if (lookahead == ',') ADVANCE(128);
      if (lookahead == '-') ADVANCE(117);
      if (lookahead == '/') ADVANCE(118);
      if (lookahead == ':') ADVANCE(83);
      if (lookahead == '=') ADVANCE(116);
      if (lookahead == '\\') SKIP(7)
      if (lookahead == 'o') ADVANCE(44);
      if (lookahead == '}') ADVANCE(104);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(16)
      END_STATE();
    case 16:
      if (lookahead == '#') ADVANCE(77);
      if (lookahead == '%') ADVANCE(119);
      if (lookahead == ')') ADVANCE(113);
      if (lookahead == '*') ADVANCE(110);
      if (lookahead == '+') ADVANCE(111);
      if (lookahead == ',') ADVANCE(128);
      if (lookahead == '-') ADVANCE(117);
      if (lookahead == '/') ADVANCE(118);
      if (lookahead == ':') ADVANCE(83);
      if (lookahead == '=') ADVANCE(116);
      if (lookahead == '\\') SKIP(7)
      if (lookahead == 'o') ADVANCE(44);
      if (lookahead == '}') ADVANCE(104);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(16)
      END_STATE();
    case 17:
      if (lookahead == '#') ADVANCE(77);
      if (lookahead == '(') ADVANCE(112);
      if (lookahead == ')') ADVANCE(113);
      if (lookahead == ',') ADVANCE(128);
      if (lookahead == '-') ADVANCE(117);
      if (lookahead == '.') ADVANCE(54);
      if (lookahead == '0') ADVANCE(144);
      if (lookahead == '\\') SKIP(3)
      if (lookahead == 'k') ADVANCE(132);
      if (lookahead == 's') ADVANCE(135);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(17)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(143);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      END_STATE();
    case 18:
      if (lookahead == '#') ADVANCE(77);
      if (lookahead == '(') ADVANCE(112);
      if (lookahead == '-') ADVANCE(117);
      if (lookahead == '.') ADVANCE(54);
      if (lookahead == '0') ADVANCE(144);
      if (lookahead == '\\') ADVANCE(163);
      if (lookahead == 'k') ADVANCE(132);
      if (lookahead == 's') ADVANCE(135);
      if (lookahead == '{') ADVANCE(103);
      if (lookahead == '}') ADVANCE(105);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(18)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(143);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      END_STATE();
    case 19:
      if (lookahead == '#') ADVANCE(77);
      if (lookahead == '\\') SKIP(9)
      if (lookahead == 'a') ADVANCE(136);
      if (lookahead == 'n') ADVANCE(137);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(19)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      END_STATE();
    case 20:
      if (lookahead == '#') ADVANCE(77);
      if (lookahead == '\\') SKIP(11)
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(20)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      END_STATE();
    case 21:
      if (lookahead == '#') ADVANCE(78);
      if (lookahead == '\\') ADVANCE(155);
      if (lookahead == '\f' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) ADVANCE(156);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(21)
      if (lookahead != 0) ADVANCE(158);
      END_STATE();
    case 22:
      if (lookahead == '(') ADVANCE(121);
      END_STATE();
    case 23:
      if (lookahead == '(') ADVANCE(26);
      END_STATE();
    case 24:
      if (lookahead == '(') ADVANCE(122);
      END_STATE();
    case 25:
      if (lookahead == '(') ADVANCE(27);
      END_STATE();
    case 26:
      if (lookahead == ')') ADVANCE(115);
      END_STATE();
    case 27:
      if (lookahead == ')') ADVANCE(114);
      END_STATE();
    case 28:
      if (lookahead == '_') ADVANCE(51);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(146);
      END_STATE();
    case 29:
      if (lookahead == '_') ADVANCE(53);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(147);
      END_STATE();
    case 30:
      if (lookahead == '_') ADVANCE(58);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(148);
      END_STATE();
    case 31:
      if (lookahead == 'a') ADVANCE(38);
      END_STATE();
    case 32:
      if (lookahead == 'd') ADVANCE(79);
      END_STATE();
    case 33:
      if (lookahead == 'e') ADVANCE(49);
      END_STATE();
    case 34:
      if (lookahead == 'e') ADVANCE(43);
      END_STATE();
    case 35:
      if (lookahead == 'e') ADVANCE(48);
      if (lookahead == 'l') ADVANCE(36);
      END_STATE();
    case 36:
      if (lookahead == 'e') ADVANCE(34);
      END_STATE();
    case 37:
      if (lookahead == 'g') ADVANCE(45);
      END_STATE();
    case 38:
      if (lookahead == 'g') ADVANCE(23);
      END_STATE();
    case 39:
      if (lookahead == 'i') ADVANCE(41);
      END_STATE();
    case 40:
      if (lookahead == 'n') ADVANCE(32);
      END_STATE();
    case 41:
      if (lookahead == 'n') ADVANCE(37);
      END_STATE();
    case 42:
      if (lookahead == 'o') ADVANCE(46);
      END_STATE();
    case 43:
      if (lookahead == 'p') ADVANCE(24);
      END_STATE();
    case 44:
      if (lookahead == 'r') ADVANCE(120);
      END_STATE();
    case 45:
      if (lookahead == 's') ADVANCE(25);
      END_STATE();
    case 46:
      if (lookahead == 't') ADVANCE(81);
      END_STATE();
    case 47:
      if (lookahead == 't') ADVANCE(39);
      END_STATE();
    case 48:
      if (lookahead == 't') ADVANCE(47);
      END_STATE();
    case 49:
      if (lookahead == 'y') ADVANCE(22);
      END_STATE();
    case 50:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(55);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(151);
      END_STATE();
    case 51:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(146);
      END_STATE();
    case 52:
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(52);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(157);
      END_STATE();
    case 53:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(147);
      END_STATE();
    case 54:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(150);
      END_STATE();
    case 55:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(151);
      END_STATE();
    case 56:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(161);
      END_STATE();
    case 57:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(56);
      END_STATE();
    case 58:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(148);
      END_STATE();
    case 59:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(161);
      END_STATE();
    case 60:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(59);
      END_STATE();
    case 61:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(60);
      END_STATE();
    case 62:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(61);
      END_STATE();
    case 63:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(62);
      END_STATE();
    case 64:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(63);
      END_STATE();
    case 65:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(64);
      END_STATE();
    case 66:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(65);
      END_STATE();
    case 67:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      END_STATE();
    case 68:
      if (eof) ADVANCE(74);
      if (lookahead == '\n') SKIP(72)
      END_STATE();
    case 69:
      if (eof) ADVANCE(74);
      if (lookahead == '\n') SKIP(72)
      if (lookahead == '\r') SKIP(68)
      END_STATE();
    case 70:
      if (eof) ADVANCE(74);
      if (lookahead == '\n') SKIP(73)
      END_STATE();
    case 71:
      if (eof) ADVANCE(74);
      if (lookahead == '\n') SKIP(73)
      if (lookahead == '\r') SKIP(70)
      END_STATE();
    case 72:
      if (eof) ADVANCE(74);
      if (lookahead == '#') ADVANCE(77);
      if (lookahead == '$') ADVANCE(86);
      if (lookahead == '%') ADVANCE(119);
      if (lookahead == '(') ADVANCE(112);
      if (lookahead == ')') ADVANCE(113);
      if (lookahead == '*') ADVANCE(110);
      if (lookahead == '+') ADVANCE(111);
      if (lookahead == ',') ADVANCE(128);
      if (lookahead == '-') ADVANCE(117);
      if (lookahead == '.') ADVANCE(54);
      if (lookahead == '/') ADVANCE(118);
      if (lookahead == '0') ADVANCE(144);
      if (lookahead == ':') ADVANCE(83);
      if (lookahead == '<') ADVANCE(106);
      if (lookahead == '=') ADVANCE(116);
      if (lookahead == '>') ADVANCE(107);
      if (lookahead == '[') ADVANCE(108);
      if (lookahead == '\\') SKIP(69)
      if (lookahead == ']') ADVANCE(109);
      if (lookahead == '^') ADVANCE(85);
      if (lookahead == 'a') ADVANCE(40);
      if (lookahead == 'k') ADVANCE(33);
      if (lookahead == 'n') ADVANCE(42);
      if (lookahead == 'o') ADVANCE(44);
      if (lookahead == 's') ADVANCE(35);
      if (lookahead == 't') ADVANCE(31);
      if (lookahead == '{') ADVANCE(103);
      if (lookahead == '|') ADVANCE(84);
      if (lookahead == '}') ADVANCE(105);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(72)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(143);
      END_STATE();
    case 73:
      if (eof) ADVANCE(74);
      if (lookahead == '#') ADVANCE(77);
      if (lookahead == '(') ADVANCE(112);
      if (lookahead == '<') ADVANCE(106);
      if (lookahead == '[') ADVANCE(108);
      if (lookahead == '\\') SKIP(71)
      if (lookahead == '^') ADVANCE(85);
      if (lookahead == 'k') ADVANCE(91);
      if (lookahead == 's') ADVANCE(92);
      if (lookahead == 't') ADVANCE(90);
      if (lookahead == '{') ADVANCE(102);
      if (lookahead == '}') ADVANCE(104);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(73)
      if (sym_word_character_set_1(lookahead)) ADVANCE(101);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(126);
      if (lookahead == ')') ADVANCE(77);
      if (lookahead != 0) ADVANCE(75);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(76);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(76);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(77);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(76);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_and);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_and);
      if (lookahead == '.') ADVANCE(67);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_not);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_not);
      if (lookahead == '.') ADVANCE(67);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym_start_anchor);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_end_anchor);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '(') ADVANCE(121);
      if (sym_word_character_set_2(lookahead)) ADVANCE(101);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '(') ADVANCE(26);
      if (sym_word_character_set_2(lookahead)) ADVANCE(101);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '(') ADVANCE(27);
      if (sym_word_character_set_2(lookahead)) ADVANCE(101);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'a') ADVANCE(94);
      if (sym_word_character_set_3(lookahead)) ADVANCE(101);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'e') ADVANCE(100);
      if (sym_word_character_set_2(lookahead)) ADVANCE(101);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'e') ADVANCE(99);
      if (sym_word_character_set_2(lookahead)) ADVANCE(101);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'g') ADVANCE(97);
      if (sym_word_character_set_2(lookahead)) ADVANCE(101);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'g') ADVANCE(88);
      if (sym_word_character_set_2(lookahead)) ADVANCE(101);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'i') ADVANCE(96);
      if (sym_word_character_set_2(lookahead)) ADVANCE(101);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'n') ADVANCE(93);
      if (sym_word_character_set_2(lookahead)) ADVANCE(101);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 's') ADVANCE(89);
      if (sym_word_character_set_2(lookahead)) ADVANCE(101);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 't') ADVANCE(95);
      if (sym_word_character_set_2(lookahead)) ADVANCE(101);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 't') ADVANCE(98);
      if (sym_word_character_set_2(lookahead)) ADVANCE(101);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'y') ADVANCE(87);
      if (sym_word_character_set_2(lookahead)) ADVANCE(101);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_word);
      if (sym_word_character_set_2(lookahead)) ADVANCE(101);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      if (lookahead == '{') ADVANCE(159);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      if (lookahead == '}') ADVANCE(160);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym__settings_binding);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym__tag_binding);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(anon_sym_or);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(anon_sym_key_LPAREN);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(anon_sym_sleep_LPAREN);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(aux_sym__implicit_string_argument_token1);
      if (lookahead == '\n') ADVANCE(125);
      if (lookahead == '\r') ADVANCE(124);
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(126);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(aux_sym__implicit_string_argument_token1);
      if (lookahead == '\n') ADVANCE(125);
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(126);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(aux_sym__implicit_string_argument_token1);
      if (lookahead == '#') ADVANCE(75);
      if (lookahead == '\\') ADVANCE(123);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) ADVANCE(125);
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(126);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(aux_sym__implicit_string_argument_token1);
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(126);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(anon_sym_LPAREN2);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '(') ADVANCE(121);
      if (lookahead == '.') ADVANCE(67);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '(') ADVANCE(122);
      if (lookahead == '.') ADVANCE(67);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(67);
      if (lookahead == 'd') ADVANCE(80);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(67);
      if (lookahead == 'e') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(67);
      if (lookahead == 'e') ADVANCE(138);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(67);
      if (lookahead == 'e') ADVANCE(133);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(67);
      if (lookahead == 'l') ADVANCE(134);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(67);
      if (lookahead == 'n') ADVANCE(131);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(67);
      if (lookahead == 'o') ADVANCE(139);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(67);
      if (lookahead == 'p') ADVANCE(130);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(67);
      if (lookahead == 't') ADVANCE(82);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(67);
      if (lookahead == 'y') ADVANCE(129);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(67);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym_integer);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(152);
      if (lookahead == '_') ADVANCE(145);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(50);
      if (lookahead == 'J' ||
          lookahead == 'L' ||
          lookahead == 'j' ||
          lookahead == 'l') ADVANCE(142);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(143);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(152);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(28);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(29);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(30);
      if (lookahead == '_') ADVANCE(145);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(50);
      if (lookahead == 'J' ||
          lookahead == 'L' ||
          lookahead == 'j' ||
          lookahead == 'l') ADVANCE(142);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(143);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(152);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(50);
      if (lookahead == 'J' ||
          lookahead == 'L' ||
          lookahead == 'j' ||
          lookahead == 'l') ADVANCE(142);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(143);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '_') ADVANCE(51);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(142);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(146);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '_') ADVANCE(53);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(142);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(147);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '_') ADVANCE(58);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(142);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(148);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym_float);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == '_') ADVANCE(152);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(50);
      if (lookahead == 'J' ||
          lookahead == 'L' ||
          lookahead == 'j' ||
          lookahead == 'l') ADVANCE(149);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(150);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == '_') ADVANCE(153);
      if (lookahead == 'J' ||
          lookahead == 'L' ||
          lookahead == 'j' ||
          lookahead == 'l') ADVANCE(149);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(151);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(50);
      if (lookahead == 'J' ||
          lookahead == 'L' ||
          lookahead == 'j' ||
          lookahead == 'l') ADVANCE(149);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(150);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == 'J' ||
          lookahead == 'L' ||
          lookahead == 'j' ||
          lookahead == 'l') ADVANCE(149);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(151);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym_implicit_string);
      if (lookahead == '\r') ADVANCE(13);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(52);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(157);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym_implicit_string);
      if (lookahead == '\r') ADVANCE(13);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(52);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym_implicit_string);
      if (lookahead == '#') ADVANCE(76);
      if (lookahead == '\\') ADVANCE(154);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(12);
      if (lookahead == '\f' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) ADVANCE(156);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(157);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym_implicit_string);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(52);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(157);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym_implicit_string);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(52);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(anon_sym_LBRACE_LBRACE);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(anon_sym_RBRACE_RBRACE);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym_string_escape_sequence);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym_string_escape_sequence);
      if (lookahead == '\\') ADVANCE(163);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym__not_escapesequence);
      if (lookahead == '\n') ADVANCE(162);
      if (lookahead == '\r') ADVANCE(1);
      if (sym_string_escape_sequence_character_set_1(lookahead)) ADVANCE(161);
      if (lookahead == 'U') ADVANCE(66);
      if (lookahead == 'u') ADVANCE(62);
      if (lookahead == 'x') ADVANCE(60);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(57);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 0, .external_lex_state = 2},
  [2] = {.lex_state = 73, .external_lex_state = 3},
  [3] = {.lex_state = 73, .external_lex_state = 3},
  [4] = {.lex_state = 73, .external_lex_state = 3},
  [5] = {.lex_state = 18, .external_lex_state = 4},
  [6] = {.lex_state = 17, .external_lex_state = 5},
  [7] = {.lex_state = 17, .external_lex_state = 6},
  [8] = {.lex_state = 17, .external_lex_state = 5},
  [9] = {.lex_state = 17, .external_lex_state = 5},
  [10] = {.lex_state = 17, .external_lex_state = 6},
  [11] = {.lex_state = 17, .external_lex_state = 6},
  [12] = {.lex_state = 14, .external_lex_state = 3},
  [13] = {.lex_state = 17, .external_lex_state = 7},
  [14] = {.lex_state = 17, .external_lex_state = 7},
  [15] = {.lex_state = 14, .external_lex_state = 3},
  [16] = {.lex_state = 14, .external_lex_state = 3},
  [17] = {.lex_state = 17, .external_lex_state = 7},
  [18] = {.lex_state = 14, .external_lex_state = 3},
  [19] = {.lex_state = 14, .external_lex_state = 3},
  [20] = {.lex_state = 17, .external_lex_state = 7},
  [21] = {.lex_state = 17, .external_lex_state = 7},
  [22] = {.lex_state = 17, .external_lex_state = 7},
  [23] = {.lex_state = 17, .external_lex_state = 7},
  [24] = {.lex_state = 17, .external_lex_state = 7},
  [25] = {.lex_state = 17, .external_lex_state = 7},
  [26] = {.lex_state = 17, .external_lex_state = 7},
  [27] = {.lex_state = 17, .external_lex_state = 7},
  [28] = {.lex_state = 17, .external_lex_state = 7},
  [29] = {.lex_state = 17, .external_lex_state = 7},
  [30] = {.lex_state = 17, .external_lex_state = 7},
  [31] = {.lex_state = 17, .external_lex_state = 7},
  [32] = {.lex_state = 17, .external_lex_state = 7},
  [33] = {.lex_state = 17, .external_lex_state = 7},
  [34] = {.lex_state = 17, .external_lex_state = 7},
  [35] = {.lex_state = 17, .external_lex_state = 7},
  [36] = {.lex_state = 14, .external_lex_state = 3},
  [37] = {.lex_state = 14, .external_lex_state = 3},
  [38] = {.lex_state = 14, .external_lex_state = 3},
  [39] = {.lex_state = 14, .external_lex_state = 3},
  [40] = {.lex_state = 18, .external_lex_state = 8},
  [41] = {.lex_state = 18, .external_lex_state = 8},
  [42] = {.lex_state = 18, .external_lex_state = 8},
  [43] = {.lex_state = 18, .external_lex_state = 8},
  [44] = {.lex_state = 14, .external_lex_state = 3},
  [45] = {.lex_state = 14, .external_lex_state = 3},
  [46] = {.lex_state = 14, .external_lex_state = 3},
  [47] = {.lex_state = 18, .external_lex_state = 8},
  [48] = {.lex_state = 14, .external_lex_state = 3},
  [49] = {.lex_state = 14, .external_lex_state = 3},
  [50] = {.lex_state = 15, .external_lex_state = 3},
  [51] = {.lex_state = 73, .external_lex_state = 3},
  [52] = {.lex_state = 73, .external_lex_state = 3},
  [53] = {.lex_state = 73, .external_lex_state = 3},
  [54] = {.lex_state = 73, .external_lex_state = 3},
  [55] = {.lex_state = 15, .external_lex_state = 9},
  [56] = {.lex_state = 73, .external_lex_state = 3},
  [57] = {.lex_state = 73, .external_lex_state = 3},
  [58] = {.lex_state = 73, .external_lex_state = 3},
  [59] = {.lex_state = 73, .external_lex_state = 3},
  [60] = {.lex_state = 73, .external_lex_state = 3},
  [61] = {.lex_state = 15, .external_lex_state = 3},
  [62] = {.lex_state = 73, .external_lex_state = 3},
  [63] = {.lex_state = 15, .external_lex_state = 9},
  [64] = {.lex_state = 73, .external_lex_state = 3},
  [65] = {.lex_state = 73, .external_lex_state = 3},
  [66] = {.lex_state = 73, .external_lex_state = 3},
  [67] = {.lex_state = 73, .external_lex_state = 3},
  [68] = {.lex_state = 73, .external_lex_state = 3},
  [69] = {.lex_state = 15, .external_lex_state = 3},
  [70] = {.lex_state = 15, .external_lex_state = 3},
  [71] = {.lex_state = 15, .external_lex_state = 3},
  [72] = {.lex_state = 15, .external_lex_state = 3},
  [73] = {.lex_state = 17, .external_lex_state = 5},
  [74] = {.lex_state = 0, .external_lex_state = 3},
  [75] = {.lex_state = 15, .external_lex_state = 3},
  [76] = {.lex_state = 15, .external_lex_state = 3},
  [77] = {.lex_state = 15, .external_lex_state = 9},
  [78] = {.lex_state = 15, .external_lex_state = 3},
  [79] = {.lex_state = 17, .external_lex_state = 5},
  [80] = {.lex_state = 17, .external_lex_state = 5},
  [81] = {.lex_state = 15, .external_lex_state = 3},
  [82] = {.lex_state = 15, .external_lex_state = 3},
  [83] = {.lex_state = 0, .external_lex_state = 3},
  [84] = {.lex_state = 15, .external_lex_state = 3},
  [85] = {.lex_state = 15, .external_lex_state = 3},
  [86] = {.lex_state = 15, .external_lex_state = 3},
  [87] = {.lex_state = 15, .external_lex_state = 3},
  [88] = {.lex_state = 15, .external_lex_state = 3},
  [89] = {.lex_state = 18, .external_lex_state = 8},
  [90] = {.lex_state = 18, .external_lex_state = 8},
  [91] = {.lex_state = 18, .external_lex_state = 8},
  [92] = {.lex_state = 19, .external_lex_state = 10},
  [93] = {.lex_state = 19, .external_lex_state = 10},
  [94] = {.lex_state = 19, .external_lex_state = 10},
  [95] = {.lex_state = 0, .external_lex_state = 3},
  [96] = {.lex_state = 15, .external_lex_state = 3},
  [97] = {.lex_state = 0, .external_lex_state = 9},
  [98] = {.lex_state = 0, .external_lex_state = 9},
  [99] = {.lex_state = 0, .external_lex_state = 9},
  [100] = {.lex_state = 0, .external_lex_state = 9},
  [101] = {.lex_state = 0, .external_lex_state = 9},
  [102] = {.lex_state = 0, .external_lex_state = 9},
  [103] = {.lex_state = 0, .external_lex_state = 9},
  [104] = {.lex_state = 0, .external_lex_state = 9},
  [105] = {.lex_state = 0, .external_lex_state = 9},
  [106] = {.lex_state = 0, .external_lex_state = 9},
  [107] = {.lex_state = 0, .external_lex_state = 9},
  [108] = {.lex_state = 0, .external_lex_state = 9},
  [109] = {.lex_state = 0, .external_lex_state = 3},
  [110] = {.lex_state = 0, .external_lex_state = 9},
  [111] = {.lex_state = 0, .external_lex_state = 9},
  [112] = {.lex_state = 0, .external_lex_state = 9},
  [113] = {.lex_state = 0, .external_lex_state = 9},
  [114] = {.lex_state = 0, .external_lex_state = 9},
  [115] = {.lex_state = 0, .external_lex_state = 9},
  [116] = {.lex_state = 0, .external_lex_state = 9},
  [117] = {.lex_state = 0, .external_lex_state = 3},
  [118] = {.lex_state = 0, .external_lex_state = 3},
  [119] = {.lex_state = 0, .external_lex_state = 3},
  [120] = {.lex_state = 0, .external_lex_state = 3},
  [121] = {.lex_state = 0, .external_lex_state = 3},
  [122] = {.lex_state = 0, .external_lex_state = 3},
  [123] = {.lex_state = 19, .external_lex_state = 3},
  [124] = {.lex_state = 19, .external_lex_state = 3},
  [125] = {.lex_state = 0, .external_lex_state = 3},
  [126] = {.lex_state = 19, .external_lex_state = 10},
  [127] = {.lex_state = 0, .external_lex_state = 3},
  [128] = {.lex_state = 19, .external_lex_state = 10},
  [129] = {.lex_state = 0, .external_lex_state = 3},
  [130] = {.lex_state = 0, .external_lex_state = 3},
  [131] = {.lex_state = 19, .external_lex_state = 3},
  [132] = {.lex_state = 0, .external_lex_state = 3},
  [133] = {.lex_state = 0, .external_lex_state = 3},
  [134] = {.lex_state = 125, .external_lex_state = 3},
  [135] = {.lex_state = 125, .external_lex_state = 3},
  [136] = {.lex_state = 125, .external_lex_state = 3},
  [137] = {.lex_state = 125, .external_lex_state = 3},
  [138] = {.lex_state = 0, .external_lex_state = 3},
  [139] = {.lex_state = 0, .external_lex_state = 3},
  [140] = {.lex_state = 0, .external_lex_state = 3},
  [141] = {.lex_state = 73, .external_lex_state = 3},
  [142] = {.lex_state = 0, .external_lex_state = 3},
  [143] = {.lex_state = 0, .external_lex_state = 3},
  [144] = {.lex_state = 0, .external_lex_state = 3},
  [145] = {.lex_state = 20, .external_lex_state = 3},
  [146] = {.lex_state = 0, .external_lex_state = 3},
  [147] = {.lex_state = 0, .external_lex_state = 3},
  [148] = {.lex_state = 0, .external_lex_state = 3},
  [149] = {.lex_state = 0, .external_lex_state = 3},
  [150] = {.lex_state = 20, .external_lex_state = 3},
  [151] = {.lex_state = 0, .external_lex_state = 3},
  [152] = {.lex_state = 0, .external_lex_state = 3},
  [153] = {.lex_state = 20, .external_lex_state = 3},
  [154] = {.lex_state = 0, .external_lex_state = 9},
  [155] = {.lex_state = 0, .external_lex_state = 3},
  [156] = {.lex_state = 0, .external_lex_state = 9},
  [157] = {.lex_state = 0, .external_lex_state = 3},
  [158] = {.lex_state = 21, .external_lex_state = 3},
  [159] = {.lex_state = 21, .external_lex_state = 3},
  [160] = {.lex_state = 0, .external_lex_state = 9},
  [161] = {.lex_state = 0, .external_lex_state = 3},
  [162] = {.lex_state = 0, .external_lex_state = 3},
  [163] = {.lex_state = 0, .external_lex_state = 3},
  [164] = {.lex_state = 0, .external_lex_state = 3},
};

enum {
  ts_external_token__matches_start = 0,
  ts_external_token__matches_end = 1,
  ts_external_token__matches_empty = 2,
  ts_external_token__newline = 3,
  ts_external_token__indent = 4,
  ts_external_token__dedent = 5,
  ts_external_token__string_start = 6,
  ts_external_token_string_content = 7,
  ts_external_token__string_end = 8,
  ts_external_token_comment = 9,
};

static const TSSymbol ts_external_scanner_symbol_map[EXTERNAL_TOKEN_COUNT] = {
  [ts_external_token__matches_start] = sym__matches_start,
  [ts_external_token__matches_end] = sym__matches_end,
  [ts_external_token__matches_empty] = sym__matches_empty,
  [ts_external_token__newline] = sym__newline,
  [ts_external_token__indent] = sym__indent,
  [ts_external_token__dedent] = sym__dedent,
  [ts_external_token__string_start] = sym__string_start,
  [ts_external_token_string_content] = sym_string_content,
  [ts_external_token__string_end] = sym__string_end,
  [ts_external_token_comment] = sym_comment,
};

static const bool ts_external_scanner_states[11][EXTERNAL_TOKEN_COUNT] = {
  [1] = {
    [ts_external_token__matches_start] = true,
    [ts_external_token__matches_end] = true,
    [ts_external_token__matches_empty] = true,
    [ts_external_token__newline] = true,
    [ts_external_token__indent] = true,
    [ts_external_token__dedent] = true,
    [ts_external_token__string_start] = true,
    [ts_external_token_string_content] = true,
    [ts_external_token__string_end] = true,
    [ts_external_token_comment] = true,
  },
  [2] = {
    [ts_external_token__matches_start] = true,
    [ts_external_token__matches_empty] = true,
    [ts_external_token_comment] = true,
  },
  [3] = {
    [ts_external_token_comment] = true,
  },
  [4] = {
    [ts_external_token__string_start] = true,
    [ts_external_token_string_content] = true,
    [ts_external_token__string_end] = true,
    [ts_external_token_comment] = true,
  },
  [5] = {
    [ts_external_token__dedent] = true,
    [ts_external_token__string_start] = true,
    [ts_external_token_comment] = true,
  },
  [6] = {
    [ts_external_token__indent] = true,
    [ts_external_token__string_start] = true,
    [ts_external_token_comment] = true,
  },
  [7] = {
    [ts_external_token__string_start] = true,
    [ts_external_token_comment] = true,
  },
  [8] = {
    [ts_external_token_string_content] = true,
    [ts_external_token__string_end] = true,
    [ts_external_token_comment] = true,
  },
  [9] = {
    [ts_external_token__newline] = true,
    [ts_external_token_comment] = true,
  },
  [10] = {
    [ts_external_token__matches_end] = true,
    [ts_external_token_comment] = true,
  },
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
    [anon_sym_and] = ACTIONS(1),
    [anon_sym_not] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(1),
    [sym_start_anchor] = ACTIONS(1),
    [sym_end_anchor] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [sym__settings_binding] = ACTIONS(1),
    [sym__tag_binding] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_PERCENT] = ACTIONS(1),
    [anon_sym_or] = ACTIONS(1),
    [anon_sym_key_LPAREN] = ACTIONS(1),
    [anon_sym_sleep_LPAREN] = ACTIONS(1),
    [anon_sym_LPAREN2] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [sym_integer] = ACTIONS(1),
    [sym_float] = ACTIONS(1),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE_RBRACE] = ACTIONS(1),
    [sym__matches_start] = ACTIONS(1),
    [sym__matches_end] = ACTIONS(1),
    [sym__matches_empty] = ACTIONS(1),
    [sym__newline] = ACTIONS(1),
    [sym__indent] = ACTIONS(1),
    [sym__dedent] = ACTIONS(1),
    [sym__string_start] = ACTIONS(1),
    [sym_string_content] = ACTIONS(1),
    [sym__string_end] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(164),
    [sym_matches] = STATE(2),
    [sym_comment] = ACTIONS(3),
    [sym__matches_start] = ACTIONS(5),
    [sym__matches_empty] = ACTIONS(7),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 20,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      ts_builtin_sym_end,
    ACTIONS(11), 1,
      sym_start_anchor,
    ACTIONS(13), 1,
      sym_word,
    ACTIONS(15), 1,
      anon_sym_LBRACE,
    ACTIONS(17), 1,
      anon_sym_LT,
    ACTIONS(19), 1,
      anon_sym_LBRACK,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    ACTIONS(23), 1,
      sym__settings_binding,
    ACTIONS(25), 1,
      sym__tag_binding,
    ACTIONS(27), 1,
      anon_sym_key_LPAREN,
    STATE(120), 1,
      sym__optional_anchor,
    STATE(157), 1,
      sym_rule,
    STATE(163), 1,
      sym_declarations,
    STATE(4), 2,
      sym_declaration,
      aux_sym_declarations_repeat1,
    STATE(119), 2,
      sym__optional_seq,
      sym_seq,
    STATE(147), 2,
      sym__key_binding,
      sym_key_action,
    STATE(162), 2,
      sym__optional_choice,
      sym_choice,
    STATE(59), 4,
      sym_command_declaration,
      sym_tag_import_declaration,
      sym_key_binding_declaration,
      sym_settings_declaration,
    STATE(12), 7,
      sym__primary_rule,
      sym_list,
      sym_capture,
      sym_optional,
      sym_repeat,
      sym_repeat1,
      sym_parenthesized_rule,
  [74] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(29), 1,
      ts_builtin_sym_end,
    ACTIONS(31), 1,
      sym_start_anchor,
    ACTIONS(34), 1,
      sym_word,
    ACTIONS(37), 1,
      anon_sym_LBRACE,
    ACTIONS(40), 1,
      anon_sym_LT,
    ACTIONS(43), 1,
      anon_sym_LBRACK,
    ACTIONS(46), 1,
      anon_sym_LPAREN,
    ACTIONS(49), 1,
      sym__settings_binding,
    ACTIONS(52), 1,
      sym__tag_binding,
    ACTIONS(55), 1,
      anon_sym_key_LPAREN,
    STATE(120), 1,
      sym__optional_anchor,
    STATE(157), 1,
      sym_rule,
    STATE(3), 2,
      sym_declaration,
      aux_sym_declarations_repeat1,
    STATE(119), 2,
      sym__optional_seq,
      sym_seq,
    STATE(147), 2,
      sym__key_binding,
      sym_key_action,
    STATE(162), 2,
      sym__optional_choice,
      sym_choice,
    STATE(59), 4,
      sym_command_declaration,
      sym_tag_import_declaration,
      sym_key_binding_declaration,
      sym_settings_declaration,
    STATE(12), 7,
      sym__primary_rule,
      sym_list,
      sym_capture,
      sym_optional,
      sym_repeat,
      sym_repeat1,
      sym_parenthesized_rule,
  [145] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      sym_start_anchor,
    ACTIONS(13), 1,
      sym_word,
    ACTIONS(15), 1,
      anon_sym_LBRACE,
    ACTIONS(17), 1,
      anon_sym_LT,
    ACTIONS(19), 1,
      anon_sym_LBRACK,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    ACTIONS(23), 1,
      sym__settings_binding,
    ACTIONS(25), 1,
      sym__tag_binding,
    ACTIONS(27), 1,
      anon_sym_key_LPAREN,
    ACTIONS(58), 1,
      ts_builtin_sym_end,
    STATE(120), 1,
      sym__optional_anchor,
    STATE(157), 1,
      sym_rule,
    STATE(3), 2,
      sym_declaration,
      aux_sym_declarations_repeat1,
    STATE(119), 2,
      sym__optional_seq,
      sym_seq,
    STATE(147), 2,
      sym__key_binding,
      sym_key_action,
    STATE(162), 2,
      sym__optional_choice,
      sym_choice,
    STATE(59), 4,
      sym_command_declaration,
      sym_tag_import_declaration,
      sym_key_binding_declaration,
      sym_settings_declaration,
    STATE(12), 7,
      sym__primary_rule,
      sym_list,
      sym_capture,
      sym_optional,
      sym_repeat,
      sym_repeat1,
      sym_parenthesized_rule,
  [216] = 12,
    ACTIONS(60), 1,
      sym_comment,
    ACTIONS(64), 1,
      anon_sym_LPAREN,
    ACTIONS(66), 1,
      anon_sym_DASH,
    ACTIONS(68), 1,
      anon_sym_key_LPAREN,
    ACTIONS(70), 1,
      anon_sym_sleep_LPAREN,
    ACTIONS(72), 1,
      sym_identifier,
    ACTIONS(76), 1,
      sym__string_start,
    STATE(96), 1,
      sym_expression,
    ACTIONS(74), 2,
      sym_integer,
      sym_float,
    ACTIONS(78), 2,
      sym_string_content,
      sym__string_end,
    ACTIONS(62), 6,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACE_LBRACE,
      anon_sym_RBRACE_RBRACE,
      sym_string_escape_sequence,
      sym__not_escapesequence,
    STATE(69), 8,
      sym_variable,
      sym_parenthesized_expression,
      sym_binary_operator,
      sym_unary_operator,
      sym_key_action,
      sym_sleep_action,
      sym_action,
      sym_string,
  [267] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(80), 1,
      anon_sym_LPAREN,
    ACTIONS(82), 1,
      anon_sym_DASH,
    ACTIONS(84), 1,
      anon_sym_key_LPAREN,
    ACTIONS(86), 1,
      anon_sym_sleep_LPAREN,
    ACTIONS(88), 1,
      sym_identifier,
    ACTIONS(90), 1,
      sym_integer,
    ACTIONS(92), 1,
      sym_float,
    ACTIONS(94), 1,
      sym__dedent,
    ACTIONS(96), 1,
      sym__string_start,
    STATE(51), 1,
      sym_block,
    STATE(103), 1,
      sym_expression,
    STATE(8), 2,
      sym_statement,
      aux_sym_block_repeat1,
    STATE(79), 2,
      sym_assignment_statement,
      sym_expression_statement,
    STATE(98), 8,
      sym_variable,
      sym_parenthesized_expression,
      sym_binary_operator,
      sym_unary_operator,
      sym_key_action,
      sym_sleep_action,
      sym_action,
      sym_string,
  [322] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(80), 1,
      anon_sym_LPAREN,
    ACTIONS(82), 1,
      anon_sym_DASH,
    ACTIONS(84), 1,
      anon_sym_key_LPAREN,
    ACTIONS(86), 1,
      anon_sym_sleep_LPAREN,
    ACTIONS(90), 1,
      sym_integer,
    ACTIONS(92), 1,
      sym_float,
    ACTIONS(96), 1,
      sym__string_start,
    ACTIONS(98), 1,
      sym_identifier,
    ACTIONS(100), 1,
      sym__indent,
    STATE(65), 1,
      sym__statements,
    STATE(66), 1,
      sym_statement,
    STATE(99), 1,
      sym_expression,
    STATE(67), 2,
      sym_assignment_statement,
      sym_expression_statement,
    STATE(98), 8,
      sym_variable,
      sym_parenthesized_expression,
      sym_binary_operator,
      sym_unary_operator,
      sym_key_action,
      sym_sleep_action,
      sym_action,
      sym_string,
  [376] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(80), 1,
      anon_sym_LPAREN,
    ACTIONS(82), 1,
      anon_sym_DASH,
    ACTIONS(84), 1,
      anon_sym_key_LPAREN,
    ACTIONS(86), 1,
      anon_sym_sleep_LPAREN,
    ACTIONS(88), 1,
      sym_identifier,
    ACTIONS(90), 1,
      sym_integer,
    ACTIONS(92), 1,
      sym_float,
    ACTIONS(96), 1,
      sym__string_start,
    ACTIONS(102), 1,
      sym__dedent,
    STATE(103), 1,
      sym_expression,
    STATE(9), 2,
      sym_statement,
      aux_sym_block_repeat1,
    STATE(79), 2,
      sym_assignment_statement,
      sym_expression_statement,
    STATE(98), 8,
      sym_variable,
      sym_parenthesized_expression,
      sym_binary_operator,
      sym_unary_operator,
      sym_key_action,
      sym_sleep_action,
      sym_action,
      sym_string,
  [428] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(104), 1,
      anon_sym_LPAREN,
    ACTIONS(107), 1,
      anon_sym_DASH,
    ACTIONS(110), 1,
      anon_sym_key_LPAREN,
    ACTIONS(113), 1,
      anon_sym_sleep_LPAREN,
    ACTIONS(116), 1,
      sym_identifier,
    ACTIONS(119), 1,
      sym_integer,
    ACTIONS(122), 1,
      sym_float,
    ACTIONS(125), 1,
      sym__dedent,
    ACTIONS(127), 1,
      sym__string_start,
    STATE(103), 1,
      sym_expression,
    STATE(9), 2,
      sym_statement,
      aux_sym_block_repeat1,
    STATE(79), 2,
      sym_assignment_statement,
      sym_expression_statement,
    STATE(98), 8,
      sym_variable,
      sym_parenthesized_expression,
      sym_binary_operator,
      sym_unary_operator,
      sym_key_action,
      sym_sleep_action,
      sym_action,
      sym_string,
  [480] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(80), 1,
      anon_sym_LPAREN,
    ACTIONS(82), 1,
      anon_sym_DASH,
    ACTIONS(84), 1,
      anon_sym_key_LPAREN,
    ACTIONS(86), 1,
      anon_sym_sleep_LPAREN,
    ACTIONS(90), 1,
      sym_integer,
    ACTIONS(92), 1,
      sym_float,
    ACTIONS(96), 1,
      sym__string_start,
    ACTIONS(98), 1,
      sym_identifier,
    ACTIONS(100), 1,
      sym__indent,
    STATE(64), 1,
      sym__statements,
    STATE(66), 1,
      sym_statement,
    STATE(99), 1,
      sym_expression,
    STATE(67), 2,
      sym_assignment_statement,
      sym_expression_statement,
    STATE(98), 8,
      sym_variable,
      sym_parenthesized_expression,
      sym_binary_operator,
      sym_unary_operator,
      sym_key_action,
      sym_sleep_action,
      sym_action,
      sym_string,
  [534] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(80), 1,
      anon_sym_LPAREN,
    ACTIONS(82), 1,
      anon_sym_DASH,
    ACTIONS(84), 1,
      anon_sym_key_LPAREN,
    ACTIONS(86), 1,
      anon_sym_sleep_LPAREN,
    ACTIONS(90), 1,
      sym_integer,
    ACTIONS(92), 1,
      sym_float,
    ACTIONS(96), 1,
      sym__string_start,
    ACTIONS(98), 1,
      sym_identifier,
    ACTIONS(100), 1,
      sym__indent,
    STATE(54), 1,
      sym__statements,
    STATE(66), 1,
      sym_statement,
    STATE(99), 1,
      sym_expression,
    STATE(67), 2,
      sym_assignment_statement,
      sym_expression_statement,
    STATE(98), 8,
      sym_variable,
      sym_parenthesized_expression,
      sym_binary_operator,
      sym_unary_operator,
      sym_key_action,
      sym_sleep_action,
      sym_action,
      sym_string,
  [588] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_LBRACE,
    ACTIONS(17), 1,
      anon_sym_LT,
    ACTIONS(19), 1,
      anon_sym_LBRACK,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    ACTIONS(132), 1,
      sym_word,
    ACTIONS(134), 1,
      anon_sym_STAR,
    ACTIONS(136), 1,
      anon_sym_PLUS,
    STATE(19), 1,
      aux_sym_seq_repeat1,
    ACTIONS(130), 5,
      anon_sym_COLON,
      anon_sym_PIPE,
      sym_end_anchor,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
    STATE(46), 7,
      sym__primary_rule,
      sym_list,
      sym_capture,
      sym_optional,
      sym_repeat,
      sym_repeat1,
      sym_parenthesized_rule,
  [632] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(27), 1,
      anon_sym_key_LPAREN,
    ACTIONS(72), 1,
      sym_identifier,
    ACTIONS(74), 1,
      sym_integer,
    ACTIONS(76), 1,
      sym__string_start,
    ACTIONS(138), 1,
      anon_sym_LPAREN,
    ACTIONS(140), 1,
      anon_sym_RPAREN,
    ACTIONS(142), 1,
      anon_sym_DASH,
    ACTIONS(144), 1,
      anon_sym_sleep_LPAREN,
    ACTIONS(146), 1,
      anon_sym_COMMA,
    ACTIONS(148), 1,
      sym_float,
    STATE(74), 1,
      sym_expression,
    STATE(69), 8,
      sym_variable,
      sym_parenthesized_expression,
      sym_binary_operator,
      sym_unary_operator,
      sym_key_action,
      sym_sleep_action,
      sym_action,
      sym_string,
  [679] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(27), 1,
      anon_sym_key_LPAREN,
    ACTIONS(72), 1,
      sym_identifier,
    ACTIONS(74), 1,
      sym_integer,
    ACTIONS(76), 1,
      sym__string_start,
    ACTIONS(138), 1,
      anon_sym_LPAREN,
    ACTIONS(142), 1,
      anon_sym_DASH,
    ACTIONS(144), 1,
      anon_sym_sleep_LPAREN,
    ACTIONS(148), 1,
      sym_float,
    ACTIONS(150), 1,
      anon_sym_RPAREN,
    ACTIONS(152), 1,
      anon_sym_COMMA,
    STATE(83), 1,
      sym_expression,
    STATE(69), 8,
      sym_variable,
      sym_parenthesized_expression,
      sym_binary_operator,
      sym_unary_operator,
      sym_key_action,
      sym_sleep_action,
      sym_action,
      sym_string,
  [726] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      sym_start_anchor,
    ACTIONS(15), 1,
      anon_sym_LBRACE,
    ACTIONS(17), 1,
      anon_sym_LT,
    ACTIONS(19), 1,
      anon_sym_LBRACK,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    ACTIONS(154), 1,
      sym_word,
    STATE(120), 1,
      sym__optional_anchor,
    STATE(119), 2,
      sym__optional_seq,
      sym_seq,
    STATE(143), 2,
      sym__optional_choice,
      sym_choice,
    STATE(12), 7,
      sym__primary_rule,
      sym_list,
      sym_capture,
      sym_optional,
      sym_repeat,
      sym_repeat1,
      sym_parenthesized_rule,
  [768] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      sym_start_anchor,
    ACTIONS(15), 1,
      anon_sym_LBRACE,
    ACTIONS(17), 1,
      anon_sym_LT,
    ACTIONS(19), 1,
      anon_sym_LBRACK,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    ACTIONS(154), 1,
      sym_word,
    STATE(120), 1,
      sym__optional_anchor,
    STATE(119), 2,
      sym__optional_seq,
      sym_seq,
    STATE(144), 2,
      sym__optional_choice,
      sym_choice,
    STATE(12), 7,
      sym__primary_rule,
      sym_list,
      sym_capture,
      sym_optional,
      sym_repeat,
      sym_repeat1,
      sym_parenthesized_rule,
  [810] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(27), 1,
      anon_sym_key_LPAREN,
    ACTIONS(72), 1,
      sym_identifier,
    ACTIONS(74), 1,
      sym_integer,
    ACTIONS(76), 1,
      sym__string_start,
    ACTIONS(138), 1,
      anon_sym_LPAREN,
    ACTIONS(142), 1,
      anon_sym_DASH,
    ACTIONS(144), 1,
      anon_sym_sleep_LPAREN,
    ACTIONS(148), 1,
      sym_float,
    ACTIONS(156), 1,
      anon_sym_RPAREN,
    STATE(95), 1,
      sym_expression,
    STATE(69), 8,
      sym_variable,
      sym_parenthesized_expression,
      sym_binary_operator,
      sym_unary_operator,
      sym_key_action,
      sym_sleep_action,
      sym_action,
      sym_string,
  [854] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(160), 1,
      sym_word,
    ACTIONS(163), 1,
      anon_sym_LBRACE,
    ACTIONS(166), 1,
      anon_sym_LT,
    ACTIONS(169), 1,
      anon_sym_LBRACK,
    ACTIONS(172), 1,
      anon_sym_LPAREN,
    STATE(18), 1,
      aux_sym_seq_repeat1,
    ACTIONS(158), 5,
      anon_sym_COLON,
      anon_sym_PIPE,
      sym_end_anchor,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
    STATE(46), 7,
      sym__primary_rule,
      sym_list,
      sym_capture,
      sym_optional,
      sym_repeat,
      sym_repeat1,
      sym_parenthesized_rule,
  [892] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_LBRACE,
    ACTIONS(17), 1,
      anon_sym_LT,
    ACTIONS(19), 1,
      anon_sym_LBRACK,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    ACTIONS(132), 1,
      sym_word,
    STATE(18), 1,
      aux_sym_seq_repeat1,
    ACTIONS(175), 5,
      anon_sym_COLON,
      anon_sym_PIPE,
      sym_end_anchor,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
    STATE(46), 7,
      sym__primary_rule,
      sym_list,
      sym_capture,
      sym_optional,
      sym_repeat,
      sym_repeat1,
      sym_parenthesized_rule,
  [930] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(27), 1,
      anon_sym_key_LPAREN,
    ACTIONS(72), 1,
      sym_identifier,
    ACTIONS(74), 1,
      sym_integer,
    ACTIONS(76), 1,
      sym__string_start,
    ACTIONS(138), 1,
      anon_sym_LPAREN,
    ACTIONS(142), 1,
      anon_sym_DASH,
    ACTIONS(144), 1,
      anon_sym_sleep_LPAREN,
    ACTIONS(148), 1,
      sym_float,
    ACTIONS(177), 1,
      anon_sym_RPAREN,
    STATE(95), 1,
      sym_expression,
    STATE(69), 8,
      sym_variable,
      sym_parenthesized_expression,
      sym_binary_operator,
      sym_unary_operator,
      sym_key_action,
      sym_sleep_action,
      sym_action,
      sym_string,
  [974] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(27), 1,
      anon_sym_key_LPAREN,
    ACTIONS(72), 1,
      sym_identifier,
    ACTIONS(74), 1,
      sym_integer,
    ACTIONS(76), 1,
      sym__string_start,
    ACTIONS(138), 1,
      anon_sym_LPAREN,
    ACTIONS(142), 1,
      anon_sym_DASH,
    ACTIONS(144), 1,
      anon_sym_sleep_LPAREN,
    ACTIONS(148), 1,
      sym_float,
    ACTIONS(179), 1,
      anon_sym_RPAREN,
    STATE(95), 1,
      sym_expression,
    STATE(69), 8,
      sym_variable,
      sym_parenthesized_expression,
      sym_binary_operator,
      sym_unary_operator,
      sym_key_action,
      sym_sleep_action,
      sym_action,
      sym_string,
  [1018] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(27), 1,
      anon_sym_key_LPAREN,
    ACTIONS(72), 1,
      sym_identifier,
    ACTIONS(74), 1,
      sym_integer,
    ACTIONS(76), 1,
      sym__string_start,
    ACTIONS(138), 1,
      anon_sym_LPAREN,
    ACTIONS(142), 1,
      anon_sym_DASH,
    ACTIONS(144), 1,
      anon_sym_sleep_LPAREN,
    ACTIONS(148), 1,
      sym_float,
    ACTIONS(181), 1,
      anon_sym_RPAREN,
    STATE(95), 1,
      sym_expression,
    STATE(69), 8,
      sym_variable,
      sym_parenthesized_expression,
      sym_binary_operator,
      sym_unary_operator,
      sym_key_action,
      sym_sleep_action,
      sym_action,
      sym_string,
  [1062] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(80), 1,
      anon_sym_LPAREN,
    ACTIONS(82), 1,
      anon_sym_DASH,
    ACTIONS(84), 1,
      anon_sym_key_LPAREN,
    ACTIONS(86), 1,
      anon_sym_sleep_LPAREN,
    ACTIONS(90), 1,
      sym_integer,
    ACTIONS(92), 1,
      sym_float,
    ACTIONS(96), 1,
      sym__string_start,
    ACTIONS(183), 1,
      sym_identifier,
    STATE(111), 1,
      sym_expression,
    STATE(98), 8,
      sym_variable,
      sym_parenthesized_expression,
      sym_binary_operator,
      sym_unary_operator,
      sym_key_action,
      sym_sleep_action,
      sym_action,
      sym_string,
  [1103] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(27), 1,
      anon_sym_key_LPAREN,
    ACTIONS(72), 1,
      sym_identifier,
    ACTIONS(74), 1,
      sym_integer,
    ACTIONS(76), 1,
      sym__string_start,
    ACTIONS(138), 1,
      anon_sym_LPAREN,
    ACTIONS(142), 1,
      anon_sym_DASH,
    ACTIONS(144), 1,
      anon_sym_sleep_LPAREN,
    ACTIONS(148), 1,
      sym_float,
    STATE(76), 1,
      sym_expression,
    STATE(69), 8,
      sym_variable,
      sym_parenthesized_expression,
      sym_binary_operator,
      sym_unary_operator,
      sym_key_action,
      sym_sleep_action,
      sym_action,
      sym_string,
  [1144] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(27), 1,
      anon_sym_key_LPAREN,
    ACTIONS(72), 1,
      sym_identifier,
    ACTIONS(74), 1,
      sym_integer,
    ACTIONS(76), 1,
      sym__string_start,
    ACTIONS(138), 1,
      anon_sym_LPAREN,
    ACTIONS(142), 1,
      anon_sym_DASH,
    ACTIONS(144), 1,
      anon_sym_sleep_LPAREN,
    ACTIONS(148), 1,
      sym_float,
    STATE(82), 1,
      sym_expression,
    STATE(69), 8,
      sym_variable,
      sym_parenthesized_expression,
      sym_binary_operator,
      sym_unary_operator,
      sym_key_action,
      sym_sleep_action,
      sym_action,
      sym_string,
  [1185] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(27), 1,
      anon_sym_key_LPAREN,
    ACTIONS(72), 1,
      sym_identifier,
    ACTIONS(74), 1,
      sym_integer,
    ACTIONS(76), 1,
      sym__string_start,
    ACTIONS(138), 1,
      anon_sym_LPAREN,
    ACTIONS(142), 1,
      anon_sym_DASH,
    ACTIONS(144), 1,
      anon_sym_sleep_LPAREN,
    ACTIONS(148), 1,
      sym_float,
    STATE(88), 1,
      sym_expression,
    STATE(69), 8,
      sym_variable,
      sym_parenthesized_expression,
      sym_binary_operator,
      sym_unary_operator,
      sym_key_action,
      sym_sleep_action,
      sym_action,
      sym_string,
  [1226] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(80), 1,
      anon_sym_LPAREN,
    ACTIONS(82), 1,
      anon_sym_DASH,
    ACTIONS(84), 1,
      anon_sym_key_LPAREN,
    ACTIONS(86), 1,
      anon_sym_sleep_LPAREN,
    ACTIONS(90), 1,
      sym_integer,
    ACTIONS(92), 1,
      sym_float,
    ACTIONS(96), 1,
      sym__string_start,
    ACTIONS(183), 1,
      sym_identifier,
    STATE(100), 1,
      sym_expression,
    STATE(98), 8,
      sym_variable,
      sym_parenthesized_expression,
      sym_binary_operator,
      sym_unary_operator,
      sym_key_action,
      sym_sleep_action,
      sym_action,
      sym_string,
  [1267] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(27), 1,
      anon_sym_key_LPAREN,
    ACTIONS(72), 1,
      sym_identifier,
    ACTIONS(74), 1,
      sym_integer,
    ACTIONS(76), 1,
      sym__string_start,
    ACTIONS(138), 1,
      anon_sym_LPAREN,
    ACTIONS(142), 1,
      anon_sym_DASH,
    ACTIONS(144), 1,
      anon_sym_sleep_LPAREN,
    ACTIONS(148), 1,
      sym_float,
    STATE(95), 1,
      sym_expression,
    STATE(69), 8,
      sym_variable,
      sym_parenthesized_expression,
      sym_binary_operator,
      sym_unary_operator,
      sym_key_action,
      sym_sleep_action,
      sym_action,
      sym_string,
  [1308] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(80), 1,
      anon_sym_LPAREN,
    ACTIONS(82), 1,
      anon_sym_DASH,
    ACTIONS(84), 1,
      anon_sym_key_LPAREN,
    ACTIONS(86), 1,
      anon_sym_sleep_LPAREN,
    ACTIONS(90), 1,
      sym_integer,
    ACTIONS(92), 1,
      sym_float,
    ACTIONS(96), 1,
      sym__string_start,
    ACTIONS(183), 1,
      sym_identifier,
    STATE(108), 1,
      sym_expression,
    STATE(98), 8,
      sym_variable,
      sym_parenthesized_expression,
      sym_binary_operator,
      sym_unary_operator,
      sym_key_action,
      sym_sleep_action,
      sym_action,
      sym_string,
  [1349] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(27), 1,
      anon_sym_key_LPAREN,
    ACTIONS(72), 1,
      sym_identifier,
    ACTIONS(74), 1,
      sym_integer,
    ACTIONS(76), 1,
      sym__string_start,
    ACTIONS(138), 1,
      anon_sym_LPAREN,
    ACTIONS(142), 1,
      anon_sym_DASH,
    ACTIONS(144), 1,
      anon_sym_sleep_LPAREN,
    ACTIONS(148), 1,
      sym_float,
    STATE(109), 1,
      sym_expression,
    STATE(69), 8,
      sym_variable,
      sym_parenthesized_expression,
      sym_binary_operator,
      sym_unary_operator,
      sym_key_action,
      sym_sleep_action,
      sym_action,
      sym_string,
  [1390] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(27), 1,
      anon_sym_key_LPAREN,
    ACTIONS(72), 1,
      sym_identifier,
    ACTIONS(74), 1,
      sym_integer,
    ACTIONS(76), 1,
      sym__string_start,
    ACTIONS(138), 1,
      anon_sym_LPAREN,
    ACTIONS(142), 1,
      anon_sym_DASH,
    ACTIONS(144), 1,
      anon_sym_sleep_LPAREN,
    ACTIONS(148), 1,
      sym_float,
    STATE(117), 1,
      sym_expression,
    STATE(69), 8,
      sym_variable,
      sym_parenthesized_expression,
      sym_binary_operator,
      sym_unary_operator,
      sym_key_action,
      sym_sleep_action,
      sym_action,
      sym_string,
  [1431] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(27), 1,
      anon_sym_key_LPAREN,
    ACTIONS(72), 1,
      sym_identifier,
    ACTIONS(74), 1,
      sym_integer,
    ACTIONS(76), 1,
      sym__string_start,
    ACTIONS(138), 1,
      anon_sym_LPAREN,
    ACTIONS(142), 1,
      anon_sym_DASH,
    ACTIONS(144), 1,
      anon_sym_sleep_LPAREN,
    ACTIONS(148), 1,
      sym_float,
    STATE(71), 1,
      sym_expression,
    STATE(69), 8,
      sym_variable,
      sym_parenthesized_expression,
      sym_binary_operator,
      sym_unary_operator,
      sym_key_action,
      sym_sleep_action,
      sym_action,
      sym_string,
  [1472] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(80), 1,
      anon_sym_LPAREN,
    ACTIONS(82), 1,
      anon_sym_DASH,
    ACTIONS(84), 1,
      anon_sym_key_LPAREN,
    ACTIONS(86), 1,
      anon_sym_sleep_LPAREN,
    ACTIONS(90), 1,
      sym_integer,
    ACTIONS(92), 1,
      sym_float,
    ACTIONS(96), 1,
      sym__string_start,
    ACTIONS(183), 1,
      sym_identifier,
    STATE(112), 1,
      sym_expression,
    STATE(98), 8,
      sym_variable,
      sym_parenthesized_expression,
      sym_binary_operator,
      sym_unary_operator,
      sym_key_action,
      sym_sleep_action,
      sym_action,
      sym_string,
  [1513] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(80), 1,
      anon_sym_LPAREN,
    ACTIONS(82), 1,
      anon_sym_DASH,
    ACTIONS(84), 1,
      anon_sym_key_LPAREN,
    ACTIONS(86), 1,
      anon_sym_sleep_LPAREN,
    ACTIONS(90), 1,
      sym_integer,
    ACTIONS(92), 1,
      sym_float,
    ACTIONS(96), 1,
      sym__string_start,
    ACTIONS(183), 1,
      sym_identifier,
    STATE(110), 1,
      sym_expression,
    STATE(98), 8,
      sym_variable,
      sym_parenthesized_expression,
      sym_binary_operator,
      sym_unary_operator,
      sym_key_action,
      sym_sleep_action,
      sym_action,
      sym_string,
  [1554] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(80), 1,
      anon_sym_LPAREN,
    ACTIONS(82), 1,
      anon_sym_DASH,
    ACTIONS(84), 1,
      anon_sym_key_LPAREN,
    ACTIONS(86), 1,
      anon_sym_sleep_LPAREN,
    ACTIONS(90), 1,
      sym_integer,
    ACTIONS(92), 1,
      sym_float,
    ACTIONS(96), 1,
      sym__string_start,
    ACTIONS(183), 1,
      sym_identifier,
    STATE(106), 1,
      sym_expression,
    STATE(98), 8,
      sym_variable,
      sym_parenthesized_expression,
      sym_binary_operator,
      sym_unary_operator,
      sym_key_action,
      sym_sleep_action,
      sym_action,
      sym_string,
  [1595] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      sym_start_anchor,
    ACTIONS(15), 1,
      anon_sym_LBRACE,
    ACTIONS(17), 1,
      anon_sym_LT,
    ACTIONS(19), 1,
      anon_sym_LBRACK,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    ACTIONS(154), 1,
      sym_word,
    STATE(127), 1,
      sym__optional_anchor,
    STATE(119), 2,
      sym__optional_seq,
      sym_seq,
    STATE(12), 7,
      sym__primary_rule,
      sym_list,
      sym_capture,
      sym_optional,
      sym_repeat,
      sym_repeat1,
      sym_parenthesized_rule,
  [1633] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_LBRACE,
    ACTIONS(17), 1,
      anon_sym_LT,
    ACTIONS(19), 1,
      anon_sym_LBRACK,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    ACTIONS(154), 1,
      sym_word,
    STATE(121), 2,
      sym__optional_seq,
      sym_seq,
    STATE(12), 7,
      sym__primary_rule,
      sym_list,
      sym_capture,
      sym_optional,
      sym_repeat,
      sym_repeat1,
      sym_parenthesized_rule,
  [1665] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(185), 12,
      anon_sym_COLON,
      anon_sym_PIPE,
      sym_end_anchor,
      sym_word,
      anon_sym_LBRACE,
      anon_sym_LT,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [1683] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(187), 12,
      anon_sym_COLON,
      anon_sym_PIPE,
      sym_end_anchor,
      sym_word,
      anon_sym_LBRACE,
      anon_sym_LT,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [1701] = 8,
    ACTIONS(60), 1,
      sym_comment,
    ACTIONS(189), 1,
      anon_sym_LBRACE,
    ACTIONS(192), 1,
      anon_sym_RBRACE,
    ACTIONS(201), 1,
      sym_string_content,
    ACTIONS(204), 1,
      sym__string_end,
    ACTIONS(195), 2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_RBRACE_RBRACE,
    ACTIONS(198), 2,
      sym_string_escape_sequence,
      sym__not_escapesequence,
    STATE(40), 4,
      sym_interpolation,
      sym__escape_interpolation,
      sym__not_interpolation,
      aux_sym_string_repeat1,
  [1731] = 8,
    ACTIONS(60), 1,
      sym_comment,
    ACTIONS(206), 1,
      anon_sym_LBRACE,
    ACTIONS(208), 1,
      anon_sym_RBRACE,
    ACTIONS(214), 1,
      sym_string_content,
    ACTIONS(216), 1,
      sym__string_end,
    ACTIONS(210), 2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_RBRACE_RBRACE,
    ACTIONS(212), 2,
      sym_string_escape_sequence,
      sym__not_escapesequence,
    STATE(47), 4,
      sym_interpolation,
      sym__escape_interpolation,
      sym__not_interpolation,
      aux_sym_string_repeat1,
  [1761] = 8,
    ACTIONS(60), 1,
      sym_comment,
    ACTIONS(206), 1,
      anon_sym_LBRACE,
    ACTIONS(208), 1,
      anon_sym_RBRACE,
    ACTIONS(220), 1,
      sym_string_content,
    ACTIONS(222), 1,
      sym__string_end,
    ACTIONS(210), 2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_RBRACE_RBRACE,
    ACTIONS(218), 2,
      sym_string_escape_sequence,
      sym__not_escapesequence,
    STATE(40), 4,
      sym_interpolation,
      sym__escape_interpolation,
      sym__not_interpolation,
      aux_sym_string_repeat1,
  [1791] = 8,
    ACTIONS(60), 1,
      sym_comment,
    ACTIONS(206), 1,
      anon_sym_LBRACE,
    ACTIONS(208), 1,
      anon_sym_RBRACE,
    ACTIONS(226), 1,
      sym_string_content,
    ACTIONS(228), 1,
      sym__string_end,
    ACTIONS(210), 2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_RBRACE_RBRACE,
    ACTIONS(224), 2,
      sym_string_escape_sequence,
      sym__not_escapesequence,
    STATE(42), 4,
      sym_interpolation,
      sym__escape_interpolation,
      sym__not_interpolation,
      aux_sym_string_repeat1,
  [1821] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(230), 12,
      anon_sym_COLON,
      anon_sym_PIPE,
      sym_end_anchor,
      sym_word,
      anon_sym_LBRACE,
      anon_sym_LT,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [1839] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(232), 12,
      anon_sym_COLON,
      anon_sym_PIPE,
      sym_end_anchor,
      sym_word,
      anon_sym_LBRACE,
      anon_sym_LT,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [1857] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(134), 1,
      anon_sym_STAR,
    ACTIONS(136), 1,
      anon_sym_PLUS,
    ACTIONS(234), 10,
      anon_sym_COLON,
      anon_sym_PIPE,
      sym_end_anchor,
      sym_word,
      anon_sym_LBRACE,
      anon_sym_LT,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [1879] = 8,
    ACTIONS(60), 1,
      sym_comment,
    ACTIONS(206), 1,
      anon_sym_LBRACE,
    ACTIONS(208), 1,
      anon_sym_RBRACE,
    ACTIONS(220), 1,
      sym_string_content,
    ACTIONS(236), 1,
      sym__string_end,
    ACTIONS(210), 2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_RBRACE_RBRACE,
    ACTIONS(218), 2,
      sym_string_escape_sequence,
      sym__not_escapesequence,
    STATE(40), 4,
      sym_interpolation,
      sym__escape_interpolation,
      sym__not_interpolation,
      aux_sym_string_repeat1,
  [1909] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(238), 12,
      anon_sym_COLON,
      anon_sym_PIPE,
      sym_end_anchor,
      sym_word,
      anon_sym_LBRACE,
      anon_sym_LT,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [1927] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(240), 12,
      anon_sym_COLON,
      anon_sym_PIPE,
      sym_end_anchor,
      sym_word,
      anon_sym_LBRACE,
      anon_sym_LT,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [1945] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(244), 1,
      anon_sym_LPAREN2,
    STATE(75), 1,
      sym_argument_list,
    ACTIONS(242), 9,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_or,
      anon_sym_COMMA,
  [1966] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(248), 1,
      sym_word,
    ACTIONS(246), 9,
      ts_builtin_sym_end,
      sym_start_anchor,
      anon_sym_LBRACE,
      anon_sym_LT,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      sym__settings_binding,
      sym__tag_binding,
      anon_sym_key_LPAREN,
  [1984] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(252), 1,
      sym_word,
    ACTIONS(250), 9,
      ts_builtin_sym_end,
      sym_start_anchor,
      anon_sym_LBRACE,
      anon_sym_LT,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      sym__settings_binding,
      sym__tag_binding,
      anon_sym_key_LPAREN,
  [2002] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(256), 1,
      sym_word,
    ACTIONS(254), 9,
      ts_builtin_sym_end,
      sym_start_anchor,
      anon_sym_LBRACE,
      anon_sym_LT,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      sym__settings_binding,
      sym__tag_binding,
      anon_sym_key_LPAREN,
  [2020] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(260), 1,
      sym_word,
    ACTIONS(258), 9,
      ts_builtin_sym_end,
      sym_start_anchor,
      anon_sym_LBRACE,
      anon_sym_LT,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      sym__settings_binding,
      sym__tag_binding,
      anon_sym_key_LPAREN,
  [2038] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(262), 1,
      anon_sym_EQ,
    ACTIONS(264), 1,
      anon_sym_LPAREN2,
    STATE(113), 1,
      sym_argument_list,
    ACTIONS(242), 7,
      sym__newline,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_or,
  [2060] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(268), 1,
      sym_word,
    ACTIONS(266), 9,
      ts_builtin_sym_end,
      sym_start_anchor,
      anon_sym_LBRACE,
      anon_sym_LT,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      sym__settings_binding,
      sym__tag_binding,
      anon_sym_key_LPAREN,
  [2078] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(272), 1,
      sym_word,
    ACTIONS(270), 9,
      ts_builtin_sym_end,
      sym_start_anchor,
      anon_sym_LBRACE,
      anon_sym_LT,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      sym__settings_binding,
      sym__tag_binding,
      anon_sym_key_LPAREN,
  [2096] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(276), 1,
      sym_word,
    ACTIONS(274), 9,
      ts_builtin_sym_end,
      sym_start_anchor,
      anon_sym_LBRACE,
      anon_sym_LT,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      sym__settings_binding,
      sym__tag_binding,
      anon_sym_key_LPAREN,
  [2114] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(280), 1,
      sym_word,
    ACTIONS(278), 9,
      ts_builtin_sym_end,
      sym_start_anchor,
      anon_sym_LBRACE,
      anon_sym_LT,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      sym__settings_binding,
      sym__tag_binding,
      anon_sym_key_LPAREN,
  [2132] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(284), 1,
      sym_word,
    ACTIONS(282), 9,
      ts_builtin_sym_end,
      sym_start_anchor,
      anon_sym_LBRACE,
      anon_sym_LT,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      sym__settings_binding,
      sym__tag_binding,
      anon_sym_key_LPAREN,
  [2150] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(286), 10,
      anon_sym_COLON,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_or,
      anon_sym_COMMA,
  [2166] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(290), 1,
      sym_word,
    ACTIONS(288), 9,
      ts_builtin_sym_end,
      sym_start_anchor,
      anon_sym_LBRACE,
      anon_sym_LT,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      sym__settings_binding,
      sym__tag_binding,
      anon_sym_key_LPAREN,
  [2184] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(264), 1,
      anon_sym_LPAREN2,
    ACTIONS(292), 1,
      anon_sym_EQ,
    STATE(113), 1,
      sym_argument_list,
    ACTIONS(242), 7,
      sym__newline,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_or,
  [2206] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(296), 1,
      sym_word,
    ACTIONS(294), 9,
      ts_builtin_sym_end,
      sym_start_anchor,
      anon_sym_LBRACE,
      anon_sym_LT,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      sym__settings_binding,
      sym__tag_binding,
      anon_sym_key_LPAREN,
  [2224] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(300), 1,
      sym_word,
    ACTIONS(298), 9,
      ts_builtin_sym_end,
      sym_start_anchor,
      anon_sym_LBRACE,
      anon_sym_LT,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      sym__settings_binding,
      sym__tag_binding,
      anon_sym_key_LPAREN,
  [2242] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(304), 1,
      sym_word,
    ACTIONS(302), 9,
      ts_builtin_sym_end,
      sym_start_anchor,
      anon_sym_LBRACE,
      anon_sym_LT,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      sym__settings_binding,
      sym__tag_binding,
      anon_sym_key_LPAREN,
  [2260] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(308), 1,
      sym_word,
    ACTIONS(306), 9,
      ts_builtin_sym_end,
      sym_start_anchor,
      anon_sym_LBRACE,
      anon_sym_LT,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      sym__settings_binding,
      sym__tag_binding,
      anon_sym_key_LPAREN,
  [2278] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(312), 1,
      sym_word,
    ACTIONS(310), 9,
      ts_builtin_sym_end,
      sym_start_anchor,
      anon_sym_LBRACE,
      anon_sym_LT,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      sym__settings_binding,
      sym__tag_binding,
      anon_sym_key_LPAREN,
  [2296] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(314), 9,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_or,
      anon_sym_COMMA,
  [2311] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(316), 9,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_or,
      anon_sym_COMMA,
  [2326] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(322), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(320), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(318), 4,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_or,
      anon_sym_COMMA,
  [2345] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(324), 9,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_or,
      anon_sym_COMMA,
  [2360] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(256), 2,
      sym_identifier,
      sym_integer,
    ACTIONS(254), 7,
      sym__dedent,
      sym__string_start,
      anon_sym_LPAREN,
      anon_sym_DASH,
      anon_sym_key_LPAREN,
      anon_sym_sleep_LPAREN,
      sym_float,
  [2377] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(326), 1,
      anon_sym_RPAREN,
    ACTIONS(328), 1,
      anon_sym_or,
    ACTIONS(330), 1,
      anon_sym_COMMA,
    STATE(133), 1,
      aux_sym_argument_list_repeat1,
    ACTIONS(322), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(320), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [2402] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(332), 9,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_or,
      anon_sym_COMMA,
  [2417] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(334), 9,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_or,
      anon_sym_COMMA,
  [2432] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(264), 1,
      anon_sym_LPAREN2,
    STATE(113), 1,
      sym_argument_list,
    ACTIONS(242), 7,
      sym__newline,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_or,
  [2451] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(336), 9,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_or,
      anon_sym_COMMA,
  [2466] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(308), 2,
      sym_identifier,
      sym_integer,
    ACTIONS(306), 7,
      sym__dedent,
      sym__string_start,
      anon_sym_LPAREN,
      anon_sym_DASH,
      anon_sym_key_LPAREN,
      anon_sym_sleep_LPAREN,
      sym_float,
  [2483] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(290), 2,
      sym_identifier,
      sym_integer,
    ACTIONS(288), 7,
      sym__dedent,
      sym__string_start,
      anon_sym_LPAREN,
      anon_sym_DASH,
      anon_sym_key_LPAREN,
      anon_sym_sleep_LPAREN,
      sym_float,
  [2500] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(338), 9,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_or,
      anon_sym_COMMA,
  [2515] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(320), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(318), 6,
      anon_sym_RBRACE,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_or,
      anon_sym_COMMA,
  [2532] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(328), 1,
      anon_sym_or,
    ACTIONS(340), 1,
      anon_sym_RPAREN,
    ACTIONS(342), 1,
      anon_sym_COMMA,
    STATE(130), 1,
      aux_sym_argument_list_repeat1,
    ACTIONS(322), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(320), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [2557] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(344), 9,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_or,
      anon_sym_COMMA,
  [2572] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(346), 9,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_or,
      anon_sym_COMMA,
  [2587] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(348), 9,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_or,
      anon_sym_COMMA,
  [2602] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(350), 9,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_or,
      anon_sym_COMMA,
  [2617] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(318), 9,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_or,
      anon_sym_COMMA,
  [2632] = 3,
    ACTIONS(60), 1,
      sym_comment,
    ACTIONS(354), 2,
      sym_string_content,
      sym__string_end,
    ACTIONS(352), 6,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACE_LBRACE,
      anon_sym_RBRACE_RBRACE,
      sym_string_escape_sequence,
      sym__not_escapesequence,
  [2648] = 3,
    ACTIONS(60), 1,
      sym_comment,
    ACTIONS(78), 2,
      sym_string_content,
      sym__string_end,
    ACTIONS(62), 6,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACE_LBRACE,
      anon_sym_RBRACE_RBRACE,
      sym_string_escape_sequence,
      sym__not_escapesequence,
  [2664] = 3,
    ACTIONS(60), 1,
      sym_comment,
    ACTIONS(358), 2,
      sym_string_content,
      sym__string_end,
    ACTIONS(356), 6,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACE_LBRACE,
      anon_sym_RBRACE_RBRACE,
      sym_string_escape_sequence,
      sym__not_escapesequence,
  [2680] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(363), 1,
      sym_identifier,
    ACTIONS(366), 1,
      sym__matches_end,
    ACTIONS(360), 2,
      anon_sym_and,
      anon_sym_not,
    STATE(92), 2,
      sym_match,
      aux_sym_matches_repeat1,
    STATE(123), 2,
      sym_match_modifier,
      aux_sym_match_repeat1,
  [2702] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(370), 1,
      sym_identifier,
    ACTIONS(372), 1,
      sym__matches_end,
    ACTIONS(368), 2,
      anon_sym_and,
      anon_sym_not,
    STATE(94), 2,
      sym_match,
      aux_sym_matches_repeat1,
    STATE(123), 2,
      sym_match_modifier,
      aux_sym_match_repeat1,
  [2724] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(370), 1,
      sym_identifier,
    ACTIONS(374), 1,
      sym__matches_end,
    ACTIONS(368), 2,
      anon_sym_and,
      anon_sym_not,
    STATE(92), 2,
      sym_match,
      aux_sym_matches_repeat1,
    STATE(123), 2,
      sym_match_modifier,
      aux_sym_match_repeat1,
  [2746] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(328), 1,
      anon_sym_or,
    ACTIONS(322), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(376), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
    ACTIONS(320), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [2766] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(328), 1,
      anon_sym_or,
    ACTIONS(378), 1,
      anon_sym_RBRACE,
    ACTIONS(322), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(320), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [2785] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(344), 7,
      sym__newline,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_or,
  [2798] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(314), 7,
      sym__newline,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_or,
  [2811] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(384), 1,
      anon_sym_or,
    ACTIONS(386), 1,
      sym__newline,
    ACTIONS(382), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(380), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [2830] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(384), 1,
      anon_sym_or,
    ACTIONS(388), 1,
      sym__newline,
    ACTIONS(382), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(380), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [2849] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(286), 7,
      sym__newline,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_or,
  [2862] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(324), 7,
      sym__newline,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_or,
  [2875] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(384), 1,
      anon_sym_or,
    ACTIONS(390), 1,
      sym__newline,
    ACTIONS(382), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(380), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [2894] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(346), 7,
      sym__newline,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_or,
  [2907] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(338), 7,
      sym__newline,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_or,
  [2920] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(384), 1,
      anon_sym_or,
    ACTIONS(392), 1,
      sym__newline,
    ACTIONS(382), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(380), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [2939] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(348), 7,
      sym__newline,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_or,
  [2952] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(334), 7,
      sym__newline,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_or,
  [2965] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(328), 1,
      anon_sym_or,
    ACTIONS(394), 1,
      anon_sym_RPAREN,
    ACTIONS(322), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(320), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [2984] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(318), 7,
      sym__newline,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_or,
  [2997] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(380), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(318), 4,
      sym__newline,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_or,
  [3012] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(318), 2,
      sym__newline,
      anon_sym_or,
    ACTIONS(382), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(380), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [3029] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(332), 7,
      sym__newline,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_or,
  [3042] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(336), 7,
      sym__newline,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_or,
  [3055] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(316), 7,
      sym__newline,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_or,
  [3068] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(350), 7,
      sym__newline,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_or,
  [3081] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(328), 1,
      anon_sym_or,
    ACTIONS(396), 1,
      anon_sym_RPAREN,
    ACTIONS(322), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(320), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [3100] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(400), 1,
      anon_sym_PIPE,
    STATE(122), 1,
      aux_sym_choice_repeat1,
    ACTIONS(398), 3,
      anon_sym_COLON,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
  [3115] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(404), 1,
      sym_end_anchor,
    ACTIONS(402), 4,
      anon_sym_COLON,
      anon_sym_PIPE,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
  [3128] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(400), 1,
      anon_sym_PIPE,
    STATE(118), 1,
      aux_sym_choice_repeat1,
    ACTIONS(406), 3,
      anon_sym_COLON,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
  [3143] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(410), 1,
      sym_end_anchor,
    ACTIONS(408), 4,
      anon_sym_COLON,
      anon_sym_PIPE,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
  [3156] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(414), 1,
      anon_sym_PIPE,
    STATE(122), 1,
      aux_sym_choice_repeat1,
    ACTIONS(412), 3,
      anon_sym_COLON,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
  [3171] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(417), 1,
      sym_identifier,
    ACTIONS(368), 2,
      anon_sym_and,
      anon_sym_not,
    STATE(124), 2,
      sym_match_modifier,
      aux_sym_match_repeat1,
  [3186] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(422), 1,
      sym_identifier,
    ACTIONS(419), 2,
      anon_sym_and,
      anon_sym_not,
    STATE(124), 2,
      sym_match_modifier,
      aux_sym_match_repeat1,
  [3201] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(408), 4,
      anon_sym_COLON,
      anon_sym_PIPE,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
  [3211] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(426), 1,
      sym__matches_end,
    ACTIONS(424), 3,
      anon_sym_and,
      anon_sym_not,
      sym_identifier,
  [3223] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(412), 4,
      anon_sym_COLON,
      anon_sym_PIPE,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
  [3233] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(430), 1,
      sym__matches_end,
    ACTIONS(428), 3,
      anon_sym_and,
      anon_sym_not,
      sym_identifier,
  [3245] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(432), 4,
      anon_sym_COLON,
      anon_sym_PIPE,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
  [3255] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(156), 1,
      anon_sym_RPAREN,
    ACTIONS(434), 1,
      anon_sym_COMMA,
    STATE(132), 1,
      aux_sym_argument_list_repeat1,
  [3268] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(436), 3,
      anon_sym_and,
      anon_sym_not,
      sym_identifier,
  [3277] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(376), 1,
      anon_sym_RPAREN,
    ACTIONS(438), 1,
      anon_sym_COMMA,
    STATE(132), 1,
      aux_sym_argument_list_repeat1,
  [3290] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(179), 1,
      anon_sym_RPAREN,
    ACTIONS(441), 1,
      anon_sym_COMMA,
    STATE(132), 1,
      aux_sym_argument_list_repeat1,
  [3303] = 3,
    ACTIONS(60), 1,
      sym_comment,
    ACTIONS(443), 1,
      aux_sym__implicit_string_argument_token1,
    STATE(139), 1,
      sym__implicit_string_argument,
  [3313] = 3,
    ACTIONS(60), 1,
      sym_comment,
    ACTIONS(445), 1,
      aux_sym__implicit_string_argument_token1,
    STATE(152), 1,
      sym__implicit_string_argument,
  [3323] = 3,
    ACTIONS(60), 1,
      sym_comment,
    ACTIONS(447), 1,
      aux_sym__implicit_string_argument_token1,
    STATE(149), 1,
      sym__implicit_string_argument,
  [3333] = 3,
    ACTIONS(60), 1,
      sym_comment,
    ACTIONS(449), 1,
      aux_sym__implicit_string_argument_token1,
    STATE(146), 1,
      sym__implicit_string_argument,
  [3343] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(451), 1,
      anon_sym_COLON,
  [3350] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(453), 1,
      anon_sym_RPAREN,
  [3357] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(455), 1,
      anon_sym_COLON,
  [3364] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(457), 1,
      anon_sym_RBRACE,
  [3371] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(459), 1,
      anon_sym_GT,
  [3378] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(461), 1,
      anon_sym_RBRACK,
  [3385] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(463), 1,
      anon_sym_RPAREN,
  [3392] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(465), 1,
      sym_identifier,
  [3399] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(467), 1,
      anon_sym_RPAREN,
  [3406] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(469), 1,
      anon_sym_COLON,
  [3413] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(471), 1,
      anon_sym_COLON,
  [3420] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(473), 1,
      anon_sym_RPAREN,
  [3427] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(475), 1,
      sym_identifier,
  [3434] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(340), 1,
      anon_sym_RPAREN,
  [3441] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(477), 1,
      anon_sym_RPAREN,
  [3448] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(479), 1,
      sym_identifier,
  [3455] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(481), 1,
      sym__newline,
  [3462] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(326), 1,
      anon_sym_RPAREN,
  [3469] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(483), 1,
      sym__newline,
  [3476] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(485), 1,
      anon_sym_COLON,
  [3483] = 2,
    ACTIONS(60), 1,
      sym_comment,
    ACTIONS(487), 1,
      sym_implicit_string,
  [3490] = 2,
    ACTIONS(60), 1,
      sym_comment,
    ACTIONS(489), 1,
      sym_implicit_string,
  [3497] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(491), 1,
      sym__newline,
  [3504] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(493), 1,
      anon_sym_COLON,
  [3511] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(495), 1,
      anon_sym_COLON,
  [3518] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(497), 1,
      ts_builtin_sym_end,
  [3525] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(499), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 74,
  [SMALL_STATE(4)] = 145,
  [SMALL_STATE(5)] = 216,
  [SMALL_STATE(6)] = 267,
  [SMALL_STATE(7)] = 322,
  [SMALL_STATE(8)] = 376,
  [SMALL_STATE(9)] = 428,
  [SMALL_STATE(10)] = 480,
  [SMALL_STATE(11)] = 534,
  [SMALL_STATE(12)] = 588,
  [SMALL_STATE(13)] = 632,
  [SMALL_STATE(14)] = 679,
  [SMALL_STATE(15)] = 726,
  [SMALL_STATE(16)] = 768,
  [SMALL_STATE(17)] = 810,
  [SMALL_STATE(18)] = 854,
  [SMALL_STATE(19)] = 892,
  [SMALL_STATE(20)] = 930,
  [SMALL_STATE(21)] = 974,
  [SMALL_STATE(22)] = 1018,
  [SMALL_STATE(23)] = 1062,
  [SMALL_STATE(24)] = 1103,
  [SMALL_STATE(25)] = 1144,
  [SMALL_STATE(26)] = 1185,
  [SMALL_STATE(27)] = 1226,
  [SMALL_STATE(28)] = 1267,
  [SMALL_STATE(29)] = 1308,
  [SMALL_STATE(30)] = 1349,
  [SMALL_STATE(31)] = 1390,
  [SMALL_STATE(32)] = 1431,
  [SMALL_STATE(33)] = 1472,
  [SMALL_STATE(34)] = 1513,
  [SMALL_STATE(35)] = 1554,
  [SMALL_STATE(36)] = 1595,
  [SMALL_STATE(37)] = 1633,
  [SMALL_STATE(38)] = 1665,
  [SMALL_STATE(39)] = 1683,
  [SMALL_STATE(40)] = 1701,
  [SMALL_STATE(41)] = 1731,
  [SMALL_STATE(42)] = 1761,
  [SMALL_STATE(43)] = 1791,
  [SMALL_STATE(44)] = 1821,
  [SMALL_STATE(45)] = 1839,
  [SMALL_STATE(46)] = 1857,
  [SMALL_STATE(47)] = 1879,
  [SMALL_STATE(48)] = 1909,
  [SMALL_STATE(49)] = 1927,
  [SMALL_STATE(50)] = 1945,
  [SMALL_STATE(51)] = 1966,
  [SMALL_STATE(52)] = 1984,
  [SMALL_STATE(53)] = 2002,
  [SMALL_STATE(54)] = 2020,
  [SMALL_STATE(55)] = 2038,
  [SMALL_STATE(56)] = 2060,
  [SMALL_STATE(57)] = 2078,
  [SMALL_STATE(58)] = 2096,
  [SMALL_STATE(59)] = 2114,
  [SMALL_STATE(60)] = 2132,
  [SMALL_STATE(61)] = 2150,
  [SMALL_STATE(62)] = 2166,
  [SMALL_STATE(63)] = 2184,
  [SMALL_STATE(64)] = 2206,
  [SMALL_STATE(65)] = 2224,
  [SMALL_STATE(66)] = 2242,
  [SMALL_STATE(67)] = 2260,
  [SMALL_STATE(68)] = 2278,
  [SMALL_STATE(69)] = 2296,
  [SMALL_STATE(70)] = 2311,
  [SMALL_STATE(71)] = 2326,
  [SMALL_STATE(72)] = 2345,
  [SMALL_STATE(73)] = 2360,
  [SMALL_STATE(74)] = 2377,
  [SMALL_STATE(75)] = 2402,
  [SMALL_STATE(76)] = 2417,
  [SMALL_STATE(77)] = 2432,
  [SMALL_STATE(78)] = 2451,
  [SMALL_STATE(79)] = 2466,
  [SMALL_STATE(80)] = 2483,
  [SMALL_STATE(81)] = 2500,
  [SMALL_STATE(82)] = 2515,
  [SMALL_STATE(83)] = 2532,
  [SMALL_STATE(84)] = 2557,
  [SMALL_STATE(85)] = 2572,
  [SMALL_STATE(86)] = 2587,
  [SMALL_STATE(87)] = 2602,
  [SMALL_STATE(88)] = 2617,
  [SMALL_STATE(89)] = 2632,
  [SMALL_STATE(90)] = 2648,
  [SMALL_STATE(91)] = 2664,
  [SMALL_STATE(92)] = 2680,
  [SMALL_STATE(93)] = 2702,
  [SMALL_STATE(94)] = 2724,
  [SMALL_STATE(95)] = 2746,
  [SMALL_STATE(96)] = 2766,
  [SMALL_STATE(97)] = 2785,
  [SMALL_STATE(98)] = 2798,
  [SMALL_STATE(99)] = 2811,
  [SMALL_STATE(100)] = 2830,
  [SMALL_STATE(101)] = 2849,
  [SMALL_STATE(102)] = 2862,
  [SMALL_STATE(103)] = 2875,
  [SMALL_STATE(104)] = 2894,
  [SMALL_STATE(105)] = 2907,
  [SMALL_STATE(106)] = 2920,
  [SMALL_STATE(107)] = 2939,
  [SMALL_STATE(108)] = 2952,
  [SMALL_STATE(109)] = 2965,
  [SMALL_STATE(110)] = 2984,
  [SMALL_STATE(111)] = 2997,
  [SMALL_STATE(112)] = 3012,
  [SMALL_STATE(113)] = 3029,
  [SMALL_STATE(114)] = 3042,
  [SMALL_STATE(115)] = 3055,
  [SMALL_STATE(116)] = 3068,
  [SMALL_STATE(117)] = 3081,
  [SMALL_STATE(118)] = 3100,
  [SMALL_STATE(119)] = 3115,
  [SMALL_STATE(120)] = 3128,
  [SMALL_STATE(121)] = 3143,
  [SMALL_STATE(122)] = 3156,
  [SMALL_STATE(123)] = 3171,
  [SMALL_STATE(124)] = 3186,
  [SMALL_STATE(125)] = 3201,
  [SMALL_STATE(126)] = 3211,
  [SMALL_STATE(127)] = 3223,
  [SMALL_STATE(128)] = 3233,
  [SMALL_STATE(129)] = 3245,
  [SMALL_STATE(130)] = 3255,
  [SMALL_STATE(131)] = 3268,
  [SMALL_STATE(132)] = 3277,
  [SMALL_STATE(133)] = 3290,
  [SMALL_STATE(134)] = 3303,
  [SMALL_STATE(135)] = 3313,
  [SMALL_STATE(136)] = 3323,
  [SMALL_STATE(137)] = 3333,
  [SMALL_STATE(138)] = 3343,
  [SMALL_STATE(139)] = 3350,
  [SMALL_STATE(140)] = 3357,
  [SMALL_STATE(141)] = 3364,
  [SMALL_STATE(142)] = 3371,
  [SMALL_STATE(143)] = 3378,
  [SMALL_STATE(144)] = 3385,
  [SMALL_STATE(145)] = 3392,
  [SMALL_STATE(146)] = 3399,
  [SMALL_STATE(147)] = 3406,
  [SMALL_STATE(148)] = 3413,
  [SMALL_STATE(149)] = 3420,
  [SMALL_STATE(150)] = 3427,
  [SMALL_STATE(151)] = 3434,
  [SMALL_STATE(152)] = 3441,
  [SMALL_STATE(153)] = 3448,
  [SMALL_STATE(154)] = 3455,
  [SMALL_STATE(155)] = 3462,
  [SMALL_STATE(156)] = 3469,
  [SMALL_STATE(157)] = 3476,
  [SMALL_STATE(158)] = 3483,
  [SMALL_STATE(159)] = 3490,
  [SMALL_STATE(160)] = 3497,
  [SMALL_STATE(161)] = 3504,
  [SMALL_STATE(162)] = 3511,
  [SMALL_STATE(163)] = 3518,
  [SMALL_STATE(164)] = 3525,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [9] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_declarations_repeat1, 2),
  [31] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_declarations_repeat1, 2), SHIFT_REPEAT(37),
  [34] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_declarations_repeat1, 2), SHIFT_REPEAT(12),
  [37] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_declarations_repeat1, 2), SHIFT_REPEAT(153),
  [40] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_declarations_repeat1, 2), SHIFT_REPEAT(150),
  [43] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_declarations_repeat1, 2), SHIFT_REPEAT(15),
  [46] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_declarations_repeat1, 2), SHIFT_REPEAT(16),
  [49] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_declarations_repeat1, 2), SHIFT_REPEAT(148),
  [52] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_declarations_repeat1, 2), SHIFT_REPEAT(138),
  [55] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_declarations_repeat1, 2), SHIFT_REPEAT(136),
  [58] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declarations, 1),
  [60] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [62] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__not_interpolation, 1),
  [64] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [66] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [68] = {.entry = {.count = 1, .reusable = false}}, SHIFT(136),
  [70] = {.entry = {.count = 1, .reusable = false}}, SHIFT(135),
  [72] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [74] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [76] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [78] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__not_interpolation, 1),
  [80] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [82] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [84] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [86] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [88] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [90] = {.entry = {.count = 1, .reusable = false}}, SHIFT(98),
  [92] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [94] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [96] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [98] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [104] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(30),
  [107] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(29),
  [110] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(137),
  [113] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(134),
  [116] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(55),
  [119] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(98),
  [122] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(98),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2),
  [127] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(43),
  [130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__optional_seq, 1),
  [132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_seq_repeat1, 2),
  [160] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_seq_repeat1, 2), SHIFT_REPEAT(46),
  [163] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_seq_repeat1, 2), SHIFT_REPEAT(153),
  [166] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_seq_repeat1, 2), SHIFT_REPEAT(150),
  [169] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_seq_repeat1, 2), SHIFT_REPEAT(15),
  [172] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_seq_repeat1, 2), SHIFT_REPEAT(16),
  [175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_seq, 2),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [183] = {.entry = {.count = 1, .reusable = false}}, SHIFT(77),
  [185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_repeat1, 2),
  [187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 3, .production_id = 1),
  [189] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(5),
  [192] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(90),
  [195] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(91),
  [198] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(40),
  [201] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(40),
  [204] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2),
  [206] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [208] = {.entry = {.count = 1, .reusable = false}}, SHIFT(90),
  [210] = {.entry = {.count = 1, .reusable = false}}, SHIFT(91),
  [212] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [218] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [222] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [224] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [230] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_repeat, 2),
  [232] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parenthesized_rule, 3),
  [234] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_seq_repeat1, 1),
  [236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [238] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_optional, 3),
  [240] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_capture, 3, .production_id = 2),
  [242] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 1, .production_id = 3),
  [244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [246] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statements, 2),
  [248] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__statements, 2),
  [250] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 1),
  [252] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 1),
  [254] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_statement, 2, .production_id = 9),
  [256] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression_statement, 2, .production_id = 9),
  [258] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command_declaration, 3, .production_id = 4),
  [260] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_command_declaration, 3, .production_id = 4),
  [262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [266] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 2),
  [268] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 2),
  [270] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag_import_declaration, 4, .production_id = 4),
  [272] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag_import_declaration, 4, .production_id = 4),
  [274] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_matches, 2),
  [276] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_matches, 2),
  [278] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declaration, 1),
  [280] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_declaration, 1),
  [282] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_matches, 3),
  [284] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_matches, 3),
  [286] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_key_action, 3, .production_id = 6),
  [288] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_statement, 4, .production_id = 4),
  [290] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assignment_statement, 4, .production_id = 4),
  [292] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [294] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_key_binding_declaration, 3, .production_id = 4),
  [296] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_key_binding_declaration, 3, .production_id = 4),
  [298] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_settings_declaration, 3, .production_id = 4),
  [300] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_settings_declaration, 3, .production_id = 4),
  [302] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statements, 1, .production_id = 5),
  [304] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__statements, 1, .production_id = 5),
  [306] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 1),
  [308] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_statement, 1),
  [310] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_matches, 1),
  [312] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_matches, 1),
  [314] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 1),
  [316] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 3),
  [318] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_operator, 3, .production_id = 11),
  [320] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [322] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [324] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [326] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [328] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [330] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [332] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_action, 2, .production_id = 8),
  [334] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_operator, 2, .production_id = 7),
  [336] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2),
  [338] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sleep_action, 3, .production_id = 6),
  [340] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [342] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [344] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 2),
  [346] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parenthesized_expression, 3),
  [348] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 5),
  [350] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 4),
  [352] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_interpolation, 3),
  [354] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interpolation, 3),
  [356] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__escape_interpolation, 1),
  [358] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__escape_interpolation, 1),
  [360] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_matches_repeat1, 2), SHIFT_REPEAT(131),
  [363] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_matches_repeat1, 2), SHIFT_REPEAT(161),
  [366] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_matches_repeat1, 2),
  [368] = {.entry = {.count = 1, .reusable = false}}, SHIFT(131),
  [370] = {.entry = {.count = 1, .reusable = false}}, SHIFT(161),
  [372] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [374] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [376] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_argument_list_repeat1, 2),
  [378] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [380] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [382] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [384] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [386] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [388] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [390] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [392] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [394] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [396] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [398] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_choice, 2),
  [400] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [402] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__optional_anchor, 1),
  [404] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [406] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__optional_choice, 1),
  [408] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__optional_anchor, 2),
  [410] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [412] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_choice_repeat1, 2),
  [414] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_choice_repeat1, 2), SHIFT_REPEAT(36),
  [417] = {.entry = {.count = 1, .reusable = false}}, SHIFT(140),
  [419] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_match_repeat1, 2), SHIFT_REPEAT(131),
  [422] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_match_repeat1, 2),
  [424] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_match, 4, .production_id = 4),
  [426] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_match, 4, .production_id = 4),
  [428] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_match, 5, .production_id = 10),
  [430] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_match, 5, .production_id = 10),
  [432] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__optional_anchor, 3),
  [434] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [436] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_match_modifier, 1),
  [438] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_argument_list_repeat1, 2), SHIFT_REPEAT(28),
  [441] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [443] = {.entry = {.count = 1, .reusable = false}}, SHIFT(139),
  [445] = {.entry = {.count = 1, .reusable = false}}, SHIFT(152),
  [447] = {.entry = {.count = 1, .reusable = false}}, SHIFT(149),
  [449] = {.entry = {.count = 1, .reusable = false}}, SHIFT(146),
  [451] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [453] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [455] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [457] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [459] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [461] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [463] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [465] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [467] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [469] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [471] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [473] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [475] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [477] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [479] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [481] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [483] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [485] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [487] = {.entry = {.count = 1, .reusable = false}}, SHIFT(160),
  [489] = {.entry = {.count = 1, .reusable = false}}, SHIFT(154),
  [491] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [493] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [495] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule, 1),
  [497] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2),
  [499] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
};

#ifdef __cplusplus
extern "C" {
#endif
void *tree_sitter_talon_external_scanner_create(void);
void tree_sitter_talon_external_scanner_destroy(void *);
bool tree_sitter_talon_external_scanner_scan(void *, TSLexer *, const bool *);
unsigned tree_sitter_talon_external_scanner_serialize(void *, char *);
void tree_sitter_talon_external_scanner_deserialize(void *, const char *, unsigned);

#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_talon(void) {
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
    .field_names = ts_field_names,
    .field_map_slices = ts_field_map_slices,
    .field_map_entries = ts_field_map_entries,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .external_scanner = {
      &ts_external_scanner_states[0][0],
      ts_external_scanner_symbol_map,
      tree_sitter_talon_external_scanner_create,
      tree_sitter_talon_external_scanner_destroy,
      tree_sitter_talon_external_scanner_scan,
      tree_sitter_talon_external_scanner_serialize,
      tree_sitter_talon_external_scanner_deserialize,
    },
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
