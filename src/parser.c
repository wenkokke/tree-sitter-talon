#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 160
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 95
#define ALIAS_COUNT 0
#define TOKEN_COUNT 48
#define EXTERNAL_TOKEN_COUNT 10
#define FIELD_COUNT 15
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 15

enum {
  sym_comment = 1,
  anon_sym_and = 2,
  anon_sym_not = 3,
  anon_sym_COLON = 4,
  anon_sym_tag_LPAREN_RPAREN = 5,
  anon_sym_settings_LPAREN_RPAREN = 6,
  anon_sym_EQ = 7,
  anon_sym_PIPE = 8,
  sym_start_anchor = 9,
  sym_end_anchor = 10,
  sym_word = 11,
  anon_sym_LBRACE = 12,
  anon_sym_RBRACE = 13,
  anon_sym_LT = 14,
  anon_sym_GT = 15,
  anon_sym_LBRACK = 16,
  anon_sym_RBRACK = 17,
  anon_sym_STAR = 18,
  anon_sym_PLUS = 19,
  anon_sym_LPAREN = 20,
  anon_sym_RPAREN = 21,
  anon_sym_DASH = 22,
  anon_sym_SLASH = 23,
  anon_sym_PERCENT = 24,
  anon_sym_or = 25,
  anon_sym_key_LPAREN = 26,
  aux_sym_key_action_token1 = 27,
  anon_sym_sleep_LPAREN = 28,
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
  sym_declaration = 52,
  sym_command_declaration = 53,
  sym_tag_import_declaration = 54,
  sym_key_binding_declaration = 55,
  sym_settings_declaration = 56,
  sym__statements = 57,
  sym_block = 58,
  sym_statement = 59,
  sym_assignment_statement = 60,
  sym_expression_statement = 61,
  sym_rule = 62,
  sym__optional_choice = 63,
  sym_choice = 64,
  sym__optional_anchor = 65,
  sym__optional_seq = 66,
  sym_seq = 67,
  sym__primary_rule = 68,
  sym_list = 69,
  sym_capture = 70,
  sym_optional = 71,
  sym_repeat = 72,
  sym_repeat1 = 73,
  sym_parenthesized_rule = 74,
  sym_expression = 75,
  sym_variable = 76,
  sym_parenthesized_expression = 77,
  sym_binary_operator = 78,
  sym_key_action = 79,
  sym_sleep_action = 80,
  sym_action = 81,
  sym_argument_list = 82,
  sym_string = 83,
  sym_interpolation = 84,
  sym__escape_interpolation = 85,
  sym__not_interpolation = 86,
  aux_sym_source_file_repeat1 = 87,
  aux_sym_matches_repeat1 = 88,
  aux_sym_match_repeat1 = 89,
  aux_sym_block_repeat1 = 90,
  aux_sym_choice_repeat1 = 91,
  aux_sym_seq_repeat1 = 92,
  aux_sym_argument_list_repeat1 = 93,
  aux_sym_string_repeat1 = 94,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_comment] = "comment",
  [anon_sym_and] = "and",
  [anon_sym_not] = "not",
  [anon_sym_COLON] = ":",
  [anon_sym_tag_LPAREN_RPAREN] = "tag()",
  [anon_sym_settings_LPAREN_RPAREN] = "settings()",
  [anon_sym_EQ] = "=",
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
  [anon_sym_DASH] = "operator",
  [anon_sym_SLASH] = "operator",
  [anon_sym_PERCENT] = "operator",
  [anon_sym_or] = "operator",
  [anon_sym_key_LPAREN] = "key(",
  [aux_sym_key_action_token1] = "implicit_string",
  [anon_sym_sleep_LPAREN] = "sleep(",
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
  [sym_declaration] = "declaration",
  [sym_command_declaration] = "command_declaration",
  [sym_tag_import_declaration] = "tag_import_declaration",
  [sym_key_binding_declaration] = "key_binding_declaration",
  [sym_settings_declaration] = "settings_declaration",
  [sym__statements] = "_statements",
  [sym_block] = "block",
  [sym_statement] = "statement",
  [sym_assignment_statement] = "assignment_statement",
  [sym_expression_statement] = "expression_statement",
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
  [sym_expression] = "expression",
  [sym_variable] = "variable",
  [sym_parenthesized_expression] = "parenthesized_expression",
  [sym_binary_operator] = "binary_operator",
  [sym_key_action] = "key_action",
  [sym_sleep_action] = "sleep_action",
  [sym_action] = "action",
  [sym_argument_list] = "argument_list",
  [sym_string] = "string",
  [sym_interpolation] = "interpolation",
  [sym__escape_interpolation] = "string_content",
  [sym__not_interpolation] = "string_content",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_matches_repeat1] = "matches_repeat1",
  [aux_sym_match_repeat1] = "match_repeat1",
  [aux_sym_block_repeat1] = "block_repeat1",
  [aux_sym_choice_repeat1] = "choice_repeat1",
  [aux_sym_seq_repeat1] = "seq_repeat1",
  [aux_sym_argument_list_repeat1] = "argument_list_repeat1",
  [aux_sym_string_repeat1] = "string_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_comment] = sym_comment,
  [anon_sym_and] = anon_sym_and,
  [anon_sym_not] = anon_sym_not,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_tag_LPAREN_RPAREN] = anon_sym_tag_LPAREN_RPAREN,
  [anon_sym_settings_LPAREN_RPAREN] = anon_sym_settings_LPAREN_RPAREN,
  [anon_sym_EQ] = anon_sym_EQ,
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
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_SLASH] = anon_sym_DASH,
  [anon_sym_PERCENT] = anon_sym_DASH,
  [anon_sym_or] = anon_sym_DASH,
  [anon_sym_key_LPAREN] = anon_sym_key_LPAREN,
  [aux_sym_key_action_token1] = sym_implicit_string,
  [anon_sym_sleep_LPAREN] = anon_sym_sleep_LPAREN,
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
  [sym_declaration] = sym_declaration,
  [sym_command_declaration] = sym_command_declaration,
  [sym_tag_import_declaration] = sym_tag_import_declaration,
  [sym_key_binding_declaration] = sym_key_binding_declaration,
  [sym_settings_declaration] = sym_settings_declaration,
  [sym__statements] = sym__statements,
  [sym_block] = sym_block,
  [sym_statement] = sym_statement,
  [sym_assignment_statement] = sym_assignment_statement,
  [sym_expression_statement] = sym_expression_statement,
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
  [sym_expression] = sym_expression,
  [sym_variable] = sym_variable,
  [sym_parenthesized_expression] = sym_parenthesized_expression,
  [sym_binary_operator] = sym_binary_operator,
  [sym_key_action] = sym_key_action,
  [sym_sleep_action] = sym_sleep_action,
  [sym_action] = sym_action,
  [sym_argument_list] = sym_argument_list,
  [sym_string] = sym_string,
  [sym_interpolation] = sym_interpolation,
  [sym__escape_interpolation] = sym_string_content,
  [sym__not_interpolation] = sym_string_content,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_matches_repeat1] = aux_sym_matches_repeat1,
  [aux_sym_match_repeat1] = aux_sym_match_repeat1,
  [aux_sym_block_repeat1] = aux_sym_block_repeat1,
  [aux_sym_choice_repeat1] = aux_sym_choice_repeat1,
  [aux_sym_seq_repeat1] = aux_sym_seq_repeat1,
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
  [anon_sym_tag_LPAREN_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_settings_LPAREN_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
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
  [aux_sym_key_action_token1] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_sleep_LPAREN] = {
    .visible = true,
    .named = false,
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
  [sym_key_action] = {
    .visible = true,
    .named = true,
  },
  [sym_sleep_action] = {
    .visible = true,
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
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_matches_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_match_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_block_repeat1] = {
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
  field_key = 5,
  field_left = 6,
  field_list_name = 7,
  field_modifier = 8,
  field_operator = 9,
  field_pattern = 10,
  field_right = 11,
  field_rule = 12,
  field_script = 13,
  field_tag = 14,
  field_variable_name = 15,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_action_name] = "action_name",
  [field_arguments] = "arguments",
  [field_capture_name] = "capture_name",
  [field_expression] = "expression",
  [field_key] = "key",
  [field_left] = "left",
  [field_list_name] = "list_name",
  [field_modifier] = "modifier",
  [field_operator] = "operator",
  [field_pattern] = "pattern",
  [field_right] = "right",
  [field_rule] = "rule",
  [field_script] = "script",
  [field_tag] = "tag",
  [field_variable_name] = "variable_name",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [3] = {.index = 1, .length = 1},
  [4] = {.index = 2, .length = 1},
  [5] = {.index = 3, .length = 1},
  [6] = {.index = 4, .length = 2},
  [7] = {.index = 6, .length = 2},
  [8] = {.index = 8, .length = 2},
  [9] = {.index = 10, .length = 1},
  [10] = {.index = 11, .length = 2},
  [11] = {.index = 13, .length = 1},
  [12] = {.index = 14, .length = 3},
  [13] = {.index = 17, .length = 3},
  [14] = {.index = 20, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_variable_name, 0},
  [1] =
    {field_list_name, 1},
  [2] =
    {field_capture_name, 1},
  [3] =
    {field_arguments, 1},
  [4] =
    {field_rule, 0},
    {field_script, 2},
  [6] =
    {field_key, 0},
    {field_script, 2},
  [8] =
    {field_key, 0},
    {field_pattern, 2},
  [10] =
    {field_tag, 2},
  [11] =
    {field_action_name, 0},
    {field_arguments, 1},
  [13] =
    {field_expression, 0},
  [14] =
    {field_key, 1},
    {field_modifier, 0},
    {field_pattern, 3},
  [17] =
    {field_left, 0},
    {field_operator, 1},
    {field_right, 2},
  [20] =
    {field_left, 0},
    {field_right, 2},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [2] = {
    [0] = sym_block,
  },
  [13] = {
    [1] = anon_sym_DASH,
  },
};

static const uint16_t ts_non_terminal_alias_map[] = {
  sym_statement, 2,
    sym_statement,
    sym_block,
  0,
};

static inline bool sym_word_character_set_1(int32_t c) {
  return (c < 6656
    ? (c < 3046
      ? (c < 2392
        ? (c < 1376
          ? (c < 748
            ? (c < 185
              ? (c < 'a'
                ? (c < '0'
                  ? c == '-'
                  : (c <= '9' || (c >= 'A' && c <= 'Z')))
                : (c <= 'z' || (c < 178
                  ? c == 170
                  : (c <= 179 || c == 181))))
              : (c <= 186 || (c < 248
                ? (c < 192
                  ? (c >= 188 && c <= 190)
                  : (c <= 214 || (c >= 216 && c <= 246)))
                : (c <= 705 || (c < 736
                  ? (c >= 710 && c <= 721)
                  : c <= 740)))))
            : (c <= 748 || (c < 908
              ? (c < 890
                ? (c < 880
                  ? c == 750
                  : (c <= 884 || (c >= 886 && c <= 887)))
                : (c <= 893 || (c < 902
                  ? c == 895
                  : (c <= 902 || (c >= 904 && c <= 906)))))
              : (c <= 908 || (c < 1162
                ? (c < 931
                  ? (c >= 910 && c <= 929)
                  : (c <= 1013 || (c >= 1015 && c <= 1153)))
                : (c <= 1327 || (c < 1369
                  ? (c >= 1329 && c <= 1366)
                  : c <= 1369)))))))
          : (c <= 1416 || (c < 1984
            ? (c < 1765
              ? (c < 1632
                ? (c < 1519
                  ? (c >= 1488 && c <= 1514)
                  : (c <= 1522 || (c >= 1568 && c <= 1610)))
                : (c <= 1641 || (c < 1649
                  ? (c >= 1646 && c <= 1647)
                  : (c <= 1747 || c == 1749))))
              : (c <= 1766 || (c < 1810
                ? (c < 1791
                  ? (c >= 1774 && c <= 1788)
                  : (c <= 1791 || c == 1808))
                : (c <= 1839 || (c < 1969
                  ? (c >= 1869 && c <= 1957)
                  : c <= 1969)))))
            : (c <= 2026 || (c < 2144
              ? (c < 2074
                ? (c < 2042
                  ? (c >= 2036 && c <= 2037)
                  : (c <= 2042 || (c >= 2048 && c <= 2069)))
                : (c <= 2074 || (c < 2088
                  ? c == 2084
                  : (c <= 2088 || (c >= 2112 && c <= 2136)))))
              : (c <= 2154 || (c < 2308
                ? (c < 2185
                  ? (c >= 2160 && c <= 2183)
                  : (c <= 2190 || (c >= 2208 && c <= 2249)))
                : (c <= 2361 || (c < 2384
                  ? c == 2365
                  : c <= 2384)))))))))
        : (c <= 2401 || (c < 2730
          ? (c < 2556
            ? (c < 2486
              ? (c < 2447
                ? (c < 2417
                  ? (c >= 2406 && c <= 2415)
                  : (c <= 2432 || (c >= 2437 && c <= 2444)))
                : (c <= 2448 || (c < 2474
                  ? (c >= 2451 && c <= 2472)
                  : (c <= 2480 || c == 2482))))
              : (c <= 2489 || (c < 2527
                ? (c < 2510
                  ? c == 2493
                  : (c <= 2510 || (c >= 2524 && c <= 2525)))
                : (c <= 2529 || (c < 2548
                  ? (c >= 2534 && c <= 2545)
                  : c <= 2553)))))
            : (c <= 2556 || (c < 2649
              ? (c < 2602
                ? (c < 2575
                  ? (c >= 2565 && c <= 2570)
                  : (c <= 2576 || (c >= 2579 && c <= 2600)))
                : (c <= 2608 || (c < 2613
                  ? (c >= 2610 && c <= 2611)
                  : (c <= 2614 || (c >= 2616 && c <= 2617)))))
              : (c <= 2652 || (c < 2693
                ? (c < 2662
                  ? c == 2654
                  : (c <= 2671 || (c >= 2674 && c <= 2676)))
                : (c <= 2701 || (c < 2707
                  ? (c >= 2703 && c <= 2705)
                  : c <= 2728)))))))
          : (c <= 2736 || (c < 2908
            ? (c < 2821
              ? (c < 2768
                ? (c < 2741
                  ? (c >= 2738 && c <= 2739)
                  : (c <= 2745 || c == 2749))
                : (c <= 2768 || (c < 2790
                  ? (c >= 2784 && c <= 2785)
                  : (c <= 2799 || c == 2809))))
              : (c <= 2828 || (c < 2866
                ? (c < 2835
                  ? (c >= 2831 && c <= 2832)
                  : (c <= 2856 || (c >= 2858 && c <= 2864)))
                : (c <= 2867 || (c < 2877
                  ? (c >= 2869 && c <= 2873)
                  : c <= 2877)))))
            : (c <= 2909 || (c < 2969
              ? (c < 2947
                ? (c < 2918
                  ? (c >= 2911 && c <= 2913)
                  : (c <= 2927 || (c >= 2929 && c <= 2935)))
                : (c <= 2947 || (c < 2958
                  ? (c >= 2949 && c <= 2954)
                  : (c <= 2960 || (c >= 2962 && c <= 2965)))))
              : (c <= 2970 || (c < 2984
                ? (c < 2974
                  ? c == 2972
                  : (c <= 2975 || (c >= 2979 && c <= 2980)))
                : (c <= 2986 || (c < 3024
                  ? (c >= 2990 && c <= 3001)
                  : c <= 3024)))))))))))
      : (c <= 3058 || (c < 4176
        ? (c < 3450
          ? (c < 3242
            ? (c < 3168
              ? (c < 3114
                ? (c < 3086
                  ? (c >= 3077 && c <= 3084)
                  : (c <= 3088 || (c >= 3090 && c <= 3112)))
                : (c <= 3129 || (c < 3160
                  ? c == 3133
                  : (c <= 3162 || c == 3165))))
              : (c <= 3169 || (c < 3205
                ? (c < 3192
                  ? (c >= 3174 && c <= 3183)
                  : (c <= 3198 || c == 3200))
                : (c <= 3212 || (c < 3218
                  ? (c >= 3214 && c <= 3216)
                  : c <= 3240)))))
            : (c <= 3251 || (c < 3342
              ? (c < 3296
                ? (c < 3261
                  ? (c >= 3253 && c <= 3257)
                  : (c <= 3261 || (c >= 3293 && c <= 3294)))
                : (c <= 3297 || (c < 3313
                  ? (c >= 3302 && c <= 3311)
                  : (c <= 3314 || (c >= 3332 && c <= 3340)))))
              : (c <= 3344 || (c < 3412
                ? (c < 3389
                  ? (c >= 3346 && c <= 3386)
                  : (c <= 3389 || c == 3406))
                : (c <= 3414 || (c < 3430
                  ? (c >= 3416 && c <= 3425)
                  : c <= 3448)))))))
          : (c <= 3455 || (c < 3749
            ? (c < 3634
              ? (c < 3517
                ? (c < 3482
                  ? (c >= 3461 && c <= 3478)
                  : (c <= 3505 || (c >= 3507 && c <= 3515)))
                : (c <= 3517 || (c < 3558
                  ? (c >= 3520 && c <= 3526)
                  : (c <= 3567 || (c >= 3585 && c <= 3632)))))
              : (c <= 3635 || (c < 3716
                ? (c < 3664
                  ? (c >= 3648 && c <= 3654)
                  : (c <= 3673 || (c >= 3713 && c <= 3714)))
                : (c <= 3716 || (c < 3724
                  ? (c >= 3718 && c <= 3722)
                  : c <= 3747)))))
            : (c <= 3749 || (c < 3840
              ? (c < 3776
                ? (c < 3762
                  ? (c >= 3751 && c <= 3760)
                  : (c <= 3763 || c == 3773))
                : (c <= 3780 || (c < 3792
                  ? c == 3782
                  : (c <= 3801 || (c >= 3804 && c <= 3807)))))
              : (c <= 3840 || (c < 3976
                ? (c < 3904
                  ? (c >= 3872 && c <= 3891)
                  : (c <= 3911 || (c >= 3913 && c <= 3948)))
                : (c <= 3980 || (c < 4159
                  ? (c >= 4096 && c <= 4138)
                  : c <= 4169)))))))))
        : (c <= 4181 || (c < 5024
          ? (c < 4696
            ? (c < 4256
              ? (c < 4206
                ? (c < 4193
                  ? (c >= 4186 && c <= 4189)
                  : (c <= 4193 || (c >= 4197 && c <= 4198)))
                : (c <= 4208 || (c < 4238
                  ? (c >= 4213 && c <= 4225)
                  : (c <= 4238 || (c >= 4240 && c <= 4249)))))
              : (c <= 4293 || (c < 4348
                ? (c < 4301
                  ? c == 4295
                  : (c <= 4301 || (c >= 4304 && c <= 4346)))
                : (c <= 4680 || (c < 4688
                  ? (c >= 4682 && c <= 4685)
                  : c <= 4694)))))
            : (c <= 4696 || (c < 4802
              ? (c < 4752
                ? (c < 4704
                  ? (c >= 4698 && c <= 4701)
                  : (c <= 4744 || (c >= 4746 && c <= 4749)))
                : (c <= 4784 || (c < 4792
                  ? (c >= 4786 && c <= 4789)
                  : (c <= 4798 || c == 4800))))
              : (c <= 4805 || (c < 4888
                ? (c < 4824
                  ? (c >= 4808 && c <= 4822)
                  : (c <= 4880 || (c >= 4882 && c <= 4885)))
                : (c <= 4954 || (c < 4992
                  ? (c >= 4969 && c <= 4988)
                  : c <= 5007)))))))
          : (c <= 5109 || (c < 6112
            ? (c < 5919
              ? (c < 5761
                ? (c < 5121
                  ? (c >= 5112 && c <= 5117)
                  : (c <= 5740 || (c >= 5743 && c <= 5759)))
                : (c <= 5786 || (c < 5870
                  ? (c >= 5792 && c <= 5866)
                  : (c <= 5880 || (c >= 5888 && c <= 5905)))))
              : (c <= 5937 || (c < 6016
                ? (c < 5984
                  ? (c >= 5952 && c <= 5969)
                  : (c <= 5996 || (c >= 5998 && c <= 6000)))
                : (c <= 6067 || (c < 6108
                  ? c == 6103
                  : c <= 6108)))))
            : (c <= 6121 || (c < 6320
              ? (c < 6272
                ? (c < 6160
                  ? (c >= 6128 && c <= 6137)
                  : (c <= 6169 || (c >= 6176 && c <= 6264)))
                : (c <= 6276 || (c < 6314
                  ? (c >= 6279 && c <= 6312)
                  : c <= 6314)))
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

static inline bool sym_word_character_set_2(int32_t c) {
  return (c < 6656
    ? (c < 3046
      ? (c < 2392
        ? (c < 1376
          ? (c < 748
            ? (c < 185
              ? (c < 'b'
                ? (c < '0'
                  ? c == '-'
                  : (c <= '9' || (c >= 'A' && c <= 'Z')))
                : (c <= 'z' || (c < 178
                  ? c == 170
                  : (c <= 179 || c == 181))))
              : (c <= 186 || (c < 248
                ? (c < 192
                  ? (c >= 188 && c <= 190)
                  : (c <= 214 || (c >= 216 && c <= 246)))
                : (c <= 705 || (c < 736
                  ? (c >= 710 && c <= 721)
                  : c <= 740)))))
            : (c <= 748 || (c < 908
              ? (c < 890
                ? (c < 880
                  ? c == 750
                  : (c <= 884 || (c >= 886 && c <= 887)))
                : (c <= 893 || (c < 902
                  ? c == 895
                  : (c <= 902 || (c >= 904 && c <= 906)))))
              : (c <= 908 || (c < 1162
                ? (c < 931
                  ? (c >= 910 && c <= 929)
                  : (c <= 1013 || (c >= 1015 && c <= 1153)))
                : (c <= 1327 || (c < 1369
                  ? (c >= 1329 && c <= 1366)
                  : c <= 1369)))))))
          : (c <= 1416 || (c < 1984
            ? (c < 1765
              ? (c < 1632
                ? (c < 1519
                  ? (c >= 1488 && c <= 1514)
                  : (c <= 1522 || (c >= 1568 && c <= 1610)))
                : (c <= 1641 || (c < 1649
                  ? (c >= 1646 && c <= 1647)
                  : (c <= 1747 || c == 1749))))
              : (c <= 1766 || (c < 1810
                ? (c < 1791
                  ? (c >= 1774 && c <= 1788)
                  : (c <= 1791 || c == 1808))
                : (c <= 1839 || (c < 1969
                  ? (c >= 1869 && c <= 1957)
                  : c <= 1969)))))
            : (c <= 2026 || (c < 2144
              ? (c < 2074
                ? (c < 2042
                  ? (c >= 2036 && c <= 2037)
                  : (c <= 2042 || (c >= 2048 && c <= 2069)))
                : (c <= 2074 || (c < 2088
                  ? c == 2084
                  : (c <= 2088 || (c >= 2112 && c <= 2136)))))
              : (c <= 2154 || (c < 2308
                ? (c < 2185
                  ? (c >= 2160 && c <= 2183)
                  : (c <= 2190 || (c >= 2208 && c <= 2249)))
                : (c <= 2361 || (c < 2384
                  ? c == 2365
                  : c <= 2384)))))))))
        : (c <= 2401 || (c < 2730
          ? (c < 2556
            ? (c < 2486
              ? (c < 2447
                ? (c < 2417
                  ? (c >= 2406 && c <= 2415)
                  : (c <= 2432 || (c >= 2437 && c <= 2444)))
                : (c <= 2448 || (c < 2474
                  ? (c >= 2451 && c <= 2472)
                  : (c <= 2480 || c == 2482))))
              : (c <= 2489 || (c < 2527
                ? (c < 2510
                  ? c == 2493
                  : (c <= 2510 || (c >= 2524 && c <= 2525)))
                : (c <= 2529 || (c < 2548
                  ? (c >= 2534 && c <= 2545)
                  : c <= 2553)))))
            : (c <= 2556 || (c < 2649
              ? (c < 2602
                ? (c < 2575
                  ? (c >= 2565 && c <= 2570)
                  : (c <= 2576 || (c >= 2579 && c <= 2600)))
                : (c <= 2608 || (c < 2613
                  ? (c >= 2610 && c <= 2611)
                  : (c <= 2614 || (c >= 2616 && c <= 2617)))))
              : (c <= 2652 || (c < 2693
                ? (c < 2662
                  ? c == 2654
                  : (c <= 2671 || (c >= 2674 && c <= 2676)))
                : (c <= 2701 || (c < 2707
                  ? (c >= 2703 && c <= 2705)
                  : c <= 2728)))))))
          : (c <= 2736 || (c < 2908
            ? (c < 2821
              ? (c < 2768
                ? (c < 2741
                  ? (c >= 2738 && c <= 2739)
                  : (c <= 2745 || c == 2749))
                : (c <= 2768 || (c < 2790
                  ? (c >= 2784 && c <= 2785)
                  : (c <= 2799 || c == 2809))))
              : (c <= 2828 || (c < 2866
                ? (c < 2835
                  ? (c >= 2831 && c <= 2832)
                  : (c <= 2856 || (c >= 2858 && c <= 2864)))
                : (c <= 2867 || (c < 2877
                  ? (c >= 2869 && c <= 2873)
                  : c <= 2877)))))
            : (c <= 2909 || (c < 2969
              ? (c < 2947
                ? (c < 2918
                  ? (c >= 2911 && c <= 2913)
                  : (c <= 2927 || (c >= 2929 && c <= 2935)))
                : (c <= 2947 || (c < 2958
                  ? (c >= 2949 && c <= 2954)
                  : (c <= 2960 || (c >= 2962 && c <= 2965)))))
              : (c <= 2970 || (c < 2984
                ? (c < 2974
                  ? c == 2972
                  : (c <= 2975 || (c >= 2979 && c <= 2980)))
                : (c <= 2986 || (c < 3024
                  ? (c >= 2990 && c <= 3001)
                  : c <= 3024)))))))))))
      : (c <= 3058 || (c < 4176
        ? (c < 3450
          ? (c < 3242
            ? (c < 3168
              ? (c < 3114
                ? (c < 3086
                  ? (c >= 3077 && c <= 3084)
                  : (c <= 3088 || (c >= 3090 && c <= 3112)))
                : (c <= 3129 || (c < 3160
                  ? c == 3133
                  : (c <= 3162 || c == 3165))))
              : (c <= 3169 || (c < 3205
                ? (c < 3192
                  ? (c >= 3174 && c <= 3183)
                  : (c <= 3198 || c == 3200))
                : (c <= 3212 || (c < 3218
                  ? (c >= 3214 && c <= 3216)
                  : c <= 3240)))))
            : (c <= 3251 || (c < 3342
              ? (c < 3296
                ? (c < 3261
                  ? (c >= 3253 && c <= 3257)
                  : (c <= 3261 || (c >= 3293 && c <= 3294)))
                : (c <= 3297 || (c < 3313
                  ? (c >= 3302 && c <= 3311)
                  : (c <= 3314 || (c >= 3332 && c <= 3340)))))
              : (c <= 3344 || (c < 3412
                ? (c < 3389
                  ? (c >= 3346 && c <= 3386)
                  : (c <= 3389 || c == 3406))
                : (c <= 3414 || (c < 3430
                  ? (c >= 3416 && c <= 3425)
                  : c <= 3448)))))))
          : (c <= 3455 || (c < 3749
            ? (c < 3634
              ? (c < 3517
                ? (c < 3482
                  ? (c >= 3461 && c <= 3478)
                  : (c <= 3505 || (c >= 3507 && c <= 3515)))
                : (c <= 3517 || (c < 3558
                  ? (c >= 3520 && c <= 3526)
                  : (c <= 3567 || (c >= 3585 && c <= 3632)))))
              : (c <= 3635 || (c < 3716
                ? (c < 3664
                  ? (c >= 3648 && c <= 3654)
                  : (c <= 3673 || (c >= 3713 && c <= 3714)))
                : (c <= 3716 || (c < 3724
                  ? (c >= 3718 && c <= 3722)
                  : c <= 3747)))))
            : (c <= 3749 || (c < 3840
              ? (c < 3776
                ? (c < 3762
                  ? (c >= 3751 && c <= 3760)
                  : (c <= 3763 || c == 3773))
                : (c <= 3780 || (c < 3792
                  ? c == 3782
                  : (c <= 3801 || (c >= 3804 && c <= 3807)))))
              : (c <= 3840 || (c < 3976
                ? (c < 3904
                  ? (c >= 3872 && c <= 3891)
                  : (c <= 3911 || (c >= 3913 && c <= 3948)))
                : (c <= 3980 || (c < 4159
                  ? (c >= 4096 && c <= 4138)
                  : c <= 4169)))))))))
        : (c <= 4181 || (c < 5024
          ? (c < 4696
            ? (c < 4256
              ? (c < 4206
                ? (c < 4193
                  ? (c >= 4186 && c <= 4189)
                  : (c <= 4193 || (c >= 4197 && c <= 4198)))
                : (c <= 4208 || (c < 4238
                  ? (c >= 4213 && c <= 4225)
                  : (c <= 4238 || (c >= 4240 && c <= 4249)))))
              : (c <= 4293 || (c < 4348
                ? (c < 4301
                  ? c == 4295
                  : (c <= 4301 || (c >= 4304 && c <= 4346)))
                : (c <= 4680 || (c < 4688
                  ? (c >= 4682 && c <= 4685)
                  : c <= 4694)))))
            : (c <= 4696 || (c < 4802
              ? (c < 4752
                ? (c < 4704
                  ? (c >= 4698 && c <= 4701)
                  : (c <= 4744 || (c >= 4746 && c <= 4749)))
                : (c <= 4784 || (c < 4792
                  ? (c >= 4786 && c <= 4789)
                  : (c <= 4798 || c == 4800))))
              : (c <= 4805 || (c < 4888
                ? (c < 4824
                  ? (c >= 4808 && c <= 4822)
                  : (c <= 4880 || (c >= 4882 && c <= 4885)))
                : (c <= 4954 || (c < 4992
                  ? (c >= 4969 && c <= 4988)
                  : c <= 5007)))))))
          : (c <= 5109 || (c < 6112
            ? (c < 5919
              ? (c < 5761
                ? (c < 5121
                  ? (c >= 5112 && c <= 5117)
                  : (c <= 5740 || (c >= 5743 && c <= 5759)))
                : (c <= 5786 || (c < 5870
                  ? (c >= 5792 && c <= 5866)
                  : (c <= 5880 || (c >= 5888 && c <= 5905)))))
              : (c <= 5937 || (c < 6016
                ? (c < 5984
                  ? (c >= 5952 && c <= 5969)
                  : (c <= 5996 || (c >= 5998 && c <= 6000)))
                : (c <= 6067 || (c < 6108
                  ? c == 6103
                  : c <= 6108)))))
            : (c <= 6121 || (c < 6320
              ? (c < 6272
                ? (c < 6160
                  ? (c >= 6128 && c <= 6137)
                  : (c <= 6169 || (c >= 6176 && c <= 6264)))
                : (c <= 6276 || (c < 6314
                  ? (c >= 6279 && c <= 6312)
                  : c <= 6314)))
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
      if (eof) ADVANCE(70);
      if (lookahead == '#') ADVANCE(72);
      if (lookahead == '$') ADVANCE(83);
      if (lookahead == '%') ADVANCE(113);
      if (lookahead == '(') ADVANCE(121);
      if (lookahead == ')') ADVANCE(110);
      if (lookahead == '*') ADVANCE(107);
      if (lookahead == '+') ADVANCE(108);
      if (lookahead == ',') ADVANCE(122);
      if (lookahead == '-') ADVANCE(111);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == '/') ADVANCE(112);
      if (lookahead == '0') ADVANCE(138);
      if (lookahead == ':') ADVANCE(77);
      if (lookahead == '<') ADVANCE(103);
      if (lookahead == '=') ADVANCE(80);
      if (lookahead == '>') ADVANCE(104);
      if (lookahead == '[') ADVANCE(105);
      if (lookahead == '\\') SKIP(65)
      if (lookahead == ']') ADVANCE(106);
      if (lookahead == '^') ADVANCE(82);
      if (lookahead == 'a') ADVANCE(37);
      if (lookahead == 'k') ADVANCE(30);
      if (lookahead == 'n') ADVANCE(39);
      if (lookahead == 'o') ADVANCE(41);
      if (lookahead == 's') ADVANCE(32);
      if (lookahead == 't') ADVANCE(28);
      if (lookahead == '{') ADVANCE(100);
      if (lookahead == '|') ADVANCE(81);
      if (lookahead == '}') ADVANCE(102);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(68)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(137);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(154);
      END_STATE();
    case 2:
      if (lookahead == '\n') SKIP(15)
      END_STATE();
    case 3:
      if (lookahead == '\n') SKIP(15)
      if (lookahead == '\r') SKIP(2)
      END_STATE();
    case 4:
      if (lookahead == '\n') SKIP(12)
      END_STATE();
    case 5:
      if (lookahead == '\n') SKIP(12)
      if (lookahead == '\r') SKIP(4)
      END_STATE();
    case 6:
      if (lookahead == '\n') SKIP(14)
      END_STATE();
    case 7:
      if (lookahead == '\n') SKIP(14)
      if (lookahead == '\r') SKIP(6)
      END_STATE();
    case 8:
      if (lookahead == '\n') SKIP(17)
      END_STATE();
    case 9:
      if (lookahead == '\n') SKIP(17)
      if (lookahead == '\r') SKIP(8)
      END_STATE();
    case 10:
      if (lookahead == '\n') SKIP(18)
      END_STATE();
    case 11:
      if (lookahead == '\n') SKIP(18)
      if (lookahead == '\r') SKIP(10)
      END_STATE();
    case 12:
      if (lookahead == '#') ADVANCE(72);
      if (lookahead == '$') ADVANCE(83);
      if (lookahead == '(') ADVANCE(109);
      if (lookahead == ')') ADVANCE(110);
      if (lookahead == '*') ADVANCE(107);
      if (lookahead == '+') ADVANCE(108);
      if (lookahead == ':') ADVANCE(77);
      if (lookahead == '<') ADVANCE(103);
      if (lookahead == '[') ADVANCE(105);
      if (lookahead == '\\') SKIP(5)
      if (lookahead == ']') ADVANCE(106);
      if (lookahead == '^') ADVANCE(82);
      if (lookahead == '{') ADVANCE(99);
      if (lookahead == '|') ADVANCE(81);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(12)
      if (sym_word_character_set_1(lookahead)) ADVANCE(98);
      END_STATE();
    case 13:
      if (lookahead == '#') ADVANCE(72);
      if (lookahead == '%') ADVANCE(113);
      if (lookahead == '(') ADVANCE(121);
      if (lookahead == ')') ADVANCE(110);
      if (lookahead == '*') ADVANCE(107);
      if (lookahead == '+') ADVANCE(108);
      if (lookahead == ',') ADVANCE(122);
      if (lookahead == '-') ADVANCE(111);
      if (lookahead == '/') ADVANCE(112);
      if (lookahead == ':') ADVANCE(77);
      if (lookahead == '=') ADVANCE(80);
      if (lookahead == '\\') SKIP(7)
      if (lookahead == 'o') ADVANCE(41);
      if (lookahead == '}') ADVANCE(101);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(14)
      END_STATE();
    case 14:
      if (lookahead == '#') ADVANCE(72);
      if (lookahead == '%') ADVANCE(113);
      if (lookahead == ')') ADVANCE(110);
      if (lookahead == '*') ADVANCE(107);
      if (lookahead == '+') ADVANCE(108);
      if (lookahead == ',') ADVANCE(122);
      if (lookahead == '-') ADVANCE(111);
      if (lookahead == '/') ADVANCE(112);
      if (lookahead == ':') ADVANCE(77);
      if (lookahead == '=') ADVANCE(80);
      if (lookahead == '\\') SKIP(7)
      if (lookahead == 'o') ADVANCE(41);
      if (lookahead == '}') ADVANCE(101);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(14)
      END_STATE();
    case 15:
      if (lookahead == '#') ADVANCE(72);
      if (lookahead == '(') ADVANCE(109);
      if (lookahead == ')') ADVANCE(110);
      if (lookahead == ',') ADVANCE(122);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == '0') ADVANCE(138);
      if (lookahead == '\\') SKIP(3)
      if (lookahead == 'k') ADVANCE(126);
      if (lookahead == 's') ADVANCE(129);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(15)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(137);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      END_STATE();
    case 16:
      if (lookahead == '#') ADVANCE(72);
      if (lookahead == '(') ADVANCE(109);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == '0') ADVANCE(138);
      if (lookahead == '\\') ADVANCE(155);
      if (lookahead == 'k') ADVANCE(126);
      if (lookahead == 's') ADVANCE(129);
      if (lookahead == '{') ADVANCE(100);
      if (lookahead == '}') ADVANCE(102);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(16)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(137);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      END_STATE();
    case 17:
      if (lookahead == '#') ADVANCE(72);
      if (lookahead == '\\') SKIP(9)
      if (lookahead == 'a') ADVANCE(130);
      if (lookahead == 'n') ADVANCE(131);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(17)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      END_STATE();
    case 18:
      if (lookahead == '#') ADVANCE(72);
      if (lookahead == '\\') SKIP(11)
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(18)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      END_STATE();
    case 19:
      if (lookahead == '(') ADVANCE(115);
      END_STATE();
    case 20:
      if (lookahead == '(') ADVANCE(23);
      END_STATE();
    case 21:
      if (lookahead == '(') ADVANCE(120);
      END_STATE();
    case 22:
      if (lookahead == '(') ADVANCE(24);
      END_STATE();
    case 23:
      if (lookahead == ')') ADVANCE(78);
      END_STATE();
    case 24:
      if (lookahead == ')') ADVANCE(79);
      END_STATE();
    case 25:
      if (lookahead == '_') ADVANCE(48);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(140);
      END_STATE();
    case 26:
      if (lookahead == '_') ADVANCE(49);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(141);
      END_STATE();
    case 27:
      if (lookahead == '_') ADVANCE(54);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(142);
      END_STATE();
    case 28:
      if (lookahead == 'a') ADVANCE(35);
      END_STATE();
    case 29:
      if (lookahead == 'd') ADVANCE(73);
      END_STATE();
    case 30:
      if (lookahead == 'e') ADVANCE(46);
      END_STATE();
    case 31:
      if (lookahead == 'e') ADVANCE(40);
      END_STATE();
    case 32:
      if (lookahead == 'e') ADVANCE(45);
      if (lookahead == 'l') ADVANCE(33);
      END_STATE();
    case 33:
      if (lookahead == 'e') ADVANCE(31);
      END_STATE();
    case 34:
      if (lookahead == 'g') ADVANCE(42);
      END_STATE();
    case 35:
      if (lookahead == 'g') ADVANCE(20);
      END_STATE();
    case 36:
      if (lookahead == 'i') ADVANCE(38);
      END_STATE();
    case 37:
      if (lookahead == 'n') ADVANCE(29);
      END_STATE();
    case 38:
      if (lookahead == 'n') ADVANCE(34);
      END_STATE();
    case 39:
      if (lookahead == 'o') ADVANCE(43);
      END_STATE();
    case 40:
      if (lookahead == 'p') ADVANCE(21);
      END_STATE();
    case 41:
      if (lookahead == 'r') ADVANCE(114);
      END_STATE();
    case 42:
      if (lookahead == 's') ADVANCE(22);
      END_STATE();
    case 43:
      if (lookahead == 't') ADVANCE(75);
      END_STATE();
    case 44:
      if (lookahead == 't') ADVANCE(36);
      END_STATE();
    case 45:
      if (lookahead == 't') ADVANCE(44);
      END_STATE();
    case 46:
      if (lookahead == 'y') ADVANCE(19);
      END_STATE();
    case 47:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(51);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(145);
      END_STATE();
    case 48:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(140);
      END_STATE();
    case 49:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(141);
      END_STATE();
    case 50:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(144);
      END_STATE();
    case 51:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(145);
      END_STATE();
    case 52:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(153);
      END_STATE();
    case 53:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(52);
      END_STATE();
    case 54:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(142);
      END_STATE();
    case 55:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(153);
      END_STATE();
    case 56:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(55);
      END_STATE();
    case 57:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(56);
      END_STATE();
    case 58:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(57);
      END_STATE();
    case 59:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(58);
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
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      END_STATE();
    case 64:
      if (eof) ADVANCE(70);
      if (lookahead == '\n') SKIP(68)
      END_STATE();
    case 65:
      if (eof) ADVANCE(70);
      if (lookahead == '\n') SKIP(68)
      if (lookahead == '\r') SKIP(64)
      END_STATE();
    case 66:
      if (eof) ADVANCE(70);
      if (lookahead == '\n') SKIP(69)
      END_STATE();
    case 67:
      if (eof) ADVANCE(70);
      if (lookahead == '\n') SKIP(69)
      if (lookahead == '\r') SKIP(66)
      END_STATE();
    case 68:
      if (eof) ADVANCE(70);
      if (lookahead == '#') ADVANCE(72);
      if (lookahead == '$') ADVANCE(83);
      if (lookahead == '%') ADVANCE(113);
      if (lookahead == '(') ADVANCE(109);
      if (lookahead == ')') ADVANCE(110);
      if (lookahead == '*') ADVANCE(107);
      if (lookahead == '+') ADVANCE(108);
      if (lookahead == ',') ADVANCE(122);
      if (lookahead == '-') ADVANCE(111);
      if (lookahead == '.') ADVANCE(50);
      if (lookahead == '/') ADVANCE(112);
      if (lookahead == '0') ADVANCE(138);
      if (lookahead == ':') ADVANCE(77);
      if (lookahead == '<') ADVANCE(103);
      if (lookahead == '=') ADVANCE(80);
      if (lookahead == '>') ADVANCE(104);
      if (lookahead == '[') ADVANCE(105);
      if (lookahead == '\\') SKIP(65)
      if (lookahead == ']') ADVANCE(106);
      if (lookahead == '^') ADVANCE(82);
      if (lookahead == 'a') ADVANCE(37);
      if (lookahead == 'k') ADVANCE(30);
      if (lookahead == 'n') ADVANCE(39);
      if (lookahead == 'o') ADVANCE(41);
      if (lookahead == 's') ADVANCE(32);
      if (lookahead == 't') ADVANCE(28);
      if (lookahead == '{') ADVANCE(100);
      if (lookahead == '|') ADVANCE(81);
      if (lookahead == '}') ADVANCE(102);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(68)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(137);
      END_STATE();
    case 69:
      if (eof) ADVANCE(70);
      if (lookahead == '#') ADVANCE(72);
      if (lookahead == '(') ADVANCE(109);
      if (lookahead == '<') ADVANCE(103);
      if (lookahead == '[') ADVANCE(105);
      if (lookahead == '\\') SKIP(67)
      if (lookahead == '^') ADVANCE(82);
      if (lookahead == 'k') ADVANCE(88);
      if (lookahead == 's') ADVANCE(89);
      if (lookahead == 't') ADVANCE(87);
      if (lookahead == '{') ADVANCE(99);
      if (lookahead == '}') ADVANCE(101);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(69)
      if (sym_word_character_set_1(lookahead)) ADVANCE(98);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(119);
      if (lookahead == ')') ADVANCE(72);
      if (lookahead != 0) ADVANCE(71);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(72);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_and);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_and);
      if (lookahead == '.') ADVANCE(63);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_not);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_not);
      if (lookahead == '.') ADVANCE(63);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_tag_LPAREN_RPAREN);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_settings_LPAREN_RPAREN);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym_start_anchor);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym_end_anchor);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '(') ADVANCE(115);
      if (sym_word_character_set_1(lookahead)) ADVANCE(98);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '(') ADVANCE(23);
      if (sym_word_character_set_1(lookahead)) ADVANCE(98);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '(') ADVANCE(24);
      if (sym_word_character_set_1(lookahead)) ADVANCE(98);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'a') ADVANCE(91);
      if (sym_word_character_set_2(lookahead)) ADVANCE(98);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'e') ADVANCE(97);
      if (sym_word_character_set_1(lookahead)) ADVANCE(98);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'e') ADVANCE(96);
      if (sym_word_character_set_1(lookahead)) ADVANCE(98);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'g') ADVANCE(94);
      if (sym_word_character_set_1(lookahead)) ADVANCE(98);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'g') ADVANCE(85);
      if (sym_word_character_set_1(lookahead)) ADVANCE(98);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'i') ADVANCE(93);
      if (sym_word_character_set_1(lookahead)) ADVANCE(98);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'n') ADVANCE(90);
      if (sym_word_character_set_1(lookahead)) ADVANCE(98);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 's') ADVANCE(86);
      if (sym_word_character_set_1(lookahead)) ADVANCE(98);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 't') ADVANCE(92);
      if (sym_word_character_set_1(lookahead)) ADVANCE(98);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 't') ADVANCE(95);
      if (sym_word_character_set_1(lookahead)) ADVANCE(98);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'y') ADVANCE(84);
      if (sym_word_character_set_1(lookahead)) ADVANCE(98);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_word);
      if (sym_word_character_set_1(lookahead)) ADVANCE(98);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      if (lookahead == '{') ADVANCE(151);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      if (lookahead == '}') ADVANCE(152);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(anon_sym_or);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(anon_sym_key_LPAREN);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(aux_sym_key_action_token1);
      if (lookahead == '\n') ADVANCE(118);
      if (lookahead == '\r') ADVANCE(117);
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(119);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(aux_sym_key_action_token1);
      if (lookahead == '\n') ADVANCE(118);
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(119);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(aux_sym_key_action_token1);
      if (lookahead == '#') ADVANCE(71);
      if (lookahead == '\\') ADVANCE(116);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) ADVANCE(118);
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(119);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(aux_sym_key_action_token1);
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(119);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(anon_sym_sleep_LPAREN);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(anon_sym_LPAREN2);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '(') ADVANCE(115);
      if (lookahead == '.') ADVANCE(63);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '(') ADVANCE(120);
      if (lookahead == '.') ADVANCE(63);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(63);
      if (lookahead == 'd') ADVANCE(74);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(63);
      if (lookahead == 'e') ADVANCE(134);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(63);
      if (lookahead == 'e') ADVANCE(132);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(63);
      if (lookahead == 'e') ADVANCE(127);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(63);
      if (lookahead == 'l') ADVANCE(128);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(63);
      if (lookahead == 'n') ADVANCE(125);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(63);
      if (lookahead == 'o') ADVANCE(133);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(63);
      if (lookahead == 'p') ADVANCE(124);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(63);
      if (lookahead == 't') ADVANCE(76);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(63);
      if (lookahead == 'y') ADVANCE(123);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(63);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym_integer);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(146);
      if (lookahead == '_') ADVANCE(139);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(47);
      if (lookahead == 'J' ||
          lookahead == 'L' ||
          lookahead == 'j' ||
          lookahead == 'l') ADVANCE(136);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(137);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(146);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(25);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(26);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(27);
      if (lookahead == '_') ADVANCE(139);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(47);
      if (lookahead == 'J' ||
          lookahead == 'L' ||
          lookahead == 'j' ||
          lookahead == 'l') ADVANCE(136);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(137);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(146);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(47);
      if (lookahead == 'J' ||
          lookahead == 'L' ||
          lookahead == 'j' ||
          lookahead == 'l') ADVANCE(136);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(137);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '_') ADVANCE(48);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(136);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(140);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '_') ADVANCE(49);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(136);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(141);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '_') ADVANCE(54);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(136);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(142);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym_float);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == '_') ADVANCE(146);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(47);
      if (lookahead == 'J' ||
          lookahead == 'L' ||
          lookahead == 'j' ||
          lookahead == 'l') ADVANCE(143);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(144);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == '_') ADVANCE(147);
      if (lookahead == 'J' ||
          lookahead == 'L' ||
          lookahead == 'j' ||
          lookahead == 'l') ADVANCE(143);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(145);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(47);
      if (lookahead == 'J' ||
          lookahead == 'L' ||
          lookahead == 'j' ||
          lookahead == 'l') ADVANCE(143);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(144);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == 'J' ||
          lookahead == 'L' ||
          lookahead == 'j' ||
          lookahead == 'l') ADVANCE(143);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(145);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym_implicit_string);
      if (lookahead == '\r') ADVANCE(150);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(150);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym_implicit_string);
      if (lookahead == '#') ADVANCE(72);
      if (lookahead == '\\') ADVANCE(148);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) ADVANCE(149);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(150);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym_implicit_string);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(150);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(anon_sym_LBRACE_LBRACE);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(anon_sym_RBRACE_RBRACE);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym_string_escape_sequence);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym_string_escape_sequence);
      if (lookahead == '\\') ADVANCE(155);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym__not_escapesequence);
      if (lookahead == '\n') ADVANCE(154);
      if (lookahead == '\r') ADVANCE(1);
      if (sym_string_escape_sequence_character_set_1(lookahead)) ADVANCE(153);
      if (lookahead == 'U') ADVANCE(62);
      if (lookahead == 'u') ADVANCE(58);
      if (lookahead == 'x') ADVANCE(56);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(53);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 0, .external_lex_state = 2},
  [2] = {.lex_state = 69, .external_lex_state = 3},
  [3] = {.lex_state = 69, .external_lex_state = 3},
  [4] = {.lex_state = 69, .external_lex_state = 3},
  [5] = {.lex_state = 16, .external_lex_state = 4},
  [6] = {.lex_state = 15, .external_lex_state = 5},
  [7] = {.lex_state = 15, .external_lex_state = 5},
  [8] = {.lex_state = 15, .external_lex_state = 5},
  [9] = {.lex_state = 15, .external_lex_state = 6},
  [10] = {.lex_state = 15, .external_lex_state = 6},
  [11] = {.lex_state = 12, .external_lex_state = 3},
  [12] = {.lex_state = 15, .external_lex_state = 6},
  [13] = {.lex_state = 12, .external_lex_state = 3},
  [14] = {.lex_state = 12, .external_lex_state = 3},
  [15] = {.lex_state = 12, .external_lex_state = 3},
  [16] = {.lex_state = 12, .external_lex_state = 3},
  [17] = {.lex_state = 15, .external_lex_state = 7},
  [18] = {.lex_state = 15, .external_lex_state = 7},
  [19] = {.lex_state = 12, .external_lex_state = 3},
  [20] = {.lex_state = 15, .external_lex_state = 7},
  [21] = {.lex_state = 15, .external_lex_state = 7},
  [22] = {.lex_state = 15, .external_lex_state = 7},
  [23] = {.lex_state = 15, .external_lex_state = 7},
  [24] = {.lex_state = 15, .external_lex_state = 7},
  [25] = {.lex_state = 15, .external_lex_state = 7},
  [26] = {.lex_state = 15, .external_lex_state = 7},
  [27] = {.lex_state = 15, .external_lex_state = 7},
  [28] = {.lex_state = 15, .external_lex_state = 7},
  [29] = {.lex_state = 15, .external_lex_state = 7},
  [30] = {.lex_state = 15, .external_lex_state = 7},
  [31] = {.lex_state = 15, .external_lex_state = 7},
  [32] = {.lex_state = 15, .external_lex_state = 7},
  [33] = {.lex_state = 15, .external_lex_state = 7},
  [34] = {.lex_state = 15, .external_lex_state = 7},
  [35] = {.lex_state = 12, .external_lex_state = 3},
  [36] = {.lex_state = 16, .external_lex_state = 8},
  [37] = {.lex_state = 12, .external_lex_state = 3},
  [38] = {.lex_state = 12, .external_lex_state = 3},
  [39] = {.lex_state = 12, .external_lex_state = 3},
  [40] = {.lex_state = 16, .external_lex_state = 8},
  [41] = {.lex_state = 16, .external_lex_state = 8},
  [42] = {.lex_state = 16, .external_lex_state = 8},
  [43] = {.lex_state = 12, .external_lex_state = 3},
  [44] = {.lex_state = 12, .external_lex_state = 3},
  [45] = {.lex_state = 16, .external_lex_state = 8},
  [46] = {.lex_state = 12, .external_lex_state = 3},
  [47] = {.lex_state = 12, .external_lex_state = 3},
  [48] = {.lex_state = 13, .external_lex_state = 3},
  [49] = {.lex_state = 69, .external_lex_state = 3},
  [50] = {.lex_state = 69, .external_lex_state = 3},
  [51] = {.lex_state = 69, .external_lex_state = 3},
  [52] = {.lex_state = 69, .external_lex_state = 3},
  [53] = {.lex_state = 69, .external_lex_state = 3},
  [54] = {.lex_state = 13, .external_lex_state = 3},
  [55] = {.lex_state = 13, .external_lex_state = 9},
  [56] = {.lex_state = 69, .external_lex_state = 3},
  [57] = {.lex_state = 69, .external_lex_state = 3},
  [58] = {.lex_state = 13, .external_lex_state = 9},
  [59] = {.lex_state = 69, .external_lex_state = 3},
  [60] = {.lex_state = 69, .external_lex_state = 3},
  [61] = {.lex_state = 69, .external_lex_state = 3},
  [62] = {.lex_state = 69, .external_lex_state = 3},
  [63] = {.lex_state = 69, .external_lex_state = 3},
  [64] = {.lex_state = 69, .external_lex_state = 3},
  [65] = {.lex_state = 69, .external_lex_state = 3},
  [66] = {.lex_state = 69, .external_lex_state = 3},
  [67] = {.lex_state = 13, .external_lex_state = 9},
  [68] = {.lex_state = 0, .external_lex_state = 3},
  [69] = {.lex_state = 0, .external_lex_state = 3},
  [70] = {.lex_state = 13, .external_lex_state = 3},
  [71] = {.lex_state = 13, .external_lex_state = 3},
  [72] = {.lex_state = 13, .external_lex_state = 3},
  [73] = {.lex_state = 13, .external_lex_state = 3},
  [74] = {.lex_state = 13, .external_lex_state = 3},
  [75] = {.lex_state = 13, .external_lex_state = 3},
  [76] = {.lex_state = 13, .external_lex_state = 3},
  [77] = {.lex_state = 13, .external_lex_state = 3},
  [78] = {.lex_state = 13, .external_lex_state = 3},
  [79] = {.lex_state = 13, .external_lex_state = 3},
  [80] = {.lex_state = 13, .external_lex_state = 3},
  [81] = {.lex_state = 13, .external_lex_state = 3},
  [82] = {.lex_state = 13, .external_lex_state = 3},
  [83] = {.lex_state = 17, .external_lex_state = 10},
  [84] = {.lex_state = 16, .external_lex_state = 8},
  [85] = {.lex_state = 15, .external_lex_state = 5},
  [86] = {.lex_state = 15, .external_lex_state = 5},
  [87] = {.lex_state = 16, .external_lex_state = 8},
  [88] = {.lex_state = 17, .external_lex_state = 10},
  [89] = {.lex_state = 15, .external_lex_state = 5},
  [90] = {.lex_state = 17, .external_lex_state = 10},
  [91] = {.lex_state = 0, .external_lex_state = 3},
  [92] = {.lex_state = 16, .external_lex_state = 8},
  [93] = {.lex_state = 0, .external_lex_state = 9},
  [94] = {.lex_state = 0, .external_lex_state = 9},
  [95] = {.lex_state = 0, .external_lex_state = 9},
  [96] = {.lex_state = 0, .external_lex_state = 9},
  [97] = {.lex_state = 0, .external_lex_state = 9},
  [98] = {.lex_state = 0, .external_lex_state = 3},
  [99] = {.lex_state = 0, .external_lex_state = 9},
  [100] = {.lex_state = 13, .external_lex_state = 3},
  [101] = {.lex_state = 0, .external_lex_state = 9},
  [102] = {.lex_state = 0, .external_lex_state = 9},
  [103] = {.lex_state = 0, .external_lex_state = 9},
  [104] = {.lex_state = 0, .external_lex_state = 9},
  [105] = {.lex_state = 0, .external_lex_state = 9},
  [106] = {.lex_state = 0, .external_lex_state = 3},
  [107] = {.lex_state = 0, .external_lex_state = 9},
  [108] = {.lex_state = 0, .external_lex_state = 9},
  [109] = {.lex_state = 0, .external_lex_state = 9},
  [110] = {.lex_state = 0, .external_lex_state = 9},
  [111] = {.lex_state = 0, .external_lex_state = 9},
  [112] = {.lex_state = 0, .external_lex_state = 9},
  [113] = {.lex_state = 0, .external_lex_state = 9},
  [114] = {.lex_state = 17, .external_lex_state = 3},
  [115] = {.lex_state = 0, .external_lex_state = 3},
  [116] = {.lex_state = 0, .external_lex_state = 3},
  [117] = {.lex_state = 0, .external_lex_state = 3},
  [118] = {.lex_state = 0, .external_lex_state = 3},
  [119] = {.lex_state = 0, .external_lex_state = 3},
  [120] = {.lex_state = 17, .external_lex_state = 3},
  [121] = {.lex_state = 17, .external_lex_state = 10},
  [122] = {.lex_state = 17, .external_lex_state = 10},
  [123] = {.lex_state = 0, .external_lex_state = 3},
  [124] = {.lex_state = 0, .external_lex_state = 3},
  [125] = {.lex_state = 0, .external_lex_state = 3},
  [126] = {.lex_state = 0, .external_lex_state = 3},
  [127] = {.lex_state = 0, .external_lex_state = 3},
  [128] = {.lex_state = 17, .external_lex_state = 3},
  [129] = {.lex_state = 0, .external_lex_state = 3},
  [130] = {.lex_state = 0, .external_lex_state = 9},
  [131] = {.lex_state = 0, .external_lex_state = 3},
  [132] = {.lex_state = 149, .external_lex_state = 3},
  [133] = {.lex_state = 0, .external_lex_state = 3},
  [134] = {.lex_state = 0, .external_lex_state = 3},
  [135] = {.lex_state = 0, .external_lex_state = 3},
  [136] = {.lex_state = 118, .external_lex_state = 3},
  [137] = {.lex_state = 0, .external_lex_state = 9},
  [138] = {.lex_state = 0, .external_lex_state = 3},
  [139] = {.lex_state = 149, .external_lex_state = 3},
  [140] = {.lex_state = 118, .external_lex_state = 3},
  [141] = {.lex_state = 0, .external_lex_state = 3},
  [142] = {.lex_state = 0, .external_lex_state = 3},
  [143] = {.lex_state = 18, .external_lex_state = 3},
  [144] = {.lex_state = 0, .external_lex_state = 3},
  [145] = {.lex_state = 0, .external_lex_state = 3},
  [146] = {.lex_state = 0, .external_lex_state = 3},
  [147] = {.lex_state = 0, .external_lex_state = 3},
  [148] = {.lex_state = 0, .external_lex_state = 3},
  [149] = {.lex_state = 69, .external_lex_state = 3},
  [150] = {.lex_state = 0, .external_lex_state = 3},
  [151] = {.lex_state = 0, .external_lex_state = 3},
  [152] = {.lex_state = 18, .external_lex_state = 3},
  [153] = {.lex_state = 0, .external_lex_state = 9},
  [154] = {.lex_state = 18, .external_lex_state = 3},
  [155] = {.lex_state = 118, .external_lex_state = 3},
  [156] = {.lex_state = 0, .external_lex_state = 3},
  [157] = {.lex_state = 118, .external_lex_state = 3},
  [158] = {.lex_state = 0, .external_lex_state = 3},
  [159] = {.lex_state = 0, .external_lex_state = 3},
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
    [anon_sym_tag_LPAREN_RPAREN] = ACTIONS(1),
    [anon_sym_settings_LPAREN_RPAREN] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
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
    [sym_source_file] = STATE(146),
    [sym_matches] = STATE(3),
    [sym_comment] = ACTIONS(3),
    [sym__matches_start] = ACTIONS(5),
    [sym__matches_empty] = ACTIONS(7),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      ts_builtin_sym_end,
    ACTIONS(11), 1,
      anon_sym_tag_LPAREN_RPAREN,
    ACTIONS(14), 1,
      anon_sym_settings_LPAREN_RPAREN,
    ACTIONS(17), 1,
      sym_start_anchor,
    ACTIONS(20), 1,
      sym_word,
    ACTIONS(23), 1,
      anon_sym_LBRACE,
    ACTIONS(26), 1,
      anon_sym_LT,
    ACTIONS(29), 1,
      anon_sym_LBRACK,
    ACTIONS(32), 1,
      anon_sym_LPAREN,
    ACTIONS(35), 1,
      anon_sym_key_LPAREN,
    STATE(115), 1,
      sym__optional_anchor,
    STATE(133), 1,
      sym_key_action,
    STATE(148), 1,
      sym_rule,
    STATE(2), 2,
      sym_declaration,
      aux_sym_source_file_repeat1,
    STATE(118), 2,
      sym__optional_seq,
      sym_seq,
    STATE(131), 2,
      sym__optional_choice,
      sym_choice,
    STATE(49), 4,
      sym_command_declaration,
      sym_tag_import_declaration,
      sym_key_binding_declaration,
      sym_settings_declaration,
    STATE(11), 7,
      sym__primary_rule,
      sym_list,
      sym_capture,
      sym_optional,
      sym_repeat,
      sym_repeat1,
      sym_parenthesized_rule,
  [70] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(38), 1,
      ts_builtin_sym_end,
    ACTIONS(40), 1,
      anon_sym_tag_LPAREN_RPAREN,
    ACTIONS(42), 1,
      anon_sym_settings_LPAREN_RPAREN,
    ACTIONS(44), 1,
      sym_start_anchor,
    ACTIONS(46), 1,
      sym_word,
    ACTIONS(48), 1,
      anon_sym_LBRACE,
    ACTIONS(50), 1,
      anon_sym_LT,
    ACTIONS(52), 1,
      anon_sym_LBRACK,
    ACTIONS(54), 1,
      anon_sym_LPAREN,
    ACTIONS(56), 1,
      anon_sym_key_LPAREN,
    STATE(115), 1,
      sym__optional_anchor,
    STATE(133), 1,
      sym_key_action,
    STATE(148), 1,
      sym_rule,
    STATE(4), 2,
      sym_declaration,
      aux_sym_source_file_repeat1,
    STATE(118), 2,
      sym__optional_seq,
      sym_seq,
    STATE(131), 2,
      sym__optional_choice,
      sym_choice,
    STATE(49), 4,
      sym_command_declaration,
      sym_tag_import_declaration,
      sym_key_binding_declaration,
      sym_settings_declaration,
    STATE(11), 7,
      sym__primary_rule,
      sym_list,
      sym_capture,
      sym_optional,
      sym_repeat,
      sym_repeat1,
      sym_parenthesized_rule,
  [140] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(40), 1,
      anon_sym_tag_LPAREN_RPAREN,
    ACTIONS(42), 1,
      anon_sym_settings_LPAREN_RPAREN,
    ACTIONS(44), 1,
      sym_start_anchor,
    ACTIONS(46), 1,
      sym_word,
    ACTIONS(48), 1,
      anon_sym_LBRACE,
    ACTIONS(50), 1,
      anon_sym_LT,
    ACTIONS(52), 1,
      anon_sym_LBRACK,
    ACTIONS(54), 1,
      anon_sym_LPAREN,
    ACTIONS(56), 1,
      anon_sym_key_LPAREN,
    ACTIONS(58), 1,
      ts_builtin_sym_end,
    STATE(115), 1,
      sym__optional_anchor,
    STATE(133), 1,
      sym_key_action,
    STATE(148), 1,
      sym_rule,
    STATE(2), 2,
      sym_declaration,
      aux_sym_source_file_repeat1,
    STATE(118), 2,
      sym__optional_seq,
      sym_seq,
    STATE(131), 2,
      sym__optional_choice,
      sym_choice,
    STATE(49), 4,
      sym_command_declaration,
      sym_tag_import_declaration,
      sym_key_binding_declaration,
      sym_settings_declaration,
    STATE(11), 7,
      sym__primary_rule,
      sym_list,
      sym_capture,
      sym_optional,
      sym_repeat,
      sym_repeat1,
      sym_parenthesized_rule,
  [210] = 11,
    ACTIONS(60), 1,
      sym_comment,
    ACTIONS(64), 1,
      anon_sym_LPAREN,
    ACTIONS(66), 1,
      anon_sym_key_LPAREN,
    ACTIONS(68), 1,
      anon_sym_sleep_LPAREN,
    ACTIONS(70), 1,
      sym_identifier,
    ACTIONS(74), 1,
      sym__string_start,
    STATE(100), 1,
      sym_expression,
    ACTIONS(72), 2,
      sym_integer,
      sym_float,
    ACTIONS(76), 2,
      sym_string_content,
      sym__string_end,
    ACTIONS(62), 6,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACE_LBRACE,
      anon_sym_RBRACE_RBRACE,
      sym_string_escape_sequence,
      sym__not_escapesequence,
    STATE(82), 7,
      sym_variable,
      sym_parenthesized_expression,
      sym_binary_operator,
      sym_key_action,
      sym_sleep_action,
      sym_action,
      sym_string,
  [257] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(78), 1,
      anon_sym_LPAREN,
    ACTIONS(80), 1,
      anon_sym_key_LPAREN,
    ACTIONS(82), 1,
      anon_sym_sleep_LPAREN,
    ACTIONS(84), 1,
      sym_identifier,
    ACTIONS(86), 1,
      sym_integer,
    ACTIONS(88), 1,
      sym_float,
    ACTIONS(90), 1,
      sym__dedent,
    ACTIONS(92), 1,
      sym__string_start,
    STATE(64), 1,
      sym_block,
    STATE(99), 1,
      sym_expression,
    STATE(8), 2,
      sym_statement,
      aux_sym_block_repeat1,
    STATE(89), 2,
      sym_assignment_statement,
      sym_expression_statement,
    STATE(111), 7,
      sym_variable,
      sym_parenthesized_expression,
      sym_binary_operator,
      sym_key_action,
      sym_sleep_action,
      sym_action,
      sym_string,
  [308] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(94), 1,
      anon_sym_LPAREN,
    ACTIONS(97), 1,
      anon_sym_key_LPAREN,
    ACTIONS(100), 1,
      anon_sym_sleep_LPAREN,
    ACTIONS(103), 1,
      sym_identifier,
    ACTIONS(106), 1,
      sym_integer,
    ACTIONS(109), 1,
      sym_float,
    ACTIONS(112), 1,
      sym__dedent,
    ACTIONS(114), 1,
      sym__string_start,
    STATE(99), 1,
      sym_expression,
    STATE(7), 2,
      sym_statement,
      aux_sym_block_repeat1,
    STATE(89), 2,
      sym_assignment_statement,
      sym_expression_statement,
    STATE(111), 7,
      sym_variable,
      sym_parenthesized_expression,
      sym_binary_operator,
      sym_key_action,
      sym_sleep_action,
      sym_action,
      sym_string,
  [356] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(78), 1,
      anon_sym_LPAREN,
    ACTIONS(80), 1,
      anon_sym_key_LPAREN,
    ACTIONS(82), 1,
      anon_sym_sleep_LPAREN,
    ACTIONS(84), 1,
      sym_identifier,
    ACTIONS(86), 1,
      sym_integer,
    ACTIONS(88), 1,
      sym_float,
    ACTIONS(92), 1,
      sym__string_start,
    ACTIONS(117), 1,
      sym__dedent,
    STATE(99), 1,
      sym_expression,
    STATE(7), 2,
      sym_statement,
      aux_sym_block_repeat1,
    STATE(89), 2,
      sym_assignment_statement,
      sym_expression_statement,
    STATE(111), 7,
      sym_variable,
      sym_parenthesized_expression,
      sym_binary_operator,
      sym_key_action,
      sym_sleep_action,
      sym_action,
      sym_string,
  [404] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(78), 1,
      anon_sym_LPAREN,
    ACTIONS(80), 1,
      anon_sym_key_LPAREN,
    ACTIONS(82), 1,
      anon_sym_sleep_LPAREN,
    ACTIONS(86), 1,
      sym_integer,
    ACTIONS(88), 1,
      sym_float,
    ACTIONS(92), 1,
      sym__string_start,
    ACTIONS(119), 1,
      sym_identifier,
    ACTIONS(121), 1,
      sym__indent,
    STATE(50), 1,
      sym__statements,
    STATE(61), 1,
      sym_statement,
    STATE(113), 1,
      sym_expression,
    STATE(62), 2,
      sym_assignment_statement,
      sym_expression_statement,
    STATE(111), 7,
      sym_variable,
      sym_parenthesized_expression,
      sym_binary_operator,
      sym_key_action,
      sym_sleep_action,
      sym_action,
      sym_string,
  [454] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(78), 1,
      anon_sym_LPAREN,
    ACTIONS(80), 1,
      anon_sym_key_LPAREN,
    ACTIONS(82), 1,
      anon_sym_sleep_LPAREN,
    ACTIONS(86), 1,
      sym_integer,
    ACTIONS(88), 1,
      sym_float,
    ACTIONS(92), 1,
      sym__string_start,
    ACTIONS(119), 1,
      sym_identifier,
    ACTIONS(121), 1,
      sym__indent,
    STATE(60), 1,
      sym__statements,
    STATE(61), 1,
      sym_statement,
    STATE(113), 1,
      sym_expression,
    STATE(62), 2,
      sym_assignment_statement,
      sym_expression_statement,
    STATE(111), 7,
      sym_variable,
      sym_parenthesized_expression,
      sym_binary_operator,
      sym_key_action,
      sym_sleep_action,
      sym_action,
      sym_string,
  [504] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(48), 1,
      anon_sym_LBRACE,
    ACTIONS(50), 1,
      anon_sym_LT,
    ACTIONS(52), 1,
      anon_sym_LBRACK,
    ACTIONS(54), 1,
      anon_sym_LPAREN,
    ACTIONS(125), 1,
      sym_word,
    ACTIONS(127), 1,
      anon_sym_STAR,
    ACTIONS(129), 1,
      anon_sym_PLUS,
    STATE(14), 1,
      aux_sym_seq_repeat1,
    ACTIONS(123), 5,
      anon_sym_COLON,
      anon_sym_PIPE,
      sym_end_anchor,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
    STATE(47), 7,
      sym__primary_rule,
      sym_list,
      sym_capture,
      sym_optional,
      sym_repeat,
      sym_repeat1,
      sym_parenthesized_rule,
  [548] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(78), 1,
      anon_sym_LPAREN,
    ACTIONS(80), 1,
      anon_sym_key_LPAREN,
    ACTIONS(82), 1,
      anon_sym_sleep_LPAREN,
    ACTIONS(86), 1,
      sym_integer,
    ACTIONS(88), 1,
      sym_float,
    ACTIONS(92), 1,
      sym__string_start,
    ACTIONS(119), 1,
      sym_identifier,
    ACTIONS(121), 1,
      sym__indent,
    STATE(53), 1,
      sym__statements,
    STATE(61), 1,
      sym_statement,
    STATE(113), 1,
      sym_expression,
    STATE(62), 2,
      sym_assignment_statement,
      sym_expression_statement,
    STATE(111), 7,
      sym_variable,
      sym_parenthesized_expression,
      sym_binary_operator,
      sym_key_action,
      sym_sleep_action,
      sym_action,
      sym_string,
  [598] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(133), 1,
      sym_word,
    ACTIONS(136), 1,
      anon_sym_LBRACE,
    ACTIONS(139), 1,
      anon_sym_LT,
    ACTIONS(142), 1,
      anon_sym_LBRACK,
    ACTIONS(145), 1,
      anon_sym_LPAREN,
    STATE(13), 1,
      aux_sym_seq_repeat1,
    ACTIONS(131), 5,
      anon_sym_COLON,
      anon_sym_PIPE,
      sym_end_anchor,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
    STATE(47), 7,
      sym__primary_rule,
      sym_list,
      sym_capture,
      sym_optional,
      sym_repeat,
      sym_repeat1,
      sym_parenthesized_rule,
  [636] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(48), 1,
      anon_sym_LBRACE,
    ACTIONS(50), 1,
      anon_sym_LT,
    ACTIONS(52), 1,
      anon_sym_LBRACK,
    ACTIONS(54), 1,
      anon_sym_LPAREN,
    ACTIONS(125), 1,
      sym_word,
    STATE(13), 1,
      aux_sym_seq_repeat1,
    ACTIONS(148), 5,
      anon_sym_COLON,
      anon_sym_PIPE,
      sym_end_anchor,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
    STATE(47), 7,
      sym__primary_rule,
      sym_list,
      sym_capture,
      sym_optional,
      sym_repeat,
      sym_repeat1,
      sym_parenthesized_rule,
  [674] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(44), 1,
      sym_start_anchor,
    ACTIONS(48), 1,
      anon_sym_LBRACE,
    ACTIONS(50), 1,
      anon_sym_LT,
    ACTIONS(52), 1,
      anon_sym_LBRACK,
    ACTIONS(54), 1,
      anon_sym_LPAREN,
    ACTIONS(150), 1,
      sym_word,
    STATE(115), 1,
      sym__optional_anchor,
    STATE(118), 2,
      sym__optional_seq,
      sym_seq,
    STATE(145), 2,
      sym__optional_choice,
      sym_choice,
    STATE(11), 7,
      sym__primary_rule,
      sym_list,
      sym_capture,
      sym_optional,
      sym_repeat,
      sym_repeat1,
      sym_parenthesized_rule,
  [716] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(44), 1,
      sym_start_anchor,
    ACTIONS(48), 1,
      anon_sym_LBRACE,
    ACTIONS(50), 1,
      anon_sym_LT,
    ACTIONS(52), 1,
      anon_sym_LBRACK,
    ACTIONS(54), 1,
      anon_sym_LPAREN,
    ACTIONS(150), 1,
      sym_word,
    STATE(115), 1,
      sym__optional_anchor,
    STATE(118), 2,
      sym__optional_seq,
      sym_seq,
    STATE(141), 2,
      sym__optional_choice,
      sym_choice,
    STATE(11), 7,
      sym__primary_rule,
      sym_list,
      sym_capture,
      sym_optional,
      sym_repeat,
      sym_repeat1,
      sym_parenthesized_rule,
  [758] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(56), 1,
      anon_sym_key_LPAREN,
    ACTIONS(70), 1,
      sym_identifier,
    ACTIONS(72), 1,
      sym_integer,
    ACTIONS(74), 1,
      sym__string_start,
    ACTIONS(152), 1,
      anon_sym_LPAREN,
    ACTIONS(154), 1,
      anon_sym_RPAREN,
    ACTIONS(156), 1,
      anon_sym_sleep_LPAREN,
    ACTIONS(158), 1,
      anon_sym_COMMA,
    ACTIONS(160), 1,
      sym_float,
    STATE(69), 1,
      sym_expression,
    STATE(82), 7,
      sym_variable,
      sym_parenthesized_expression,
      sym_binary_operator,
      sym_key_action,
      sym_sleep_action,
      sym_action,
      sym_string,
  [801] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(56), 1,
      anon_sym_key_LPAREN,
    ACTIONS(70), 1,
      sym_identifier,
    ACTIONS(72), 1,
      sym_integer,
    ACTIONS(74), 1,
      sym__string_start,
    ACTIONS(152), 1,
      anon_sym_LPAREN,
    ACTIONS(156), 1,
      anon_sym_sleep_LPAREN,
    ACTIONS(160), 1,
      sym_float,
    ACTIONS(162), 1,
      anon_sym_RPAREN,
    ACTIONS(164), 1,
      anon_sym_COMMA,
    STATE(68), 1,
      sym_expression,
    STATE(82), 7,
      sym_variable,
      sym_parenthesized_expression,
      sym_binary_operator,
      sym_key_action,
      sym_sleep_action,
      sym_action,
      sym_string,
  [844] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(44), 1,
      sym_start_anchor,
    ACTIONS(48), 1,
      anon_sym_LBRACE,
    ACTIONS(50), 1,
      anon_sym_LT,
    ACTIONS(52), 1,
      anon_sym_LBRACK,
    ACTIONS(54), 1,
      anon_sym_LPAREN,
    ACTIONS(150), 1,
      sym_word,
    STATE(124), 1,
      sym__optional_anchor,
    STATE(118), 2,
      sym__optional_seq,
      sym_seq,
    STATE(11), 7,
      sym__primary_rule,
      sym_list,
      sym_capture,
      sym_optional,
      sym_repeat,
      sym_repeat1,
      sym_parenthesized_rule,
  [882] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(56), 1,
      anon_sym_key_LPAREN,
    ACTIONS(70), 1,
      sym_identifier,
    ACTIONS(72), 1,
      sym_integer,
    ACTIONS(74), 1,
      sym__string_start,
    ACTIONS(152), 1,
      anon_sym_LPAREN,
    ACTIONS(156), 1,
      anon_sym_sleep_LPAREN,
    ACTIONS(160), 1,
      sym_float,
    ACTIONS(166), 1,
      anon_sym_RPAREN,
    STATE(91), 1,
      sym_expression,
    STATE(82), 7,
      sym_variable,
      sym_parenthesized_expression,
      sym_binary_operator,
      sym_key_action,
      sym_sleep_action,
      sym_action,
      sym_string,
  [922] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(56), 1,
      anon_sym_key_LPAREN,
    ACTIONS(70), 1,
      sym_identifier,
    ACTIONS(72), 1,
      sym_integer,
    ACTIONS(74), 1,
      sym__string_start,
    ACTIONS(152), 1,
      anon_sym_LPAREN,
    ACTIONS(156), 1,
      anon_sym_sleep_LPAREN,
    ACTIONS(160), 1,
      sym_float,
    ACTIONS(168), 1,
      anon_sym_RPAREN,
    STATE(91), 1,
      sym_expression,
    STATE(82), 7,
      sym_variable,
      sym_parenthesized_expression,
      sym_binary_operator,
      sym_key_action,
      sym_sleep_action,
      sym_action,
      sym_string,
  [962] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(56), 1,
      anon_sym_key_LPAREN,
    ACTIONS(70), 1,
      sym_identifier,
    ACTIONS(72), 1,
      sym_integer,
    ACTIONS(74), 1,
      sym__string_start,
    ACTIONS(152), 1,
      anon_sym_LPAREN,
    ACTIONS(156), 1,
      anon_sym_sleep_LPAREN,
    ACTIONS(160), 1,
      sym_float,
    ACTIONS(170), 1,
      anon_sym_RPAREN,
    STATE(91), 1,
      sym_expression,
    STATE(82), 7,
      sym_variable,
      sym_parenthesized_expression,
      sym_binary_operator,
      sym_key_action,
      sym_sleep_action,
      sym_action,
      sym_string,
  [1002] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(56), 1,
      anon_sym_key_LPAREN,
    ACTIONS(70), 1,
      sym_identifier,
    ACTIONS(72), 1,
      sym_integer,
    ACTIONS(74), 1,
      sym__string_start,
    ACTIONS(152), 1,
      anon_sym_LPAREN,
    ACTIONS(156), 1,
      anon_sym_sleep_LPAREN,
    ACTIONS(160), 1,
      sym_float,
    ACTIONS(172), 1,
      anon_sym_RPAREN,
    STATE(91), 1,
      sym_expression,
    STATE(82), 7,
      sym_variable,
      sym_parenthesized_expression,
      sym_binary_operator,
      sym_key_action,
      sym_sleep_action,
      sym_action,
      sym_string,
  [1042] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(56), 1,
      anon_sym_key_LPAREN,
    ACTIONS(70), 1,
      sym_identifier,
    ACTIONS(72), 1,
      sym_integer,
    ACTIONS(74), 1,
      sym__string_start,
    ACTIONS(152), 1,
      anon_sym_LPAREN,
    ACTIONS(156), 1,
      anon_sym_sleep_LPAREN,
    ACTIONS(160), 1,
      sym_float,
    STATE(106), 1,
      sym_expression,
    STATE(82), 7,
      sym_variable,
      sym_parenthesized_expression,
      sym_binary_operator,
      sym_key_action,
      sym_sleep_action,
      sym_action,
      sym_string,
  [1079] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(78), 1,
      anon_sym_LPAREN,
    ACTIONS(80), 1,
      anon_sym_key_LPAREN,
    ACTIONS(82), 1,
      anon_sym_sleep_LPAREN,
    ACTIONS(86), 1,
      sym_integer,
    ACTIONS(88), 1,
      sym_float,
    ACTIONS(92), 1,
      sym__string_start,
    ACTIONS(174), 1,
      sym_identifier,
    STATE(97), 1,
      sym_expression,
    STATE(111), 7,
      sym_variable,
      sym_parenthesized_expression,
      sym_binary_operator,
      sym_key_action,
      sym_sleep_action,
      sym_action,
      sym_string,
  [1116] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(56), 1,
      anon_sym_key_LPAREN,
    ACTIONS(70), 1,
      sym_identifier,
    ACTIONS(72), 1,
      sym_integer,
    ACTIONS(74), 1,
      sym__string_start,
    ACTIONS(152), 1,
      anon_sym_LPAREN,
    ACTIONS(156), 1,
      anon_sym_sleep_LPAREN,
    ACTIONS(160), 1,
      sym_float,
    STATE(98), 1,
      sym_expression,
    STATE(82), 7,
      sym_variable,
      sym_parenthesized_expression,
      sym_binary_operator,
      sym_key_action,
      sym_sleep_action,
      sym_action,
      sym_string,
  [1153] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(78), 1,
      anon_sym_LPAREN,
    ACTIONS(80), 1,
      anon_sym_key_LPAREN,
    ACTIONS(82), 1,
      anon_sym_sleep_LPAREN,
    ACTIONS(86), 1,
      sym_integer,
    ACTIONS(88), 1,
      sym_float,
    ACTIONS(92), 1,
      sym__string_start,
    ACTIONS(174), 1,
      sym_identifier,
    STATE(105), 1,
      sym_expression,
    STATE(111), 7,
      sym_variable,
      sym_parenthesized_expression,
      sym_binary_operator,
      sym_key_action,
      sym_sleep_action,
      sym_action,
      sym_string,
  [1190] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(78), 1,
      anon_sym_LPAREN,
    ACTIONS(80), 1,
      anon_sym_key_LPAREN,
    ACTIONS(82), 1,
      anon_sym_sleep_LPAREN,
    ACTIONS(86), 1,
      sym_integer,
    ACTIONS(88), 1,
      sym_float,
    ACTIONS(92), 1,
      sym__string_start,
    ACTIONS(174), 1,
      sym_identifier,
    STATE(108), 1,
      sym_expression,
    STATE(111), 7,
      sym_variable,
      sym_parenthesized_expression,
      sym_binary_operator,
      sym_key_action,
      sym_sleep_action,
      sym_action,
      sym_string,
  [1227] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(78), 1,
      anon_sym_LPAREN,
    ACTIONS(80), 1,
      anon_sym_key_LPAREN,
    ACTIONS(82), 1,
      anon_sym_sleep_LPAREN,
    ACTIONS(86), 1,
      sym_integer,
    ACTIONS(88), 1,
      sym_float,
    ACTIONS(92), 1,
      sym__string_start,
    ACTIONS(174), 1,
      sym_identifier,
    STATE(95), 1,
      sym_expression,
    STATE(111), 7,
      sym_variable,
      sym_parenthesized_expression,
      sym_binary_operator,
      sym_key_action,
      sym_sleep_action,
      sym_action,
      sym_string,
  [1264] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(78), 1,
      anon_sym_LPAREN,
    ACTIONS(80), 1,
      anon_sym_key_LPAREN,
    ACTIONS(82), 1,
      anon_sym_sleep_LPAREN,
    ACTIONS(86), 1,
      sym_integer,
    ACTIONS(88), 1,
      sym_float,
    ACTIONS(92), 1,
      sym__string_start,
    ACTIONS(174), 1,
      sym_identifier,
    STATE(110), 1,
      sym_expression,
    STATE(111), 7,
      sym_variable,
      sym_parenthesized_expression,
      sym_binary_operator,
      sym_key_action,
      sym_sleep_action,
      sym_action,
      sym_string,
  [1301] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(56), 1,
      anon_sym_key_LPAREN,
    ACTIONS(70), 1,
      sym_identifier,
    ACTIONS(72), 1,
      sym_integer,
    ACTIONS(74), 1,
      sym__string_start,
    ACTIONS(152), 1,
      anon_sym_LPAREN,
    ACTIONS(156), 1,
      anon_sym_sleep_LPAREN,
    ACTIONS(160), 1,
      sym_float,
    STATE(73), 1,
      sym_expression,
    STATE(82), 7,
      sym_variable,
      sym_parenthesized_expression,
      sym_binary_operator,
      sym_key_action,
      sym_sleep_action,
      sym_action,
      sym_string,
  [1338] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(56), 1,
      anon_sym_key_LPAREN,
    ACTIONS(70), 1,
      sym_identifier,
    ACTIONS(72), 1,
      sym_integer,
    ACTIONS(74), 1,
      sym__string_start,
    ACTIONS(152), 1,
      anon_sym_LPAREN,
    ACTIONS(156), 1,
      anon_sym_sleep_LPAREN,
    ACTIONS(160), 1,
      sym_float,
    STATE(74), 1,
      sym_expression,
    STATE(82), 7,
      sym_variable,
      sym_parenthesized_expression,
      sym_binary_operator,
      sym_key_action,
      sym_sleep_action,
      sym_action,
      sym_string,
  [1375] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(56), 1,
      anon_sym_key_LPAREN,
    ACTIONS(70), 1,
      sym_identifier,
    ACTIONS(72), 1,
      sym_integer,
    ACTIONS(74), 1,
      sym__string_start,
    ACTIONS(152), 1,
      anon_sym_LPAREN,
    ACTIONS(156), 1,
      anon_sym_sleep_LPAREN,
    ACTIONS(160), 1,
      sym_float,
    STATE(75), 1,
      sym_expression,
    STATE(82), 7,
      sym_variable,
      sym_parenthesized_expression,
      sym_binary_operator,
      sym_key_action,
      sym_sleep_action,
      sym_action,
      sym_string,
  [1412] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(56), 1,
      anon_sym_key_LPAREN,
    ACTIONS(70), 1,
      sym_identifier,
    ACTIONS(72), 1,
      sym_integer,
    ACTIONS(74), 1,
      sym__string_start,
    ACTIONS(152), 1,
      anon_sym_LPAREN,
    ACTIONS(156), 1,
      anon_sym_sleep_LPAREN,
    ACTIONS(160), 1,
      sym_float,
    STATE(91), 1,
      sym_expression,
    STATE(82), 7,
      sym_variable,
      sym_parenthesized_expression,
      sym_binary_operator,
      sym_key_action,
      sym_sleep_action,
      sym_action,
      sym_string,
  [1449] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(48), 1,
      anon_sym_LBRACE,
    ACTIONS(50), 1,
      anon_sym_LT,
    ACTIONS(52), 1,
      anon_sym_LBRACK,
    ACTIONS(54), 1,
      anon_sym_LPAREN,
    ACTIONS(150), 1,
      sym_word,
    STATE(116), 2,
      sym__optional_seq,
      sym_seq,
    STATE(11), 7,
      sym__primary_rule,
      sym_list,
      sym_capture,
      sym_optional,
      sym_repeat,
      sym_repeat1,
      sym_parenthesized_rule,
  [1481] = 8,
    ACTIONS(60), 1,
      sym_comment,
    ACTIONS(176), 1,
      anon_sym_LBRACE,
    ACTIONS(178), 1,
      anon_sym_RBRACE,
    ACTIONS(184), 1,
      sym_string_content,
    ACTIONS(186), 1,
      sym__string_end,
    ACTIONS(180), 2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_RBRACE_RBRACE,
    ACTIONS(182), 2,
      sym_string_escape_sequence,
      sym__not_escapesequence,
    STATE(42), 4,
      sym_interpolation,
      sym__escape_interpolation,
      sym__not_interpolation,
      aux_sym_string_repeat1,
  [1511] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(188), 12,
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
  [1529] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(190), 12,
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
  [1547] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(192), 12,
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
  [1565] = 8,
    ACTIONS(60), 1,
      sym_comment,
    ACTIONS(194), 1,
      anon_sym_LBRACE,
    ACTIONS(197), 1,
      anon_sym_RBRACE,
    ACTIONS(206), 1,
      sym_string_content,
    ACTIONS(209), 1,
      sym__string_end,
    ACTIONS(200), 2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_RBRACE_RBRACE,
    ACTIONS(203), 2,
      sym_string_escape_sequence,
      sym__not_escapesequence,
    STATE(40), 4,
      sym_interpolation,
      sym__escape_interpolation,
      sym__not_interpolation,
      aux_sym_string_repeat1,
  [1595] = 8,
    ACTIONS(60), 1,
      sym_comment,
    ACTIONS(176), 1,
      anon_sym_LBRACE,
    ACTIONS(178), 1,
      anon_sym_RBRACE,
    ACTIONS(213), 1,
      sym_string_content,
    ACTIONS(215), 1,
      sym__string_end,
    ACTIONS(180), 2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_RBRACE_RBRACE,
    ACTIONS(211), 2,
      sym_string_escape_sequence,
      sym__not_escapesequence,
    STATE(45), 4,
      sym_interpolation,
      sym__escape_interpolation,
      sym__not_interpolation,
      aux_sym_string_repeat1,
  [1625] = 8,
    ACTIONS(60), 1,
      sym_comment,
    ACTIONS(176), 1,
      anon_sym_LBRACE,
    ACTIONS(178), 1,
      anon_sym_RBRACE,
    ACTIONS(219), 1,
      sym_string_content,
    ACTIONS(221), 1,
      sym__string_end,
    ACTIONS(180), 2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_RBRACE_RBRACE,
    ACTIONS(217), 2,
      sym_string_escape_sequence,
      sym__not_escapesequence,
    STATE(40), 4,
      sym_interpolation,
      sym__escape_interpolation,
      sym__not_interpolation,
      aux_sym_string_repeat1,
  [1655] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(223), 12,
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
  [1673] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(225), 12,
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
  [1691] = 8,
    ACTIONS(60), 1,
      sym_comment,
    ACTIONS(176), 1,
      anon_sym_LBRACE,
    ACTIONS(178), 1,
      anon_sym_RBRACE,
    ACTIONS(219), 1,
      sym_string_content,
    ACTIONS(227), 1,
      sym__string_end,
    ACTIONS(180), 2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_RBRACE_RBRACE,
    ACTIONS(217), 2,
      sym_string_escape_sequence,
      sym__not_escapesequence,
    STATE(40), 4,
      sym_interpolation,
      sym__escape_interpolation,
      sym__not_interpolation,
      aux_sym_string_repeat1,
  [1721] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(229), 12,
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
  [1739] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(127), 1,
      anon_sym_STAR,
    ACTIONS(129), 1,
      anon_sym_PLUS,
    ACTIONS(231), 10,
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
  [1761] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(235), 1,
      anon_sym_LPAREN2,
    STATE(80), 1,
      sym_argument_list,
    ACTIONS(233), 9,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_or,
      anon_sym_COMMA,
  [1782] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(239), 1,
      sym_word,
    ACTIONS(237), 9,
      ts_builtin_sym_end,
      anon_sym_tag_LPAREN_RPAREN,
      anon_sym_settings_LPAREN_RPAREN,
      sym_start_anchor,
      anon_sym_LBRACE,
      anon_sym_LT,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_key_LPAREN,
  [1800] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(243), 1,
      sym_word,
    ACTIONS(241), 9,
      ts_builtin_sym_end,
      anon_sym_tag_LPAREN_RPAREN,
      anon_sym_settings_LPAREN_RPAREN,
      sym_start_anchor,
      anon_sym_LBRACE,
      anon_sym_LT,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_key_LPAREN,
  [1818] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(247), 1,
      sym_word,
    ACTIONS(245), 9,
      ts_builtin_sym_end,
      anon_sym_tag_LPAREN_RPAREN,
      anon_sym_settings_LPAREN_RPAREN,
      sym_start_anchor,
      anon_sym_LBRACE,
      anon_sym_LT,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_key_LPAREN,
  [1836] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(251), 1,
      sym_word,
    ACTIONS(249), 9,
      ts_builtin_sym_end,
      anon_sym_tag_LPAREN_RPAREN,
      anon_sym_settings_LPAREN_RPAREN,
      sym_start_anchor,
      anon_sym_LBRACE,
      anon_sym_LT,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_key_LPAREN,
  [1854] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(255), 1,
      sym_word,
    ACTIONS(253), 9,
      ts_builtin_sym_end,
      anon_sym_tag_LPAREN_RPAREN,
      anon_sym_settings_LPAREN_RPAREN,
      sym_start_anchor,
      anon_sym_LBRACE,
      anon_sym_LT,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_key_LPAREN,
  [1872] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(257), 10,
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
  [1888] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(259), 1,
      anon_sym_EQ,
    ACTIONS(261), 1,
      anon_sym_LPAREN2,
    STATE(109), 1,
      sym_argument_list,
    ACTIONS(233), 7,
      sym__newline,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_or,
  [1910] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(265), 1,
      sym_word,
    ACTIONS(263), 9,
      ts_builtin_sym_end,
      anon_sym_tag_LPAREN_RPAREN,
      anon_sym_settings_LPAREN_RPAREN,
      sym_start_anchor,
      anon_sym_LBRACE,
      anon_sym_LT,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_key_LPAREN,
  [1928] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(269), 1,
      sym_word,
    ACTIONS(267), 9,
      ts_builtin_sym_end,
      anon_sym_tag_LPAREN_RPAREN,
      anon_sym_settings_LPAREN_RPAREN,
      sym_start_anchor,
      anon_sym_LBRACE,
      anon_sym_LT,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_key_LPAREN,
  [1946] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(261), 1,
      anon_sym_LPAREN2,
    ACTIONS(271), 1,
      anon_sym_EQ,
    STATE(109), 1,
      sym_argument_list,
    ACTIONS(233), 7,
      sym__newline,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_or,
  [1968] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(275), 1,
      sym_word,
    ACTIONS(273), 9,
      ts_builtin_sym_end,
      anon_sym_tag_LPAREN_RPAREN,
      anon_sym_settings_LPAREN_RPAREN,
      sym_start_anchor,
      anon_sym_LBRACE,
      anon_sym_LT,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_key_LPAREN,
  [1986] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(279), 1,
      sym_word,
    ACTIONS(277), 9,
      ts_builtin_sym_end,
      anon_sym_tag_LPAREN_RPAREN,
      anon_sym_settings_LPAREN_RPAREN,
      sym_start_anchor,
      anon_sym_LBRACE,
      anon_sym_LT,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_key_LPAREN,
  [2004] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(283), 1,
      sym_word,
    ACTIONS(281), 9,
      ts_builtin_sym_end,
      anon_sym_tag_LPAREN_RPAREN,
      anon_sym_settings_LPAREN_RPAREN,
      sym_start_anchor,
      anon_sym_LBRACE,
      anon_sym_LT,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_key_LPAREN,
  [2022] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(287), 1,
      sym_word,
    ACTIONS(285), 9,
      ts_builtin_sym_end,
      anon_sym_tag_LPAREN_RPAREN,
      anon_sym_settings_LPAREN_RPAREN,
      sym_start_anchor,
      anon_sym_LBRACE,
      anon_sym_LT,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_key_LPAREN,
  [2040] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(291), 1,
      sym_word,
    ACTIONS(289), 9,
      ts_builtin_sym_end,
      anon_sym_tag_LPAREN_RPAREN,
      anon_sym_settings_LPAREN_RPAREN,
      sym_start_anchor,
      anon_sym_LBRACE,
      anon_sym_LT,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_key_LPAREN,
  [2058] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(295), 1,
      sym_word,
    ACTIONS(293), 9,
      ts_builtin_sym_end,
      anon_sym_tag_LPAREN_RPAREN,
      anon_sym_settings_LPAREN_RPAREN,
      sym_start_anchor,
      anon_sym_LBRACE,
      anon_sym_LT,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_key_LPAREN,
  [2076] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(299), 1,
      sym_word,
    ACTIONS(297), 9,
      ts_builtin_sym_end,
      anon_sym_tag_LPAREN_RPAREN,
      anon_sym_settings_LPAREN_RPAREN,
      sym_start_anchor,
      anon_sym_LBRACE,
      anon_sym_LT,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_key_LPAREN,
  [2094] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(303), 1,
      sym_word,
    ACTIONS(301), 9,
      ts_builtin_sym_end,
      anon_sym_tag_LPAREN_RPAREN,
      anon_sym_settings_LPAREN_RPAREN,
      sym_start_anchor,
      anon_sym_LBRACE,
      anon_sym_LT,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_key_LPAREN,
  [2112] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(261), 1,
      anon_sym_LPAREN2,
    STATE(109), 1,
      sym_argument_list,
    ACTIONS(233), 7,
      sym__newline,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_or,
  [2131] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(309), 1,
      anon_sym_RPAREN,
    ACTIONS(311), 1,
      anon_sym_or,
    ACTIONS(313), 1,
      anon_sym_COMMA,
    STATE(126), 1,
      aux_sym_argument_list_repeat1,
    ACTIONS(307), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(305), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [2156] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(311), 1,
      anon_sym_or,
    ACTIONS(315), 1,
      anon_sym_RPAREN,
    ACTIONS(317), 1,
      anon_sym_COMMA,
    STATE(127), 1,
      aux_sym_argument_list_repeat1,
    ACTIONS(307), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(305), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [2181] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(319), 9,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_or,
      anon_sym_COMMA,
  [2196] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(321), 9,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_or,
      anon_sym_COMMA,
  [2211] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(323), 9,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_or,
      anon_sym_COMMA,
  [2226] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(307), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(305), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(325), 4,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_or,
      anon_sym_COMMA,
  [2245] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(305), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(325), 6,
      anon_sym_RBRACE,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_or,
      anon_sym_COMMA,
  [2262] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(325), 9,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_or,
      anon_sym_COMMA,
  [2277] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(327), 9,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_or,
      anon_sym_COMMA,
  [2292] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(329), 9,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_or,
      anon_sym_COMMA,
  [2307] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(331), 9,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_or,
      anon_sym_COMMA,
  [2322] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(333), 9,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_or,
      anon_sym_COMMA,
  [2337] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(335), 9,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_or,
      anon_sym_COMMA,
  [2352] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(337), 9,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_or,
      anon_sym_COMMA,
  [2367] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(339), 9,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_or,
      anon_sym_COMMA,
  [2382] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(343), 1,
      sym_identifier,
    ACTIONS(345), 1,
      sym__matches_end,
    ACTIONS(341), 2,
      anon_sym_and,
      anon_sym_not,
    STATE(90), 2,
      sym_match,
      aux_sym_matches_repeat1,
    STATE(120), 2,
      sym_match_modifier,
      aux_sym_match_repeat1,
  [2404] = 3,
    ACTIONS(60), 1,
      sym_comment,
    ACTIONS(349), 2,
      sym_string_content,
      sym__string_end,
    ACTIONS(347), 6,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACE_LBRACE,
      anon_sym_RBRACE_RBRACE,
      sym_string_escape_sequence,
      sym__not_escapesequence,
  [2420] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(303), 2,
      sym_identifier,
      sym_integer,
    ACTIONS(301), 6,
      sym__dedent,
      sym__string_start,
      anon_sym_LPAREN,
      anon_sym_key_LPAREN,
      anon_sym_sleep_LPAREN,
      sym_float,
  [2436] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(269), 2,
      sym_identifier,
      sym_integer,
    ACTIONS(267), 6,
      sym__dedent,
      sym__string_start,
      anon_sym_LPAREN,
      anon_sym_key_LPAREN,
      anon_sym_sleep_LPAREN,
      sym_float,
  [2452] = 3,
    ACTIONS(60), 1,
      sym_comment,
    ACTIONS(353), 2,
      sym_string_content,
      sym__string_end,
    ACTIONS(351), 6,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACE_LBRACE,
      anon_sym_RBRACE_RBRACE,
      sym_string_escape_sequence,
      sym__not_escapesequence,
  [2468] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(343), 1,
      sym_identifier,
    ACTIONS(355), 1,
      sym__matches_end,
    ACTIONS(341), 2,
      anon_sym_and,
      anon_sym_not,
    STATE(83), 2,
      sym_match,
      aux_sym_matches_repeat1,
    STATE(120), 2,
      sym_match_modifier,
      aux_sym_match_repeat1,
  [2490] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(287), 2,
      sym_identifier,
      sym_integer,
    ACTIONS(285), 6,
      sym__dedent,
      sym__string_start,
      anon_sym_LPAREN,
      anon_sym_key_LPAREN,
      anon_sym_sleep_LPAREN,
      sym_float,
  [2506] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(360), 1,
      sym_identifier,
    ACTIONS(363), 1,
      sym__matches_end,
    ACTIONS(357), 2,
      anon_sym_and,
      anon_sym_not,
    STATE(90), 2,
      sym_match,
      aux_sym_matches_repeat1,
    STATE(120), 2,
      sym_match_modifier,
      aux_sym_match_repeat1,
  [2528] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(311), 1,
      anon_sym_or,
    ACTIONS(307), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(365), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
    ACTIONS(305), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [2548] = 3,
    ACTIONS(60), 1,
      sym_comment,
    ACTIONS(76), 2,
      sym_string_content,
      sym__string_end,
    ACTIONS(62), 6,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACE_LBRACE,
      anon_sym_RBRACE_RBRACE,
      sym_string_escape_sequence,
      sym__not_escapesequence,
  [2564] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(257), 7,
      sym__newline,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_or,
  [2577] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(327), 7,
      sym__newline,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_or,
  [2590] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(367), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(325), 4,
      sym__newline,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_or,
  [2605] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(319), 7,
      sym__newline,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_or,
  [2618] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(371), 1,
      anon_sym_or,
    ACTIONS(373), 1,
      sym__newline,
    ACTIONS(369), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(367), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [2637] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(311), 1,
      anon_sym_or,
    ACTIONS(375), 1,
      anon_sym_RPAREN,
    ACTIONS(307), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(305), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [2656] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(371), 1,
      anon_sym_or,
    ACTIONS(377), 1,
      sym__newline,
    ACTIONS(369), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(367), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [2675] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(311), 1,
      anon_sym_or,
    ACTIONS(379), 1,
      anon_sym_RBRACE,
    ACTIONS(307), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(305), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [2694] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(333), 7,
      sym__newline,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_or,
  [2707] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(337), 7,
      sym__newline,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_or,
  [2720] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(331), 7,
      sym__newline,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_or,
  [2733] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(329), 7,
      sym__newline,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_or,
  [2746] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(371), 1,
      anon_sym_or,
    ACTIONS(381), 1,
      sym__newline,
    ACTIONS(369), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(367), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [2765] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(311), 1,
      anon_sym_or,
    ACTIONS(383), 1,
      anon_sym_RPAREN,
    ACTIONS(307), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(305), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [2784] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(321), 7,
      sym__newline,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_or,
  [2797] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(325), 7,
      sym__newline,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_or,
  [2810] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(335), 7,
      sym__newline,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_or,
  [2823] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(325), 2,
      sym__newline,
      anon_sym_or,
    ACTIONS(369), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(367), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [2840] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(339), 7,
      sym__newline,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_or,
  [2853] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(323), 7,
      sym__newline,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_or,
  [2866] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(371), 1,
      anon_sym_or,
    ACTIONS(385), 1,
      sym__newline,
    ACTIONS(369), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(367), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [2885] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(390), 1,
      sym_identifier,
    ACTIONS(387), 2,
      anon_sym_and,
      anon_sym_not,
    STATE(114), 2,
      sym_match_modifier,
      aux_sym_match_repeat1,
  [2900] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(394), 1,
      anon_sym_PIPE,
    STATE(119), 1,
      aux_sym_choice_repeat1,
    ACTIONS(392), 3,
      anon_sym_COLON,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
  [2915] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(398), 1,
      sym_end_anchor,
    ACTIONS(396), 4,
      anon_sym_COLON,
      anon_sym_PIPE,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
  [2928] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(402), 1,
      anon_sym_PIPE,
    STATE(117), 1,
      aux_sym_choice_repeat1,
    ACTIONS(400), 3,
      anon_sym_COLON,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
  [2943] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(407), 1,
      sym_end_anchor,
    ACTIONS(405), 4,
      anon_sym_COLON,
      anon_sym_PIPE,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
  [2956] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(394), 1,
      anon_sym_PIPE,
    STATE(117), 1,
      aux_sym_choice_repeat1,
    ACTIONS(409), 3,
      anon_sym_COLON,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
  [2971] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(411), 1,
      sym_identifier,
    ACTIONS(341), 2,
      anon_sym_and,
      anon_sym_not,
    STATE(114), 2,
      sym_match_modifier,
      aux_sym_match_repeat1,
  [2986] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(415), 1,
      sym__matches_end,
    ACTIONS(413), 3,
      anon_sym_and,
      anon_sym_not,
      sym_identifier,
  [2998] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(419), 1,
      sym__matches_end,
    ACTIONS(417), 3,
      anon_sym_and,
      anon_sym_not,
      sym_identifier,
  [3010] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(396), 4,
      anon_sym_COLON,
      anon_sym_PIPE,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
  [3020] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(400), 4,
      anon_sym_COLON,
      anon_sym_PIPE,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
  [3030] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(421), 4,
      anon_sym_COLON,
      anon_sym_PIPE,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
  [3040] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(166), 1,
      anon_sym_RPAREN,
    ACTIONS(423), 1,
      anon_sym_COMMA,
    STATE(129), 1,
      aux_sym_argument_list_repeat1,
  [3053] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(170), 1,
      anon_sym_RPAREN,
    ACTIONS(425), 1,
      anon_sym_COMMA,
    STATE(129), 1,
      aux_sym_argument_list_repeat1,
  [3066] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(427), 3,
      anon_sym_and,
      anon_sym_not,
      sym_identifier,
  [3075] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(365), 1,
      anon_sym_RPAREN,
    ACTIONS(429), 1,
      anon_sym_COMMA,
    STATE(129), 1,
      aux_sym_argument_list_repeat1,
  [3088] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(432), 1,
      sym__newline,
  [3095] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(434), 1,
      anon_sym_COLON,
  [3102] = 2,
    ACTIONS(60), 1,
      sym_comment,
    ACTIONS(436), 1,
      sym_implicit_string,
  [3109] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(438), 1,
      anon_sym_COLON,
  [3116] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(440), 1,
      anon_sym_RPAREN,
  [3123] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(442), 1,
      anon_sym_COLON,
  [3130] = 2,
    ACTIONS(60), 1,
      sym_comment,
    ACTIONS(444), 1,
      aux_sym_key_action_token1,
  [3137] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(446), 1,
      sym__newline,
  [3144] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(448), 1,
      anon_sym_RPAREN,
  [3151] = 2,
    ACTIONS(60), 1,
      sym_comment,
    ACTIONS(450), 1,
      sym_implicit_string,
  [3158] = 2,
    ACTIONS(60), 1,
      sym_comment,
    ACTIONS(452), 1,
      aux_sym_key_action_token1,
  [3165] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(454), 1,
      anon_sym_RPAREN,
  [3172] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(456), 1,
      anon_sym_RPAREN,
  [3179] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(458), 1,
      sym_identifier,
  [3186] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(309), 1,
      anon_sym_RPAREN,
  [3193] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(460), 1,
      anon_sym_RBRACK,
  [3200] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(462), 1,
      ts_builtin_sym_end,
  [3207] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(464), 1,
      anon_sym_RPAREN,
  [3214] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(466), 1,
      anon_sym_COLON,
  [3221] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(468), 1,
      anon_sym_RBRACE,
  [3228] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(315), 1,
      anon_sym_RPAREN,
  [3235] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(470), 1,
      anon_sym_COLON,
  [3242] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(472), 1,
      sym_identifier,
  [3249] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(474), 1,
      sym__newline,
  [3256] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(476), 1,
      sym_identifier,
  [3263] = 2,
    ACTIONS(60), 1,
      sym_comment,
    ACTIONS(478), 1,
      aux_sym_key_action_token1,
  [3270] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(480), 1,
      anon_sym_COLON,
  [3277] = 2,
    ACTIONS(60), 1,
      sym_comment,
    ACTIONS(482), 1,
      aux_sym_key_action_token1,
  [3284] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(484), 1,
      anon_sym_COLON,
  [3291] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(486), 1,
      anon_sym_GT,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 70,
  [SMALL_STATE(4)] = 140,
  [SMALL_STATE(5)] = 210,
  [SMALL_STATE(6)] = 257,
  [SMALL_STATE(7)] = 308,
  [SMALL_STATE(8)] = 356,
  [SMALL_STATE(9)] = 404,
  [SMALL_STATE(10)] = 454,
  [SMALL_STATE(11)] = 504,
  [SMALL_STATE(12)] = 548,
  [SMALL_STATE(13)] = 598,
  [SMALL_STATE(14)] = 636,
  [SMALL_STATE(15)] = 674,
  [SMALL_STATE(16)] = 716,
  [SMALL_STATE(17)] = 758,
  [SMALL_STATE(18)] = 801,
  [SMALL_STATE(19)] = 844,
  [SMALL_STATE(20)] = 882,
  [SMALL_STATE(21)] = 922,
  [SMALL_STATE(22)] = 962,
  [SMALL_STATE(23)] = 1002,
  [SMALL_STATE(24)] = 1042,
  [SMALL_STATE(25)] = 1079,
  [SMALL_STATE(26)] = 1116,
  [SMALL_STATE(27)] = 1153,
  [SMALL_STATE(28)] = 1190,
  [SMALL_STATE(29)] = 1227,
  [SMALL_STATE(30)] = 1264,
  [SMALL_STATE(31)] = 1301,
  [SMALL_STATE(32)] = 1338,
  [SMALL_STATE(33)] = 1375,
  [SMALL_STATE(34)] = 1412,
  [SMALL_STATE(35)] = 1449,
  [SMALL_STATE(36)] = 1481,
  [SMALL_STATE(37)] = 1511,
  [SMALL_STATE(38)] = 1529,
  [SMALL_STATE(39)] = 1547,
  [SMALL_STATE(40)] = 1565,
  [SMALL_STATE(41)] = 1595,
  [SMALL_STATE(42)] = 1625,
  [SMALL_STATE(43)] = 1655,
  [SMALL_STATE(44)] = 1673,
  [SMALL_STATE(45)] = 1691,
  [SMALL_STATE(46)] = 1721,
  [SMALL_STATE(47)] = 1739,
  [SMALL_STATE(48)] = 1761,
  [SMALL_STATE(49)] = 1782,
  [SMALL_STATE(50)] = 1800,
  [SMALL_STATE(51)] = 1818,
  [SMALL_STATE(52)] = 1836,
  [SMALL_STATE(53)] = 1854,
  [SMALL_STATE(54)] = 1872,
  [SMALL_STATE(55)] = 1888,
  [SMALL_STATE(56)] = 1910,
  [SMALL_STATE(57)] = 1928,
  [SMALL_STATE(58)] = 1946,
  [SMALL_STATE(59)] = 1968,
  [SMALL_STATE(60)] = 1986,
  [SMALL_STATE(61)] = 2004,
  [SMALL_STATE(62)] = 2022,
  [SMALL_STATE(63)] = 2040,
  [SMALL_STATE(64)] = 2058,
  [SMALL_STATE(65)] = 2076,
  [SMALL_STATE(66)] = 2094,
  [SMALL_STATE(67)] = 2112,
  [SMALL_STATE(68)] = 2131,
  [SMALL_STATE(69)] = 2156,
  [SMALL_STATE(70)] = 2181,
  [SMALL_STATE(71)] = 2196,
  [SMALL_STATE(72)] = 2211,
  [SMALL_STATE(73)] = 2226,
  [SMALL_STATE(74)] = 2245,
  [SMALL_STATE(75)] = 2262,
  [SMALL_STATE(76)] = 2277,
  [SMALL_STATE(77)] = 2292,
  [SMALL_STATE(78)] = 2307,
  [SMALL_STATE(79)] = 2322,
  [SMALL_STATE(80)] = 2337,
  [SMALL_STATE(81)] = 2352,
  [SMALL_STATE(82)] = 2367,
  [SMALL_STATE(83)] = 2382,
  [SMALL_STATE(84)] = 2404,
  [SMALL_STATE(85)] = 2420,
  [SMALL_STATE(86)] = 2436,
  [SMALL_STATE(87)] = 2452,
  [SMALL_STATE(88)] = 2468,
  [SMALL_STATE(89)] = 2490,
  [SMALL_STATE(90)] = 2506,
  [SMALL_STATE(91)] = 2528,
  [SMALL_STATE(92)] = 2548,
  [SMALL_STATE(93)] = 2564,
  [SMALL_STATE(94)] = 2577,
  [SMALL_STATE(95)] = 2590,
  [SMALL_STATE(96)] = 2605,
  [SMALL_STATE(97)] = 2618,
  [SMALL_STATE(98)] = 2637,
  [SMALL_STATE(99)] = 2656,
  [SMALL_STATE(100)] = 2675,
  [SMALL_STATE(101)] = 2694,
  [SMALL_STATE(102)] = 2707,
  [SMALL_STATE(103)] = 2720,
  [SMALL_STATE(104)] = 2733,
  [SMALL_STATE(105)] = 2746,
  [SMALL_STATE(106)] = 2765,
  [SMALL_STATE(107)] = 2784,
  [SMALL_STATE(108)] = 2797,
  [SMALL_STATE(109)] = 2810,
  [SMALL_STATE(110)] = 2823,
  [SMALL_STATE(111)] = 2840,
  [SMALL_STATE(112)] = 2853,
  [SMALL_STATE(113)] = 2866,
  [SMALL_STATE(114)] = 2885,
  [SMALL_STATE(115)] = 2900,
  [SMALL_STATE(116)] = 2915,
  [SMALL_STATE(117)] = 2928,
  [SMALL_STATE(118)] = 2943,
  [SMALL_STATE(119)] = 2956,
  [SMALL_STATE(120)] = 2971,
  [SMALL_STATE(121)] = 2986,
  [SMALL_STATE(122)] = 2998,
  [SMALL_STATE(123)] = 3010,
  [SMALL_STATE(124)] = 3020,
  [SMALL_STATE(125)] = 3030,
  [SMALL_STATE(126)] = 3040,
  [SMALL_STATE(127)] = 3053,
  [SMALL_STATE(128)] = 3066,
  [SMALL_STATE(129)] = 3075,
  [SMALL_STATE(130)] = 3088,
  [SMALL_STATE(131)] = 3095,
  [SMALL_STATE(132)] = 3102,
  [SMALL_STATE(133)] = 3109,
  [SMALL_STATE(134)] = 3116,
  [SMALL_STATE(135)] = 3123,
  [SMALL_STATE(136)] = 3130,
  [SMALL_STATE(137)] = 3137,
  [SMALL_STATE(138)] = 3144,
  [SMALL_STATE(139)] = 3151,
  [SMALL_STATE(140)] = 3158,
  [SMALL_STATE(141)] = 3165,
  [SMALL_STATE(142)] = 3172,
  [SMALL_STATE(143)] = 3179,
  [SMALL_STATE(144)] = 3186,
  [SMALL_STATE(145)] = 3193,
  [SMALL_STATE(146)] = 3200,
  [SMALL_STATE(147)] = 3207,
  [SMALL_STATE(148)] = 3214,
  [SMALL_STATE(149)] = 3221,
  [SMALL_STATE(150)] = 3228,
  [SMALL_STATE(151)] = 3235,
  [SMALL_STATE(152)] = 3242,
  [SMALL_STATE(153)] = 3249,
  [SMALL_STATE(154)] = 3256,
  [SMALL_STATE(155)] = 3263,
  [SMALL_STATE(156)] = 3270,
  [SMALL_STATE(157)] = 3277,
  [SMALL_STATE(158)] = 3284,
  [SMALL_STATE(159)] = 3291,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [9] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [11] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(158),
  [14] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(156),
  [17] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(35),
  [20] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(11),
  [23] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(154),
  [26] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(152),
  [29] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(15),
  [32] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(16),
  [35] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(140),
  [38] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [40] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [42] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [44] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [46] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [48] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [50] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [52] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [54] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [56] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [58] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2),
  [60] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [62] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__not_interpolation, 1),
  [64] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [66] = {.entry = {.count = 1, .reusable = false}}, SHIFT(140),
  [68] = {.entry = {.count = 1, .reusable = false}}, SHIFT(157),
  [70] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [72] = {.entry = {.count = 1, .reusable = false}}, SHIFT(82),
  [74] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [76] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__not_interpolation, 1),
  [78] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [80] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [82] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [84] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [86] = {.entry = {.count = 1, .reusable = false}}, SHIFT(111),
  [88] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [90] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [92] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [94] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(24),
  [97] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(155),
  [100] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(136),
  [103] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(55),
  [106] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(111),
  [109] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(111),
  [112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2),
  [114] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(41),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [119] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__optional_seq, 1),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_seq_repeat1, 2),
  [133] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_seq_repeat1, 2), SHIFT_REPEAT(47),
  [136] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_seq_repeat1, 2), SHIFT_REPEAT(154),
  [139] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_seq_repeat1, 2), SHIFT_REPEAT(152),
  [142] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_seq_repeat1, 2), SHIFT_REPEAT(15),
  [145] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_seq_repeat1, 2), SHIFT_REPEAT(16),
  [148] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_seq, 2),
  [150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [174] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [176] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [178] = {.entry = {.count = 1, .reusable = false}}, SHIFT(92),
  [180] = {.entry = {.count = 1, .reusable = false}}, SHIFT(87),
  [182] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [188] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_repeat, 2),
  [190] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_capture, 3, .production_id = 4),
  [192] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 3, .production_id = 3),
  [194] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(5),
  [197] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(92),
  [200] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(87),
  [203] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(40),
  [206] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(40),
  [209] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2),
  [211] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [217] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [223] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_optional, 3),
  [225] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parenthesized_rule, 3),
  [227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [229] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_repeat1, 2),
  [231] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_seq_repeat1, 1),
  [233] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 1, .production_id = 1),
  [235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [237] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declaration, 1),
  [239] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_declaration, 1),
  [241] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command_declaration, 3, .production_id = 6),
  [243] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_command_declaration, 3, .production_id = 6),
  [245] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_matches, 2),
  [247] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_matches, 2),
  [249] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_matches, 3),
  [251] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_matches, 3),
  [253] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_key_binding_declaration, 3, .production_id = 7),
  [255] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_key_binding_declaration, 3, .production_id = 7),
  [257] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_key_action, 3, .production_id = 5),
  [259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [263] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_matches, 1),
  [265] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_matches, 1),
  [267] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_statement, 2, .production_id = 11),
  [269] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression_statement, 2, .production_id = 11),
  [271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [273] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag_import_declaration, 4, .production_id = 9),
  [275] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag_import_declaration, 4, .production_id = 9),
  [277] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_settings_declaration, 3),
  [279] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_settings_declaration, 3),
  [281] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statements, 1, .production_id = 2),
  [283] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__statements, 1, .production_id = 2),
  [285] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 1),
  [287] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_statement, 1),
  [289] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 1),
  [291] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 1),
  [293] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statements, 2),
  [295] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__statements, 2),
  [297] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 2),
  [299] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 2),
  [301] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_statement, 4, .production_id = 14),
  [303] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assignment_statement, 4, .production_id = 14),
  [305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [313] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [319] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 5),
  [321] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 4),
  [323] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 3),
  [325] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_operator, 3, .production_id = 13),
  [327] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 2),
  [329] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sleep_action, 3, .production_id = 5),
  [331] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parenthesized_expression, 3),
  [333] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [335] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_action, 2, .production_id = 10),
  [337] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2),
  [339] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 1),
  [341] = {.entry = {.count = 1, .reusable = false}}, SHIFT(128),
  [343] = {.entry = {.count = 1, .reusable = false}}, SHIFT(151),
  [345] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [347] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_interpolation, 3),
  [349] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interpolation, 3),
  [351] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__escape_interpolation, 1),
  [353] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__escape_interpolation, 1),
  [355] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [357] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_matches_repeat1, 2), SHIFT_REPEAT(128),
  [360] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_matches_repeat1, 2), SHIFT_REPEAT(151),
  [363] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_matches_repeat1, 2),
  [365] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_argument_list_repeat1, 2),
  [367] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [369] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [371] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [373] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [375] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [377] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [379] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [381] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [383] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [385] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [387] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_match_repeat1, 2), SHIFT_REPEAT(128),
  [390] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_match_repeat1, 2),
  [392] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__optional_choice, 1),
  [394] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [396] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__optional_anchor, 2),
  [398] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [400] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_choice_repeat1, 2),
  [402] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_choice_repeat1, 2), SHIFT_REPEAT(19),
  [405] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__optional_anchor, 1),
  [407] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [409] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_choice, 2),
  [411] = {.entry = {.count = 1, .reusable = false}}, SHIFT(135),
  [413] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_match, 4, .production_id = 8),
  [415] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_match, 4, .production_id = 8),
  [417] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_match, 5, .production_id = 12),
  [419] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_match, 5, .production_id = 12),
  [421] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__optional_anchor, 3),
  [423] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [425] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [427] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_match_modifier, 1),
  [429] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_argument_list_repeat1, 2), SHIFT_REPEAT(34),
  [432] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [434] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule, 1),
  [436] = {.entry = {.count = 1, .reusable = false}}, SHIFT(130),
  [438] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [440] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [442] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [444] = {.entry = {.count = 1, .reusable = false}}, SHIFT(138),
  [446] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [448] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [450] = {.entry = {.count = 1, .reusable = false}}, SHIFT(153),
  [452] = {.entry = {.count = 1, .reusable = false}}, SHIFT(134),
  [454] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [456] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [458] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [460] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [462] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [464] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [466] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [468] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [470] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [472] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [474] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [476] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [478] = {.entry = {.count = 1, .reusable = false}}, SHIFT(142),
  [480] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [482] = {.entry = {.count = 1, .reusable = false}}, SHIFT(147),
  [484] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [486] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
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
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
