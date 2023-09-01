#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 195
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 113
#define ALIAS_COUNT 1
#define TOKEN_COUNT 53
#define EXTERNAL_TOKEN_COUNT 10
#define FIELD_COUNT 10
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 13

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
  anon_sym_app_LPAREN = 19,
  anon_sym_face_LPAREN = 20,
  anon_sym_gamepad_LPAREN = 21,
  anon_sym_noise_LPAREN = 22,
  anon_sym_parrot_LPAREN = 23,
  sym_settings_binding = 24,
  sym_tag_binding = 25,
  anon_sym_EQ = 26,
  anon_sym_DASH = 27,
  anon_sym_SLASH = 28,
  anon_sym_PERCENT = 29,
  anon_sym_or = 30,
  anon_sym_key_LPAREN = 31,
  anon_sym_sleep_LPAREN = 32,
  aux_sym__implicit_string_argument_token1 = 33,
  anon_sym_LPAREN2 = 34,
  anon_sym_COMMA = 35,
  sym_identifier = 36,
  sym_integer = 37,
  sym_float = 38,
  sym_implicit_string = 39,
  anon_sym_LBRACE_LBRACE = 40,
  anon_sym_RBRACE_RBRACE = 41,
  sym_string_escape_sequence = 42,
  sym__not_escapesequence = 43,
  sym__matches_start = 44,
  sym__matches_end = 45,
  sym__matches_empty = 46,
  sym__newline = 47,
  sym__indent = 48,
  sym__dedent = 49,
  sym__string_start = 50,
  sym_string_content = 51,
  sym__string_end = 52,
  sym_source_file = 53,
  sym_matches = 54,
  sym_match_modifier = 55,
  sym_match = 56,
  sym_declarations = 57,
  sym_declaration = 58,
  sym_command_declaration = 59,
  sym_app_declaration = 60,
  sym_face_declaration = 61,
  sym_gamepad_declaration = 62,
  sym_noise_declaration = 63,
  sym_parrot_declaration = 64,
  sym_tag_import_declaration = 65,
  sym_key_binding_declaration = 66,
  sym_settings_declaration = 67,
  sym_rule = 68,
  sym__optional_choice = 69,
  sym_choice = 70,
  sym__optional_anchor = 71,
  sym__optional_seq = 72,
  sym_seq = 73,
  sym__primary_rule = 74,
  sym_list = 75,
  sym_capture = 76,
  sym_optional = 77,
  sym_repeat = 78,
  sym_repeat1 = 79,
  sym_parenthesized_rule = 80,
  sym_app_binding = 81,
  sym_face_binding = 82,
  sym_gamepad_binding = 83,
  sym_noise_binding = 84,
  sym_parrot_binding = 85,
  sym__statements = 86,
  sym_block = 87,
  sym_statement = 88,
  sym_assignment_statement = 89,
  sym_expression_statement = 90,
  sym_expression = 91,
  sym_variable = 92,
  sym_parenthesized_expression = 93,
  sym_binary_operator = 94,
  sym_unary_operator = 95,
  sym_key_action = 96,
  sym_sleep_action = 97,
  sym__implicit_string_argument = 98,
  sym_action = 99,
  sym_argument_list = 100,
  sym_string = 101,
  sym_interpolation = 102,
  sym__escape_interpolation = 103,
  sym__not_interpolation = 104,
  aux_sym_matches_repeat1 = 105,
  aux_sym_match_repeat1 = 106,
  aux_sym_declarations_repeat1 = 107,
  aux_sym_choice_repeat1 = 108,
  aux_sym_seq_repeat1 = 109,
  aux_sym_block_repeat1 = 110,
  aux_sym_argument_list_repeat1 = 111,
  aux_sym_string_repeat1 = 112,
  alias_sym_key_binding = 113,
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
  [anon_sym_app_LPAREN] = "app(",
  [anon_sym_face_LPAREN] = "face(",
  [anon_sym_gamepad_LPAREN] = "gamepad(",
  [anon_sym_noise_LPAREN] = "noise(",
  [anon_sym_parrot_LPAREN] = "parrot(",
  [sym_settings_binding] = "settings_binding",
  [sym_tag_binding] = "tag_binding",
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
  [sym_app_declaration] = "app_declaration",
  [sym_face_declaration] = "face_declaration",
  [sym_gamepad_declaration] = "gamepad_declaration",
  [sym_noise_declaration] = "noise_declaration",
  [sym_parrot_declaration] = "parrot_declaration",
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
  [sym_app_binding] = "app_binding",
  [sym_face_binding] = "face_binding",
  [sym_gamepad_binding] = "gamepad_binding",
  [sym_noise_binding] = "noise_binding",
  [sym_parrot_binding] = "parrot_binding",
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
  [alias_sym_key_binding] = "key_binding",
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
  [anon_sym_app_LPAREN] = anon_sym_app_LPAREN,
  [anon_sym_face_LPAREN] = anon_sym_face_LPAREN,
  [anon_sym_gamepad_LPAREN] = anon_sym_gamepad_LPAREN,
  [anon_sym_noise_LPAREN] = anon_sym_noise_LPAREN,
  [anon_sym_parrot_LPAREN] = anon_sym_parrot_LPAREN,
  [sym_settings_binding] = sym_settings_binding,
  [sym_tag_binding] = sym_tag_binding,
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
  [sym_app_declaration] = sym_app_declaration,
  [sym_face_declaration] = sym_face_declaration,
  [sym_gamepad_declaration] = sym_gamepad_declaration,
  [sym_noise_declaration] = sym_noise_declaration,
  [sym_parrot_declaration] = sym_parrot_declaration,
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
  [sym_app_binding] = sym_app_binding,
  [sym_face_binding] = sym_face_binding,
  [sym_gamepad_binding] = sym_gamepad_binding,
  [sym_noise_binding] = sym_noise_binding,
  [sym_parrot_binding] = sym_parrot_binding,
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
  [alias_sym_key_binding] = alias_sym_key_binding,
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
  [anon_sym_app_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_face_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_gamepad_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_noise_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_parrot_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [sym_settings_binding] = {
    .visible = true,
    .named = true,
  },
  [sym_tag_binding] = {
    .visible = true,
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
  [sym_app_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_face_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_gamepad_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_noise_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_parrot_declaration] = {
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
  [sym_app_binding] = {
    .visible = true,
    .named = true,
  },
  [sym_face_binding] = {
    .visible = true,
    .named = true,
  },
  [sym_gamepad_binding] = {
    .visible = true,
    .named = true,
  },
  [sym_noise_binding] = {
    .visible = true,
    .named = true,
  },
  [sym_parrot_binding] = {
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
  [alias_sym_key_binding] = {
    .visible = true,
    .named = true,
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
  [4] = {.index = 3, .length = 1},
  [5] = {.index = 4, .length = 2},
  [7] = {.index = 4, .length = 2},
  [8] = {.index = 6, .length = 2},
  [9] = {.index = 8, .length = 2},
  [10] = {.index = 10, .length = 1},
  [11] = {.index = 11, .length = 3},
  [12] = {.index = 14, .length = 3},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_list_name, 1},
  [1] =
    {field_capture_name, 1},
  [2] =
    {field_arguments, 1},
  [3] =
    {field_variable_name, 0},
  [4] =
    {field_left, 0},
    {field_right, 2},
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
  [6] = {
    [0] = sym_block,
  },
  [7] = {
    [0] = alias_sym_key_binding,
  },
  [12] = {
    [1] = anon_sym_DASH,
  },
};

static const uint16_t ts_non_terminal_alias_map[] = {
  sym_statement, 2,
    sym_statement,
    sym_block,
  sym_key_action, 2,
    sym_key_action,
    alias_sym_key_binding,
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
  [19] = 18,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 20,
  [25] = 23,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 29,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 33,
  [35] = 32,
  [36] = 28,
  [37] = 31,
  [38] = 38,
  [39] = 38,
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
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 64,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 67,
  [75] = 75,
  [76] = 76,
  [77] = 77,
  [78] = 76,
  [79] = 75,
  [80] = 80,
  [81] = 58,
  [82] = 82,
  [83] = 83,
  [84] = 84,
  [85] = 85,
  [86] = 86,
  [87] = 87,
  [88] = 88,
  [89] = 89,
  [90] = 90,
  [91] = 45,
  [92] = 92,
  [93] = 93,
  [94] = 94,
  [95] = 95,
  [96] = 54,
  [97] = 97,
  [98] = 84,
  [99] = 99,
  [100] = 100,
  [101] = 101,
  [102] = 102,
  [103] = 103,
  [104] = 104,
  [105] = 105,
  [106] = 86,
  [107] = 107,
  [108] = 108,
  [109] = 107,
  [110] = 110,
  [111] = 95,
  [112] = 108,
  [113] = 92,
  [114] = 90,
  [115] = 85,
  [116] = 97,
  [117] = 89,
  [118] = 88,
  [119] = 77,
  [120] = 83,
  [121] = 80,
  [122] = 94,
  [123] = 110,
  [124] = 93,
  [125] = 87,
  [126] = 126,
  [127] = 82,
  [128] = 128,
  [129] = 129,
  [130] = 130,
  [131] = 131,
  [132] = 132,
  [133] = 133,
  [134] = 134,
  [135] = 135,
  [136] = 136,
  [137] = 137,
  [138] = 138,
  [139] = 139,
  [140] = 140,
  [141] = 141,
  [142] = 140,
  [143] = 143,
  [144] = 144,
  [145] = 145,
  [146] = 144,
  [147] = 145,
  [148] = 148,
  [149] = 149,
  [150] = 150,
  [151] = 151,
  [152] = 152,
  [153] = 153,
  [154] = 154,
  [155] = 155,
  [156] = 156,
  [157] = 157,
  [158] = 158,
  [159] = 159,
  [160] = 160,
  [161] = 161,
  [162] = 162,
  [163] = 163,
  [164] = 164,
  [165] = 165,
  [166] = 166,
  [167] = 167,
  [168] = 168,
  [169] = 169,
  [170] = 170,
  [171] = 171,
  [172] = 172,
  [173] = 173,
  [174] = 174,
  [175] = 175,
  [176] = 174,
  [177] = 177,
  [178] = 178,
  [179] = 179,
  [180] = 180,
  [181] = 181,
  [182] = 158,
  [183] = 183,
  [184] = 184,
  [185] = 171,
  [186] = 186,
  [187] = 187,
  [188] = 188,
  [189] = 189,
  [190] = 190,
  [191] = 191,
  [192] = 192,
  [193] = 193,
  [194] = 194,
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
  return (c < 6688
    ? (c < 3077
      ? (c < 2406
        ? (c < 1488
          ? (c < 750
            ? (c < 188
              ? (c < 170
                ? (c < 'A'
                  ? (c >= '0' && c <= '9')
                  : (c <= 'Z' || (c >= 'b' && c <= 'z')))
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

static inline bool sym_word_character_set_4(int32_t c) {
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
      if (eof) ADVANCE(96);
      if (lookahead == '#') ADVANCE(99);
      if (lookahead == '$') ADVANCE(107);
      if (lookahead == '%') ADVANCE(170);
      if (lookahead == '(') ADVANCE(178);
      if (lookahead == ')') ADVANCE(159);
      if (lookahead == '*') ADVANCE(156);
      if (lookahead == '+') ADVANCE(157);
      if (lookahead == ',') ADVANCE(179);
      if (lookahead == '-') ADVANCE(168);
      if (lookahead == '.') ADVANCE(76);
      if (lookahead == '/') ADVANCE(169);
      if (lookahead == '0') ADVANCE(195);
      if (lookahead == ':') ADVANCE(104);
      if (lookahead == '<') ADVANCE(152);
      if (lookahead == '=') ADVANCE(167);
      if (lookahead == '>') ADVANCE(153);
      if (lookahead == '[') ADVANCE(154);
      if (lookahead == '\\') SKIP(91)
      if (lookahead == ']') ADVANCE(155);
      if (lookahead == '^') ADVANCE(106);
      if (lookahead == 'a') ADVANCE(56);
      if (lookahead == 'f') ADVANCE(36);
      if (lookahead == 'g') ADVANCE(37);
      if (lookahead == 'k') ADVANCE(44);
      if (lookahead == 'n') ADVANCE(58);
      if (lookahead == 'o') ADVANCE(63);
      if (lookahead == 'p') ADVANCE(39);
      if (lookahead == 's') ADVANCE(45);
      if (lookahead == 't') ADVANCE(38);
      if (lookahead == '{') ADVANCE(149);
      if (lookahead == '|') ADVANCE(105);
      if (lookahead == '}') ADVANCE(151);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(94)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(194);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(211);
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
      if (lookahead == '\n') SKIP(21)
      if (lookahead == '#') ADVANCE(98);
      if (lookahead == '\\') ADVANCE(205);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(10);
      if (lookahead == '\f' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) ADVANCE(206);
      if (lookahead != 0) ADVANCE(207);
      END_STATE();
    case 11:
      if (lookahead == '\n') SKIP(21)
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(74);
      if (lookahead != 0) ADVANCE(207);
      END_STATE();
    case 12:
      if (lookahead == '\n') SKIP(20)
      END_STATE();
    case 13:
      if (lookahead == '\n') SKIP(20)
      if (lookahead == '\r') SKIP(12)
      END_STATE();
    case 14:
      if (lookahead == '#') ADVANCE(99);
      if (lookahead == '$') ADVANCE(107);
      if (lookahead == '(') ADVANCE(158);
      if (lookahead == ')') ADVANCE(159);
      if (lookahead == '*') ADVANCE(156);
      if (lookahead == '+') ADVANCE(157);
      if (lookahead == ':') ADVANCE(104);
      if (lookahead == '<') ADVANCE(152);
      if (lookahead == '[') ADVANCE(154);
      if (lookahead == '\\') SKIP(5)
      if (lookahead == ']') ADVANCE(155);
      if (lookahead == '^') ADVANCE(106);
      if (lookahead == '{') ADVANCE(148);
      if (lookahead == '|') ADVANCE(105);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(14)
      if (sym_word_character_set_1(lookahead)) ADVANCE(147);
      END_STATE();
    case 15:
      if (lookahead == '#') ADVANCE(99);
      if (lookahead == '%') ADVANCE(170);
      if (lookahead == '(') ADVANCE(178);
      if (lookahead == ')') ADVANCE(159);
      if (lookahead == '*') ADVANCE(156);
      if (lookahead == '+') ADVANCE(157);
      if (lookahead == ',') ADVANCE(179);
      if (lookahead == '-') ADVANCE(168);
      if (lookahead == '/') ADVANCE(169);
      if (lookahead == ':') ADVANCE(104);
      if (lookahead == '=') ADVANCE(167);
      if (lookahead == '\\') SKIP(7)
      if (lookahead == 'o') ADVANCE(63);
      if (lookahead == '}') ADVANCE(150);
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
      if (lookahead == '#') ADVANCE(99);
      if (lookahead == '%') ADVANCE(170);
      if (lookahead == ')') ADVANCE(159);
      if (lookahead == '*') ADVANCE(156);
      if (lookahead == '+') ADVANCE(157);
      if (lookahead == ',') ADVANCE(179);
      if (lookahead == '-') ADVANCE(168);
      if (lookahead == '/') ADVANCE(169);
      if (lookahead == ':') ADVANCE(104);
      if (lookahead == '=') ADVANCE(167);
      if (lookahead == '\\') SKIP(7)
      if (lookahead == 'o') ADVANCE(63);
      if (lookahead == '}') ADVANCE(150);
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
      if (lookahead == '#') ADVANCE(99);
      if (lookahead == '(') ADVANCE(158);
      if (lookahead == ')') ADVANCE(159);
      if (lookahead == ',') ADVANCE(179);
      if (lookahead == '-') ADVANCE(168);
      if (lookahead == '.') ADVANCE(76);
      if (lookahead == '0') ADVANCE(195);
      if (lookahead == '\\') SKIP(3)
      if (lookahead == 'k') ADVANCE(183);
      if (lookahead == 's') ADVANCE(186);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(17)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(194);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 18:
      if (lookahead == '#') ADVANCE(99);
      if (lookahead == '(') ADVANCE(158);
      if (lookahead == '-') ADVANCE(168);
      if (lookahead == '.') ADVANCE(76);
      if (lookahead == '0') ADVANCE(195);
      if (lookahead == '\\') ADVANCE(212);
      if (lookahead == 'k') ADVANCE(183);
      if (lookahead == 's') ADVANCE(186);
      if (lookahead == '{') ADVANCE(149);
      if (lookahead == '}') ADVANCE(151);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(18)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(194);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 19:
      if (lookahead == '#') ADVANCE(99);
      if (lookahead == '\\') SKIP(9)
      if (lookahead == 'a') ADVANCE(187);
      if (lookahead == 'n') ADVANCE(188);
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
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 20:
      if (lookahead == '#') ADVANCE(99);
      if (lookahead == '\\') SKIP(13)
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 21:
      if (lookahead == '#') ADVANCE(98);
      if (lookahead == '\\') ADVANCE(205);
      if (lookahead == '\f' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) ADVANCE(206);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(21)
      if (lookahead != 0) ADVANCE(207);
      END_STATE();
    case 22:
      if (lookahead == '(') ADVANCE(160);
      END_STATE();
    case 23:
      if (lookahead == '(') ADVANCE(172);
      END_STATE();
    case 24:
      if (lookahead == '(') ADVANCE(31);
      END_STATE();
    case 25:
      if (lookahead == '(') ADVANCE(161);
      END_STATE();
    case 26:
      if (lookahead == '(') ADVANCE(163);
      END_STATE();
    case 27:
      if (lookahead == '(') ADVANCE(173);
      END_STATE();
    case 28:
      if (lookahead == '(') ADVANCE(164);
      END_STATE();
    case 29:
      if (lookahead == '(') ADVANCE(162);
      END_STATE();
    case 30:
      if (lookahead == '(') ADVANCE(32);
      END_STATE();
    case 31:
      if (lookahead == ')') ADVANCE(166);
      END_STATE();
    case 32:
      if (lookahead == ')') ADVANCE(165);
      END_STATE();
    case 33:
      if (lookahead == '_') ADVANCE(73);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(197);
      END_STATE();
    case 34:
      if (lookahead == '_') ADVANCE(75);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(198);
      END_STATE();
    case 35:
      if (lookahead == '_') ADVANCE(80);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(199);
      END_STATE();
    case 36:
      if (lookahead == 'a') ADVANCE(41);
      END_STATE();
    case 37:
      if (lookahead == 'a') ADVANCE(55);
      END_STATE();
    case 38:
      if (lookahead == 'a') ADVANCE(52);
      END_STATE();
    case 39:
      if (lookahead == 'a') ADVANCE(65);
      END_STATE();
    case 40:
      if (lookahead == 'a') ADVANCE(43);
      END_STATE();
    case 41:
      if (lookahead == 'c') ADVANCE(47);
      END_STATE();
    case 42:
      if (lookahead == 'd') ADVANCE(100);
      END_STATE();
    case 43:
      if (lookahead == 'd') ADVANCE(29);
      END_STATE();
    case 44:
      if (lookahead == 'e') ADVANCE(71);
      END_STATE();
    case 45:
      if (lookahead == 'e') ADVANCE(69);
      if (lookahead == 'l') ADVANCE(48);
      END_STATE();
    case 46:
      if (lookahead == 'e') ADVANCE(61);
      END_STATE();
    case 47:
      if (lookahead == 'e') ADVANCE(25);
      END_STATE();
    case 48:
      if (lookahead == 'e') ADVANCE(50);
      END_STATE();
    case 49:
      if (lookahead == 'e') ADVANCE(26);
      END_STATE();
    case 50:
      if (lookahead == 'e') ADVANCE(62);
      END_STATE();
    case 51:
      if (lookahead == 'g') ADVANCE(66);
      END_STATE();
    case 52:
      if (lookahead == 'g') ADVANCE(24);
      END_STATE();
    case 53:
      if (lookahead == 'i') ADVANCE(67);
      if (lookahead == 't') ADVANCE(102);
      END_STATE();
    case 54:
      if (lookahead == 'i') ADVANCE(57);
      END_STATE();
    case 55:
      if (lookahead == 'm') ADVANCE(46);
      END_STATE();
    case 56:
      if (lookahead == 'n') ADVANCE(42);
      if (lookahead == 'p') ADVANCE(60);
      END_STATE();
    case 57:
      if (lookahead == 'n') ADVANCE(51);
      END_STATE();
    case 58:
      if (lookahead == 'o') ADVANCE(53);
      END_STATE();
    case 59:
      if (lookahead == 'o') ADVANCE(70);
      END_STATE();
    case 60:
      if (lookahead == 'p') ADVANCE(22);
      END_STATE();
    case 61:
      if (lookahead == 'p') ADVANCE(40);
      END_STATE();
    case 62:
      if (lookahead == 'p') ADVANCE(27);
      END_STATE();
    case 63:
      if (lookahead == 'r') ADVANCE(171);
      END_STATE();
    case 64:
      if (lookahead == 'r') ADVANCE(59);
      END_STATE();
    case 65:
      if (lookahead == 'r') ADVANCE(64);
      END_STATE();
    case 66:
      if (lookahead == 's') ADVANCE(30);
      END_STATE();
    case 67:
      if (lookahead == 's') ADVANCE(49);
      END_STATE();
    case 68:
      if (lookahead == 't') ADVANCE(54);
      END_STATE();
    case 69:
      if (lookahead == 't') ADVANCE(68);
      END_STATE();
    case 70:
      if (lookahead == 't') ADVANCE(28);
      END_STATE();
    case 71:
      if (lookahead == 'y') ADVANCE(23);
      END_STATE();
    case 72:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(77);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(202);
      END_STATE();
    case 73:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(197);
      END_STATE();
    case 74:
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(74);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(207);
      END_STATE();
    case 75:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(198);
      END_STATE();
    case 76:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(201);
      END_STATE();
    case 77:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(202);
      END_STATE();
    case 78:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(210);
      END_STATE();
    case 79:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(78);
      END_STATE();
    case 80:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(199);
      END_STATE();
    case 81:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(210);
      END_STATE();
    case 82:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(81);
      END_STATE();
    case 83:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(82);
      END_STATE();
    case 84:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(83);
      END_STATE();
    case 85:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(84);
      END_STATE();
    case 86:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(85);
      END_STATE();
    case 87:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(86);
      END_STATE();
    case 88:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(87);
      END_STATE();
    case 89:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 90:
      if (eof) ADVANCE(96);
      if (lookahead == '\n') SKIP(94)
      END_STATE();
    case 91:
      if (eof) ADVANCE(96);
      if (lookahead == '\n') SKIP(94)
      if (lookahead == '\r') SKIP(90)
      END_STATE();
    case 92:
      if (eof) ADVANCE(96);
      if (lookahead == '\n') SKIP(95)
      END_STATE();
    case 93:
      if (eof) ADVANCE(96);
      if (lookahead == '\n') SKIP(95)
      if (lookahead == '\r') SKIP(92)
      END_STATE();
    case 94:
      if (eof) ADVANCE(96);
      if (lookahead == '#') ADVANCE(99);
      if (lookahead == '$') ADVANCE(107);
      if (lookahead == '%') ADVANCE(170);
      if (lookahead == '(') ADVANCE(158);
      if (lookahead == ')') ADVANCE(159);
      if (lookahead == '*') ADVANCE(156);
      if (lookahead == '+') ADVANCE(157);
      if (lookahead == ',') ADVANCE(179);
      if (lookahead == '-') ADVANCE(168);
      if (lookahead == '.') ADVANCE(76);
      if (lookahead == '/') ADVANCE(169);
      if (lookahead == '0') ADVANCE(195);
      if (lookahead == ':') ADVANCE(104);
      if (lookahead == '<') ADVANCE(152);
      if (lookahead == '=') ADVANCE(167);
      if (lookahead == '>') ADVANCE(153);
      if (lookahead == '[') ADVANCE(154);
      if (lookahead == '\\') SKIP(91)
      if (lookahead == ']') ADVANCE(155);
      if (lookahead == '^') ADVANCE(106);
      if (lookahead == 'a') ADVANCE(56);
      if (lookahead == 'f') ADVANCE(36);
      if (lookahead == 'g') ADVANCE(37);
      if (lookahead == 'k') ADVANCE(44);
      if (lookahead == 'n') ADVANCE(58);
      if (lookahead == 'o') ADVANCE(63);
      if (lookahead == 'p') ADVANCE(39);
      if (lookahead == 's') ADVANCE(45);
      if (lookahead == 't') ADVANCE(38);
      if (lookahead == '{') ADVANCE(149);
      if (lookahead == '|') ADVANCE(105);
      if (lookahead == '}') ADVANCE(151);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(94)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(194);
      END_STATE();
    case 95:
      if (eof) ADVANCE(96);
      if (lookahead == '#') ADVANCE(99);
      if (lookahead == '(') ADVANCE(158);
      if (lookahead == '<') ADVANCE(152);
      if (lookahead == '[') ADVANCE(154);
      if (lookahead == '\\') SKIP(93)
      if (lookahead == '^') ADVANCE(106);
      if (lookahead == 'a') ADVANCE(137);
      if (lookahead == 'f') ADVANCE(116);
      if (lookahead == 'g') ADVANCE(117);
      if (lookahead == 'k') ADVANCE(123);
      if (lookahead == 'n') ADVANCE(134);
      if (lookahead == 'p') ADVANCE(118);
      if (lookahead == 's') ADVANCE(124);
      if (lookahead == 't') ADVANCE(119);
      if (lookahead == '{') ADVANCE(148);
      if (lookahead == '}') ADVANCE(150);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(95)
      if (sym_word_character_set_2(lookahead)) ADVANCE(147);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(177);
      if (lookahead == ')') ADVANCE(99);
      if (lookahead != 0) ADVANCE(97);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(98);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(98);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(99);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_and);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_and);
      if (lookahead == '.') ADVANCE(89);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_not);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_not);
      if (lookahead == '.') ADVANCE(89);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym_start_anchor);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym_end_anchor);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '(') ADVANCE(160);
      if (sym_word_character_set_3(lookahead)) ADVANCE(147);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '(') ADVANCE(172);
      if (sym_word_character_set_3(lookahead)) ADVANCE(147);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '(') ADVANCE(31);
      if (sym_word_character_set_3(lookahead)) ADVANCE(147);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '(') ADVANCE(161);
      if (sym_word_character_set_3(lookahead)) ADVANCE(147);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '(') ADVANCE(163);
      if (sym_word_character_set_3(lookahead)) ADVANCE(147);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '(') ADVANCE(164);
      if (sym_word_character_set_3(lookahead)) ADVANCE(147);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '(') ADVANCE(162);
      if (sym_word_character_set_3(lookahead)) ADVANCE(147);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '(') ADVANCE(32);
      if (sym_word_character_set_3(lookahead)) ADVANCE(147);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'a') ADVANCE(121);
      if (sym_word_character_set_4(lookahead)) ADVANCE(147);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'a') ADVANCE(132);
      if (sym_word_character_set_4(lookahead)) ADVANCE(147);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'a') ADVANCE(140);
      if (sym_word_character_set_4(lookahead)) ADVANCE(147);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'a') ADVANCE(129);
      if (sym_word_character_set_4(lookahead)) ADVANCE(147);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'a') ADVANCE(122);
      if (sym_word_character_set_4(lookahead)) ADVANCE(147);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'c') ADVANCE(126);
      if (sym_word_character_set_3(lookahead)) ADVANCE(147);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'd') ADVANCE(114);
      if (sym_word_character_set_3(lookahead)) ADVANCE(147);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'e') ADVANCE(146);
      if (sym_word_character_set_3(lookahead)) ADVANCE(147);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'e') ADVANCE(144);
      if (sym_word_character_set_3(lookahead)) ADVANCE(147);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'e') ADVANCE(138);
      if (sym_word_character_set_3(lookahead)) ADVANCE(147);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'e') ADVANCE(111);
      if (sym_word_character_set_3(lookahead)) ADVANCE(147);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'e') ADVANCE(112);
      if (sym_word_character_set_3(lookahead)) ADVANCE(147);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'g') ADVANCE(141);
      if (sym_word_character_set_3(lookahead)) ADVANCE(147);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'g') ADVANCE(110);
      if (sym_word_character_set_3(lookahead)) ADVANCE(147);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'i') ADVANCE(142);
      if (sym_word_character_set_3(lookahead)) ADVANCE(147);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'i') ADVANCE(133);
      if (sym_word_character_set_3(lookahead)) ADVANCE(147);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'm') ADVANCE(125);
      if (sym_word_character_set_3(lookahead)) ADVANCE(147);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'n') ADVANCE(128);
      if (sym_word_character_set_3(lookahead)) ADVANCE(147);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'o') ADVANCE(130);
      if (sym_word_character_set_3(lookahead)) ADVANCE(147);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'o') ADVANCE(145);
      if (sym_word_character_set_3(lookahead)) ADVANCE(147);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'p') ADVANCE(108);
      if (sym_word_character_set_3(lookahead)) ADVANCE(147);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'p') ADVANCE(136);
      if (sym_word_character_set_3(lookahead)) ADVANCE(147);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'p') ADVANCE(120);
      if (sym_word_character_set_3(lookahead)) ADVANCE(147);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'r') ADVANCE(135);
      if (sym_word_character_set_3(lookahead)) ADVANCE(147);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'r') ADVANCE(139);
      if (sym_word_character_set_3(lookahead)) ADVANCE(147);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 's') ADVANCE(115);
      if (sym_word_character_set_3(lookahead)) ADVANCE(147);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 's') ADVANCE(127);
      if (sym_word_character_set_3(lookahead)) ADVANCE(147);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 't') ADVANCE(131);
      if (sym_word_character_set_3(lookahead)) ADVANCE(147);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 't') ADVANCE(143);
      if (sym_word_character_set_3(lookahead)) ADVANCE(147);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 't') ADVANCE(113);
      if (sym_word_character_set_3(lookahead)) ADVANCE(147);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'y') ADVANCE(109);
      if (sym_word_character_set_3(lookahead)) ADVANCE(147);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym_word);
      if (sym_word_character_set_3(lookahead)) ADVANCE(147);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      if (lookahead == '{') ADVANCE(208);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      if (lookahead == '}') ADVANCE(209);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(anon_sym_app_LPAREN);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(anon_sym_face_LPAREN);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(anon_sym_gamepad_LPAREN);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(anon_sym_noise_LPAREN);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(anon_sym_parrot_LPAREN);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym_settings_binding);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym_tag_binding);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(anon_sym_or);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(anon_sym_key_LPAREN);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(anon_sym_sleep_LPAREN);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(aux_sym__implicit_string_argument_token1);
      if (lookahead == '\n') ADVANCE(176);
      if (lookahead == '\r') ADVANCE(175);
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(177);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(aux_sym__implicit_string_argument_token1);
      if (lookahead == '\n') ADVANCE(176);
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(177);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(aux_sym__implicit_string_argument_token1);
      if (lookahead == '#') ADVANCE(97);
      if (lookahead == '\\') ADVANCE(174);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) ADVANCE(176);
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(177);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(aux_sym__implicit_string_argument_token1);
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(177);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(anon_sym_LPAREN2);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '(') ADVANCE(172);
      if (lookahead == '.') ADVANCE(89);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '(') ADVANCE(173);
      if (lookahead == '.') ADVANCE(89);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(89);
      if (lookahead == 'd') ADVANCE(101);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(89);
      if (lookahead == 'e') ADVANCE(191);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(89);
      if (lookahead == 'e') ADVANCE(189);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(89);
      if (lookahead == 'e') ADVANCE(184);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(89);
      if (lookahead == 'l') ADVANCE(185);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(89);
      if (lookahead == 'n') ADVANCE(182);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(89);
      if (lookahead == 'o') ADVANCE(190);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(89);
      if (lookahead == 'p') ADVANCE(181);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(89);
      if (lookahead == 't') ADVANCE(103);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(89);
      if (lookahead == 'y') ADVANCE(180);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(89);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(sym_integer);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(203);
      if (lookahead == '_') ADVANCE(196);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(72);
      if (lookahead == 'J' ||
          lookahead == 'L' ||
          lookahead == 'j' ||
          lookahead == 'l') ADVANCE(193);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(194);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(203);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(33);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(34);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(35);
      if (lookahead == '_') ADVANCE(196);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(72);
      if (lookahead == 'J' ||
          lookahead == 'L' ||
          lookahead == 'j' ||
          lookahead == 'l') ADVANCE(193);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(194);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(203);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(72);
      if (lookahead == 'J' ||
          lookahead == 'L' ||
          lookahead == 'j' ||
          lookahead == 'l') ADVANCE(193);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(194);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '_') ADVANCE(73);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(193);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(197);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '_') ADVANCE(75);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(193);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(198);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '_') ADVANCE(80);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(193);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(199);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(sym_float);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == '_') ADVANCE(203);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(72);
      if (lookahead == 'J' ||
          lookahead == 'L' ||
          lookahead == 'j' ||
          lookahead == 'l') ADVANCE(200);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(201);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == '_') ADVANCE(204);
      if (lookahead == 'J' ||
          lookahead == 'L' ||
          lookahead == 'j' ||
          lookahead == 'l') ADVANCE(200);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(202);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(72);
      if (lookahead == 'J' ||
          lookahead == 'L' ||
          lookahead == 'j' ||
          lookahead == 'l') ADVANCE(200);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(201);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == 'J' ||
          lookahead == 'L' ||
          lookahead == 'j' ||
          lookahead == 'l') ADVANCE(200);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(202);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(sym_implicit_string);
      if (lookahead == '\r') ADVANCE(11);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(74);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(207);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(sym_implicit_string);
      if (lookahead == '#') ADVANCE(98);
      if (lookahead == '\\') ADVANCE(205);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(10);
      if (lookahead == '\f' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) ADVANCE(206);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(207);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(sym_implicit_string);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(74);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(207);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(anon_sym_LBRACE_LBRACE);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(anon_sym_RBRACE_RBRACE);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(sym_string_escape_sequence);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(sym_string_escape_sequence);
      if (lookahead == '\\') ADVANCE(212);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(sym__not_escapesequence);
      if (lookahead == '\n') ADVANCE(211);
      if (lookahead == '\r') ADVANCE(1);
      if (sym_string_escape_sequence_character_set_1(lookahead)) ADVANCE(210);
      if (lookahead == 'U') ADVANCE(88);
      if (lookahead == 'u') ADVANCE(84);
      if (lookahead == 'x') ADVANCE(82);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(79);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 0, .external_lex_state = 2},
  [2] = {.lex_state = 95, .external_lex_state = 3},
  [3] = {.lex_state = 95, .external_lex_state = 3},
  [4] = {.lex_state = 95, .external_lex_state = 3},
  [5] = {.lex_state = 18, .external_lex_state = 4},
  [6] = {.lex_state = 17, .external_lex_state = 5},
  [7] = {.lex_state = 17, .external_lex_state = 6},
  [8] = {.lex_state = 17, .external_lex_state = 6},
  [9] = {.lex_state = 17, .external_lex_state = 6},
  [10] = {.lex_state = 17, .external_lex_state = 6},
  [11] = {.lex_state = 17, .external_lex_state = 5},
  [12] = {.lex_state = 17, .external_lex_state = 6},
  [13] = {.lex_state = 17, .external_lex_state = 6},
  [14] = {.lex_state = 17, .external_lex_state = 6},
  [15] = {.lex_state = 17, .external_lex_state = 6},
  [16] = {.lex_state = 17, .external_lex_state = 5},
  [17] = {.lex_state = 14, .external_lex_state = 3},
  [18] = {.lex_state = 17, .external_lex_state = 7},
  [19] = {.lex_state = 17, .external_lex_state = 7},
  [20] = {.lex_state = 17, .external_lex_state = 7},
  [21] = {.lex_state = 14, .external_lex_state = 3},
  [22] = {.lex_state = 14, .external_lex_state = 3},
  [23] = {.lex_state = 17, .external_lex_state = 7},
  [24] = {.lex_state = 17, .external_lex_state = 7},
  [25] = {.lex_state = 17, .external_lex_state = 7},
  [26] = {.lex_state = 14, .external_lex_state = 3},
  [27] = {.lex_state = 14, .external_lex_state = 3},
  [28] = {.lex_state = 17, .external_lex_state = 7},
  [29] = {.lex_state = 17, .external_lex_state = 7},
  [30] = {.lex_state = 17, .external_lex_state = 7},
  [31] = {.lex_state = 17, .external_lex_state = 7},
  [32] = {.lex_state = 17, .external_lex_state = 7},
  [33] = {.lex_state = 17, .external_lex_state = 7},
  [34] = {.lex_state = 17, .external_lex_state = 7},
  [35] = {.lex_state = 17, .external_lex_state = 7},
  [36] = {.lex_state = 17, .external_lex_state = 7},
  [37] = {.lex_state = 17, .external_lex_state = 7},
  [38] = {.lex_state = 17, .external_lex_state = 7},
  [39] = {.lex_state = 17, .external_lex_state = 7},
  [40] = {.lex_state = 17, .external_lex_state = 7},
  [41] = {.lex_state = 14, .external_lex_state = 3},
  [42] = {.lex_state = 95, .external_lex_state = 3},
  [43] = {.lex_state = 95, .external_lex_state = 3},
  [44] = {.lex_state = 95, .external_lex_state = 3},
  [45] = {.lex_state = 95, .external_lex_state = 3},
  [46] = {.lex_state = 95, .external_lex_state = 3},
  [47] = {.lex_state = 95, .external_lex_state = 3},
  [48] = {.lex_state = 95, .external_lex_state = 3},
  [49] = {.lex_state = 95, .external_lex_state = 3},
  [50] = {.lex_state = 95, .external_lex_state = 3},
  [51] = {.lex_state = 95, .external_lex_state = 3},
  [52] = {.lex_state = 95, .external_lex_state = 3},
  [53] = {.lex_state = 95, .external_lex_state = 3},
  [54] = {.lex_state = 95, .external_lex_state = 3},
  [55] = {.lex_state = 95, .external_lex_state = 3},
  [56] = {.lex_state = 95, .external_lex_state = 3},
  [57] = {.lex_state = 95, .external_lex_state = 3},
  [58] = {.lex_state = 95, .external_lex_state = 3},
  [59] = {.lex_state = 95, .external_lex_state = 3},
  [60] = {.lex_state = 95, .external_lex_state = 3},
  [61] = {.lex_state = 95, .external_lex_state = 3},
  [62] = {.lex_state = 14, .external_lex_state = 3},
  [63] = {.lex_state = 18, .external_lex_state = 8},
  [64] = {.lex_state = 18, .external_lex_state = 8},
  [65] = {.lex_state = 14, .external_lex_state = 3},
  [66] = {.lex_state = 14, .external_lex_state = 3},
  [67] = {.lex_state = 18, .external_lex_state = 8},
  [68] = {.lex_state = 18, .external_lex_state = 8},
  [69] = {.lex_state = 14, .external_lex_state = 3},
  [70] = {.lex_state = 14, .external_lex_state = 3},
  [71] = {.lex_state = 14, .external_lex_state = 3},
  [72] = {.lex_state = 14, .external_lex_state = 3},
  [73] = {.lex_state = 14, .external_lex_state = 3},
  [74] = {.lex_state = 18, .external_lex_state = 8},
  [75] = {.lex_state = 15, .external_lex_state = 3},
  [76] = {.lex_state = 15, .external_lex_state = 9},
  [77] = {.lex_state = 15, .external_lex_state = 3},
  [78] = {.lex_state = 15, .external_lex_state = 9},
  [79] = {.lex_state = 15, .external_lex_state = 9},
  [80] = {.lex_state = 15, .external_lex_state = 3},
  [81] = {.lex_state = 17, .external_lex_state = 5},
  [82] = {.lex_state = 15, .external_lex_state = 3},
  [83] = {.lex_state = 15, .external_lex_state = 3},
  [84] = {.lex_state = 0, .external_lex_state = 3},
  [85] = {.lex_state = 15, .external_lex_state = 3},
  [86] = {.lex_state = 15, .external_lex_state = 3},
  [87] = {.lex_state = 15, .external_lex_state = 3},
  [88] = {.lex_state = 15, .external_lex_state = 3},
  [89] = {.lex_state = 15, .external_lex_state = 3},
  [90] = {.lex_state = 15, .external_lex_state = 3},
  [91] = {.lex_state = 17, .external_lex_state = 5},
  [92] = {.lex_state = 15, .external_lex_state = 3},
  [93] = {.lex_state = 15, .external_lex_state = 3},
  [94] = {.lex_state = 15, .external_lex_state = 3},
  [95] = {.lex_state = 15, .external_lex_state = 3},
  [96] = {.lex_state = 17, .external_lex_state = 5},
  [97] = {.lex_state = 15, .external_lex_state = 3},
  [98] = {.lex_state = 0, .external_lex_state = 3},
  [99] = {.lex_state = 18, .external_lex_state = 8},
  [100] = {.lex_state = 18, .external_lex_state = 8},
  [101] = {.lex_state = 19, .external_lex_state = 10},
  [102] = {.lex_state = 0, .external_lex_state = 3},
  [103] = {.lex_state = 19, .external_lex_state = 10},
  [104] = {.lex_state = 19, .external_lex_state = 10},
  [105] = {.lex_state = 18, .external_lex_state = 8},
  [106] = {.lex_state = 0, .external_lex_state = 9},
  [107] = {.lex_state = 0, .external_lex_state = 3},
  [108] = {.lex_state = 0, .external_lex_state = 9},
  [109] = {.lex_state = 0, .external_lex_state = 3},
  [110] = {.lex_state = 0, .external_lex_state = 9},
  [111] = {.lex_state = 0, .external_lex_state = 9},
  [112] = {.lex_state = 0, .external_lex_state = 9},
  [113] = {.lex_state = 0, .external_lex_state = 9},
  [114] = {.lex_state = 0, .external_lex_state = 9},
  [115] = {.lex_state = 0, .external_lex_state = 9},
  [116] = {.lex_state = 0, .external_lex_state = 9},
  [117] = {.lex_state = 0, .external_lex_state = 9},
  [118] = {.lex_state = 0, .external_lex_state = 9},
  [119] = {.lex_state = 0, .external_lex_state = 9},
  [120] = {.lex_state = 0, .external_lex_state = 9},
  [121] = {.lex_state = 0, .external_lex_state = 9},
  [122] = {.lex_state = 0, .external_lex_state = 9},
  [123] = {.lex_state = 0, .external_lex_state = 9},
  [124] = {.lex_state = 0, .external_lex_state = 9},
  [125] = {.lex_state = 0, .external_lex_state = 9},
  [126] = {.lex_state = 15, .external_lex_state = 3},
  [127] = {.lex_state = 0, .external_lex_state = 9},
  [128] = {.lex_state = 0, .external_lex_state = 3},
  [129] = {.lex_state = 0, .external_lex_state = 3},
  [130] = {.lex_state = 19, .external_lex_state = 3},
  [131] = {.lex_state = 0, .external_lex_state = 3},
  [132] = {.lex_state = 0, .external_lex_state = 3},
  [133] = {.lex_state = 0, .external_lex_state = 3},
  [134] = {.lex_state = 19, .external_lex_state = 3},
  [135] = {.lex_state = 0, .external_lex_state = 3},
  [136] = {.lex_state = 19, .external_lex_state = 10},
  [137] = {.lex_state = 0, .external_lex_state = 3},
  [138] = {.lex_state = 0, .external_lex_state = 3},
  [139] = {.lex_state = 19, .external_lex_state = 10},
  [140] = {.lex_state = 0, .external_lex_state = 3},
  [141] = {.lex_state = 19, .external_lex_state = 3},
  [142] = {.lex_state = 0, .external_lex_state = 3},
  [143] = {.lex_state = 0, .external_lex_state = 3},
  [144] = {.lex_state = 176, .external_lex_state = 3},
  [145] = {.lex_state = 176, .external_lex_state = 3},
  [146] = {.lex_state = 176, .external_lex_state = 3},
  [147] = {.lex_state = 176, .external_lex_state = 3},
  [148] = {.lex_state = 176, .external_lex_state = 3},
  [149] = {.lex_state = 176, .external_lex_state = 3},
  [150] = {.lex_state = 176, .external_lex_state = 3},
  [151] = {.lex_state = 176, .external_lex_state = 3},
  [152] = {.lex_state = 176, .external_lex_state = 3},
  [153] = {.lex_state = 0, .external_lex_state = 3},
  [154] = {.lex_state = 95, .external_lex_state = 3},
  [155] = {.lex_state = 0, .external_lex_state = 9},
  [156] = {.lex_state = 21, .external_lex_state = 3},
  [157] = {.lex_state = 0, .external_lex_state = 3},
  [158] = {.lex_state = 0, .external_lex_state = 3},
  [159] = {.lex_state = 21, .external_lex_state = 3},
  [160] = {.lex_state = 0, .external_lex_state = 3},
  [161] = {.lex_state = 0, .external_lex_state = 3},
  [162] = {.lex_state = 0, .external_lex_state = 3},
  [163] = {.lex_state = 0, .external_lex_state = 3},
  [164] = {.lex_state = 0, .external_lex_state = 3},
  [165] = {.lex_state = 0, .external_lex_state = 3},
  [166] = {.lex_state = 0, .external_lex_state = 3},
  [167] = {.lex_state = 0, .external_lex_state = 3},
  [168] = {.lex_state = 0, .external_lex_state = 3},
  [169] = {.lex_state = 0, .external_lex_state = 3},
  [170] = {.lex_state = 0, .external_lex_state = 3},
  [171] = {.lex_state = 0, .external_lex_state = 3},
  [172] = {.lex_state = 0, .external_lex_state = 3},
  [173] = {.lex_state = 0, .external_lex_state = 3},
  [174] = {.lex_state = 0, .external_lex_state = 3},
  [175] = {.lex_state = 20, .external_lex_state = 3},
  [176] = {.lex_state = 0, .external_lex_state = 3},
  [177] = {.lex_state = 0, .external_lex_state = 3},
  [178] = {.lex_state = 0, .external_lex_state = 3},
  [179] = {.lex_state = 0, .external_lex_state = 3},
  [180] = {.lex_state = 0, .external_lex_state = 3},
  [181] = {.lex_state = 0, .external_lex_state = 3},
  [182] = {.lex_state = 0, .external_lex_state = 3},
  [183] = {.lex_state = 20, .external_lex_state = 3},
  [184] = {.lex_state = 0, .external_lex_state = 3},
  [185] = {.lex_state = 0, .external_lex_state = 3},
  [186] = {.lex_state = 20, .external_lex_state = 3},
  [187] = {.lex_state = 0, .external_lex_state = 9},
  [188] = {.lex_state = 0, .external_lex_state = 3},
  [189] = {.lex_state = 0, .external_lex_state = 9},
  [190] = {.lex_state = 0, .external_lex_state = 3},
  [191] = {.lex_state = 0, .external_lex_state = 3},
  [192] = {.lex_state = 0, .external_lex_state = 3},
  [193] = {.lex_state = 0, .external_lex_state = 3},
  [194] = {.lex_state = 0, .external_lex_state = 3},
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
    [anon_sym_app_LPAREN] = ACTIONS(1),
    [anon_sym_face_LPAREN] = ACTIONS(1),
    [anon_sym_gamepad_LPAREN] = ACTIONS(1),
    [anon_sym_noise_LPAREN] = ACTIONS(1),
    [anon_sym_parrot_LPAREN] = ACTIONS(1),
    [sym_settings_binding] = ACTIONS(1),
    [sym_tag_binding] = ACTIONS(1),
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
    [sym_source_file] = STATE(194),
    [sym_matches] = STATE(2),
    [sym_comment] = ACTIONS(3),
    [sym__matches_start] = ACTIONS(5),
    [sym__matches_empty] = ACTIONS(7),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 30,
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
      anon_sym_app_LPAREN,
    ACTIONS(25), 1,
      anon_sym_face_LPAREN,
    ACTIONS(27), 1,
      anon_sym_gamepad_LPAREN,
    ACTIONS(29), 1,
      anon_sym_noise_LPAREN,
    ACTIONS(31), 1,
      anon_sym_parrot_LPAREN,
    ACTIONS(33), 1,
      sym_settings_binding,
    ACTIONS(35), 1,
      sym_tag_binding,
    ACTIONS(37), 1,
      anon_sym_key_LPAREN,
    STATE(133), 1,
      sym__optional_anchor,
    STATE(160), 1,
      sym_key_action,
    STATE(161), 1,
      sym_parrot_binding,
    STATE(162), 1,
      sym_noise_binding,
    STATE(163), 1,
      sym_gamepad_binding,
    STATE(164), 1,
      sym_face_binding,
    STATE(165), 1,
      sym_app_binding,
    STATE(169), 1,
      sym_rule,
    STATE(170), 1,
      sym_declarations,
    STATE(4), 2,
      sym_declaration,
      aux_sym_declarations_repeat1,
    STATE(132), 2,
      sym__optional_seq,
      sym_seq,
    STATE(168), 2,
      sym__optional_choice,
      sym_choice,
    STATE(17), 7,
      sym__primary_rule,
      sym_list,
      sym_capture,
      sym_optional,
      sym_repeat,
      sym_repeat1,
      sym_parenthesized_rule,
    STATE(52), 9,
      sym_command_declaration,
      sym_app_declaration,
      sym_face_declaration,
      sym_gamepad_declaration,
      sym_noise_declaration,
      sym_parrot_declaration,
      sym_tag_import_declaration,
      sym_key_binding_declaration,
      sym_settings_declaration,
  [108] = 29,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(39), 1,
      ts_builtin_sym_end,
    ACTIONS(41), 1,
      sym_start_anchor,
    ACTIONS(44), 1,
      sym_word,
    ACTIONS(47), 1,
      anon_sym_LBRACE,
    ACTIONS(50), 1,
      anon_sym_LT,
    ACTIONS(53), 1,
      anon_sym_LBRACK,
    ACTIONS(56), 1,
      anon_sym_LPAREN,
    ACTIONS(59), 1,
      anon_sym_app_LPAREN,
    ACTIONS(62), 1,
      anon_sym_face_LPAREN,
    ACTIONS(65), 1,
      anon_sym_gamepad_LPAREN,
    ACTIONS(68), 1,
      anon_sym_noise_LPAREN,
    ACTIONS(71), 1,
      anon_sym_parrot_LPAREN,
    ACTIONS(74), 1,
      sym_settings_binding,
    ACTIONS(77), 1,
      sym_tag_binding,
    ACTIONS(80), 1,
      anon_sym_key_LPAREN,
    STATE(133), 1,
      sym__optional_anchor,
    STATE(160), 1,
      sym_key_action,
    STATE(161), 1,
      sym_parrot_binding,
    STATE(162), 1,
      sym_noise_binding,
    STATE(163), 1,
      sym_gamepad_binding,
    STATE(164), 1,
      sym_face_binding,
    STATE(165), 1,
      sym_app_binding,
    STATE(169), 1,
      sym_rule,
    STATE(3), 2,
      sym_declaration,
      aux_sym_declarations_repeat1,
    STATE(132), 2,
      sym__optional_seq,
      sym_seq,
    STATE(168), 2,
      sym__optional_choice,
      sym_choice,
    STATE(17), 7,
      sym__primary_rule,
      sym_list,
      sym_capture,
      sym_optional,
      sym_repeat,
      sym_repeat1,
      sym_parenthesized_rule,
    STATE(52), 9,
      sym_command_declaration,
      sym_app_declaration,
      sym_face_declaration,
      sym_gamepad_declaration,
      sym_noise_declaration,
      sym_parrot_declaration,
      sym_tag_import_declaration,
      sym_key_binding_declaration,
      sym_settings_declaration,
  [213] = 29,
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
      anon_sym_app_LPAREN,
    ACTIONS(25), 1,
      anon_sym_face_LPAREN,
    ACTIONS(27), 1,
      anon_sym_gamepad_LPAREN,
    ACTIONS(29), 1,
      anon_sym_noise_LPAREN,
    ACTIONS(31), 1,
      anon_sym_parrot_LPAREN,
    ACTIONS(33), 1,
      sym_settings_binding,
    ACTIONS(35), 1,
      sym_tag_binding,
    ACTIONS(37), 1,
      anon_sym_key_LPAREN,
    ACTIONS(83), 1,
      ts_builtin_sym_end,
    STATE(133), 1,
      sym__optional_anchor,
    STATE(160), 1,
      sym_key_action,
    STATE(161), 1,
      sym_parrot_binding,
    STATE(162), 1,
      sym_noise_binding,
    STATE(163), 1,
      sym_gamepad_binding,
    STATE(164), 1,
      sym_face_binding,
    STATE(165), 1,
      sym_app_binding,
    STATE(169), 1,
      sym_rule,
    STATE(3), 2,
      sym_declaration,
      aux_sym_declarations_repeat1,
    STATE(132), 2,
      sym__optional_seq,
      sym_seq,
    STATE(168), 2,
      sym__optional_choice,
      sym_choice,
    STATE(17), 7,
      sym__primary_rule,
      sym_list,
      sym_capture,
      sym_optional,
      sym_repeat,
      sym_repeat1,
      sym_parenthesized_rule,
    STATE(52), 9,
      sym_command_declaration,
      sym_app_declaration,
      sym_face_declaration,
      sym_gamepad_declaration,
      sym_noise_declaration,
      sym_parrot_declaration,
      sym_tag_import_declaration,
      sym_key_binding_declaration,
      sym_settings_declaration,
  [318] = 12,
    ACTIONS(85), 1,
      sym_comment,
    ACTIONS(89), 1,
      anon_sym_LPAREN,
    ACTIONS(91), 1,
      anon_sym_DASH,
    ACTIONS(93), 1,
      anon_sym_key_LPAREN,
    ACTIONS(95), 1,
      anon_sym_sleep_LPAREN,
    ACTIONS(97), 1,
      sym_identifier,
    ACTIONS(101), 1,
      sym__string_start,
    STATE(126), 1,
      sym_expression,
    ACTIONS(99), 2,
      sym_integer,
      sym_float,
    ACTIONS(103), 2,
      sym_string_content,
      sym__string_end,
    ACTIONS(87), 6,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACE_LBRACE,
      anon_sym_RBRACE_RBRACE,
      sym_string_escape_sequence,
      sym__not_escapesequence,
    STATE(97), 8,
      sym_variable,
      sym_parenthesized_expression,
      sym_binary_operator,
      sym_unary_operator,
      sym_key_action,
      sym_sleep_action,
      sym_action,
      sym_string,
  [369] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(105), 1,
      anon_sym_LPAREN,
    ACTIONS(107), 1,
      anon_sym_DASH,
    ACTIONS(109), 1,
      anon_sym_key_LPAREN,
    ACTIONS(111), 1,
      anon_sym_sleep_LPAREN,
    ACTIONS(113), 1,
      sym_identifier,
    ACTIONS(115), 1,
      sym_integer,
    ACTIONS(117), 1,
      sym_float,
    ACTIONS(119), 1,
      sym__dedent,
    ACTIONS(121), 1,
      sym__string_start,
    STATE(57), 1,
      sym_block,
    STATE(110), 1,
      sym_expression,
    STATE(16), 2,
      sym_statement,
      aux_sym_block_repeat1,
    STATE(96), 2,
      sym_assignment_statement,
      sym_expression_statement,
    STATE(116), 8,
      sym_variable,
      sym_parenthesized_expression,
      sym_binary_operator,
      sym_unary_operator,
      sym_key_action,
      sym_sleep_action,
      sym_action,
      sym_string,
  [424] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(105), 1,
      anon_sym_LPAREN,
    ACTIONS(107), 1,
      anon_sym_DASH,
    ACTIONS(109), 1,
      anon_sym_key_LPAREN,
    ACTIONS(111), 1,
      anon_sym_sleep_LPAREN,
    ACTIONS(115), 1,
      sym_integer,
    ACTIONS(117), 1,
      sym_float,
    ACTIONS(121), 1,
      sym__string_start,
    ACTIONS(123), 1,
      sym_identifier,
    ACTIONS(125), 1,
      sym__indent,
    STATE(46), 1,
      sym__statements,
    STATE(50), 1,
      sym_statement,
    STATE(123), 1,
      sym_expression,
    STATE(54), 2,
      sym_assignment_statement,
      sym_expression_statement,
    STATE(116), 8,
      sym_variable,
      sym_parenthesized_expression,
      sym_binary_operator,
      sym_unary_operator,
      sym_key_action,
      sym_sleep_action,
      sym_action,
      sym_string,
  [478] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(105), 1,
      anon_sym_LPAREN,
    ACTIONS(107), 1,
      anon_sym_DASH,
    ACTIONS(109), 1,
      anon_sym_key_LPAREN,
    ACTIONS(111), 1,
      anon_sym_sleep_LPAREN,
    ACTIONS(115), 1,
      sym_integer,
    ACTIONS(117), 1,
      sym_float,
    ACTIONS(121), 1,
      sym__string_start,
    ACTIONS(123), 1,
      sym_identifier,
    ACTIONS(125), 1,
      sym__indent,
    STATE(48), 1,
      sym__statements,
    STATE(50), 1,
      sym_statement,
    STATE(123), 1,
      sym_expression,
    STATE(54), 2,
      sym_assignment_statement,
      sym_expression_statement,
    STATE(116), 8,
      sym_variable,
      sym_parenthesized_expression,
      sym_binary_operator,
      sym_unary_operator,
      sym_key_action,
      sym_sleep_action,
      sym_action,
      sym_string,
  [532] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(105), 1,
      anon_sym_LPAREN,
    ACTIONS(107), 1,
      anon_sym_DASH,
    ACTIONS(109), 1,
      anon_sym_key_LPAREN,
    ACTIONS(111), 1,
      anon_sym_sleep_LPAREN,
    ACTIONS(115), 1,
      sym_integer,
    ACTIONS(117), 1,
      sym_float,
    ACTIONS(121), 1,
      sym__string_start,
    ACTIONS(123), 1,
      sym_identifier,
    ACTIONS(125), 1,
      sym__indent,
    STATE(50), 1,
      sym_statement,
    STATE(56), 1,
      sym__statements,
    STATE(123), 1,
      sym_expression,
    STATE(54), 2,
      sym_assignment_statement,
      sym_expression_statement,
    STATE(116), 8,
      sym_variable,
      sym_parenthesized_expression,
      sym_binary_operator,
      sym_unary_operator,
      sym_key_action,
      sym_sleep_action,
      sym_action,
      sym_string,
  [586] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(105), 1,
      anon_sym_LPAREN,
    ACTIONS(107), 1,
      anon_sym_DASH,
    ACTIONS(109), 1,
      anon_sym_key_LPAREN,
    ACTIONS(111), 1,
      anon_sym_sleep_LPAREN,
    ACTIONS(115), 1,
      sym_integer,
    ACTIONS(117), 1,
      sym_float,
    ACTIONS(121), 1,
      sym__string_start,
    ACTIONS(123), 1,
      sym_identifier,
    ACTIONS(125), 1,
      sym__indent,
    STATE(50), 1,
      sym_statement,
    STATE(59), 1,
      sym__statements,
    STATE(123), 1,
      sym_expression,
    STATE(54), 2,
      sym_assignment_statement,
      sym_expression_statement,
    STATE(116), 8,
      sym_variable,
      sym_parenthesized_expression,
      sym_binary_operator,
      sym_unary_operator,
      sym_key_action,
      sym_sleep_action,
      sym_action,
      sym_string,
  [640] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(127), 1,
      anon_sym_LPAREN,
    ACTIONS(130), 1,
      anon_sym_DASH,
    ACTIONS(133), 1,
      anon_sym_key_LPAREN,
    ACTIONS(136), 1,
      anon_sym_sleep_LPAREN,
    ACTIONS(139), 1,
      sym_identifier,
    ACTIONS(142), 1,
      sym_integer,
    ACTIONS(145), 1,
      sym_float,
    ACTIONS(148), 1,
      sym__dedent,
    ACTIONS(150), 1,
      sym__string_start,
    STATE(110), 1,
      sym_expression,
    STATE(11), 2,
      sym_statement,
      aux_sym_block_repeat1,
    STATE(96), 2,
      sym_assignment_statement,
      sym_expression_statement,
    STATE(116), 8,
      sym_variable,
      sym_parenthesized_expression,
      sym_binary_operator,
      sym_unary_operator,
      sym_key_action,
      sym_sleep_action,
      sym_action,
      sym_string,
  [692] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(105), 1,
      anon_sym_LPAREN,
    ACTIONS(107), 1,
      anon_sym_DASH,
    ACTIONS(109), 1,
      anon_sym_key_LPAREN,
    ACTIONS(111), 1,
      anon_sym_sleep_LPAREN,
    ACTIONS(115), 1,
      sym_integer,
    ACTIONS(117), 1,
      sym_float,
    ACTIONS(121), 1,
      sym__string_start,
    ACTIONS(123), 1,
      sym_identifier,
    ACTIONS(125), 1,
      sym__indent,
    STATE(50), 1,
      sym_statement,
    STATE(53), 1,
      sym__statements,
    STATE(123), 1,
      sym_expression,
    STATE(54), 2,
      sym_assignment_statement,
      sym_expression_statement,
    STATE(116), 8,
      sym_variable,
      sym_parenthesized_expression,
      sym_binary_operator,
      sym_unary_operator,
      sym_key_action,
      sym_sleep_action,
      sym_action,
      sym_string,
  [746] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(105), 1,
      anon_sym_LPAREN,
    ACTIONS(107), 1,
      anon_sym_DASH,
    ACTIONS(109), 1,
      anon_sym_key_LPAREN,
    ACTIONS(111), 1,
      anon_sym_sleep_LPAREN,
    ACTIONS(115), 1,
      sym_integer,
    ACTIONS(117), 1,
      sym_float,
    ACTIONS(121), 1,
      sym__string_start,
    ACTIONS(123), 1,
      sym_identifier,
    ACTIONS(125), 1,
      sym__indent,
    STATE(44), 1,
      sym__statements,
    STATE(50), 1,
      sym_statement,
    STATE(123), 1,
      sym_expression,
    STATE(54), 2,
      sym_assignment_statement,
      sym_expression_statement,
    STATE(116), 8,
      sym_variable,
      sym_parenthesized_expression,
      sym_binary_operator,
      sym_unary_operator,
      sym_key_action,
      sym_sleep_action,
      sym_action,
      sym_string,
  [800] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(105), 1,
      anon_sym_LPAREN,
    ACTIONS(107), 1,
      anon_sym_DASH,
    ACTIONS(109), 1,
      anon_sym_key_LPAREN,
    ACTIONS(111), 1,
      anon_sym_sleep_LPAREN,
    ACTIONS(115), 1,
      sym_integer,
    ACTIONS(117), 1,
      sym_float,
    ACTIONS(121), 1,
      sym__string_start,
    ACTIONS(123), 1,
      sym_identifier,
    ACTIONS(125), 1,
      sym__indent,
    STATE(49), 1,
      sym__statements,
    STATE(50), 1,
      sym_statement,
    STATE(123), 1,
      sym_expression,
    STATE(54), 2,
      sym_assignment_statement,
      sym_expression_statement,
    STATE(116), 8,
      sym_variable,
      sym_parenthesized_expression,
      sym_binary_operator,
      sym_unary_operator,
      sym_key_action,
      sym_sleep_action,
      sym_action,
      sym_string,
  [854] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(105), 1,
      anon_sym_LPAREN,
    ACTIONS(107), 1,
      anon_sym_DASH,
    ACTIONS(109), 1,
      anon_sym_key_LPAREN,
    ACTIONS(111), 1,
      anon_sym_sleep_LPAREN,
    ACTIONS(115), 1,
      sym_integer,
    ACTIONS(117), 1,
      sym_float,
    ACTIONS(121), 1,
      sym__string_start,
    ACTIONS(123), 1,
      sym_identifier,
    ACTIONS(125), 1,
      sym__indent,
    STATE(47), 1,
      sym__statements,
    STATE(50), 1,
      sym_statement,
    STATE(123), 1,
      sym_expression,
    STATE(54), 2,
      sym_assignment_statement,
      sym_expression_statement,
    STATE(116), 8,
      sym_variable,
      sym_parenthesized_expression,
      sym_binary_operator,
      sym_unary_operator,
      sym_key_action,
      sym_sleep_action,
      sym_action,
      sym_string,
  [908] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(105), 1,
      anon_sym_LPAREN,
    ACTIONS(107), 1,
      anon_sym_DASH,
    ACTIONS(109), 1,
      anon_sym_key_LPAREN,
    ACTIONS(111), 1,
      anon_sym_sleep_LPAREN,
    ACTIONS(113), 1,
      sym_identifier,
    ACTIONS(115), 1,
      sym_integer,
    ACTIONS(117), 1,
      sym_float,
    ACTIONS(121), 1,
      sym__string_start,
    ACTIONS(153), 1,
      sym__dedent,
    STATE(110), 1,
      sym_expression,
    STATE(11), 2,
      sym_statement,
      aux_sym_block_repeat1,
    STATE(96), 2,
      sym_assignment_statement,
      sym_expression_statement,
    STATE(116), 8,
      sym_variable,
      sym_parenthesized_expression,
      sym_binary_operator,
      sym_unary_operator,
      sym_key_action,
      sym_sleep_action,
      sym_action,
      sym_string,
  [960] = 11,
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
    ACTIONS(157), 1,
      sym_word,
    ACTIONS(159), 1,
      anon_sym_STAR,
    ACTIONS(161), 1,
      anon_sym_PLUS,
    STATE(22), 1,
      aux_sym_seq_repeat1,
    ACTIONS(155), 5,
      anon_sym_COLON,
      anon_sym_PIPE,
      sym_end_anchor,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
    STATE(65), 7,
      sym__primary_rule,
      sym_list,
      sym_capture,
      sym_optional,
      sym_repeat,
      sym_repeat1,
      sym_parenthesized_rule,
  [1004] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(37), 1,
      anon_sym_key_LPAREN,
    ACTIONS(97), 1,
      sym_identifier,
    ACTIONS(99), 1,
      sym_integer,
    ACTIONS(101), 1,
      sym__string_start,
    ACTIONS(163), 1,
      anon_sym_LPAREN,
    ACTIONS(165), 1,
      anon_sym_RPAREN,
    ACTIONS(167), 1,
      anon_sym_DASH,
    ACTIONS(169), 1,
      anon_sym_sleep_LPAREN,
    ACTIONS(171), 1,
      anon_sym_COMMA,
    ACTIONS(173), 1,
      sym_float,
    STATE(98), 1,
      sym_expression,
    STATE(97), 8,
      sym_variable,
      sym_parenthesized_expression,
      sym_binary_operator,
      sym_unary_operator,
      sym_key_action,
      sym_sleep_action,
      sym_action,
      sym_string,
  [1051] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(37), 1,
      anon_sym_key_LPAREN,
    ACTIONS(97), 1,
      sym_identifier,
    ACTIONS(99), 1,
      sym_integer,
    ACTIONS(101), 1,
      sym__string_start,
    ACTIONS(163), 1,
      anon_sym_LPAREN,
    ACTIONS(167), 1,
      anon_sym_DASH,
    ACTIONS(169), 1,
      anon_sym_sleep_LPAREN,
    ACTIONS(173), 1,
      sym_float,
    ACTIONS(175), 1,
      anon_sym_RPAREN,
    ACTIONS(177), 1,
      anon_sym_COMMA,
    STATE(84), 1,
      sym_expression,
    STATE(97), 8,
      sym_variable,
      sym_parenthesized_expression,
      sym_binary_operator,
      sym_unary_operator,
      sym_key_action,
      sym_sleep_action,
      sym_action,
      sym_string,
  [1098] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(37), 1,
      anon_sym_key_LPAREN,
    ACTIONS(97), 1,
      sym_identifier,
    ACTIONS(99), 1,
      sym_integer,
    ACTIONS(101), 1,
      sym__string_start,
    ACTIONS(163), 1,
      anon_sym_LPAREN,
    ACTIONS(167), 1,
      anon_sym_DASH,
    ACTIONS(169), 1,
      anon_sym_sleep_LPAREN,
    ACTIONS(173), 1,
      sym_float,
    ACTIONS(179), 1,
      anon_sym_RPAREN,
    STATE(102), 1,
      sym_expression,
    STATE(97), 8,
      sym_variable,
      sym_parenthesized_expression,
      sym_binary_operator,
      sym_unary_operator,
      sym_key_action,
      sym_sleep_action,
      sym_action,
      sym_string,
  [1142] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(183), 1,
      sym_word,
    ACTIONS(186), 1,
      anon_sym_LBRACE,
    ACTIONS(189), 1,
      anon_sym_LT,
    ACTIONS(192), 1,
      anon_sym_LBRACK,
    ACTIONS(195), 1,
      anon_sym_LPAREN,
    STATE(21), 1,
      aux_sym_seq_repeat1,
    ACTIONS(181), 5,
      anon_sym_COLON,
      anon_sym_PIPE,
      sym_end_anchor,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
    STATE(65), 7,
      sym__primary_rule,
      sym_list,
      sym_capture,
      sym_optional,
      sym_repeat,
      sym_repeat1,
      sym_parenthesized_rule,
  [1180] = 9,
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
    ACTIONS(157), 1,
      sym_word,
    STATE(21), 1,
      aux_sym_seq_repeat1,
    ACTIONS(198), 5,
      anon_sym_COLON,
      anon_sym_PIPE,
      sym_end_anchor,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
    STATE(65), 7,
      sym__primary_rule,
      sym_list,
      sym_capture,
      sym_optional,
      sym_repeat,
      sym_repeat1,
      sym_parenthesized_rule,
  [1218] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(37), 1,
      anon_sym_key_LPAREN,
    ACTIONS(97), 1,
      sym_identifier,
    ACTIONS(99), 1,
      sym_integer,
    ACTIONS(101), 1,
      sym__string_start,
    ACTIONS(163), 1,
      anon_sym_LPAREN,
    ACTIONS(167), 1,
      anon_sym_DASH,
    ACTIONS(169), 1,
      anon_sym_sleep_LPAREN,
    ACTIONS(173), 1,
      sym_float,
    ACTIONS(200), 1,
      anon_sym_RPAREN,
    STATE(102), 1,
      sym_expression,
    STATE(97), 8,
      sym_variable,
      sym_parenthesized_expression,
      sym_binary_operator,
      sym_unary_operator,
      sym_key_action,
      sym_sleep_action,
      sym_action,
      sym_string,
  [1262] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(37), 1,
      anon_sym_key_LPAREN,
    ACTIONS(97), 1,
      sym_identifier,
    ACTIONS(99), 1,
      sym_integer,
    ACTIONS(101), 1,
      sym__string_start,
    ACTIONS(163), 1,
      anon_sym_LPAREN,
    ACTIONS(167), 1,
      anon_sym_DASH,
    ACTIONS(169), 1,
      anon_sym_sleep_LPAREN,
    ACTIONS(173), 1,
      sym_float,
    ACTIONS(202), 1,
      anon_sym_RPAREN,
    STATE(102), 1,
      sym_expression,
    STATE(97), 8,
      sym_variable,
      sym_parenthesized_expression,
      sym_binary_operator,
      sym_unary_operator,
      sym_key_action,
      sym_sleep_action,
      sym_action,
      sym_string,
  [1306] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(37), 1,
      anon_sym_key_LPAREN,
    ACTIONS(97), 1,
      sym_identifier,
    ACTIONS(99), 1,
      sym_integer,
    ACTIONS(101), 1,
      sym__string_start,
    ACTIONS(163), 1,
      anon_sym_LPAREN,
    ACTIONS(167), 1,
      anon_sym_DASH,
    ACTIONS(169), 1,
      anon_sym_sleep_LPAREN,
    ACTIONS(173), 1,
      sym_float,
    ACTIONS(204), 1,
      anon_sym_RPAREN,
    STATE(102), 1,
      sym_expression,
    STATE(97), 8,
      sym_variable,
      sym_parenthesized_expression,
      sym_binary_operator,
      sym_unary_operator,
      sym_key_action,
      sym_sleep_action,
      sym_action,
      sym_string,
  [1350] = 11,
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
    ACTIONS(206), 1,
      sym_word,
    STATE(133), 1,
      sym__optional_anchor,
    STATE(132), 2,
      sym__optional_seq,
      sym_seq,
    STATE(188), 2,
      sym__optional_choice,
      sym_choice,
    STATE(17), 7,
      sym__primary_rule,
      sym_list,
      sym_capture,
      sym_optional,
      sym_repeat,
      sym_repeat1,
      sym_parenthesized_rule,
  [1392] = 11,
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
    ACTIONS(206), 1,
      sym_word,
    STATE(133), 1,
      sym__optional_anchor,
    STATE(132), 2,
      sym__optional_seq,
      sym_seq,
    STATE(190), 2,
      sym__optional_choice,
      sym_choice,
    STATE(17), 7,
      sym__primary_rule,
      sym_list,
      sym_capture,
      sym_optional,
      sym_repeat,
      sym_repeat1,
      sym_parenthesized_rule,
  [1434] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(37), 1,
      anon_sym_key_LPAREN,
    ACTIONS(97), 1,
      sym_identifier,
    ACTIONS(99), 1,
      sym_integer,
    ACTIONS(101), 1,
      sym__string_start,
    ACTIONS(163), 1,
      anon_sym_LPAREN,
    ACTIONS(167), 1,
      anon_sym_DASH,
    ACTIONS(169), 1,
      anon_sym_sleep_LPAREN,
    ACTIONS(173), 1,
      sym_float,
    STATE(90), 1,
      sym_expression,
    STATE(97), 8,
      sym_variable,
      sym_parenthesized_expression,
      sym_binary_operator,
      sym_unary_operator,
      sym_key_action,
      sym_sleep_action,
      sym_action,
      sym_string,
  [1475] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(37), 1,
      anon_sym_key_LPAREN,
    ACTIONS(97), 1,
      sym_identifier,
    ACTIONS(99), 1,
      sym_integer,
    ACTIONS(101), 1,
      sym__string_start,
    ACTIONS(163), 1,
      anon_sym_LPAREN,
    ACTIONS(167), 1,
      anon_sym_DASH,
    ACTIONS(169), 1,
      anon_sym_sleep_LPAREN,
    ACTIONS(173), 1,
      sym_float,
    STATE(109), 1,
      sym_expression,
    STATE(97), 8,
      sym_variable,
      sym_parenthesized_expression,
      sym_binary_operator,
      sym_unary_operator,
      sym_key_action,
      sym_sleep_action,
      sym_action,
      sym_string,
  [1516] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(37), 1,
      anon_sym_key_LPAREN,
    ACTIONS(97), 1,
      sym_identifier,
    ACTIONS(99), 1,
      sym_integer,
    ACTIONS(101), 1,
      sym__string_start,
    ACTIONS(163), 1,
      anon_sym_LPAREN,
    ACTIONS(167), 1,
      anon_sym_DASH,
    ACTIONS(169), 1,
      anon_sym_sleep_LPAREN,
    ACTIONS(173), 1,
      sym_float,
    STATE(107), 1,
      sym_expression,
    STATE(97), 8,
      sym_variable,
      sym_parenthesized_expression,
      sym_binary_operator,
      sym_unary_operator,
      sym_key_action,
      sym_sleep_action,
      sym_action,
      sym_string,
  [1557] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(105), 1,
      anon_sym_LPAREN,
    ACTIONS(107), 1,
      anon_sym_DASH,
    ACTIONS(109), 1,
      anon_sym_key_LPAREN,
    ACTIONS(111), 1,
      anon_sym_sleep_LPAREN,
    ACTIONS(115), 1,
      sym_integer,
    ACTIONS(117), 1,
      sym_float,
    ACTIONS(121), 1,
      sym__string_start,
    ACTIONS(208), 1,
      sym_identifier,
    STATE(108), 1,
      sym_expression,
    STATE(116), 8,
      sym_variable,
      sym_parenthesized_expression,
      sym_binary_operator,
      sym_unary_operator,
      sym_key_action,
      sym_sleep_action,
      sym_action,
      sym_string,
  [1598] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(105), 1,
      anon_sym_LPAREN,
    ACTIONS(107), 1,
      anon_sym_DASH,
    ACTIONS(109), 1,
      anon_sym_key_LPAREN,
    ACTIONS(111), 1,
      anon_sym_sleep_LPAREN,
    ACTIONS(115), 1,
      sym_integer,
    ACTIONS(117), 1,
      sym_float,
    ACTIONS(121), 1,
      sym__string_start,
    ACTIONS(208), 1,
      sym_identifier,
    STATE(125), 1,
      sym_expression,
    STATE(116), 8,
      sym_variable,
      sym_parenthesized_expression,
      sym_binary_operator,
      sym_unary_operator,
      sym_key_action,
      sym_sleep_action,
      sym_action,
      sym_string,
  [1639] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(105), 1,
      anon_sym_LPAREN,
    ACTIONS(107), 1,
      anon_sym_DASH,
    ACTIONS(109), 1,
      anon_sym_key_LPAREN,
    ACTIONS(111), 1,
      anon_sym_sleep_LPAREN,
    ACTIONS(115), 1,
      sym_integer,
    ACTIONS(117), 1,
      sym_float,
    ACTIONS(121), 1,
      sym__string_start,
    ACTIONS(208), 1,
      sym_identifier,
    STATE(117), 1,
      sym_expression,
    STATE(116), 8,
      sym_variable,
      sym_parenthesized_expression,
      sym_binary_operator,
      sym_unary_operator,
      sym_key_action,
      sym_sleep_action,
      sym_action,
      sym_string,
  [1680] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(37), 1,
      anon_sym_key_LPAREN,
    ACTIONS(97), 1,
      sym_identifier,
    ACTIONS(99), 1,
      sym_integer,
    ACTIONS(101), 1,
      sym__string_start,
    ACTIONS(163), 1,
      anon_sym_LPAREN,
    ACTIONS(167), 1,
      anon_sym_DASH,
    ACTIONS(169), 1,
      anon_sym_sleep_LPAREN,
    ACTIONS(173), 1,
      sym_float,
    STATE(89), 1,
      sym_expression,
    STATE(97), 8,
      sym_variable,
      sym_parenthesized_expression,
      sym_binary_operator,
      sym_unary_operator,
      sym_key_action,
      sym_sleep_action,
      sym_action,
      sym_string,
  [1721] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(37), 1,
      anon_sym_key_LPAREN,
    ACTIONS(97), 1,
      sym_identifier,
    ACTIONS(99), 1,
      sym_integer,
    ACTIONS(101), 1,
      sym__string_start,
    ACTIONS(163), 1,
      anon_sym_LPAREN,
    ACTIONS(167), 1,
      anon_sym_DASH,
    ACTIONS(169), 1,
      anon_sym_sleep_LPAREN,
    ACTIONS(173), 1,
      sym_float,
    STATE(87), 1,
      sym_expression,
    STATE(97), 8,
      sym_variable,
      sym_parenthesized_expression,
      sym_binary_operator,
      sym_unary_operator,
      sym_key_action,
      sym_sleep_action,
      sym_action,
      sym_string,
  [1762] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(105), 1,
      anon_sym_LPAREN,
    ACTIONS(107), 1,
      anon_sym_DASH,
    ACTIONS(109), 1,
      anon_sym_key_LPAREN,
    ACTIONS(111), 1,
      anon_sym_sleep_LPAREN,
    ACTIONS(115), 1,
      sym_integer,
    ACTIONS(117), 1,
      sym_float,
    ACTIONS(121), 1,
      sym__string_start,
    ACTIONS(208), 1,
      sym_identifier,
    STATE(114), 1,
      sym_expression,
    STATE(116), 8,
      sym_variable,
      sym_parenthesized_expression,
      sym_binary_operator,
      sym_unary_operator,
      sym_key_action,
      sym_sleep_action,
      sym_action,
      sym_string,
  [1803] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(105), 1,
      anon_sym_LPAREN,
    ACTIONS(107), 1,
      anon_sym_DASH,
    ACTIONS(109), 1,
      anon_sym_key_LPAREN,
    ACTIONS(111), 1,
      anon_sym_sleep_LPAREN,
    ACTIONS(115), 1,
      sym_integer,
    ACTIONS(117), 1,
      sym_float,
    ACTIONS(121), 1,
      sym__string_start,
    ACTIONS(208), 1,
      sym_identifier,
    STATE(112), 1,
      sym_expression,
    STATE(116), 8,
      sym_variable,
      sym_parenthesized_expression,
      sym_binary_operator,
      sym_unary_operator,
      sym_key_action,
      sym_sleep_action,
      sym_action,
      sym_string,
  [1844] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(105), 1,
      anon_sym_LPAREN,
    ACTIONS(107), 1,
      anon_sym_DASH,
    ACTIONS(109), 1,
      anon_sym_key_LPAREN,
    ACTIONS(111), 1,
      anon_sym_sleep_LPAREN,
    ACTIONS(115), 1,
      sym_integer,
    ACTIONS(117), 1,
      sym_float,
    ACTIONS(121), 1,
      sym__string_start,
    ACTIONS(208), 1,
      sym_identifier,
    STATE(118), 1,
      sym_expression,
    STATE(116), 8,
      sym_variable,
      sym_parenthesized_expression,
      sym_binary_operator,
      sym_unary_operator,
      sym_key_action,
      sym_sleep_action,
      sym_action,
      sym_string,
  [1885] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(37), 1,
      anon_sym_key_LPAREN,
    ACTIONS(97), 1,
      sym_identifier,
    ACTIONS(99), 1,
      sym_integer,
    ACTIONS(101), 1,
      sym__string_start,
    ACTIONS(163), 1,
      anon_sym_LPAREN,
    ACTIONS(167), 1,
      anon_sym_DASH,
    ACTIONS(169), 1,
      anon_sym_sleep_LPAREN,
    ACTIONS(173), 1,
      sym_float,
    STATE(88), 1,
      sym_expression,
    STATE(97), 8,
      sym_variable,
      sym_parenthesized_expression,
      sym_binary_operator,
      sym_unary_operator,
      sym_key_action,
      sym_sleep_action,
      sym_action,
      sym_string,
  [1926] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(37), 1,
      anon_sym_key_LPAREN,
    ACTIONS(97), 1,
      sym_identifier,
    ACTIONS(99), 1,
      sym_integer,
    ACTIONS(101), 1,
      sym__string_start,
    ACTIONS(163), 1,
      anon_sym_LPAREN,
    ACTIONS(167), 1,
      anon_sym_DASH,
    ACTIONS(169), 1,
      anon_sym_sleep_LPAREN,
    ACTIONS(173), 1,
      sym_float,
    STATE(102), 1,
      sym_expression,
    STATE(97), 8,
      sym_variable,
      sym_parenthesized_expression,
      sym_binary_operator,
      sym_unary_operator,
      sym_key_action,
      sym_sleep_action,
      sym_action,
      sym_string,
  [1967] = 10,
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
    ACTIONS(206), 1,
      sym_word,
    STATE(137), 1,
      sym__optional_anchor,
    STATE(132), 2,
      sym__optional_seq,
      sym_seq,
    STATE(17), 7,
      sym__primary_rule,
      sym_list,
      sym_capture,
      sym_optional,
      sym_repeat,
      sym_repeat1,
      sym_parenthesized_rule,
  [2005] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(212), 1,
      sym_word,
    ACTIONS(210), 14,
      ts_builtin_sym_end,
      sym_start_anchor,
      anon_sym_LBRACE,
      anon_sym_LT,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_app_LPAREN,
      anon_sym_face_LPAREN,
      anon_sym_gamepad_LPAREN,
      anon_sym_noise_LPAREN,
      anon_sym_parrot_LPAREN,
      sym_settings_binding,
      sym_tag_binding,
      anon_sym_key_LPAREN,
  [2028] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(216), 1,
      sym_word,
    ACTIONS(214), 14,
      ts_builtin_sym_end,
      sym_start_anchor,
      anon_sym_LBRACE,
      anon_sym_LT,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_app_LPAREN,
      anon_sym_face_LPAREN,
      anon_sym_gamepad_LPAREN,
      anon_sym_noise_LPAREN,
      anon_sym_parrot_LPAREN,
      sym_settings_binding,
      sym_tag_binding,
      anon_sym_key_LPAREN,
  [2051] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(220), 1,
      sym_word,
    ACTIONS(218), 14,
      ts_builtin_sym_end,
      sym_start_anchor,
      anon_sym_LBRACE,
      anon_sym_LT,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_app_LPAREN,
      anon_sym_face_LPAREN,
      anon_sym_gamepad_LPAREN,
      anon_sym_noise_LPAREN,
      anon_sym_parrot_LPAREN,
      sym_settings_binding,
      sym_tag_binding,
      anon_sym_key_LPAREN,
  [2074] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(224), 1,
      sym_word,
    ACTIONS(222), 14,
      ts_builtin_sym_end,
      sym_start_anchor,
      anon_sym_LBRACE,
      anon_sym_LT,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_app_LPAREN,
      anon_sym_face_LPAREN,
      anon_sym_gamepad_LPAREN,
      anon_sym_noise_LPAREN,
      anon_sym_parrot_LPAREN,
      sym_settings_binding,
      sym_tag_binding,
      anon_sym_key_LPAREN,
  [2097] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(228), 1,
      sym_word,
    ACTIONS(226), 14,
      ts_builtin_sym_end,
      sym_start_anchor,
      anon_sym_LBRACE,
      anon_sym_LT,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_app_LPAREN,
      anon_sym_face_LPAREN,
      anon_sym_gamepad_LPAREN,
      anon_sym_noise_LPAREN,
      anon_sym_parrot_LPAREN,
      sym_settings_binding,
      sym_tag_binding,
      anon_sym_key_LPAREN,
  [2120] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(232), 1,
      sym_word,
    ACTIONS(230), 14,
      ts_builtin_sym_end,
      sym_start_anchor,
      anon_sym_LBRACE,
      anon_sym_LT,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_app_LPAREN,
      anon_sym_face_LPAREN,
      anon_sym_gamepad_LPAREN,
      anon_sym_noise_LPAREN,
      anon_sym_parrot_LPAREN,
      sym_settings_binding,
      sym_tag_binding,
      anon_sym_key_LPAREN,
  [2143] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(236), 1,
      sym_word,
    ACTIONS(234), 14,
      ts_builtin_sym_end,
      sym_start_anchor,
      anon_sym_LBRACE,
      anon_sym_LT,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_app_LPAREN,
      anon_sym_face_LPAREN,
      anon_sym_gamepad_LPAREN,
      anon_sym_noise_LPAREN,
      anon_sym_parrot_LPAREN,
      sym_settings_binding,
      sym_tag_binding,
      anon_sym_key_LPAREN,
  [2166] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(240), 1,
      sym_word,
    ACTIONS(238), 14,
      ts_builtin_sym_end,
      sym_start_anchor,
      anon_sym_LBRACE,
      anon_sym_LT,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_app_LPAREN,
      anon_sym_face_LPAREN,
      anon_sym_gamepad_LPAREN,
      anon_sym_noise_LPAREN,
      anon_sym_parrot_LPAREN,
      sym_settings_binding,
      sym_tag_binding,
      anon_sym_key_LPAREN,
  [2189] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(244), 1,
      sym_word,
    ACTIONS(242), 14,
      ts_builtin_sym_end,
      sym_start_anchor,
      anon_sym_LBRACE,
      anon_sym_LT,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_app_LPAREN,
      anon_sym_face_LPAREN,
      anon_sym_gamepad_LPAREN,
      anon_sym_noise_LPAREN,
      anon_sym_parrot_LPAREN,
      sym_settings_binding,
      sym_tag_binding,
      anon_sym_key_LPAREN,
  [2212] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(248), 1,
      sym_word,
    ACTIONS(246), 14,
      ts_builtin_sym_end,
      sym_start_anchor,
      anon_sym_LBRACE,
      anon_sym_LT,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_app_LPAREN,
      anon_sym_face_LPAREN,
      anon_sym_gamepad_LPAREN,
      anon_sym_noise_LPAREN,
      anon_sym_parrot_LPAREN,
      sym_settings_binding,
      sym_tag_binding,
      anon_sym_key_LPAREN,
  [2235] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(252), 1,
      sym_word,
    ACTIONS(250), 14,
      ts_builtin_sym_end,
      sym_start_anchor,
      anon_sym_LBRACE,
      anon_sym_LT,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_app_LPAREN,
      anon_sym_face_LPAREN,
      anon_sym_gamepad_LPAREN,
      anon_sym_noise_LPAREN,
      anon_sym_parrot_LPAREN,
      sym_settings_binding,
      sym_tag_binding,
      anon_sym_key_LPAREN,
  [2258] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(256), 1,
      sym_word,
    ACTIONS(254), 14,
      ts_builtin_sym_end,
      sym_start_anchor,
      anon_sym_LBRACE,
      anon_sym_LT,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_app_LPAREN,
      anon_sym_face_LPAREN,
      anon_sym_gamepad_LPAREN,
      anon_sym_noise_LPAREN,
      anon_sym_parrot_LPAREN,
      sym_settings_binding,
      sym_tag_binding,
      anon_sym_key_LPAREN,
  [2281] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(260), 1,
      sym_word,
    ACTIONS(258), 14,
      ts_builtin_sym_end,
      sym_start_anchor,
      anon_sym_LBRACE,
      anon_sym_LT,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_app_LPAREN,
      anon_sym_face_LPAREN,
      anon_sym_gamepad_LPAREN,
      anon_sym_noise_LPAREN,
      anon_sym_parrot_LPAREN,
      sym_settings_binding,
      sym_tag_binding,
      anon_sym_key_LPAREN,
  [2304] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(264), 1,
      sym_word,
    ACTIONS(262), 14,
      ts_builtin_sym_end,
      sym_start_anchor,
      anon_sym_LBRACE,
      anon_sym_LT,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_app_LPAREN,
      anon_sym_face_LPAREN,
      anon_sym_gamepad_LPAREN,
      anon_sym_noise_LPAREN,
      anon_sym_parrot_LPAREN,
      sym_settings_binding,
      sym_tag_binding,
      anon_sym_key_LPAREN,
  [2327] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(268), 1,
      sym_word,
    ACTIONS(266), 14,
      ts_builtin_sym_end,
      sym_start_anchor,
      anon_sym_LBRACE,
      anon_sym_LT,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_app_LPAREN,
      anon_sym_face_LPAREN,
      anon_sym_gamepad_LPAREN,
      anon_sym_noise_LPAREN,
      anon_sym_parrot_LPAREN,
      sym_settings_binding,
      sym_tag_binding,
      anon_sym_key_LPAREN,
  [2350] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(272), 1,
      sym_word,
    ACTIONS(270), 14,
      ts_builtin_sym_end,
      sym_start_anchor,
      anon_sym_LBRACE,
      anon_sym_LT,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_app_LPAREN,
      anon_sym_face_LPAREN,
      anon_sym_gamepad_LPAREN,
      anon_sym_noise_LPAREN,
      anon_sym_parrot_LPAREN,
      sym_settings_binding,
      sym_tag_binding,
      anon_sym_key_LPAREN,
  [2373] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(276), 1,
      sym_word,
    ACTIONS(274), 14,
      ts_builtin_sym_end,
      sym_start_anchor,
      anon_sym_LBRACE,
      anon_sym_LT,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_app_LPAREN,
      anon_sym_face_LPAREN,
      anon_sym_gamepad_LPAREN,
      anon_sym_noise_LPAREN,
      anon_sym_parrot_LPAREN,
      sym_settings_binding,
      sym_tag_binding,
      anon_sym_key_LPAREN,
  [2396] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(280), 1,
      sym_word,
    ACTIONS(278), 14,
      ts_builtin_sym_end,
      sym_start_anchor,
      anon_sym_LBRACE,
      anon_sym_LT,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_app_LPAREN,
      anon_sym_face_LPAREN,
      anon_sym_gamepad_LPAREN,
      anon_sym_noise_LPAREN,
      anon_sym_parrot_LPAREN,
      sym_settings_binding,
      sym_tag_binding,
      anon_sym_key_LPAREN,
  [2419] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(284), 1,
      sym_word,
    ACTIONS(282), 14,
      ts_builtin_sym_end,
      sym_start_anchor,
      anon_sym_LBRACE,
      anon_sym_LT,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_app_LPAREN,
      anon_sym_face_LPAREN,
      anon_sym_gamepad_LPAREN,
      anon_sym_noise_LPAREN,
      anon_sym_parrot_LPAREN,
      sym_settings_binding,
      sym_tag_binding,
      anon_sym_key_LPAREN,
  [2442] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(288), 1,
      sym_word,
    ACTIONS(286), 14,
      ts_builtin_sym_end,
      sym_start_anchor,
      anon_sym_LBRACE,
      anon_sym_LT,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_app_LPAREN,
      anon_sym_face_LPAREN,
      anon_sym_gamepad_LPAREN,
      anon_sym_noise_LPAREN,
      anon_sym_parrot_LPAREN,
      sym_settings_binding,
      sym_tag_binding,
      anon_sym_key_LPAREN,
  [2465] = 8,
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
    ACTIONS(206), 1,
      sym_word,
    STATE(131), 2,
      sym__optional_seq,
      sym_seq,
    STATE(17), 7,
      sym__primary_rule,
      sym_list,
      sym_capture,
      sym_optional,
      sym_repeat,
      sym_repeat1,
      sym_parenthesized_rule,
  [2497] = 8,
    ACTIONS(85), 1,
      sym_comment,
    ACTIONS(290), 1,
      anon_sym_LBRACE,
    ACTIONS(293), 1,
      anon_sym_RBRACE,
    ACTIONS(302), 1,
      sym_string_content,
    ACTIONS(305), 1,
      sym__string_end,
    ACTIONS(296), 2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_RBRACE_RBRACE,
    ACTIONS(299), 2,
      sym_string_escape_sequence,
      sym__not_escapesequence,
    STATE(63), 4,
      sym_interpolation,
      sym__escape_interpolation,
      sym__not_interpolation,
      aux_sym_string_repeat1,
  [2527] = 8,
    ACTIONS(85), 1,
      sym_comment,
    ACTIONS(307), 1,
      anon_sym_LBRACE,
    ACTIONS(309), 1,
      anon_sym_RBRACE,
    ACTIONS(315), 1,
      sym_string_content,
    ACTIONS(317), 1,
      sym__string_end,
    ACTIONS(311), 2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_RBRACE_RBRACE,
    ACTIONS(313), 2,
      sym_string_escape_sequence,
      sym__not_escapesequence,
    STATE(74), 4,
      sym_interpolation,
      sym__escape_interpolation,
      sym__not_interpolation,
      aux_sym_string_repeat1,
  [2557] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(159), 1,
      anon_sym_STAR,
    ACTIONS(161), 1,
      anon_sym_PLUS,
    ACTIONS(319), 10,
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
  [2579] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(321), 12,
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
  [2597] = 8,
    ACTIONS(85), 1,
      sym_comment,
    ACTIONS(307), 1,
      anon_sym_LBRACE,
    ACTIONS(309), 1,
      anon_sym_RBRACE,
    ACTIONS(325), 1,
      sym_string_content,
    ACTIONS(327), 1,
      sym__string_end,
    ACTIONS(311), 2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_RBRACE_RBRACE,
    ACTIONS(323), 2,
      sym_string_escape_sequence,
      sym__not_escapesequence,
    STATE(63), 4,
      sym_interpolation,
      sym__escape_interpolation,
      sym__not_interpolation,
      aux_sym_string_repeat1,
  [2627] = 8,
    ACTIONS(85), 1,
      sym_comment,
    ACTIONS(307), 1,
      anon_sym_LBRACE,
    ACTIONS(309), 1,
      anon_sym_RBRACE,
    ACTIONS(331), 1,
      sym_string_content,
    ACTIONS(333), 1,
      sym__string_end,
    ACTIONS(311), 2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_RBRACE_RBRACE,
    ACTIONS(329), 2,
      sym_string_escape_sequence,
      sym__not_escapesequence,
    STATE(67), 4,
      sym_interpolation,
      sym__escape_interpolation,
      sym__not_interpolation,
      aux_sym_string_repeat1,
  [2657] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(335), 12,
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
  [2675] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(337), 12,
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
  [2693] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(339), 12,
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
  [2711] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(341), 12,
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
  [2729] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(343), 12,
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
  [2747] = 8,
    ACTIONS(85), 1,
      sym_comment,
    ACTIONS(307), 1,
      anon_sym_LBRACE,
    ACTIONS(309), 1,
      anon_sym_RBRACE,
    ACTIONS(325), 1,
      sym_string_content,
    ACTIONS(345), 1,
      sym__string_end,
    ACTIONS(311), 2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_RBRACE_RBRACE,
    ACTIONS(323), 2,
      sym_string_escape_sequence,
      sym__not_escapesequence,
    STATE(63), 4,
      sym_interpolation,
      sym__escape_interpolation,
      sym__not_interpolation,
      aux_sym_string_repeat1,
  [2777] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(349), 1,
      anon_sym_LPAREN2,
    STATE(80), 1,
      sym_argument_list,
    ACTIONS(347), 9,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_or,
      anon_sym_COMMA,
  [2798] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(351), 1,
      anon_sym_EQ,
    ACTIONS(353), 1,
      anon_sym_LPAREN2,
    STATE(121), 1,
      sym_argument_list,
    ACTIONS(347), 7,
      sym__newline,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_or,
  [2820] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(355), 10,
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
  [2836] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(353), 1,
      anon_sym_LPAREN2,
    ACTIONS(357), 1,
      anon_sym_EQ,
    STATE(121), 1,
      sym_argument_list,
    ACTIONS(347), 7,
      sym__newline,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_or,
  [2858] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(353), 1,
      anon_sym_LPAREN2,
    STATE(121), 1,
      sym_argument_list,
    ACTIONS(347), 7,
      sym__newline,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_or,
  [2877] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(359), 9,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_or,
      anon_sym_COMMA,
  [2892] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(276), 2,
      sym_identifier,
      sym_integer,
    ACTIONS(274), 7,
      sym__dedent,
      sym__string_start,
      anon_sym_LPAREN,
      anon_sym_DASH,
      anon_sym_key_LPAREN,
      anon_sym_sleep_LPAREN,
      sym_float,
  [2909] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(361), 9,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_or,
      anon_sym_COMMA,
  [2924] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(363), 9,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_or,
      anon_sym_COMMA,
  [2939] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(369), 1,
      anon_sym_RPAREN,
    ACTIONS(371), 1,
      anon_sym_or,
    ACTIONS(373), 1,
      anon_sym_COMMA,
    STATE(140), 1,
      aux_sym_argument_list_repeat1,
    ACTIONS(367), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(365), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [2964] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(375), 9,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_or,
      anon_sym_COMMA,
  [2979] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(377), 9,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_or,
      anon_sym_COMMA,
  [2994] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(379), 9,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_or,
      anon_sym_COMMA,
  [3009] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(381), 9,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_or,
      anon_sym_COMMA,
  [3024] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(365), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(379), 6,
      anon_sym_RBRACE,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_or,
      anon_sym_COMMA,
  [3041] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(367), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(365), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(379), 4,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_or,
      anon_sym_COMMA,
  [3060] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(224), 2,
      sym_identifier,
      sym_integer,
    ACTIONS(222), 7,
      sym__dedent,
      sym__string_start,
      anon_sym_LPAREN,
      anon_sym_DASH,
      anon_sym_key_LPAREN,
      anon_sym_sleep_LPAREN,
      sym_float,
  [3077] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(383), 9,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_or,
      anon_sym_COMMA,
  [3092] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(385), 9,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_or,
      anon_sym_COMMA,
  [3107] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(387), 9,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_or,
      anon_sym_COMMA,
  [3122] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(389), 9,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_or,
      anon_sym_COMMA,
  [3137] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(260), 2,
      sym_identifier,
      sym_integer,
    ACTIONS(258), 7,
      sym__dedent,
      sym__string_start,
      anon_sym_LPAREN,
      anon_sym_DASH,
      anon_sym_key_LPAREN,
      anon_sym_sleep_LPAREN,
      sym_float,
  [3154] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(391), 9,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_or,
      anon_sym_COMMA,
  [3169] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(371), 1,
      anon_sym_or,
    ACTIONS(393), 1,
      anon_sym_RPAREN,
    ACTIONS(395), 1,
      anon_sym_COMMA,
    STATE(142), 1,
      aux_sym_argument_list_repeat1,
    ACTIONS(367), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(365), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [3194] = 3,
    ACTIONS(85), 1,
      sym_comment,
    ACTIONS(399), 2,
      sym_string_content,
      sym__string_end,
    ACTIONS(397), 6,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACE_LBRACE,
      anon_sym_RBRACE_RBRACE,
      sym_string_escape_sequence,
      sym__not_escapesequence,
  [3210] = 3,
    ACTIONS(85), 1,
      sym_comment,
    ACTIONS(103), 2,
      sym_string_content,
      sym__string_end,
    ACTIONS(87), 6,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACE_LBRACE,
      anon_sym_RBRACE_RBRACE,
      sym_string_escape_sequence,
      sym__not_escapesequence,
  [3226] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(403), 1,
      sym_identifier,
    ACTIONS(405), 1,
      sym__matches_end,
    ACTIONS(401), 2,
      anon_sym_and,
      anon_sym_not,
    STATE(103), 2,
      sym_match,
      aux_sym_matches_repeat1,
    STATE(134), 2,
      sym_match_modifier,
      aux_sym_match_repeat1,
  [3248] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(371), 1,
      anon_sym_or,
    ACTIONS(367), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(407), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
    ACTIONS(365), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [3268] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(403), 1,
      sym_identifier,
    ACTIONS(409), 1,
      sym__matches_end,
    ACTIONS(401), 2,
      anon_sym_and,
      anon_sym_not,
    STATE(104), 2,
      sym_match,
      aux_sym_matches_repeat1,
    STATE(134), 2,
      sym_match_modifier,
      aux_sym_match_repeat1,
  [3290] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(414), 1,
      sym_identifier,
    ACTIONS(417), 1,
      sym__matches_end,
    ACTIONS(411), 2,
      anon_sym_and,
      anon_sym_not,
    STATE(104), 2,
      sym_match,
      aux_sym_matches_repeat1,
    STATE(134), 2,
      sym_match_modifier,
      aux_sym_match_repeat1,
  [3312] = 3,
    ACTIONS(85), 1,
      sym_comment,
    ACTIONS(421), 2,
      sym_string_content,
      sym__string_end,
    ACTIONS(419), 6,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACE_LBRACE,
      anon_sym_RBRACE_RBRACE,
      sym_string_escape_sequence,
      sym__not_escapesequence,
  [3328] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(377), 7,
      sym__newline,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_or,
  [3341] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(371), 1,
      anon_sym_or,
    ACTIONS(423), 1,
      anon_sym_RPAREN,
    ACTIONS(367), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(365), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [3360] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(429), 1,
      anon_sym_or,
    ACTIONS(431), 1,
      sym__newline,
    ACTIONS(427), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(425), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [3379] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(371), 1,
      anon_sym_or,
    ACTIONS(433), 1,
      anon_sym_RPAREN,
    ACTIONS(367), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(365), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [3398] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(429), 1,
      anon_sym_or,
    ACTIONS(435), 1,
      sym__newline,
    ACTIONS(427), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(425), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [3417] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(389), 7,
      sym__newline,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_or,
  [3430] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(429), 1,
      anon_sym_or,
    ACTIONS(437), 1,
      sym__newline,
    ACTIONS(427), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(425), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [3449] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(383), 7,
      sym__newline,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_or,
  [3462] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(379), 2,
      sym__newline,
      anon_sym_or,
    ACTIONS(427), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(425), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [3479] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(375), 7,
      sym__newline,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_or,
  [3492] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(391), 7,
      sym__newline,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_or,
  [3505] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(425), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(379), 4,
      sym__newline,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_or,
  [3520] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(381), 7,
      sym__newline,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_or,
  [3533] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(355), 7,
      sym__newline,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_or,
  [3546] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(363), 7,
      sym__newline,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_or,
  [3559] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(359), 7,
      sym__newline,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_or,
  [3572] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(387), 7,
      sym__newline,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_or,
  [3585] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(429), 1,
      anon_sym_or,
    ACTIONS(439), 1,
      sym__newline,
    ACTIONS(427), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(425), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [3604] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(385), 7,
      sym__newline,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_or,
  [3617] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(379), 7,
      sym__newline,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_or,
  [3630] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(371), 1,
      anon_sym_or,
    ACTIONS(441), 1,
      anon_sym_RBRACE,
    ACTIONS(367), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(365), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [3649] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(361), 7,
      sym__newline,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_or,
  [3662] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(445), 1,
      anon_sym_PIPE,
    STATE(128), 1,
      aux_sym_choice_repeat1,
    ACTIONS(443), 3,
      anon_sym_COLON,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
  [3677] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(450), 1,
      anon_sym_PIPE,
    STATE(128), 1,
      aux_sym_choice_repeat1,
    ACTIONS(448), 3,
      anon_sym_COLON,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
  [3692] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(455), 1,
      sym_identifier,
    ACTIONS(452), 2,
      anon_sym_and,
      anon_sym_not,
    STATE(130), 2,
      sym_match_modifier,
      aux_sym_match_repeat1,
  [3707] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(459), 1,
      sym_end_anchor,
    ACTIONS(457), 4,
      anon_sym_COLON,
      anon_sym_PIPE,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
  [3720] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(463), 1,
      sym_end_anchor,
    ACTIONS(461), 4,
      anon_sym_COLON,
      anon_sym_PIPE,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
  [3733] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(450), 1,
      anon_sym_PIPE,
    STATE(129), 1,
      aux_sym_choice_repeat1,
    ACTIONS(465), 3,
      anon_sym_COLON,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
  [3748] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(467), 1,
      sym_identifier,
    ACTIONS(401), 2,
      anon_sym_and,
      anon_sym_not,
    STATE(130), 2,
      sym_match_modifier,
      aux_sym_match_repeat1,
  [3763] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(457), 4,
      anon_sym_COLON,
      anon_sym_PIPE,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
  [3773] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(471), 1,
      sym__matches_end,
    ACTIONS(469), 3,
      anon_sym_and,
      anon_sym_not,
      sym_identifier,
  [3785] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(443), 4,
      anon_sym_COLON,
      anon_sym_PIPE,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
  [3795] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(473), 4,
      anon_sym_COLON,
      anon_sym_PIPE,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
  [3805] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(477), 1,
      sym__matches_end,
    ACTIONS(475), 3,
      anon_sym_and,
      anon_sym_not,
      sym_identifier,
  [3817] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(179), 1,
      anon_sym_RPAREN,
    ACTIONS(479), 1,
      anon_sym_COMMA,
    STATE(143), 1,
      aux_sym_argument_list_repeat1,
  [3830] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(481), 3,
      anon_sym_and,
      anon_sym_not,
      sym_identifier,
  [3839] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(202), 1,
      anon_sym_RPAREN,
    ACTIONS(483), 1,
      anon_sym_COMMA,
    STATE(143), 1,
      aux_sym_argument_list_repeat1,
  [3852] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(407), 1,
      anon_sym_RPAREN,
    ACTIONS(485), 1,
      anon_sym_COMMA,
    STATE(143), 1,
      aux_sym_argument_list_repeat1,
  [3865] = 3,
    ACTIONS(85), 1,
      sym_comment,
    ACTIONS(488), 1,
      aux_sym__implicit_string_argument_token1,
    STATE(174), 1,
      sym__implicit_string_argument,
  [3875] = 3,
    ACTIONS(85), 1,
      sym_comment,
    ACTIONS(490), 1,
      aux_sym__implicit_string_argument_token1,
    STATE(182), 1,
      sym__implicit_string_argument,
  [3885] = 3,
    ACTIONS(85), 1,
      sym_comment,
    ACTIONS(492), 1,
      aux_sym__implicit_string_argument_token1,
    STATE(176), 1,
      sym__implicit_string_argument,
  [3895] = 3,
    ACTIONS(85), 1,
      sym_comment,
    ACTIONS(494), 1,
      aux_sym__implicit_string_argument_token1,
    STATE(158), 1,
      sym__implicit_string_argument,
  [3905] = 3,
    ACTIONS(85), 1,
      sym_comment,
    ACTIONS(496), 1,
      aux_sym__implicit_string_argument_token1,
    STATE(192), 1,
      sym__implicit_string_argument,
  [3915] = 3,
    ACTIONS(85), 1,
      sym_comment,
    ACTIONS(498), 1,
      aux_sym__implicit_string_argument_token1,
    STATE(193), 1,
      sym__implicit_string_argument,
  [3925] = 3,
    ACTIONS(85), 1,
      sym_comment,
    ACTIONS(500), 1,
      aux_sym__implicit_string_argument_token1,
    STATE(167), 1,
      sym__implicit_string_argument,
  [3935] = 3,
    ACTIONS(85), 1,
      sym_comment,
    ACTIONS(502), 1,
      aux_sym__implicit_string_argument_token1,
    STATE(180), 1,
      sym__implicit_string_argument,
  [3945] = 3,
    ACTIONS(85), 1,
      sym_comment,
    ACTIONS(504), 1,
      aux_sym__implicit_string_argument_token1,
    STATE(178), 1,
      sym__implicit_string_argument,
  [3955] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(506), 1,
      anon_sym_COLON,
  [3962] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(508), 1,
      anon_sym_RBRACE,
  [3969] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(510), 1,
      sym__newline,
  [3976] = 2,
    ACTIONS(85), 1,
      sym_comment,
    ACTIONS(512), 1,
      sym_implicit_string,
  [3983] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(514), 1,
      anon_sym_COLON,
  [3990] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(516), 1,
      anon_sym_RPAREN,
  [3997] = 2,
    ACTIONS(85), 1,
      sym_comment,
    ACTIONS(518), 1,
      sym_implicit_string,
  [4004] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(520), 1,
      anon_sym_COLON,
  [4011] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(522), 1,
      anon_sym_COLON,
  [4018] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(524), 1,
      anon_sym_COLON,
  [4025] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(526), 1,
      anon_sym_COLON,
  [4032] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(528), 1,
      anon_sym_COLON,
  [4039] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(530), 1,
      anon_sym_COLON,
  [4046] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(532), 1,
      anon_sym_COLON,
  [4053] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(534), 1,
      anon_sym_RPAREN,
  [4060] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(536), 1,
      anon_sym_COLON,
  [4067] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(538), 1,
      anon_sym_COLON,
  [4074] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(540), 1,
      ts_builtin_sym_end,
  [4081] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(369), 1,
      anon_sym_RPAREN,
  [4088] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(542), 1,
      anon_sym_COLON,
  [4095] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(544), 1,
      anon_sym_COLON,
  [4102] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(546), 1,
      anon_sym_RPAREN,
  [4109] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(548), 1,
      sym_identifier,
  [4116] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(550), 1,
      anon_sym_RPAREN,
  [4123] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(552), 1,
      anon_sym_GT,
  [4130] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(554), 1,
      anon_sym_RPAREN,
  [4137] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(556), 1,
      anon_sym_COLON,
  [4144] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(558), 1,
      anon_sym_RPAREN,
  [4151] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(560), 1,
      anon_sym_COLON,
  [4158] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(562), 1,
      anon_sym_RPAREN,
  [4165] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(564), 1,
      sym_identifier,
  [4172] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(566), 1,
      anon_sym_COLON,
  [4179] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(393), 1,
      anon_sym_RPAREN,
  [4186] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(568), 1,
      sym_identifier,
  [4193] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(570), 1,
      sym__newline,
  [4200] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(572), 1,
      anon_sym_RBRACK,
  [4207] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(574), 1,
      sym__newline,
  [4214] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(576), 1,
      anon_sym_RPAREN,
  [4221] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(578), 1,
      anon_sym_COLON,
  [4228] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(580), 1,
      anon_sym_RPAREN,
  [4235] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(582), 1,
      anon_sym_RPAREN,
  [4242] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(584), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 108,
  [SMALL_STATE(4)] = 213,
  [SMALL_STATE(5)] = 318,
  [SMALL_STATE(6)] = 369,
  [SMALL_STATE(7)] = 424,
  [SMALL_STATE(8)] = 478,
  [SMALL_STATE(9)] = 532,
  [SMALL_STATE(10)] = 586,
  [SMALL_STATE(11)] = 640,
  [SMALL_STATE(12)] = 692,
  [SMALL_STATE(13)] = 746,
  [SMALL_STATE(14)] = 800,
  [SMALL_STATE(15)] = 854,
  [SMALL_STATE(16)] = 908,
  [SMALL_STATE(17)] = 960,
  [SMALL_STATE(18)] = 1004,
  [SMALL_STATE(19)] = 1051,
  [SMALL_STATE(20)] = 1098,
  [SMALL_STATE(21)] = 1142,
  [SMALL_STATE(22)] = 1180,
  [SMALL_STATE(23)] = 1218,
  [SMALL_STATE(24)] = 1262,
  [SMALL_STATE(25)] = 1306,
  [SMALL_STATE(26)] = 1350,
  [SMALL_STATE(27)] = 1392,
  [SMALL_STATE(28)] = 1434,
  [SMALL_STATE(29)] = 1475,
  [SMALL_STATE(30)] = 1516,
  [SMALL_STATE(31)] = 1557,
  [SMALL_STATE(32)] = 1598,
  [SMALL_STATE(33)] = 1639,
  [SMALL_STATE(34)] = 1680,
  [SMALL_STATE(35)] = 1721,
  [SMALL_STATE(36)] = 1762,
  [SMALL_STATE(37)] = 1803,
  [SMALL_STATE(38)] = 1844,
  [SMALL_STATE(39)] = 1885,
  [SMALL_STATE(40)] = 1926,
  [SMALL_STATE(41)] = 1967,
  [SMALL_STATE(42)] = 2005,
  [SMALL_STATE(43)] = 2028,
  [SMALL_STATE(44)] = 2051,
  [SMALL_STATE(45)] = 2074,
  [SMALL_STATE(46)] = 2097,
  [SMALL_STATE(47)] = 2120,
  [SMALL_STATE(48)] = 2143,
  [SMALL_STATE(49)] = 2166,
  [SMALL_STATE(50)] = 2189,
  [SMALL_STATE(51)] = 2212,
  [SMALL_STATE(52)] = 2235,
  [SMALL_STATE(53)] = 2258,
  [SMALL_STATE(54)] = 2281,
  [SMALL_STATE(55)] = 2304,
  [SMALL_STATE(56)] = 2327,
  [SMALL_STATE(57)] = 2350,
  [SMALL_STATE(58)] = 2373,
  [SMALL_STATE(59)] = 2396,
  [SMALL_STATE(60)] = 2419,
  [SMALL_STATE(61)] = 2442,
  [SMALL_STATE(62)] = 2465,
  [SMALL_STATE(63)] = 2497,
  [SMALL_STATE(64)] = 2527,
  [SMALL_STATE(65)] = 2557,
  [SMALL_STATE(66)] = 2579,
  [SMALL_STATE(67)] = 2597,
  [SMALL_STATE(68)] = 2627,
  [SMALL_STATE(69)] = 2657,
  [SMALL_STATE(70)] = 2675,
  [SMALL_STATE(71)] = 2693,
  [SMALL_STATE(72)] = 2711,
  [SMALL_STATE(73)] = 2729,
  [SMALL_STATE(74)] = 2747,
  [SMALL_STATE(75)] = 2777,
  [SMALL_STATE(76)] = 2798,
  [SMALL_STATE(77)] = 2820,
  [SMALL_STATE(78)] = 2836,
  [SMALL_STATE(79)] = 2858,
  [SMALL_STATE(80)] = 2877,
  [SMALL_STATE(81)] = 2892,
  [SMALL_STATE(82)] = 2909,
  [SMALL_STATE(83)] = 2924,
  [SMALL_STATE(84)] = 2939,
  [SMALL_STATE(85)] = 2964,
  [SMALL_STATE(86)] = 2979,
  [SMALL_STATE(87)] = 2994,
  [SMALL_STATE(88)] = 3009,
  [SMALL_STATE(89)] = 3024,
  [SMALL_STATE(90)] = 3041,
  [SMALL_STATE(91)] = 3060,
  [SMALL_STATE(92)] = 3077,
  [SMALL_STATE(93)] = 3092,
  [SMALL_STATE(94)] = 3107,
  [SMALL_STATE(95)] = 3122,
  [SMALL_STATE(96)] = 3137,
  [SMALL_STATE(97)] = 3154,
  [SMALL_STATE(98)] = 3169,
  [SMALL_STATE(99)] = 3194,
  [SMALL_STATE(100)] = 3210,
  [SMALL_STATE(101)] = 3226,
  [SMALL_STATE(102)] = 3248,
  [SMALL_STATE(103)] = 3268,
  [SMALL_STATE(104)] = 3290,
  [SMALL_STATE(105)] = 3312,
  [SMALL_STATE(106)] = 3328,
  [SMALL_STATE(107)] = 3341,
  [SMALL_STATE(108)] = 3360,
  [SMALL_STATE(109)] = 3379,
  [SMALL_STATE(110)] = 3398,
  [SMALL_STATE(111)] = 3417,
  [SMALL_STATE(112)] = 3430,
  [SMALL_STATE(113)] = 3449,
  [SMALL_STATE(114)] = 3462,
  [SMALL_STATE(115)] = 3479,
  [SMALL_STATE(116)] = 3492,
  [SMALL_STATE(117)] = 3505,
  [SMALL_STATE(118)] = 3520,
  [SMALL_STATE(119)] = 3533,
  [SMALL_STATE(120)] = 3546,
  [SMALL_STATE(121)] = 3559,
  [SMALL_STATE(122)] = 3572,
  [SMALL_STATE(123)] = 3585,
  [SMALL_STATE(124)] = 3604,
  [SMALL_STATE(125)] = 3617,
  [SMALL_STATE(126)] = 3630,
  [SMALL_STATE(127)] = 3649,
  [SMALL_STATE(128)] = 3662,
  [SMALL_STATE(129)] = 3677,
  [SMALL_STATE(130)] = 3692,
  [SMALL_STATE(131)] = 3707,
  [SMALL_STATE(132)] = 3720,
  [SMALL_STATE(133)] = 3733,
  [SMALL_STATE(134)] = 3748,
  [SMALL_STATE(135)] = 3763,
  [SMALL_STATE(136)] = 3773,
  [SMALL_STATE(137)] = 3785,
  [SMALL_STATE(138)] = 3795,
  [SMALL_STATE(139)] = 3805,
  [SMALL_STATE(140)] = 3817,
  [SMALL_STATE(141)] = 3830,
  [SMALL_STATE(142)] = 3839,
  [SMALL_STATE(143)] = 3852,
  [SMALL_STATE(144)] = 3865,
  [SMALL_STATE(145)] = 3875,
  [SMALL_STATE(146)] = 3885,
  [SMALL_STATE(147)] = 3895,
  [SMALL_STATE(148)] = 3905,
  [SMALL_STATE(149)] = 3915,
  [SMALL_STATE(150)] = 3925,
  [SMALL_STATE(151)] = 3935,
  [SMALL_STATE(152)] = 3945,
  [SMALL_STATE(153)] = 3955,
  [SMALL_STATE(154)] = 3962,
  [SMALL_STATE(155)] = 3969,
  [SMALL_STATE(156)] = 3976,
  [SMALL_STATE(157)] = 3983,
  [SMALL_STATE(158)] = 3990,
  [SMALL_STATE(159)] = 3997,
  [SMALL_STATE(160)] = 4004,
  [SMALL_STATE(161)] = 4011,
  [SMALL_STATE(162)] = 4018,
  [SMALL_STATE(163)] = 4025,
  [SMALL_STATE(164)] = 4032,
  [SMALL_STATE(165)] = 4039,
  [SMALL_STATE(166)] = 4046,
  [SMALL_STATE(167)] = 4053,
  [SMALL_STATE(168)] = 4060,
  [SMALL_STATE(169)] = 4067,
  [SMALL_STATE(170)] = 4074,
  [SMALL_STATE(171)] = 4081,
  [SMALL_STATE(172)] = 4088,
  [SMALL_STATE(173)] = 4095,
  [SMALL_STATE(174)] = 4102,
  [SMALL_STATE(175)] = 4109,
  [SMALL_STATE(176)] = 4116,
  [SMALL_STATE(177)] = 4123,
  [SMALL_STATE(178)] = 4130,
  [SMALL_STATE(179)] = 4137,
  [SMALL_STATE(180)] = 4144,
  [SMALL_STATE(181)] = 4151,
  [SMALL_STATE(182)] = 4158,
  [SMALL_STATE(183)] = 4165,
  [SMALL_STATE(184)] = 4172,
  [SMALL_STATE(185)] = 4179,
  [SMALL_STATE(186)] = 4186,
  [SMALL_STATE(187)] = 4193,
  [SMALL_STATE(188)] = 4200,
  [SMALL_STATE(189)] = 4207,
  [SMALL_STATE(190)] = 4214,
  [SMALL_STATE(191)] = 4221,
  [SMALL_STATE(192)] = 4228,
  [SMALL_STATE(193)] = 4235,
  [SMALL_STATE(194)] = 4242,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [9] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_declarations_repeat1, 2),
  [41] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_declarations_repeat1, 2), SHIFT_REPEAT(62),
  [44] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_declarations_repeat1, 2), SHIFT_REPEAT(17),
  [47] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_declarations_repeat1, 2), SHIFT_REPEAT(186),
  [50] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_declarations_repeat1, 2), SHIFT_REPEAT(183),
  [53] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_declarations_repeat1, 2), SHIFT_REPEAT(26),
  [56] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_declarations_repeat1, 2), SHIFT_REPEAT(27),
  [59] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_declarations_repeat1, 2), SHIFT_REPEAT(148),
  [62] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_declarations_repeat1, 2), SHIFT_REPEAT(149),
  [65] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_declarations_repeat1, 2), SHIFT_REPEAT(150),
  [68] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_declarations_repeat1, 2), SHIFT_REPEAT(151),
  [71] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_declarations_repeat1, 2), SHIFT_REPEAT(152),
  [74] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_declarations_repeat1, 2), SHIFT_REPEAT(173),
  [77] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_declarations_repeat1, 2), SHIFT_REPEAT(172),
  [80] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_declarations_repeat1, 2), SHIFT_REPEAT(144),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declarations, 1),
  [85] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [87] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__not_interpolation, 1),
  [89] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [91] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [93] = {.entry = {.count = 1, .reusable = false}}, SHIFT(144),
  [95] = {.entry = {.count = 1, .reusable = false}}, SHIFT(145),
  [97] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [99] = {.entry = {.count = 1, .reusable = false}}, SHIFT(97),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__not_interpolation, 1),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [113] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [115] = {.entry = {.count = 1, .reusable = false}}, SHIFT(116),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [123] = {.entry = {.count = 1, .reusable = false}}, SHIFT(78),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [127] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(30),
  [130] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(38),
  [133] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(146),
  [136] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(147),
  [139] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(76),
  [142] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(116),
  [145] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(116),
  [148] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2),
  [150] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(64),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__optional_seq, 1),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_seq_repeat1, 2),
  [183] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_seq_repeat1, 2), SHIFT_REPEAT(65),
  [186] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_seq_repeat1, 2), SHIFT_REPEAT(186),
  [189] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_seq_repeat1, 2), SHIFT_REPEAT(183),
  [192] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_seq_repeat1, 2), SHIFT_REPEAT(26),
  [195] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_seq_repeat1, 2), SHIFT_REPEAT(27),
  [198] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_seq, 2),
  [200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [208] = {.entry = {.count = 1, .reusable = false}}, SHIFT(79),
  [210] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 2),
  [212] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 2),
  [214] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_matches, 3),
  [216] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_matches, 3),
  [218] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_gamepad_declaration, 3, .production_id = 5),
  [220] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_gamepad_declaration, 3, .production_id = 5),
  [222] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_statement, 4, .production_id = 5),
  [224] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assignment_statement, 4, .production_id = 5),
  [226] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_face_declaration, 3, .production_id = 5),
  [228] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_face_declaration, 3, .production_id = 5),
  [230] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_key_binding_declaration, 3, .production_id = 7),
  [232] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_key_binding_declaration, 3, .production_id = 7),
  [234] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_app_declaration, 3, .production_id = 5),
  [236] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_app_declaration, 3, .production_id = 5),
  [238] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parrot_declaration, 3, .production_id = 5),
  [240] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parrot_declaration, 3, .production_id = 5),
  [242] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statements, 1, .production_id = 6),
  [244] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__statements, 1, .production_id = 6),
  [246] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag_import_declaration, 4, .production_id = 5),
  [248] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag_import_declaration, 4, .production_id = 5),
  [250] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declaration, 1),
  [252] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_declaration, 1),
  [254] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_noise_declaration, 3, .production_id = 5),
  [256] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_noise_declaration, 3, .production_id = 5),
  [258] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 1),
  [260] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_statement, 1),
  [262] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_matches, 2),
  [264] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_matches, 2),
  [266] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command_declaration, 3, .production_id = 5),
  [268] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_command_declaration, 3, .production_id = 5),
  [270] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statements, 2),
  [272] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__statements, 2),
  [274] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_statement, 2, .production_id = 10),
  [276] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression_statement, 2, .production_id = 10),
  [278] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_settings_declaration, 3, .production_id = 5),
  [280] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_settings_declaration, 3, .production_id = 5),
  [282] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 1),
  [284] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 1),
  [286] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_matches, 1),
  [288] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_matches, 1),
  [290] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(5),
  [293] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(100),
  [296] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(105),
  [299] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(63),
  [302] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(63),
  [305] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2),
  [307] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [309] = {.entry = {.count = 1, .reusable = false}}, SHIFT(100),
  [311] = {.entry = {.count = 1, .reusable = false}}, SHIFT(105),
  [313] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [319] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_seq_repeat1, 1),
  [321] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_repeat, 2),
  [323] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [325] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [327] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [329] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [331] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [333] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [335] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_repeat1, 2),
  [337] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 3, .production_id = 1),
  [339] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_capture, 3, .production_id = 2),
  [341] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_optional, 3),
  [343] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parenthesized_rule, 3),
  [345] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [347] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 1, .production_id = 4),
  [349] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [351] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [353] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [355] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_key_action, 3, .production_id = 3),
  [357] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [359] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_action, 2, .production_id = 9),
  [361] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [363] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parenthesized_expression, 3),
  [365] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [367] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [369] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [371] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [373] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [375] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sleep_action, 3, .production_id = 3),
  [377] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 2),
  [379] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_operator, 3, .production_id = 12),
  [381] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_operator, 2, .production_id = 8),
  [383] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 3),
  [385] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 4),
  [387] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 5),
  [389] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2),
  [391] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 1),
  [393] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [395] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [397] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_interpolation, 3),
  [399] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interpolation, 3),
  [401] = {.entry = {.count = 1, .reusable = false}}, SHIFT(141),
  [403] = {.entry = {.count = 1, .reusable = false}}, SHIFT(191),
  [405] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [407] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_argument_list_repeat1, 2),
  [409] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [411] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_matches_repeat1, 2), SHIFT_REPEAT(141),
  [414] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_matches_repeat1, 2), SHIFT_REPEAT(191),
  [417] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_matches_repeat1, 2),
  [419] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__escape_interpolation, 1),
  [421] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__escape_interpolation, 1),
  [423] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [425] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [427] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [429] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [431] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [433] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [435] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [437] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [439] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [441] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [443] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_choice_repeat1, 2),
  [445] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_choice_repeat1, 2), SHIFT_REPEAT(41),
  [448] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_choice, 2),
  [450] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [452] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_match_repeat1, 2), SHIFT_REPEAT(141),
  [455] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_match_repeat1, 2),
  [457] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__optional_anchor, 2),
  [459] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [461] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__optional_anchor, 1),
  [463] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [465] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__optional_choice, 1),
  [467] = {.entry = {.count = 1, .reusable = false}}, SHIFT(157),
  [469] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_match, 5, .production_id = 11),
  [471] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_match, 5, .production_id = 11),
  [473] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__optional_anchor, 3),
  [475] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_match, 4, .production_id = 5),
  [477] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_match, 4, .production_id = 5),
  [479] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [481] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_match_modifier, 1),
  [483] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [485] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_argument_list_repeat1, 2), SHIFT_REPEAT(40),
  [488] = {.entry = {.count = 1, .reusable = false}}, SHIFT(174),
  [490] = {.entry = {.count = 1, .reusable = false}}, SHIFT(182),
  [492] = {.entry = {.count = 1, .reusable = false}}, SHIFT(176),
  [494] = {.entry = {.count = 1, .reusable = false}}, SHIFT(158),
  [496] = {.entry = {.count = 1, .reusable = false}}, SHIFT(192),
  [498] = {.entry = {.count = 1, .reusable = false}}, SHIFT(193),
  [500] = {.entry = {.count = 1, .reusable = false}}, SHIFT(167),
  [502] = {.entry = {.count = 1, .reusable = false}}, SHIFT(180),
  [504] = {.entry = {.count = 1, .reusable = false}}, SHIFT(178),
  [506] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_face_binding, 3, .production_id = 3),
  [508] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [510] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [512] = {.entry = {.count = 1, .reusable = false}}, SHIFT(189),
  [514] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [516] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [518] = {.entry = {.count = 1, .reusable = false}}, SHIFT(155),
  [520] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [522] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [524] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [526] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [528] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [530] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [532] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_app_binding, 3, .production_id = 3),
  [534] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [536] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule, 1),
  [538] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [540] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2),
  [542] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [544] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [546] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [548] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [550] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [552] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [554] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [556] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_gamepad_binding, 3, .production_id = 3),
  [558] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [560] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_noise_binding, 3, .production_id = 3),
  [562] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [564] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [566] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parrot_binding, 3, .production_id = 3),
  [568] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [570] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [572] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [574] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [576] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [578] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [580] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [582] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [584] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
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
