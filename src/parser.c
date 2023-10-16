#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 200
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 113
#define ALIAS_COUNT 1
#define TOKEN_COUNT 51
#define EXTERNAL_TOKEN_COUNT 7
#define FIELD_COUNT 10
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 13

enum {
  sym_comment = 1,
  sym__simple_identifier = 2,
  anon_sym_DASH = 3,
  anon_sym_and = 4,
  anon_sym_not = 5,
  anon_sym_COLON = 6,
  anon_sym_PIPE = 7,
  sym_start_anchor = 8,
  sym_end_anchor = 9,
  aux_sym_word_token1 = 10,
  anon_sym_LBRACE = 11,
  anon_sym_RBRACE = 12,
  anon_sym_LT = 13,
  anon_sym_GT = 14,
  anon_sym_LBRACK = 15,
  anon_sym_RBRACK = 16,
  anon_sym_STAR = 17,
  anon_sym_PLUS = 18,
  anon_sym_LPAREN = 19,
  anon_sym_RPAREN = 20,
  anon_sym_app_LPAREN = 21,
  anon_sym_face_LPAREN = 22,
  anon_sym_gamepad_LPAREN = 23,
  anon_sym_noise_LPAREN = 24,
  anon_sym_parrot_LPAREN = 25,
  sym_settings_binding = 26,
  sym_tag_binding = 27,
  anon_sym_EQ = 28,
  anon_sym_SLASH = 29,
  anon_sym_PERCENT = 30,
  anon_sym_or = 31,
  anon_sym_key_LPAREN = 32,
  anon_sym_sleep_LPAREN = 33,
  aux_sym__implicit_string_argument_token1 = 34,
  anon_sym_LPAREN2 = 35,
  anon_sym_COMMA = 36,
  aux_sym_identifier_token1 = 37,
  sym_integer = 38,
  sym_float = 39,
  sym_implicit_string = 40,
  anon_sym_LBRACE_LBRACE = 41,
  anon_sym_RBRACE_RBRACE = 42,
  sym_string_escape_sequence = 43,
  sym__not_escapesequence = 44,
  sym__newline = 45,
  sym__indent = 46,
  sym__dedent = 47,
  sym__string_start = 48,
  sym_string_content = 49,
  sym__string_end = 50,
  sym_source_file = 51,
  sym_matches = 52,
  sym_match_modifier = 53,
  sym_match = 54,
  sym_declarations = 55,
  sym_declaration = 56,
  sym_command_declaration = 57,
  sym_app_declaration = 58,
  sym_face_declaration = 59,
  sym_gamepad_declaration = 60,
  sym_noise_declaration = 61,
  sym_parrot_declaration = 62,
  sym_tag_import_declaration = 63,
  sym_key_binding_declaration = 64,
  sym_settings_declaration = 65,
  sym_rule = 66,
  sym__optional_choice = 67,
  sym_choice = 68,
  sym__optional_anchor = 69,
  sym__optional_seq = 70,
  sym_seq = 71,
  sym__primary_rule = 72,
  sym_word = 73,
  sym_list = 74,
  sym_capture = 75,
  sym_optional = 76,
  sym_repeat = 77,
  sym_repeat1 = 78,
  sym_parenthesized_rule = 79,
  sym_app_binding = 80,
  sym_face_binding = 81,
  sym_gamepad_binding = 82,
  sym_noise_binding = 83,
  sym_parrot_binding = 84,
  sym__statements = 85,
  sym_block = 86,
  sym_statement = 87,
  sym_assignment_statement = 88,
  sym_expression_statement = 89,
  sym_expression = 90,
  sym_variable = 91,
  sym_parenthesized_expression = 92,
  sym_binary_operator = 93,
  sym_unary_operator = 94,
  sym_key_action = 95,
  sym_sleep_action = 96,
  sym__implicit_string_argument = 97,
  sym_action = 98,
  sym_argument_list = 99,
  sym_identifier = 100,
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
  [sym__simple_identifier] = "_simple_identifier",
  [anon_sym_DASH] = "-",
  [anon_sym_and] = "and",
  [anon_sym_not] = "not",
  [anon_sym_COLON] = ":",
  [anon_sym_PIPE] = "|",
  [sym_start_anchor] = "start_anchor",
  [sym_end_anchor] = "end_anchor",
  [aux_sym_word_token1] = "word_token1",
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
  [anon_sym_SLASH] = "operator",
  [anon_sym_PERCENT] = "operator",
  [anon_sym_or] = "operator",
  [anon_sym_key_LPAREN] = "key(",
  [anon_sym_sleep_LPAREN] = "sleep(",
  [aux_sym__implicit_string_argument_token1] = "implicit_string",
  [anon_sym_LPAREN2] = "(",
  [anon_sym_COMMA] = ",",
  [aux_sym_identifier_token1] = "identifier_token1",
  [sym_integer] = "integer",
  [sym_float] = "float",
  [sym_implicit_string] = "implicit_string",
  [anon_sym_LBRACE_LBRACE] = "{",
  [anon_sym_RBRACE_RBRACE] = "}",
  [sym_string_escape_sequence] = "string_escape_sequence",
  [sym__not_escapesequence] = "string_content",
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
  [sym_word] = "word",
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
  [sym_identifier] = "identifier",
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
  [sym__simple_identifier] = sym__simple_identifier,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_and] = anon_sym_and,
  [anon_sym_not] = anon_sym_not,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_PIPE] = anon_sym_PIPE,
  [sym_start_anchor] = sym_start_anchor,
  [sym_end_anchor] = sym_end_anchor,
  [aux_sym_word_token1] = aux_sym_word_token1,
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
  [anon_sym_SLASH] = anon_sym_SLASH,
  [anon_sym_PERCENT] = anon_sym_SLASH,
  [anon_sym_or] = anon_sym_SLASH,
  [anon_sym_key_LPAREN] = anon_sym_key_LPAREN,
  [anon_sym_sleep_LPAREN] = anon_sym_sleep_LPAREN,
  [aux_sym__implicit_string_argument_token1] = sym_implicit_string,
  [anon_sym_LPAREN2] = anon_sym_LPAREN,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [aux_sym_identifier_token1] = aux_sym_identifier_token1,
  [sym_integer] = sym_integer,
  [sym_float] = sym_float,
  [sym_implicit_string] = sym_implicit_string,
  [anon_sym_LBRACE_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE_RBRACE] = anon_sym_RBRACE,
  [sym_string_escape_sequence] = sym_string_escape_sequence,
  [sym__not_escapesequence] = sym_string_content,
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
  [sym_word] = sym_word,
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
  [sym_identifier] = sym_identifier,
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
  [sym__simple_identifier] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
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
  [aux_sym_word_token1] = {
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
  [aux_sym_identifier_token1] = {
    .visible = false,
    .named = false,
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
  [sym_word] = {
    .visible = true,
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
  [sym_identifier] = {
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
  [4] = {.index = 3, .length = 2},
  [6] = {.index = 5, .length = 1},
  [7] = {.index = 3, .length = 2},
  [8] = {.index = 6, .length = 2},
  [9] = {.index = 8, .length = 1},
  [10] = {.index = 9, .length = 2},
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
    {field_left, 0},
    {field_right, 2},
  [5] =
    {field_variable_name, 0},
  [6] =
    {field_operator, 0},
    {field_right, 1},
  [8] =
    {field_expression, 0},
  [9] =
    {field_action_name, 0},
    {field_arguments, 1},
  [11] =
    {field_left, 0},
    {field_operator, 1},
    {field_right, 2},
  [14] =
    {field_left, 1},
    {field_modifiers, 0},
    {field_right, 3},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [5] = {
    [0] = sym_block,
  },
  [7] = {
    [0] = alias_sym_key_binding,
  },
  [8] = {
    [0] = anon_sym_SLASH,
  },
  [11] = {
    [1] = anon_sym_SLASH,
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
  [24] = 24,
  [25] = 25,
  [26] = 25,
  [27] = 22,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 29,
  [35] = 30,
  [36] = 31,
  [37] = 37,
  [38] = 37,
  [39] = 28,
  [40] = 32,
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
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 70,
  [75] = 71,
  [76] = 76,
  [77] = 77,
  [78] = 56,
  [79] = 79,
  [80] = 80,
  [81] = 59,
  [82] = 52,
  [83] = 83,
  [84] = 79,
  [85] = 85,
  [86] = 86,
  [87] = 87,
  [88] = 87,
  [89] = 89,
  [90] = 90,
  [91] = 91,
  [92] = 77,
  [93] = 93,
  [94] = 94,
  [95] = 95,
  [96] = 96,
  [97] = 97,
  [98] = 98,
  [99] = 99,
  [100] = 100,
  [101] = 101,
  [102] = 102,
  [103] = 72,
  [104] = 104,
  [105] = 105,
  [106] = 106,
  [107] = 107,
  [108] = 98,
  [109] = 86,
  [110] = 83,
  [111] = 94,
  [112] = 90,
  [113] = 93,
  [114] = 114,
  [115] = 96,
  [116] = 116,
  [117] = 102,
  [118] = 89,
  [119] = 119,
  [120] = 119,
  [121] = 91,
  [122] = 95,
  [123] = 99,
  [124] = 124,
  [125] = 116,
  [126] = 100,
  [127] = 127,
  [128] = 97,
  [129] = 101,
  [130] = 127,
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
  [142] = 142,
  [143] = 143,
  [144] = 144,
  [145] = 143,
  [146] = 146,
  [147] = 147,
  [148] = 148,
  [149] = 149,
  [150] = 150,
  [151] = 151,
  [152] = 152,
  [153] = 153,
  [154] = 154,
  [155] = 154,
  [156] = 156,
  [157] = 156,
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
  [176] = 176,
  [177] = 177,
  [178] = 178,
  [179] = 179,
  [180] = 180,
  [181] = 181,
  [182] = 180,
  [183] = 183,
  [184] = 184,
  [185] = 185,
  [186] = 186,
  [187] = 187,
  [188] = 188,
  [189] = 189,
  [190] = 185,
  [191] = 191,
  [192] = 192,
  [193] = 193,
  [194] = 194,
  [195] = 195,
  [196] = 196,
  [197] = 187,
  [198] = 198,
  [199] = 199,
};

static inline bool aux_sym_word_token1_character_set_1(int32_t c) {
  return (c < 6784
    ? (c < 3086
      ? (c < 2437
        ? (c < 1568
          ? (c < 886
            ? (c < 216
              ? (c < 181
                ? (c < 170
                  ? (c >= '0' && c <= '9')
                  : (c <= 170 || (c >= 178 && c <= 179)))
                : (c <= 181 || (c < 188
                  ? (c >= 185 && c <= 186)
                  : (c <= 190 || (c >= 192 && c <= 214)))))
              : (c <= 246 || (c < 748
                ? (c < 710
                  ? (c >= 248 && c <= 705)
                  : (c <= 721 || (c >= 736 && c <= 740)))
                : (c <= 748 || (c < 880
                  ? c == 750
                  : c <= 884)))))
            : (c <= 887 || (c < 1015
              ? (c < 904
                ? (c < 895
                  ? (c >= 890 && c <= 893)
                  : (c <= 895 || c == 902))
                : (c <= 906 || (c < 910
                  ? c == 908
                  : (c <= 929 || (c >= 931 && c <= 1013)))))
              : (c <= 1153 || (c < 1376
                ? (c < 1329
                  ? (c >= 1162 && c <= 1327)
                  : (c <= 1366 || c == 1369))
                : (c <= 1416 || (c < 1519
                  ? (c >= 1488 && c <= 1514)
                  : c <= 1522)))))))
          : (c <= 1610 || (c < 2048
            ? (c < 1808
              ? (c < 1749
                ? (c < 1646
                  ? (c >= 1632 && c <= 1641)
                  : (c <= 1647 || (c >= 1649 && c <= 1747)))
                : (c <= 1749 || (c < 1774
                  ? (c >= 1765 && c <= 1766)
                  : (c <= 1788 || c == 1791))))
              : (c <= 1808 || (c < 1984
                ? (c < 1869
                  ? (c >= 1810 && c <= 1839)
                  : (c <= 1957 || c == 1969))
                : (c <= 2026 || (c < 2042
                  ? (c >= 2036 && c <= 2037)
                  : c <= 2042)))))
            : (c <= 2069 || (c < 2208
              ? (c < 2112
                ? (c < 2084
                  ? c == 2074
                  : (c <= 2084 || c == 2088))
                : (c <= 2136 || (c < 2160
                  ? (c >= 2144 && c <= 2154)
                  : (c <= 2183 || (c >= 2185 && c <= 2190)))))
              : (c <= 2249 || (c < 2392
                ? (c < 2365
                  ? (c >= 2308 && c <= 2361)
                  : (c <= 2365 || c == 2384))
                : (c <= 2401 || (c < 2417
                  ? (c >= 2406 && c <= 2415)
                  : c <= 2432)))))))))
        : (c <= 2444 || (c < 2749
          ? (c < 2579
            ? (c < 2524
              ? (c < 2482
                ? (c < 2451
                  ? (c >= 2447 && c <= 2448)
                  : (c <= 2472 || (c >= 2474 && c <= 2480)))
                : (c <= 2482 || (c < 2493
                  ? (c >= 2486 && c <= 2489)
                  : (c <= 2493 || c == 2510))))
              : (c <= 2525 || (c < 2556
                ? (c < 2534
                  ? (c >= 2527 && c <= 2529)
                  : (c <= 2545 || (c >= 2548 && c <= 2553)))
                : (c <= 2556 || (c < 2575
                  ? (c >= 2565 && c <= 2570)
                  : c <= 2576)))))
            : (c <= 2600 || (c < 2674
              ? (c < 2616
                ? (c < 2610
                  ? (c >= 2602 && c <= 2608)
                  : (c <= 2611 || (c >= 2613 && c <= 2614)))
                : (c <= 2617 || (c < 2654
                  ? (c >= 2649 && c <= 2652)
                  : (c <= 2654 || (c >= 2662 && c <= 2671)))))
              : (c <= 2676 || (c < 2730
                ? (c < 2703
                  ? (c >= 2693 && c <= 2701)
                  : (c <= 2705 || (c >= 2707 && c <= 2728)))
                : (c <= 2736 || (c < 2741
                  ? (c >= 2738 && c <= 2739)
                  : c <= 2745)))))))
          : (c <= 2749 || (c < 2929
            ? (c < 2858
              ? (c < 2809
                ? (c < 2784
                  ? c == 2768
                  : (c <= 2785 || (c >= 2790 && c <= 2799)))
                : (c <= 2809 || (c < 2831
                  ? (c >= 2821 && c <= 2828)
                  : (c <= 2832 || (c >= 2835 && c <= 2856)))))
              : (c <= 2864 || (c < 2908
                ? (c < 2869
                  ? (c >= 2866 && c <= 2867)
                  : (c <= 2873 || c == 2877))
                : (c <= 2909 || (c < 2918
                  ? (c >= 2911 && c <= 2913)
                  : c <= 2927)))))
            : (c <= 2935 || (c < 2974
              ? (c < 2962
                ? (c < 2949
                  ? c == 2947
                  : (c <= 2954 || (c >= 2958 && c <= 2960)))
                : (c <= 2965 || (c < 2972
                  ? (c >= 2969 && c <= 2970)
                  : c <= 2972)))
              : (c <= 2975 || (c < 3024
                ? (c < 2984
                  ? (c >= 2979 && c <= 2980)
                  : (c <= 2986 || (c >= 2990 && c <= 3001)))
                : (c <= 3024 || (c < 3077
                  ? (c >= 3046 && c <= 3058)
                  : c <= 3084)))))))))))
      : (c <= 3088 || (c < 4193
        ? (c < 3482
          ? (c < 3261
            ? (c < 3192
              ? (c < 3160
                ? (c < 3114
                  ? (c >= 3090 && c <= 3112)
                  : (c <= 3129 || c == 3133))
                : (c <= 3162 || (c < 3168
                  ? c == 3165
                  : (c <= 3169 || (c >= 3174 && c <= 3183)))))
              : (c <= 3198 || (c < 3218
                ? (c < 3205
                  ? c == 3200
                  : (c <= 3212 || (c >= 3214 && c <= 3216)))
                : (c <= 3240 || (c < 3253
                  ? (c >= 3242 && c <= 3251)
                  : c <= 3257)))))
            : (c <= 3261 || (c < 3389
              ? (c < 3313
                ? (c < 3296
                  ? (c >= 3293 && c <= 3294)
                  : (c <= 3297 || (c >= 3302 && c <= 3311)))
                : (c <= 3314 || (c < 3342
                  ? (c >= 3332 && c <= 3340)
                  : (c <= 3344 || (c >= 3346 && c <= 3386)))))
              : (c <= 3389 || (c < 3430
                ? (c < 3412
                  ? c == 3406
                  : (c <= 3414 || (c >= 3416 && c <= 3425)))
                : (c <= 3448 || (c < 3461
                  ? (c >= 3450 && c <= 3455)
                  : c <= 3478)))))))
          : (c <= 3505 || (c < 3762
            ? (c < 3664
              ? (c < 3558
                ? (c < 3517
                  ? (c >= 3507 && c <= 3515)
                  : (c <= 3517 || (c >= 3520 && c <= 3526)))
                : (c <= 3567 || (c < 3634
                  ? (c >= 3585 && c <= 3632)
                  : (c <= 3635 || (c >= 3648 && c <= 3654)))))
              : (c <= 3673 || (c < 3724
                ? (c < 3716
                  ? (c >= 3713 && c <= 3714)
                  : (c <= 3716 || (c >= 3718 && c <= 3722)))
                : (c <= 3747 || (c < 3751
                  ? c == 3749
                  : c <= 3760)))))
            : (c <= 3763 || (c < 3904
              ? (c < 3792
                ? (c < 3776
                  ? c == 3773
                  : (c <= 3780 || c == 3782))
                : (c <= 3801 || (c < 3840
                  ? (c >= 3804 && c <= 3807)
                  : (c <= 3840 || (c >= 3872 && c <= 3891)))))
              : (c <= 3911 || (c < 4159
                ? (c < 3976
                  ? (c >= 3913 && c <= 3948)
                  : (c <= 3980 || (c >= 4096 && c <= 4138)))
                : (c <= 4169 || (c < 4186
                  ? (c >= 4176 && c <= 4181)
                  : c <= 4189)))))))))
        : (c <= 4193 || (c < 5121
          ? (c < 4704
            ? (c < 4301
              ? (c < 4238
                ? (c < 4206
                  ? (c >= 4197 && c <= 4198)
                  : (c <= 4208 || (c >= 4213 && c <= 4225)))
                : (c <= 4238 || (c < 4256
                  ? (c >= 4240 && c <= 4249)
                  : (c <= 4293 || c == 4295))))
              : (c <= 4301 || (c < 4688
                ? (c < 4348
                  ? (c >= 4304 && c <= 4346)
                  : (c <= 4680 || (c >= 4682 && c <= 4685)))
                : (c <= 4694 || (c < 4698
                  ? c == 4696
                  : c <= 4701)))))
            : (c <= 4744 || (c < 4824
              ? (c < 4792
                ? (c < 4752
                  ? (c >= 4746 && c <= 4749)
                  : (c <= 4784 || (c >= 4786 && c <= 4789)))
                : (c <= 4798 || (c < 4802
                  ? c == 4800
                  : (c <= 4805 || (c >= 4808 && c <= 4822)))))
              : (c <= 4880 || (c < 4992
                ? (c < 4888
                  ? (c >= 4882 && c <= 4885)
                  : (c <= 4954 || (c >= 4969 && c <= 4988)))
                : (c <= 5007 || (c < 5112
                  ? (c >= 5024 && c <= 5109)
                  : c <= 5117)))))))
          : (c <= 5740 || (c < 6160
            ? (c < 5984
              ? (c < 5870
                ? (c < 5761
                  ? (c >= 5743 && c <= 5759)
                  : (c <= 5786 || (c >= 5792 && c <= 5866)))
                : (c <= 5880 || (c < 5919
                  ? (c >= 5888 && c <= 5905)
                  : (c <= 5937 || (c >= 5952 && c <= 5969)))))
              : (c <= 5996 || (c < 6108
                ? (c < 6016
                  ? (c >= 5998 && c <= 6000)
                  : (c <= 6067 || c == 6103))
                : (c <= 6108 || (c < 6128
                  ? (c >= 6112 && c <= 6121)
                  : c <= 6137)))))
            : (c <= 6169 || (c < 6470
              ? (c < 6314
                ? (c < 6272
                  ? (c >= 6176 && c <= 6264)
                  : (c <= 6276 || (c >= 6279 && c <= 6312)))
                : (c <= 6314 || (c < 6400
                  ? (c >= 6320 && c <= 6389)
                  : c <= 6430)))
              : (c <= 6509 || (c < 6608
                ? (c < 6528
                  ? (c >= 6512 && c <= 6516)
                  : (c <= 6571 || (c >= 6576 && c <= 6601)))
                : (c <= 6618 || (c < 6688
                  ? (c >= 6656 && c <= 6678)
                  : c <= 6740)))))))))))))
    : (c <= 6793 || (c < 43216
      ? (c < 11499
        ? (c < 8126
          ? (c < 7406
            ? (c < 7168
              ? (c < 6981
                ? (c < 6823
                  ? (c >= 6800 && c <= 6809)
                  : (c <= 6823 || (c >= 6917 && c <= 6963)))
                : (c <= 6988 || (c < 7043
                  ? (c >= 6992 && c <= 7001)
                  : (c <= 7072 || (c >= 7086 && c <= 7141)))))
              : (c <= 7203 || (c < 7312
                ? (c < 7245
                  ? (c >= 7232 && c <= 7241)
                  : (c <= 7293 || (c >= 7296 && c <= 7304)))
                : (c <= 7354 || (c < 7401
                  ? (c >= 7357 && c <= 7359)
                  : c <= 7404)))))
            : (c <= 7411 || (c < 8016
              ? (c < 7680
                ? (c < 7418
                  ? (c >= 7413 && c <= 7414)
                  : (c <= 7418 || (c >= 7424 && c <= 7615)))
                : (c <= 7957 || (c < 7968
                  ? (c >= 7960 && c <= 7965)
                  : (c <= 8005 || (c >= 8008 && c <= 8013)))))
              : (c <= 8023 || (c < 8031
                ? (c < 8027
                  ? c == 8025
                  : (c <= 8027 || c == 8029))
                : (c <= 8061 || (c < 8118
                  ? (c >= 8064 && c <= 8116)
                  : c <= 8124)))))))
          : (c <= 8126 || (c < 8469
            ? (c < 8304
              ? (c < 8150
                ? (c < 8134
                  ? (c >= 8130 && c <= 8132)
                  : (c <= 8140 || (c >= 8144 && c <= 8147)))
                : (c <= 8155 || (c < 8178
                  ? (c >= 8160 && c <= 8172)
                  : (c <= 8180 || (c >= 8182 && c <= 8188)))))
              : (c <= 8305 || (c < 8450
                ? (c < 8319
                  ? (c >= 8308 && c <= 8313)
                  : (c <= 8329 || (c >= 8336 && c <= 8348)))
                : (c <= 8450 || (c < 8458
                  ? c == 8455
                  : c <= 8467)))))
            : (c <= 8469 || (c < 8517
              ? (c < 8488
                ? (c < 8484
                  ? (c >= 8473 && c <= 8477)
                  : (c <= 8484 || c == 8486))
                : (c <= 8488 || (c < 8495
                  ? (c >= 8490 && c <= 8493)
                  : (c <= 8505 || (c >= 8508 && c <= 8511)))))
              : (c <= 8521 || (c < 9450
                ? (c < 8528
                  ? c == 8526
                  : (c <= 8585 || (c >= 9312 && c <= 9371)))
                : (c <= 9471 || (c < 11264
                  ? (c >= 10102 && c <= 10131)
                  : c <= 11492)))))))))
        : (c <= 11502 || (c < 12784
          ? (c < 11728
            ? (c < 11648
              ? (c < 11559
                ? (c < 11517
                  ? (c >= 11506 && c <= 11507)
                  : (c <= 11517 || (c >= 11520 && c <= 11557)))
                : (c <= 11559 || (c < 11568
                  ? c == 11565
                  : (c <= 11623 || c == 11631))))
              : (c <= 11670 || (c < 11704
                ? (c < 11688
                  ? (c >= 11680 && c <= 11686)
                  : (c <= 11694 || (c >= 11696 && c <= 11702)))
                : (c <= 11710 || (c < 11720
                  ? (c >= 11712 && c <= 11718)
                  : c <= 11726)))))
            : (c <= 11734 || (c < 12445
              ? (c < 12321
                ? (c < 11823
                  ? (c >= 11736 && c <= 11742)
                  : (c <= 11823 || (c >= 12293 && c <= 12295)))
                : (c <= 12329 || (c < 12344
                  ? (c >= 12337 && c <= 12341)
                  : (c <= 12348 || (c >= 12353 && c <= 12438)))))
              : (c <= 12447 || (c < 12593
                ? (c < 12540
                  ? (c >= 12449 && c <= 12538)
                  : (c <= 12543 || (c >= 12549 && c <= 12591)))
                : (c <= 12686 || (c < 12704
                  ? (c >= 12690 && c <= 12693)
                  : c <= 12735)))))))
          : (c <= 12799 || (c < 42656
            ? (c < 19968
              ? (c < 12928
                ? (c < 12872
                  ? (c >= 12832 && c <= 12841)
                  : (c <= 12879 || (c >= 12881 && c <= 12895)))
                : (c <= 12937 || (c < 13312
                  ? (c >= 12977 && c <= 12991)
                  : (c <= 13312 || c == 19903))))
              : (c <= 19968 || (c < 42512
                ? (c < 42192
                  ? (c >= 40959 && c <= 42124)
                  : (c <= 42237 || (c >= 42240 && c <= 42508)))
                : (c <= 42539 || (c < 42623
                  ? (c >= 42560 && c <= 42606)
                  : c <= 42653)))))
            : (c <= 42735 || (c < 42994
              ? (c < 42960
                ? (c < 42786
                  ? (c >= 42775 && c <= 42783)
                  : (c <= 42888 || (c >= 42891 && c <= 42954)))
                : (c <= 42961 || (c < 42965
                  ? c == 42963
                  : c <= 42969)))
              : (c <= 43009 || (c < 43056
                ? (c < 43015
                  ? (c >= 43011 && c <= 43013)
                  : (c <= 43018 || (c >= 43020 && c <= 43042)))
                : (c <= 43061 || (c < 43138
                  ? (c >= 43072 && c <= 43123)
                  : c <= 43187)))))))))))
      : (c <= 43225 || (c < 65345
        ? (c < 43816
          ? (c < 43616
            ? (c < 43471
              ? (c < 43264
                ? (c < 43259
                  ? (c >= 43250 && c <= 43255)
                  : (c <= 43259 || (c >= 43261 && c <= 43262)))
                : (c <= 43301 || (c < 43360
                  ? (c >= 43312 && c <= 43334)
                  : (c <= 43388 || (c >= 43396 && c <= 43442)))))
              : (c <= 43481 || (c < 43584
                ? (c < 43494
                  ? (c >= 43488 && c <= 43492)
                  : (c <= 43518 || (c >= 43520 && c <= 43560)))
                : (c <= 43586 || (c < 43600
                  ? (c >= 43588 && c <= 43595)
                  : c <= 43609)))))
            : (c <= 43638 || (c < 43739
              ? (c < 43701
                ? (c < 43646
                  ? c == 43642
                  : (c <= 43695 || c == 43697))
                : (c <= 43702 || (c < 43712
                  ? (c >= 43705 && c <= 43709)
                  : (c <= 43712 || c == 43714))))
              : (c <= 43741 || (c < 43785
                ? (c < 43762
                  ? (c >= 43744 && c <= 43754)
                  : (c <= 43764 || (c >= 43777 && c <= 43782)))
                : (c <= 43790 || (c < 43808
                  ? (c >= 43793 && c <= 43798)
                  : c <= 43814)))))))
          : (c <= 43822 || (c < 64298
            ? (c < 55243
              ? (c < 44016
                ? (c < 43868
                  ? (c >= 43824 && c <= 43866)
                  : (c <= 43881 || (c >= 43888 && c <= 44002)))
                : (c <= 44025 || (c < 55203
                  ? c == 44032
                  : (c <= 55203 || (c >= 55216 && c <= 55238)))))
              : (c <= 55291 || (c < 64275
                ? (c < 64112
                  ? (c >= 63744 && c <= 64109)
                  : (c <= 64217 || (c >= 64256 && c <= 64262)))
                : (c <= 64279 || (c < 64287
                  ? c == 64285
                  : c <= 64296)))))
            : (c <= 64310 || (c < 64848
              ? (c < 64323
                ? (c < 64318
                  ? (c >= 64312 && c <= 64316)
                  : (c <= 64318 || (c >= 64320 && c <= 64321)))
                : (c <= 64324 || (c < 64467
                  ? (c >= 64326 && c <= 64433)
                  : c <= 64829)))
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

static inline bool aux_sym_word_token1_character_set_2(int32_t c) {
  return (c < 6688
    ? (c < 3077
      ? (c < 2417
        ? (c < 1519
          ? (c < 880
            ? (c < 192
              ? (c < 178
                ? (c < '-'
                  ? c == '\''
                  : (c <= '-' || c == 170))
                : (c <= 179 || (c < 185
                  ? c == 181
                  : (c <= 186 || (c >= 188 && c <= 190)))))
              : (c <= 214 || (c < 736
                ? (c < 248
                  ? (c >= 216 && c <= 246)
                  : (c <= 705 || (c >= 710 && c <= 721)))
                : (c <= 740 || (c < 750
                  ? c == 748
                  : c <= 750)))))
            : (c <= 884 || (c < 931
              ? (c < 902
                ? (c < 890
                  ? (c >= 886 && c <= 887)
                  : (c <= 893 || c == 895))
                : (c <= 902 || (c < 908
                  ? (c >= 904 && c <= 906)
                  : (c <= 908 || (c >= 910 && c <= 929)))))
              : (c <= 1013 || (c < 1369
                ? (c < 1162
                  ? (c >= 1015 && c <= 1153)
                  : (c <= 1327 || (c >= 1329 && c <= 1366)))
                : (c <= 1369 || (c < 1488
                  ? (c >= 1376 && c <= 1416)
                  : c <= 1514)))))))
          : (c <= 1522 || (c < 2042
            ? (c < 1791
              ? (c < 1649
                ? (c < 1632
                  ? (c >= 1568 && c <= 1610)
                  : (c <= 1641 || (c >= 1646 && c <= 1647)))
                : (c <= 1747 || (c < 1765
                  ? c == 1749
                  : (c <= 1766 || (c >= 1774 && c <= 1788)))))
              : (c <= 1791 || (c < 1969
                ? (c < 1810
                  ? c == 1808
                  : (c <= 1839 || (c >= 1869 && c <= 1957)))
                : (c <= 1969 || (c < 2036
                  ? (c >= 1984 && c <= 2026)
                  : c <= 2037)))))
            : (c <= 2042 || (c < 2185
              ? (c < 2088
                ? (c < 2074
                  ? (c >= 2048 && c <= 2069)
                  : (c <= 2074 || c == 2084))
                : (c <= 2088 || (c < 2144
                  ? (c >= 2112 && c <= 2136)
                  : (c <= 2154 || (c >= 2160 && c <= 2183)))))
              : (c <= 2190 || (c < 2384
                ? (c < 2308
                  ? (c >= 2208 && c <= 2249)
                  : (c <= 2361 || c == 2365))
                : (c <= 2384 || (c < 2406
                  ? (c >= 2392 && c <= 2401)
                  : c <= 2415)))))))))
        : (c <= 2432 || (c < 2741
          ? (c < 2575
            ? (c < 2510
              ? (c < 2474
                ? (c < 2447
                  ? (c >= 2437 && c <= 2444)
                  : (c <= 2448 || (c >= 2451 && c <= 2472)))
                : (c <= 2480 || (c < 2486
                  ? c == 2482
                  : (c <= 2489 || c == 2493))))
              : (c <= 2510 || (c < 2548
                ? (c < 2527
                  ? (c >= 2524 && c <= 2525)
                  : (c <= 2529 || (c >= 2534 && c <= 2545)))
                : (c <= 2553 || (c < 2565
                  ? c == 2556
                  : c <= 2570)))))
            : (c <= 2576 || (c < 2662
              ? (c < 2613
                ? (c < 2602
                  ? (c >= 2579 && c <= 2600)
                  : (c <= 2608 || (c >= 2610 && c <= 2611)))
                : (c <= 2614 || (c < 2649
                  ? (c >= 2616 && c <= 2617)
                  : (c <= 2652 || c == 2654))))
              : (c <= 2671 || (c < 2707
                ? (c < 2693
                  ? (c >= 2674 && c <= 2676)
                  : (c <= 2701 || (c >= 2703 && c <= 2705)))
                : (c <= 2728 || (c < 2738
                  ? (c >= 2730 && c <= 2736)
                  : c <= 2739)))))))
          : (c <= 2745 || (c < 2918
            ? (c < 2835
              ? (c < 2790
                ? (c < 2768
                  ? c == 2749
                  : (c <= 2768 || (c >= 2784 && c <= 2785)))
                : (c <= 2799 || (c < 2821
                  ? c == 2809
                  : (c <= 2828 || (c >= 2831 && c <= 2832)))))
              : (c <= 2856 || (c < 2877
                ? (c < 2866
                  ? (c >= 2858 && c <= 2864)
                  : (c <= 2867 || (c >= 2869 && c <= 2873)))
                : (c <= 2877 || (c < 2911
                  ? (c >= 2908 && c <= 2909)
                  : c <= 2913)))))
            : (c <= 2927 || (c < 2972
              ? (c < 2958
                ? (c < 2947
                  ? (c >= 2929 && c <= 2935)
                  : (c <= 2947 || (c >= 2949 && c <= 2954)))
                : (c <= 2960 || (c < 2969
                  ? (c >= 2962 && c <= 2965)
                  : c <= 2970)))
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

static inline bool aux_sym_word_token1_character_set_3(int32_t c) {
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
      if (eof) ADVANCE(99);
      if (lookahead == '#') ADVANCE(102);
      if (lookahead == '$') ADVANCE(207);
      if (lookahead == '%') ADVANCE(230);
      if (lookahead == '(') ADVANCE(238);
      if (lookahead == ')') ADVANCE(220);
      if (lookahead == '*') ADVANCE(217);
      if (lookahead == '+') ADVANCE(218);
      if (lookahead == ',') ADVANCE(239);
      if (lookahead == '-') ADVANCE(197);
      if (lookahead == '.') ADVANCE(76);
      if (lookahead == '/') ADVANCE(229);
      if (lookahead == '0') ADVANCE(243);
      if (lookahead == ':') ADVANCE(204);
      if (lookahead == '<') ADVANCE(213);
      if (lookahead == '=') ADVANCE(228);
      if (lookahead == '>') ADVANCE(214);
      if (lookahead == '[') ADVANCE(215);
      if (lookahead == '\\') SKIP(91)
      if (lookahead == ']') ADVANCE(216);
      if (lookahead == '^') ADVANCE(206);
      if (lookahead == 'a') ADVANCE(56);
      if (lookahead == 'f') ADVANCE(36);
      if (lookahead == 'g') ADVANCE(37);
      if (lookahead == 'k') ADVANCE(44);
      if (lookahead == 'n') ADVANCE(58);
      if (lookahead == 'o') ADVANCE(63);
      if (lookahead == 'p') ADVANCE(39);
      if (lookahead == 's') ADVANCE(45);
      if (lookahead == 't') ADVANCE(38);
      if (lookahead == '{') ADVANCE(210);
      if (lookahead == '|') ADVANCE(205);
      if (lookahead == '}') ADVANCE(212);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(96)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(242);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(259);
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
      if (lookahead == '#') ADVANCE(101);
      if (lookahead == '\\') ADVANCE(253);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(12);
      if (lookahead == '\f' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) ADVANCE(254);
      if (lookahead != 0) ADVANCE(255);
      END_STATE();
    case 13:
      if (lookahead == '\n') SKIP(21)
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(74);
      if (lookahead != 0) ADVANCE(255);
      END_STATE();
    case 14:
      if (lookahead == '#') ADVANCE(102);
      if (lookahead == '$') ADVANCE(207);
      if (lookahead == '(') ADVANCE(219);
      if (lookahead == ')') ADVANCE(220);
      if (lookahead == '*') ADVANCE(217);
      if (lookahead == '+') ADVANCE(218);
      if (lookahead == ':') ADVANCE(204);
      if (lookahead == '<') ADVANCE(213);
      if (lookahead == '[') ADVANCE(215);
      if (lookahead == '\\') SKIP(5)
      if (lookahead == ']') ADVANCE(216);
      if (lookahead == '^') ADVANCE(206);
      if (lookahead == '{') ADVANCE(209);
      if (lookahead == '|') ADVANCE(205);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(14)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(196);
      if (aux_sym_word_token1_character_set_1(lookahead)) ADVANCE(208);
      END_STATE();
    case 15:
      if (lookahead == '#') ADVANCE(102);
      if (lookahead == '%') ADVANCE(230);
      if (lookahead == '(') ADVANCE(238);
      if (lookahead == ')') ADVANCE(220);
      if (lookahead == '*') ADVANCE(217);
      if (lookahead == '+') ADVANCE(218);
      if (lookahead == ',') ADVANCE(239);
      if (lookahead == '-') ADVANCE(197);
      if (lookahead == '/') ADVANCE(229);
      if (lookahead == ':') ADVANCE(204);
      if (lookahead == '=') ADVANCE(228);
      if (lookahead == '>') ADVANCE(214);
      if (lookahead == '\\') SKIP(7)
      if (lookahead == 'o') ADVANCE(63);
      if (lookahead == '}') ADVANCE(211);
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
      if (lookahead == '#') ADVANCE(102);
      if (lookahead == '%') ADVANCE(230);
      if (lookahead == ')') ADVANCE(220);
      if (lookahead == '*') ADVANCE(217);
      if (lookahead == '+') ADVANCE(218);
      if (lookahead == ',') ADVANCE(239);
      if (lookahead == '-') ADVANCE(197);
      if (lookahead == '/') ADVANCE(229);
      if (lookahead == ':') ADVANCE(204);
      if (lookahead == '=') ADVANCE(228);
      if (lookahead == '>') ADVANCE(214);
      if (lookahead == '\\') SKIP(7)
      if (lookahead == 'o') ADVANCE(63);
      if (lookahead == '}') ADVANCE(211);
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
      if (lookahead == '#') ADVANCE(102);
      if (lookahead == '(') ADVANCE(219);
      if (lookahead == ')') ADVANCE(220);
      if (lookahead == ',') ADVANCE(239);
      if (lookahead == '-') ADVANCE(197);
      if (lookahead == '.') ADVANCE(76);
      if (lookahead == '0') ADVANCE(243);
      if (lookahead == '\\') SKIP(3)
      if (lookahead == '_') ADVANCE(240);
      if (lookahead == 'k') ADVANCE(132);
      if (lookahead == 's') ADVANCE(142);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(17)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(242);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(164);
      END_STATE();
    case 18:
      if (lookahead == '#') ADVANCE(102);
      if (lookahead == '(') ADVANCE(219);
      if (lookahead == '-') ADVANCE(197);
      if (lookahead == '.') ADVANCE(76);
      if (lookahead == '0') ADVANCE(243);
      if (lookahead == '\\') ADVANCE(260);
      if (lookahead == '_') ADVANCE(240);
      if (lookahead == 'k') ADVANCE(132);
      if (lookahead == 's') ADVANCE(142);
      if (lookahead == '{') ADVANCE(210);
      if (lookahead == '}') ADVANCE(212);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(18)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(242);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(164);
      END_STATE();
    case 19:
      if (lookahead == '#') ADVANCE(102);
      if (lookahead == '-') ADVANCE(197);
      if (lookahead == '\\') SKIP(9)
      if (lookahead == '_') ADVANCE(240);
      if (lookahead == 'a') ADVANCE(145);
      if (lookahead == 'n') ADVANCE(148);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(19)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(164);
      END_STATE();
    case 20:
      if (lookahead == '#') ADVANCE(102);
      if (lookahead == '\\') SKIP(11)
      if (lookahead == '_') ADVANCE(240);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(20)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(164);
      END_STATE();
    case 21:
      if (lookahead == '#') ADVANCE(101);
      if (lookahead == '\\') ADVANCE(253);
      if (lookahead == '\f' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) ADVANCE(254);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(21)
      if (lookahead != 0) ADVANCE(255);
      END_STATE();
    case 22:
      if (lookahead == '(') ADVANCE(221);
      END_STATE();
    case 23:
      if (lookahead == '(') ADVANCE(232);
      END_STATE();
    case 24:
      if (lookahead == '(') ADVANCE(31);
      END_STATE();
    case 25:
      if (lookahead == '(') ADVANCE(222);
      END_STATE();
    case 26:
      if (lookahead == '(') ADVANCE(224);
      END_STATE();
    case 27:
      if (lookahead == '(') ADVANCE(233);
      END_STATE();
    case 28:
      if (lookahead == '(') ADVANCE(225);
      END_STATE();
    case 29:
      if (lookahead == '(') ADVANCE(223);
      END_STATE();
    case 30:
      if (lookahead == '(') ADVANCE(32);
      END_STATE();
    case 31:
      if (lookahead == ')') ADVANCE(227);
      END_STATE();
    case 32:
      if (lookahead == ')') ADVANCE(226);
      END_STATE();
    case 33:
      if (lookahead == '_') ADVANCE(73);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(245);
      END_STATE();
    case 34:
      if (lookahead == '_') ADVANCE(75);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(246);
      END_STATE();
    case 35:
      if (lookahead == '_') ADVANCE(80);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(247);
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
      if (lookahead == 'd') ADVANCE(198);
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
      if (lookahead == 't') ADVANCE(201);
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
      if (lookahead == 'r') ADVANCE(231);
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
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(250);
      END_STATE();
    case 73:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(245);
      END_STATE();
    case 74:
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(74);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(255);
      END_STATE();
    case 75:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(246);
      END_STATE();
    case 76:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(249);
      END_STATE();
    case 77:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(250);
      END_STATE();
    case 78:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(258);
      END_STATE();
    case 79:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(78);
      END_STATE();
    case 80:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(247);
      END_STATE();
    case 81:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(258);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(240);
      END_STATE();
    case 90:
      if (eof) ADVANCE(99);
      if (lookahead == '\n') SKIP(96)
      END_STATE();
    case 91:
      if (eof) ADVANCE(99);
      if (lookahead == '\n') SKIP(96)
      if (lookahead == '\r') SKIP(90)
      END_STATE();
    case 92:
      if (eof) ADVANCE(99);
      if (lookahead == '\n') SKIP(97)
      END_STATE();
    case 93:
      if (eof) ADVANCE(99);
      if (lookahead == '\n') SKIP(97)
      if (lookahead == '\r') SKIP(92)
      END_STATE();
    case 94:
      if (eof) ADVANCE(99);
      if (lookahead == '\n') SKIP(98)
      END_STATE();
    case 95:
      if (eof) ADVANCE(99);
      if (lookahead == '\n') SKIP(98)
      if (lookahead == '\r') SKIP(94)
      END_STATE();
    case 96:
      if (eof) ADVANCE(99);
      if (lookahead == '#') ADVANCE(102);
      if (lookahead == '$') ADVANCE(207);
      if (lookahead == '%') ADVANCE(230);
      if (lookahead == '(') ADVANCE(219);
      if (lookahead == ')') ADVANCE(220);
      if (lookahead == '*') ADVANCE(217);
      if (lookahead == '+') ADVANCE(218);
      if (lookahead == ',') ADVANCE(239);
      if (lookahead == '-') ADVANCE(197);
      if (lookahead == '.') ADVANCE(76);
      if (lookahead == '/') ADVANCE(229);
      if (lookahead == '0') ADVANCE(243);
      if (lookahead == ':') ADVANCE(204);
      if (lookahead == '<') ADVANCE(213);
      if (lookahead == '=') ADVANCE(228);
      if (lookahead == '>') ADVANCE(214);
      if (lookahead == '[') ADVANCE(215);
      if (lookahead == '\\') SKIP(91)
      if (lookahead == ']') ADVANCE(216);
      if (lookahead == '^') ADVANCE(206);
      if (lookahead == 'a') ADVANCE(56);
      if (lookahead == 'f') ADVANCE(36);
      if (lookahead == 'g') ADVANCE(37);
      if (lookahead == 'k') ADVANCE(44);
      if (lookahead == 'n') ADVANCE(58);
      if (lookahead == 'o') ADVANCE(63);
      if (lookahead == 'p') ADVANCE(39);
      if (lookahead == 's') ADVANCE(45);
      if (lookahead == 't') ADVANCE(38);
      if (lookahead == '{') ADVANCE(210);
      if (lookahead == '|') ADVANCE(205);
      if (lookahead == '}') ADVANCE(212);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(96)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(242);
      END_STATE();
    case 97:
      if (eof) ADVANCE(99);
      if (lookahead == '#') ADVANCE(102);
      if (lookahead == '(') ADVANCE(219);
      if (lookahead == '-') ADVANCE(197);
      if (lookahead == '<') ADVANCE(213);
      if (lookahead == '[') ADVANCE(215);
      if (lookahead == '\\') SKIP(93)
      if (lookahead == '^') ADVANCE(206);
      if (lookahead == '_') ADVANCE(240);
      if (lookahead == 'a') ADVANCE(144);
      if (lookahead == 'f') ADVANCE(121);
      if (lookahead == 'g') ADVANCE(122);
      if (lookahead == 'k') ADVANCE(130);
      if (lookahead == 'n') ADVANCE(147);
      if (lookahead == 'p') ADVANCE(123);
      if (lookahead == 's') ADVANCE(131);
      if (lookahead == 't') ADVANCE(124);
      if (lookahead == '{') ADVANCE(209);
      if (lookahead == '}') ADVANCE(211);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(97)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(163);
      if (aux_sym_word_token1_character_set_1(lookahead)) ADVANCE(208);
      END_STATE();
    case 98:
      if (eof) ADVANCE(99);
      if (lookahead == '#') ADVANCE(102);
      if (lookahead == '(') ADVANCE(219);
      if (lookahead == '<') ADVANCE(213);
      if (lookahead == '[') ADVANCE(215);
      if (lookahead == '\\') SKIP(95)
      if (lookahead == '^') ADVANCE(206);
      if (lookahead == 'a') ADVANCE(186);
      if (lookahead == 'f') ADVANCE(165);
      if (lookahead == 'g') ADVANCE(166);
      if (lookahead == 'k') ADVANCE(172);
      if (lookahead == 'n') ADVANCE(183);
      if (lookahead == 'p') ADVANCE(167);
      if (lookahead == 's') ADVANCE(173);
      if (lookahead == 't') ADVANCE(168);
      if (lookahead == '{') ADVANCE(209);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(98)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(196);
      if (aux_sym_word_token1_character_set_1(lookahead)) ADVANCE(208);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(237);
      if (lookahead == ')') ADVANCE(102);
      if (lookahead != 0) ADVANCE(100);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(101);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(101);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(102);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == '(') ADVANCE(221);
      if (lookahead == '.') ADVANCE(89);
      if (lookahead == '_') ADVANCE(240);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(163);
      if (aux_sym_word_token1_character_set_2(lookahead)) ADVANCE(208);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == '(') ADVANCE(221);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(196);
      if (aux_sym_word_token1_character_set_2(lookahead)) ADVANCE(208);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == '(') ADVANCE(232);
      if (lookahead == '.') ADVANCE(89);
      if (lookahead == '_') ADVANCE(240);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(163);
      if (aux_sym_word_token1_character_set_2(lookahead)) ADVANCE(208);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == '(') ADVANCE(232);
      if (lookahead == '.') ADVANCE(89);
      if (lookahead == '_') ADVANCE(240);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(164);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == '(') ADVANCE(232);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(196);
      if (aux_sym_word_token1_character_set_2(lookahead)) ADVANCE(208);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == '(') ADVANCE(31);
      if (lookahead == '.') ADVANCE(89);
      if (lookahead == '_') ADVANCE(240);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(163);
      if (aux_sym_word_token1_character_set_2(lookahead)) ADVANCE(208);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == '(') ADVANCE(31);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(196);
      if (aux_sym_word_token1_character_set_2(lookahead)) ADVANCE(208);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == '(') ADVANCE(222);
      if (lookahead == '.') ADVANCE(89);
      if (lookahead == '_') ADVANCE(240);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(163);
      if (aux_sym_word_token1_character_set_2(lookahead)) ADVANCE(208);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == '(') ADVANCE(222);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(196);
      if (aux_sym_word_token1_character_set_2(lookahead)) ADVANCE(208);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == '(') ADVANCE(224);
      if (lookahead == '.') ADVANCE(89);
      if (lookahead == '_') ADVANCE(240);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(163);
      if (aux_sym_word_token1_character_set_2(lookahead)) ADVANCE(208);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == '(') ADVANCE(224);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(196);
      if (aux_sym_word_token1_character_set_2(lookahead)) ADVANCE(208);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == '(') ADVANCE(233);
      if (lookahead == '.') ADVANCE(89);
      if (lookahead == '_') ADVANCE(240);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(164);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == '(') ADVANCE(225);
      if (lookahead == '.') ADVANCE(89);
      if (lookahead == '_') ADVANCE(240);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(163);
      if (aux_sym_word_token1_character_set_2(lookahead)) ADVANCE(208);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == '(') ADVANCE(225);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(196);
      if (aux_sym_word_token1_character_set_2(lookahead)) ADVANCE(208);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == '(') ADVANCE(223);
      if (lookahead == '.') ADVANCE(89);
      if (lookahead == '_') ADVANCE(240);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(163);
      if (aux_sym_word_token1_character_set_2(lookahead)) ADVANCE(208);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == '(') ADVANCE(223);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(196);
      if (aux_sym_word_token1_character_set_2(lookahead)) ADVANCE(208);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == '(') ADVANCE(32);
      if (lookahead == '.') ADVANCE(89);
      if (lookahead == '_') ADVANCE(240);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(163);
      if (aux_sym_word_token1_character_set_2(lookahead)) ADVANCE(208);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == '(') ADVANCE(32);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(196);
      if (aux_sym_word_token1_character_set_2(lookahead)) ADVANCE(208);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == '.') ADVANCE(89);
      if (lookahead == '_') ADVANCE(240);
      if (lookahead == 'a') ADVANCE(126);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(163);
      if (aux_sym_word_token1_character_set_2(lookahead)) ADVANCE(208);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == '.') ADVANCE(89);
      if (lookahead == '_') ADVANCE(240);
      if (lookahead == 'a') ADVANCE(143);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(163);
      if (aux_sym_word_token1_character_set_2(lookahead)) ADVANCE(208);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == '.') ADVANCE(89);
      if (lookahead == '_') ADVANCE(240);
      if (lookahead == 'a') ADVANCE(154);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(163);
      if (aux_sym_word_token1_character_set_2(lookahead)) ADVANCE(208);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == '.') ADVANCE(89);
      if (lookahead == '_') ADVANCE(240);
      if (lookahead == 'a') ADVANCE(139);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(163);
      if (aux_sym_word_token1_character_set_2(lookahead)) ADVANCE(208);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == '.') ADVANCE(89);
      if (lookahead == '_') ADVANCE(240);
      if (lookahead == 'a') ADVANCE(129);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(163);
      if (aux_sym_word_token1_character_set_2(lookahead)) ADVANCE(208);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == '.') ADVANCE(89);
      if (lookahead == '_') ADVANCE(240);
      if (lookahead == 'c') ADVANCE(136);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(163);
      if (aux_sym_word_token1_character_set_2(lookahead)) ADVANCE(208);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == '.') ADVANCE(89);
      if (lookahead == '_') ADVANCE(240);
      if (lookahead == 'd') ADVANCE(199);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(163);
      if (aux_sym_word_token1_character_set_2(lookahead)) ADVANCE(208);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == '.') ADVANCE(89);
      if (lookahead == '_') ADVANCE(240);
      if (lookahead == 'd') ADVANCE(200);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(164);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == '.') ADVANCE(89);
      if (lookahead == '_') ADVANCE(240);
      if (lookahead == 'd') ADVANCE(117);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(163);
      if (aux_sym_word_token1_character_set_2(lookahead)) ADVANCE(208);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == '.') ADVANCE(89);
      if (lookahead == '_') ADVANCE(240);
      if (lookahead == 'e') ADVANCE(162);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(163);
      if (aux_sym_word_token1_character_set_2(lookahead)) ADVANCE(208);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == '.') ADVANCE(89);
      if (lookahead == '_') ADVANCE(240);
      if (lookahead == 'e') ADVANCE(159);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(163);
      if (aux_sym_word_token1_character_set_2(lookahead)) ADVANCE(208);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == '.') ADVANCE(89);
      if (lookahead == '_') ADVANCE(240);
      if (lookahead == 'e') ADVANCE(161);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(164);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == '.') ADVANCE(89);
      if (lookahead == '_') ADVANCE(240);
      if (lookahead == 'e') ADVANCE(151);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(164);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == '.') ADVANCE(89);
      if (lookahead == '_') ADVANCE(240);
      if (lookahead == 'e') ADVANCE(152);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(163);
      if (aux_sym_word_token1_character_set_2(lookahead)) ADVANCE(208);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == '.') ADVANCE(89);
      if (lookahead == '_') ADVANCE(240);
      if (lookahead == 'e') ADVANCE(133);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(164);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == '.') ADVANCE(89);
      if (lookahead == '_') ADVANCE(240);
      if (lookahead == 'e') ADVANCE(110);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(163);
      if (aux_sym_word_token1_character_set_2(lookahead)) ADVANCE(208);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == '.') ADVANCE(89);
      if (lookahead == '_') ADVANCE(240);
      if (lookahead == 'e') ADVANCE(112);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(163);
      if (aux_sym_word_token1_character_set_2(lookahead)) ADVANCE(208);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == '.') ADVANCE(89);
      if (lookahead == '_') ADVANCE(240);
      if (lookahead == 'g') ADVANCE(155);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(163);
      if (aux_sym_word_token1_character_set_2(lookahead)) ADVANCE(208);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == '.') ADVANCE(89);
      if (lookahead == '_') ADVANCE(240);
      if (lookahead == 'g') ADVANCE(108);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(163);
      if (aux_sym_word_token1_character_set_2(lookahead)) ADVANCE(208);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == '.') ADVANCE(89);
      if (lookahead == '_') ADVANCE(240);
      if (lookahead == 'i') ADVANCE(156);
      if (lookahead == 't') ADVANCE(202);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(163);
      if (aux_sym_word_token1_character_set_2(lookahead)) ADVANCE(208);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == '.') ADVANCE(89);
      if (lookahead == '_') ADVANCE(240);
      if (lookahead == 'i') ADVANCE(146);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(163);
      if (aux_sym_word_token1_character_set_2(lookahead)) ADVANCE(208);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == '.') ADVANCE(89);
      if (lookahead == '_') ADVANCE(240);
      if (lookahead == 'l') ADVANCE(135);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(164);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == '.') ADVANCE(89);
      if (lookahead == '_') ADVANCE(240);
      if (lookahead == 'm') ADVANCE(134);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(163);
      if (aux_sym_word_token1_character_set_2(lookahead)) ADVANCE(208);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == '.') ADVANCE(89);
      if (lookahead == '_') ADVANCE(240);
      if (lookahead == 'n') ADVANCE(127);
      if (lookahead == 'p') ADVANCE(150);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(163);
      if (aux_sym_word_token1_character_set_2(lookahead)) ADVANCE(208);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == '.') ADVANCE(89);
      if (lookahead == '_') ADVANCE(240);
      if (lookahead == 'n') ADVANCE(128);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(164);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == '.') ADVANCE(89);
      if (lookahead == '_') ADVANCE(240);
      if (lookahead == 'n') ADVANCE(138);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(163);
      if (aux_sym_word_token1_character_set_2(lookahead)) ADVANCE(208);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == '.') ADVANCE(89);
      if (lookahead == '_') ADVANCE(240);
      if (lookahead == 'o') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(163);
      if (aux_sym_word_token1_character_set_2(lookahead)) ADVANCE(208);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == '.') ADVANCE(89);
      if (lookahead == '_') ADVANCE(240);
      if (lookahead == 'o') ADVANCE(158);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(164);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == '.') ADVANCE(89);
      if (lookahead == '_') ADVANCE(240);
      if (lookahead == 'o') ADVANCE(160);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(163);
      if (aux_sym_word_token1_character_set_2(lookahead)) ADVANCE(208);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == '.') ADVANCE(89);
      if (lookahead == '_') ADVANCE(240);
      if (lookahead == 'p') ADVANCE(103);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(163);
      if (aux_sym_word_token1_character_set_2(lookahead)) ADVANCE(208);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == '.') ADVANCE(89);
      if (lookahead == '_') ADVANCE(240);
      if (lookahead == 'p') ADVANCE(114);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(164);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == '.') ADVANCE(89);
      if (lookahead == '_') ADVANCE(240);
      if (lookahead == 'p') ADVANCE(125);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(163);
      if (aux_sym_word_token1_character_set_2(lookahead)) ADVANCE(208);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == '.') ADVANCE(89);
      if (lookahead == '_') ADVANCE(240);
      if (lookahead == 'r') ADVANCE(149);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(163);
      if (aux_sym_word_token1_character_set_2(lookahead)) ADVANCE(208);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == '.') ADVANCE(89);
      if (lookahead == '_') ADVANCE(240);
      if (lookahead == 'r') ADVANCE(153);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(163);
      if (aux_sym_word_token1_character_set_2(lookahead)) ADVANCE(208);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == '.') ADVANCE(89);
      if (lookahead == '_') ADVANCE(240);
      if (lookahead == 's') ADVANCE(119);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(163);
      if (aux_sym_word_token1_character_set_2(lookahead)) ADVANCE(208);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == '.') ADVANCE(89);
      if (lookahead == '_') ADVANCE(240);
      if (lookahead == 's') ADVANCE(137);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(163);
      if (aux_sym_word_token1_character_set_2(lookahead)) ADVANCE(208);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == '.') ADVANCE(89);
      if (lookahead == '_') ADVANCE(240);
      if (lookahead == 't') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(163);
      if (aux_sym_word_token1_character_set_2(lookahead)) ADVANCE(208);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == '.') ADVANCE(89);
      if (lookahead == '_') ADVANCE(240);
      if (lookahead == 't') ADVANCE(203);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(164);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == '.') ADVANCE(89);
      if (lookahead == '_') ADVANCE(240);
      if (lookahead == 't') ADVANCE(157);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(163);
      if (aux_sym_word_token1_character_set_2(lookahead)) ADVANCE(208);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == '.') ADVANCE(89);
      if (lookahead == '_') ADVANCE(240);
      if (lookahead == 't') ADVANCE(115);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(163);
      if (aux_sym_word_token1_character_set_2(lookahead)) ADVANCE(208);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == '.') ADVANCE(89);
      if (lookahead == '_') ADVANCE(240);
      if (lookahead == 'y') ADVANCE(106);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(164);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == '.') ADVANCE(89);
      if (lookahead == '_') ADVANCE(240);
      if (lookahead == 'y') ADVANCE(105);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(163);
      if (aux_sym_word_token1_character_set_2(lookahead)) ADVANCE(208);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == '.') ADVANCE(89);
      if (lookahead == '_') ADVANCE(240);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(163);
      if (aux_sym_word_token1_character_set_2(lookahead)) ADVANCE(208);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == '.') ADVANCE(89);
      if (lookahead == '_') ADVANCE(240);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(164);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'a') ADVANCE(170);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(196);
      if (aux_sym_word_token1_character_set_2(lookahead)) ADVANCE(208);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'a') ADVANCE(181);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(196);
      if (aux_sym_word_token1_character_set_2(lookahead)) ADVANCE(208);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'a') ADVANCE(189);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(196);
      if (aux_sym_word_token1_character_set_2(lookahead)) ADVANCE(208);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'a') ADVANCE(178);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(196);
      if (aux_sym_word_token1_character_set_2(lookahead)) ADVANCE(208);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'a') ADVANCE(171);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(196);
      if (aux_sym_word_token1_character_set_2(lookahead)) ADVANCE(208);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'c') ADVANCE(175);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(196);
      if (aux_sym_word_token1_character_set_2(lookahead)) ADVANCE(208);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'd') ADVANCE(118);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(196);
      if (aux_sym_word_token1_character_set_2(lookahead)) ADVANCE(208);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'e') ADVANCE(195);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(196);
      if (aux_sym_word_token1_character_set_2(lookahead)) ADVANCE(208);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'e') ADVANCE(193);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(196);
      if (aux_sym_word_token1_character_set_2(lookahead)) ADVANCE(208);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'e') ADVANCE(187);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(196);
      if (aux_sym_word_token1_character_set_2(lookahead)) ADVANCE(208);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'e') ADVANCE(111);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(196);
      if (aux_sym_word_token1_character_set_2(lookahead)) ADVANCE(208);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'e') ADVANCE(113);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(196);
      if (aux_sym_word_token1_character_set_2(lookahead)) ADVANCE(208);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'g') ADVANCE(190);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(196);
      if (aux_sym_word_token1_character_set_2(lookahead)) ADVANCE(208);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'g') ADVANCE(109);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(196);
      if (aux_sym_word_token1_character_set_2(lookahead)) ADVANCE(208);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'i') ADVANCE(191);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(196);
      if (aux_sym_word_token1_character_set_2(lookahead)) ADVANCE(208);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'i') ADVANCE(182);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(196);
      if (aux_sym_word_token1_character_set_2(lookahead)) ADVANCE(208);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'm') ADVANCE(174);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(196);
      if (aux_sym_word_token1_character_set_2(lookahead)) ADVANCE(208);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'n') ADVANCE(177);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(196);
      if (aux_sym_word_token1_character_set_2(lookahead)) ADVANCE(208);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'o') ADVANCE(179);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(196);
      if (aux_sym_word_token1_character_set_2(lookahead)) ADVANCE(208);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'o') ADVANCE(194);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(196);
      if (aux_sym_word_token1_character_set_2(lookahead)) ADVANCE(208);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'p') ADVANCE(104);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(196);
      if (aux_sym_word_token1_character_set_2(lookahead)) ADVANCE(208);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'p') ADVANCE(185);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(196);
      if (aux_sym_word_token1_character_set_2(lookahead)) ADVANCE(208);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'p') ADVANCE(169);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(196);
      if (aux_sym_word_token1_character_set_2(lookahead)) ADVANCE(208);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'r') ADVANCE(184);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(196);
      if (aux_sym_word_token1_character_set_2(lookahead)) ADVANCE(208);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'r') ADVANCE(188);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(196);
      if (aux_sym_word_token1_character_set_2(lookahead)) ADVANCE(208);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 's') ADVANCE(120);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(196);
      if (aux_sym_word_token1_character_set_2(lookahead)) ADVANCE(208);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 's') ADVANCE(176);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(196);
      if (aux_sym_word_token1_character_set_2(lookahead)) ADVANCE(208);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 't') ADVANCE(180);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(196);
      if (aux_sym_word_token1_character_set_2(lookahead)) ADVANCE(208);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 't') ADVANCE(192);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(196);
      if (aux_sym_word_token1_character_set_2(lookahead)) ADVANCE(208);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 't') ADVANCE(116);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(196);
      if (aux_sym_word_token1_character_set_2(lookahead)) ADVANCE(208);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'y') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(196);
      if (aux_sym_word_token1_character_set_2(lookahead)) ADVANCE(208);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(196);
      if (aux_sym_word_token1_character_set_2(lookahead)) ADVANCE(208);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(anon_sym_and);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(anon_sym_and);
      if (lookahead == '.') ADVANCE(89);
      if (lookahead == '_') ADVANCE(240);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(163);
      if (aux_sym_word_token1_character_set_2(lookahead)) ADVANCE(208);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(anon_sym_and);
      if (lookahead == '.') ADVANCE(89);
      if (lookahead == '_') ADVANCE(240);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(164);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(anon_sym_not);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(anon_sym_not);
      if (lookahead == '.') ADVANCE(89);
      if (lookahead == '_') ADVANCE(240);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(163);
      if (aux_sym_word_token1_character_set_2(lookahead)) ADVANCE(208);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(anon_sym_not);
      if (lookahead == '.') ADVANCE(89);
      if (lookahead == '_') ADVANCE(240);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(164);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(sym_start_anchor);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(sym_end_anchor);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (aux_sym_word_token1_character_set_3(lookahead)) ADVANCE(208);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      if (lookahead == '{') ADVANCE(256);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      if (lookahead == '}') ADVANCE(257);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(anon_sym_app_LPAREN);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(anon_sym_face_LPAREN);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(anon_sym_gamepad_LPAREN);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(anon_sym_noise_LPAREN);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(anon_sym_parrot_LPAREN);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(sym_settings_binding);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(sym_tag_binding);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(anon_sym_or);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(anon_sym_key_LPAREN);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(anon_sym_sleep_LPAREN);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(aux_sym__implicit_string_argument_token1);
      if (lookahead == '\n') ADVANCE(236);
      if (lookahead == '\r') ADVANCE(235);
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(237);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(aux_sym__implicit_string_argument_token1);
      if (lookahead == '\n') ADVANCE(236);
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(237);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(aux_sym__implicit_string_argument_token1);
      if (lookahead == '#') ADVANCE(100);
      if (lookahead == '\\') ADVANCE(234);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) ADVANCE(236);
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(237);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(aux_sym__implicit_string_argument_token1);
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(237);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(anon_sym_LPAREN2);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(89);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(240);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(sym_integer);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(251);
      if (lookahead == '_') ADVANCE(244);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(72);
      if (lookahead == 'J' ||
          lookahead == 'L' ||
          lookahead == 'j' ||
          lookahead == 'l') ADVANCE(241);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(242);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(251);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(33);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(34);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(35);
      if (lookahead == '_') ADVANCE(244);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(72);
      if (lookahead == 'J' ||
          lookahead == 'L' ||
          lookahead == 'j' ||
          lookahead == 'l') ADVANCE(241);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(242);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(251);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(72);
      if (lookahead == 'J' ||
          lookahead == 'L' ||
          lookahead == 'j' ||
          lookahead == 'l') ADVANCE(241);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(242);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '_') ADVANCE(73);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(241);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(245);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '_') ADVANCE(75);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(241);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(246);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '_') ADVANCE(80);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(241);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(247);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(sym_float);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == '_') ADVANCE(251);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(72);
      if (lookahead == 'J' ||
          lookahead == 'L' ||
          lookahead == 'j' ||
          lookahead == 'l') ADVANCE(248);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(249);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == '_') ADVANCE(252);
      if (lookahead == 'J' ||
          lookahead == 'L' ||
          lookahead == 'j' ||
          lookahead == 'l') ADVANCE(248);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(250);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(72);
      if (lookahead == 'J' ||
          lookahead == 'L' ||
          lookahead == 'j' ||
          lookahead == 'l') ADVANCE(248);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(249);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == 'J' ||
          lookahead == 'L' ||
          lookahead == 'j' ||
          lookahead == 'l') ADVANCE(248);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(250);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(sym_implicit_string);
      if (lookahead == '\r') ADVANCE(13);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(74);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(255);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(sym_implicit_string);
      if (lookahead == '#') ADVANCE(101);
      if (lookahead == '\\') ADVANCE(253);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(12);
      if (lookahead == '\f' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) ADVANCE(254);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(255);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(sym_implicit_string);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(74);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(255);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(anon_sym_LBRACE_LBRACE);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(anon_sym_RBRACE_RBRACE);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(sym_string_escape_sequence);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(sym_string_escape_sequence);
      if (lookahead == '\\') ADVANCE(260);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(sym__not_escapesequence);
      if (lookahead == '\n') ADVANCE(259);
      if (lookahead == '\r') ADVANCE(1);
      if (sym_string_escape_sequence_character_set_1(lookahead)) ADVANCE(258);
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
  [1] = {.lex_state = 97, .external_lex_state = 2},
  [2] = {.lex_state = 98, .external_lex_state = 2},
  [3] = {.lex_state = 98, .external_lex_state = 2},
  [4] = {.lex_state = 98, .external_lex_state = 2},
  [5] = {.lex_state = 18, .external_lex_state = 3},
  [6] = {.lex_state = 17, .external_lex_state = 4},
  [7] = {.lex_state = 17, .external_lex_state = 4},
  [8] = {.lex_state = 17, .external_lex_state = 5},
  [9] = {.lex_state = 17, .external_lex_state = 5},
  [10] = {.lex_state = 17, .external_lex_state = 5},
  [11] = {.lex_state = 17, .external_lex_state = 5},
  [12] = {.lex_state = 17, .external_lex_state = 5},
  [13] = {.lex_state = 17, .external_lex_state = 5},
  [14] = {.lex_state = 17, .external_lex_state = 5},
  [15] = {.lex_state = 17, .external_lex_state = 5},
  [16] = {.lex_state = 17, .external_lex_state = 4},
  [17] = {.lex_state = 14, .external_lex_state = 2},
  [18] = {.lex_state = 17, .external_lex_state = 6},
  [19] = {.lex_state = 17, .external_lex_state = 6},
  [20] = {.lex_state = 14, .external_lex_state = 2},
  [21] = {.lex_state = 14, .external_lex_state = 2},
  [22] = {.lex_state = 17, .external_lex_state = 6},
  [23] = {.lex_state = 14, .external_lex_state = 2},
  [24] = {.lex_state = 14, .external_lex_state = 2},
  [25] = {.lex_state = 17, .external_lex_state = 6},
  [26] = {.lex_state = 17, .external_lex_state = 6},
  [27] = {.lex_state = 17, .external_lex_state = 6},
  [28] = {.lex_state = 17, .external_lex_state = 6},
  [29] = {.lex_state = 17, .external_lex_state = 6},
  [30] = {.lex_state = 17, .external_lex_state = 6},
  [31] = {.lex_state = 17, .external_lex_state = 6},
  [32] = {.lex_state = 17, .external_lex_state = 6},
  [33] = {.lex_state = 17, .external_lex_state = 6},
  [34] = {.lex_state = 17, .external_lex_state = 6},
  [35] = {.lex_state = 17, .external_lex_state = 6},
  [36] = {.lex_state = 17, .external_lex_state = 6},
  [37] = {.lex_state = 17, .external_lex_state = 6},
  [38] = {.lex_state = 17, .external_lex_state = 6},
  [39] = {.lex_state = 17, .external_lex_state = 6},
  [40] = {.lex_state = 17, .external_lex_state = 6},
  [41] = {.lex_state = 14, .external_lex_state = 2},
  [42] = {.lex_state = 98, .external_lex_state = 2},
  [43] = {.lex_state = 98, .external_lex_state = 2},
  [44] = {.lex_state = 98, .external_lex_state = 2},
  [45] = {.lex_state = 98, .external_lex_state = 2},
  [46] = {.lex_state = 98, .external_lex_state = 2},
  [47] = {.lex_state = 98, .external_lex_state = 2},
  [48] = {.lex_state = 98, .external_lex_state = 2},
  [49] = {.lex_state = 98, .external_lex_state = 2},
  [50] = {.lex_state = 98, .external_lex_state = 2},
  [51] = {.lex_state = 98, .external_lex_state = 2},
  [52] = {.lex_state = 98, .external_lex_state = 2},
  [53] = {.lex_state = 14, .external_lex_state = 2},
  [54] = {.lex_state = 98, .external_lex_state = 2},
  [55] = {.lex_state = 98, .external_lex_state = 2},
  [56] = {.lex_state = 98, .external_lex_state = 2},
  [57] = {.lex_state = 98, .external_lex_state = 2},
  [58] = {.lex_state = 98, .external_lex_state = 2},
  [59] = {.lex_state = 98, .external_lex_state = 2},
  [60] = {.lex_state = 98, .external_lex_state = 2},
  [61] = {.lex_state = 98, .external_lex_state = 2},
  [62] = {.lex_state = 14, .external_lex_state = 2},
  [63] = {.lex_state = 14, .external_lex_state = 2},
  [64] = {.lex_state = 14, .external_lex_state = 2},
  [65] = {.lex_state = 14, .external_lex_state = 2},
  [66] = {.lex_state = 14, .external_lex_state = 2},
  [67] = {.lex_state = 14, .external_lex_state = 2},
  [68] = {.lex_state = 14, .external_lex_state = 2},
  [69] = {.lex_state = 14, .external_lex_state = 2},
  [70] = {.lex_state = 18, .external_lex_state = 7},
  [71] = {.lex_state = 18, .external_lex_state = 7},
  [72] = {.lex_state = 15, .external_lex_state = 2},
  [73] = {.lex_state = 18, .external_lex_state = 7},
  [74] = {.lex_state = 18, .external_lex_state = 7},
  [75] = {.lex_state = 18, .external_lex_state = 7},
  [76] = {.lex_state = 14, .external_lex_state = 2},
  [77] = {.lex_state = 15, .external_lex_state = 2},
  [78] = {.lex_state = 17, .external_lex_state = 4},
  [79] = {.lex_state = 15, .external_lex_state = 8},
  [80] = {.lex_state = 19, .external_lex_state = 2},
  [81] = {.lex_state = 17, .external_lex_state = 4},
  [82] = {.lex_state = 17, .external_lex_state = 4},
  [83] = {.lex_state = 15, .external_lex_state = 2},
  [84] = {.lex_state = 15, .external_lex_state = 8},
  [85] = {.lex_state = 19, .external_lex_state = 2},
  [86] = {.lex_state = 15, .external_lex_state = 2},
  [87] = {.lex_state = 0, .external_lex_state = 2},
  [88] = {.lex_state = 0, .external_lex_state = 2},
  [89] = {.lex_state = 15, .external_lex_state = 2},
  [90] = {.lex_state = 15, .external_lex_state = 2},
  [91] = {.lex_state = 15, .external_lex_state = 2},
  [92] = {.lex_state = 15, .external_lex_state = 8},
  [93] = {.lex_state = 15, .external_lex_state = 2},
  [94] = {.lex_state = 15, .external_lex_state = 2},
  [95] = {.lex_state = 15, .external_lex_state = 2},
  [96] = {.lex_state = 15, .external_lex_state = 2},
  [97] = {.lex_state = 15, .external_lex_state = 2},
  [98] = {.lex_state = 15, .external_lex_state = 2},
  [99] = {.lex_state = 15, .external_lex_state = 2},
  [100] = {.lex_state = 15, .external_lex_state = 2},
  [101] = {.lex_state = 15, .external_lex_state = 2},
  [102] = {.lex_state = 15, .external_lex_state = 2},
  [103] = {.lex_state = 15, .external_lex_state = 8},
  [104] = {.lex_state = 0, .external_lex_state = 2},
  [105] = {.lex_state = 18, .external_lex_state = 7},
  [106] = {.lex_state = 18, .external_lex_state = 7},
  [107] = {.lex_state = 18, .external_lex_state = 7},
  [108] = {.lex_state = 0, .external_lex_state = 8},
  [109] = {.lex_state = 0, .external_lex_state = 8},
  [110] = {.lex_state = 0, .external_lex_state = 8},
  [111] = {.lex_state = 0, .external_lex_state = 8},
  [112] = {.lex_state = 0, .external_lex_state = 8},
  [113] = {.lex_state = 0, .external_lex_state = 8},
  [114] = {.lex_state = 19, .external_lex_state = 2},
  [115] = {.lex_state = 0, .external_lex_state = 8},
  [116] = {.lex_state = 0, .external_lex_state = 8},
  [117] = {.lex_state = 0, .external_lex_state = 8},
  [118] = {.lex_state = 0, .external_lex_state = 8},
  [119] = {.lex_state = 0, .external_lex_state = 2},
  [120] = {.lex_state = 0, .external_lex_state = 2},
  [121] = {.lex_state = 0, .external_lex_state = 8},
  [122] = {.lex_state = 0, .external_lex_state = 8},
  [123] = {.lex_state = 0, .external_lex_state = 8},
  [124] = {.lex_state = 15, .external_lex_state = 2},
  [125] = {.lex_state = 0, .external_lex_state = 8},
  [126] = {.lex_state = 0, .external_lex_state = 8},
  [127] = {.lex_state = 0, .external_lex_state = 8},
  [128] = {.lex_state = 0, .external_lex_state = 8},
  [129] = {.lex_state = 0, .external_lex_state = 8},
  [130] = {.lex_state = 0, .external_lex_state = 8},
  [131] = {.lex_state = 19, .external_lex_state = 2},
  [132] = {.lex_state = 19, .external_lex_state = 2},
  [133] = {.lex_state = 19, .external_lex_state = 2},
  [134] = {.lex_state = 0, .external_lex_state = 2},
  [135] = {.lex_state = 0, .external_lex_state = 2},
  [136] = {.lex_state = 0, .external_lex_state = 2},
  [137] = {.lex_state = 0, .external_lex_state = 2},
  [138] = {.lex_state = 0, .external_lex_state = 2},
  [139] = {.lex_state = 0, .external_lex_state = 2},
  [140] = {.lex_state = 19, .external_lex_state = 2},
  [141] = {.lex_state = 0, .external_lex_state = 2},
  [142] = {.lex_state = 0, .external_lex_state = 2},
  [143] = {.lex_state = 0, .external_lex_state = 2},
  [144] = {.lex_state = 20, .external_lex_state = 2},
  [145] = {.lex_state = 0, .external_lex_state = 2},
  [146] = {.lex_state = 20, .external_lex_state = 2},
  [147] = {.lex_state = 0, .external_lex_state = 2},
  [148] = {.lex_state = 20, .external_lex_state = 2},
  [149] = {.lex_state = 236, .external_lex_state = 2},
  [150] = {.lex_state = 236, .external_lex_state = 2},
  [151] = {.lex_state = 236, .external_lex_state = 2},
  [152] = {.lex_state = 236, .external_lex_state = 2},
  [153] = {.lex_state = 236, .external_lex_state = 2},
  [154] = {.lex_state = 236, .external_lex_state = 2},
  [155] = {.lex_state = 236, .external_lex_state = 2},
  [156] = {.lex_state = 236, .external_lex_state = 2},
  [157] = {.lex_state = 236, .external_lex_state = 2},
  [158] = {.lex_state = 0, .external_lex_state = 8},
  [159] = {.lex_state = 0, .external_lex_state = 2},
  [160] = {.lex_state = 0, .external_lex_state = 2},
  [161] = {.lex_state = 0, .external_lex_state = 2},
  [162] = {.lex_state = 0, .external_lex_state = 2},
  [163] = {.lex_state = 0, .external_lex_state = 2},
  [164] = {.lex_state = 97, .external_lex_state = 2},
  [165] = {.lex_state = 0, .external_lex_state = 2},
  [166] = {.lex_state = 0, .external_lex_state = 8},
  [167] = {.lex_state = 0, .external_lex_state = 2},
  [168] = {.lex_state = 0, .external_lex_state = 2},
  [169] = {.lex_state = 0, .external_lex_state = 2},
  [170] = {.lex_state = 0, .external_lex_state = 2},
  [171] = {.lex_state = 0, .external_lex_state = 2},
  [172] = {.lex_state = 0, .external_lex_state = 2},
  [173] = {.lex_state = 0, .external_lex_state = 2},
  [174] = {.lex_state = 0, .external_lex_state = 2},
  [175] = {.lex_state = 0, .external_lex_state = 2},
  [176] = {.lex_state = 0, .external_lex_state = 2},
  [177] = {.lex_state = 0, .external_lex_state = 2},
  [178] = {.lex_state = 0, .external_lex_state = 2},
  [179] = {.lex_state = 0, .external_lex_state = 2},
  [180] = {.lex_state = 0, .external_lex_state = 2},
  [181] = {.lex_state = 0, .external_lex_state = 2},
  [182] = {.lex_state = 0, .external_lex_state = 2},
  [183] = {.lex_state = 0, .external_lex_state = 2},
  [184] = {.lex_state = 0, .external_lex_state = 2},
  [185] = {.lex_state = 0, .external_lex_state = 2},
  [186] = {.lex_state = 21, .external_lex_state = 2},
  [187] = {.lex_state = 0, .external_lex_state = 2},
  [188] = {.lex_state = 0, .external_lex_state = 8},
  [189] = {.lex_state = 0, .external_lex_state = 2},
  [190] = {.lex_state = 0, .external_lex_state = 2},
  [191] = {.lex_state = 21, .external_lex_state = 2},
  [192] = {.lex_state = 0, .external_lex_state = 2},
  [193] = {.lex_state = 0, .external_lex_state = 2},
  [194] = {.lex_state = 0, .external_lex_state = 2},
  [195] = {.lex_state = 0, .external_lex_state = 2},
  [196] = {.lex_state = 0, .external_lex_state = 2},
  [197] = {.lex_state = 0, .external_lex_state = 2},
  [198] = {.lex_state = 0, .external_lex_state = 8},
  [199] = {.lex_state = 0, .external_lex_state = 8},
};

enum {
  ts_external_token__newline = 0,
  ts_external_token__indent = 1,
  ts_external_token__dedent = 2,
  ts_external_token__string_start = 3,
  ts_external_token_string_content = 4,
  ts_external_token__string_end = 5,
  ts_external_token_comment = 6,
};

static const TSSymbol ts_external_scanner_symbol_map[EXTERNAL_TOKEN_COUNT] = {
  [ts_external_token__newline] = sym__newline,
  [ts_external_token__indent] = sym__indent,
  [ts_external_token__dedent] = sym__dedent,
  [ts_external_token__string_start] = sym__string_start,
  [ts_external_token_string_content] = sym_string_content,
  [ts_external_token__string_end] = sym__string_end,
  [ts_external_token_comment] = sym_comment,
};

static const bool ts_external_scanner_states[9][EXTERNAL_TOKEN_COUNT] = {
  [1] = {
    [ts_external_token__newline] = true,
    [ts_external_token__indent] = true,
    [ts_external_token__dedent] = true,
    [ts_external_token__string_start] = true,
    [ts_external_token_string_content] = true,
    [ts_external_token__string_end] = true,
    [ts_external_token_comment] = true,
  },
  [2] = {
    [ts_external_token_comment] = true,
  },
  [3] = {
    [ts_external_token__string_start] = true,
    [ts_external_token_string_content] = true,
    [ts_external_token__string_end] = true,
    [ts_external_token_comment] = true,
  },
  [4] = {
    [ts_external_token__dedent] = true,
    [ts_external_token__string_start] = true,
    [ts_external_token_comment] = true,
  },
  [5] = {
    [ts_external_token__indent] = true,
    [ts_external_token__string_start] = true,
    [ts_external_token_comment] = true,
  },
  [6] = {
    [ts_external_token__string_start] = true,
    [ts_external_token_comment] = true,
  },
  [7] = {
    [ts_external_token_string_content] = true,
    [ts_external_token__string_end] = true,
    [ts_external_token_comment] = true,
  },
  [8] = {
    [ts_external_token__newline] = true,
    [ts_external_token_comment] = true,
  },
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
    [anon_sym_DASH] = ACTIONS(1),
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
    [sym__newline] = ACTIONS(1),
    [sym__indent] = ACTIONS(1),
    [sym__dedent] = ACTIONS(1),
    [sym__string_start] = ACTIONS(1),
    [sym_string_content] = ACTIONS(1),
    [sym__string_end] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(179),
    [sym_matches] = STATE(2),
    [sym_match_modifier] = STATE(114),
    [sym_match] = STATE(85),
    [sym_declarations] = STATE(178),
    [sym_declaration] = STATE(3),
    [sym_command_declaration] = STATE(42),
    [sym_app_declaration] = STATE(42),
    [sym_face_declaration] = STATE(42),
    [sym_gamepad_declaration] = STATE(42),
    [sym_noise_declaration] = STATE(42),
    [sym_parrot_declaration] = STATE(42),
    [sym_tag_import_declaration] = STATE(42),
    [sym_key_binding_declaration] = STATE(42),
    [sym_settings_declaration] = STATE(42),
    [sym_rule] = STATE(177),
    [sym__optional_choice] = STATE(176),
    [sym_choice] = STATE(176),
    [sym__optional_anchor] = STATE(137),
    [sym__optional_seq] = STATE(138),
    [sym_seq] = STATE(138),
    [sym__primary_rule] = STATE(17),
    [sym_word] = STATE(17),
    [sym_list] = STATE(17),
    [sym_capture] = STATE(17),
    [sym_optional] = STATE(17),
    [sym_repeat] = STATE(17),
    [sym_repeat1] = STATE(17),
    [sym_parenthesized_rule] = STATE(17),
    [sym_app_binding] = STATE(173),
    [sym_face_binding] = STATE(172),
    [sym_gamepad_binding] = STATE(171),
    [sym_noise_binding] = STATE(170),
    [sym_parrot_binding] = STATE(169),
    [sym_key_action] = STATE(168),
    [sym_identifier] = STATE(167),
    [aux_sym_matches_repeat1] = STATE(85),
    [aux_sym_match_repeat1] = STATE(114),
    [aux_sym_declarations_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym__simple_identifier] = ACTIONS(7),
    [anon_sym_DASH] = ACTIONS(9),
    [anon_sym_and] = ACTIONS(11),
    [anon_sym_not] = ACTIONS(11),
    [sym_start_anchor] = ACTIONS(13),
    [aux_sym_word_token1] = ACTIONS(15),
    [anon_sym_LBRACE] = ACTIONS(17),
    [anon_sym_LT] = ACTIONS(19),
    [anon_sym_LBRACK] = ACTIONS(21),
    [anon_sym_LPAREN] = ACTIONS(23),
    [anon_sym_app_LPAREN] = ACTIONS(25),
    [anon_sym_face_LPAREN] = ACTIONS(27),
    [anon_sym_gamepad_LPAREN] = ACTIONS(29),
    [anon_sym_noise_LPAREN] = ACTIONS(31),
    [anon_sym_parrot_LPAREN] = ACTIONS(33),
    [sym_settings_binding] = ACTIONS(35),
    [sym_tag_binding] = ACTIONS(37),
    [anon_sym_key_LPAREN] = ACTIONS(39),
    [aux_sym_identifier_token1] = ACTIONS(41),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 30,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      sym_start_anchor,
    ACTIONS(17), 1,
      anon_sym_LBRACE,
    ACTIONS(19), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      anon_sym_app_LPAREN,
    ACTIONS(27), 1,
      anon_sym_face_LPAREN,
    ACTIONS(29), 1,
      anon_sym_gamepad_LPAREN,
    ACTIONS(31), 1,
      anon_sym_noise_LPAREN,
    ACTIONS(33), 1,
      anon_sym_parrot_LPAREN,
    ACTIONS(35), 1,
      sym_settings_binding,
    ACTIONS(37), 1,
      sym_tag_binding,
    ACTIONS(39), 1,
      anon_sym_key_LPAREN,
    ACTIONS(43), 1,
      ts_builtin_sym_end,
    STATE(137), 1,
      sym__optional_anchor,
    STATE(168), 1,
      sym_key_action,
    STATE(169), 1,
      sym_parrot_binding,
    STATE(170), 1,
      sym_noise_binding,
    STATE(171), 1,
      sym_gamepad_binding,
    STATE(172), 1,
      sym_face_binding,
    STATE(173), 1,
      sym_app_binding,
    STATE(177), 1,
      sym_rule,
    STATE(184), 1,
      sym_declarations,
    ACTIONS(15), 2,
      sym__simple_identifier,
      aux_sym_word_token1,
    STATE(3), 2,
      sym_declaration,
      aux_sym_declarations_repeat1,
    STATE(138), 2,
      sym__optional_seq,
      sym_seq,
    STATE(176), 2,
      sym__optional_choice,
      sym_choice,
    STATE(17), 8,
      sym__primary_rule,
      sym_word,
      sym_list,
      sym_capture,
      sym_optional,
      sym_repeat,
      sym_repeat1,
      sym_parenthesized_rule,
    STATE(42), 9,
      sym_command_declaration,
      sym_app_declaration,
      sym_face_declaration,
      sym_gamepad_declaration,
      sym_noise_declaration,
      sym_parrot_declaration,
      sym_tag_import_declaration,
      sym_key_binding_declaration,
      sym_settings_declaration,
  [110] = 29,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      sym_start_anchor,
    ACTIONS(17), 1,
      anon_sym_LBRACE,
    ACTIONS(19), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      anon_sym_app_LPAREN,
    ACTIONS(27), 1,
      anon_sym_face_LPAREN,
    ACTIONS(29), 1,
      anon_sym_gamepad_LPAREN,
    ACTIONS(31), 1,
      anon_sym_noise_LPAREN,
    ACTIONS(33), 1,
      anon_sym_parrot_LPAREN,
    ACTIONS(35), 1,
      sym_settings_binding,
    ACTIONS(37), 1,
      sym_tag_binding,
    ACTIONS(39), 1,
      anon_sym_key_LPAREN,
    ACTIONS(45), 1,
      ts_builtin_sym_end,
    STATE(137), 1,
      sym__optional_anchor,
    STATE(168), 1,
      sym_key_action,
    STATE(169), 1,
      sym_parrot_binding,
    STATE(170), 1,
      sym_noise_binding,
    STATE(171), 1,
      sym_gamepad_binding,
    STATE(172), 1,
      sym_face_binding,
    STATE(173), 1,
      sym_app_binding,
    STATE(177), 1,
      sym_rule,
    ACTIONS(15), 2,
      sym__simple_identifier,
      aux_sym_word_token1,
    STATE(4), 2,
      sym_declaration,
      aux_sym_declarations_repeat1,
    STATE(138), 2,
      sym__optional_seq,
      sym_seq,
    STATE(176), 2,
      sym__optional_choice,
      sym_choice,
    STATE(17), 8,
      sym__primary_rule,
      sym_word,
      sym_list,
      sym_capture,
      sym_optional,
      sym_repeat,
      sym_repeat1,
      sym_parenthesized_rule,
    STATE(42), 9,
      sym_command_declaration,
      sym_app_declaration,
      sym_face_declaration,
      sym_gamepad_declaration,
      sym_noise_declaration,
      sym_parrot_declaration,
      sym_tag_import_declaration,
      sym_key_binding_declaration,
      sym_settings_declaration,
  [217] = 29,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(47), 1,
      ts_builtin_sym_end,
    ACTIONS(52), 1,
      sym_start_anchor,
    ACTIONS(55), 1,
      anon_sym_LBRACE,
    ACTIONS(58), 1,
      anon_sym_LT,
    ACTIONS(61), 1,
      anon_sym_LBRACK,
    ACTIONS(64), 1,
      anon_sym_LPAREN,
    ACTIONS(67), 1,
      anon_sym_app_LPAREN,
    ACTIONS(70), 1,
      anon_sym_face_LPAREN,
    ACTIONS(73), 1,
      anon_sym_gamepad_LPAREN,
    ACTIONS(76), 1,
      anon_sym_noise_LPAREN,
    ACTIONS(79), 1,
      anon_sym_parrot_LPAREN,
    ACTIONS(82), 1,
      sym_settings_binding,
    ACTIONS(85), 1,
      sym_tag_binding,
    ACTIONS(88), 1,
      anon_sym_key_LPAREN,
    STATE(137), 1,
      sym__optional_anchor,
    STATE(168), 1,
      sym_key_action,
    STATE(169), 1,
      sym_parrot_binding,
    STATE(170), 1,
      sym_noise_binding,
    STATE(171), 1,
      sym_gamepad_binding,
    STATE(172), 1,
      sym_face_binding,
    STATE(173), 1,
      sym_app_binding,
    STATE(177), 1,
      sym_rule,
    ACTIONS(49), 2,
      sym__simple_identifier,
      aux_sym_word_token1,
    STATE(4), 2,
      sym_declaration,
      aux_sym_declarations_repeat1,
    STATE(138), 2,
      sym__optional_seq,
      sym_seq,
    STATE(176), 2,
      sym__optional_choice,
      sym_choice,
    STATE(17), 8,
      sym__primary_rule,
      sym_word,
      sym_list,
      sym_capture,
      sym_optional,
      sym_repeat,
      sym_repeat1,
      sym_parenthesized_rule,
    STATE(42), 9,
      sym_command_declaration,
      sym_app_declaration,
      sym_face_declaration,
      sym_gamepad_declaration,
      sym_noise_declaration,
      sym_parrot_declaration,
      sym_tag_import_declaration,
      sym_key_binding_declaration,
      sym_settings_declaration,
  [324] = 13,
    ACTIONS(91), 1,
      sym_comment,
    ACTIONS(93), 1,
      anon_sym_DASH,
    ACTIONS(97), 1,
      anon_sym_LPAREN,
    ACTIONS(99), 1,
      anon_sym_key_LPAREN,
    ACTIONS(101), 1,
      anon_sym_sleep_LPAREN,
    ACTIONS(105), 1,
      sym__string_start,
    STATE(77), 1,
      sym_identifier,
    STATE(124), 1,
      sym_expression,
    ACTIONS(41), 2,
      sym__simple_identifier,
      aux_sym_identifier_token1,
    ACTIONS(103), 2,
      sym_integer,
      sym_float,
    ACTIONS(107), 2,
      sym_string_content,
      sym__string_end,
    ACTIONS(95), 6,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACE_LBRACE,
      anon_sym_RBRACE_RBRACE,
      sym_string_escape_sequence,
      sym__not_escapesequence,
    STATE(102), 8,
      sym_variable,
      sym_parenthesized_expression,
      sym_binary_operator,
      sym_unary_operator,
      sym_key_action,
      sym_sleep_action,
      sym_action,
      sym_string,
  [379] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(111), 1,
      anon_sym_DASH,
    ACTIONS(113), 1,
      anon_sym_LPAREN,
    ACTIONS(115), 1,
      anon_sym_key_LPAREN,
    ACTIONS(117), 1,
      anon_sym_sleep_LPAREN,
    ACTIONS(119), 1,
      sym_integer,
    ACTIONS(121), 1,
      sym_float,
    ACTIONS(123), 1,
      sym__dedent,
    ACTIONS(125), 1,
      sym__string_start,
    STATE(51), 1,
      sym_block,
    STATE(79), 1,
      sym_identifier,
    STATE(125), 1,
      sym_expression,
    ACTIONS(109), 2,
      sym__simple_identifier,
      aux_sym_identifier_token1,
    STATE(7), 2,
      sym_statement,
      aux_sym_block_repeat1,
    STATE(78), 2,
      sym_assignment_statement,
      sym_expression_statement,
    STATE(117), 8,
      sym_variable,
      sym_parenthesized_expression,
      sym_binary_operator,
      sym_unary_operator,
      sym_key_action,
      sym_sleep_action,
      sym_action,
      sym_string,
  [438] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(111), 1,
      anon_sym_DASH,
    ACTIONS(113), 1,
      anon_sym_LPAREN,
    ACTIONS(115), 1,
      anon_sym_key_LPAREN,
    ACTIONS(117), 1,
      anon_sym_sleep_LPAREN,
    ACTIONS(119), 1,
      sym_integer,
    ACTIONS(121), 1,
      sym_float,
    ACTIONS(125), 1,
      sym__string_start,
    ACTIONS(127), 1,
      sym__dedent,
    STATE(79), 1,
      sym_identifier,
    STATE(125), 1,
      sym_expression,
    ACTIONS(109), 2,
      sym__simple_identifier,
      aux_sym_identifier_token1,
    STATE(16), 2,
      sym_statement,
      aux_sym_block_repeat1,
    STATE(78), 2,
      sym_assignment_statement,
      sym_expression_statement,
    STATE(117), 8,
      sym_variable,
      sym_parenthesized_expression,
      sym_binary_operator,
      sym_unary_operator,
      sym_key_action,
      sym_sleep_action,
      sym_action,
      sym_string,
  [494] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(111), 1,
      anon_sym_DASH,
    ACTIONS(113), 1,
      anon_sym_LPAREN,
    ACTIONS(115), 1,
      anon_sym_key_LPAREN,
    ACTIONS(117), 1,
      anon_sym_sleep_LPAREN,
    ACTIONS(119), 1,
      sym_integer,
    ACTIONS(121), 1,
      sym_float,
    ACTIONS(125), 1,
      sym__string_start,
    ACTIONS(129), 1,
      sym__indent,
    STATE(57), 1,
      sym_statement,
    STATE(58), 1,
      sym__statements,
    STATE(84), 1,
      sym_identifier,
    STATE(116), 1,
      sym_expression,
    ACTIONS(109), 2,
      sym__simple_identifier,
      aux_sym_identifier_token1,
    STATE(56), 2,
      sym_assignment_statement,
      sym_expression_statement,
    STATE(117), 8,
      sym_variable,
      sym_parenthesized_expression,
      sym_binary_operator,
      sym_unary_operator,
      sym_key_action,
      sym_sleep_action,
      sym_action,
      sym_string,
  [552] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(111), 1,
      anon_sym_DASH,
    ACTIONS(113), 1,
      anon_sym_LPAREN,
    ACTIONS(115), 1,
      anon_sym_key_LPAREN,
    ACTIONS(117), 1,
      anon_sym_sleep_LPAREN,
    ACTIONS(119), 1,
      sym_integer,
    ACTIONS(121), 1,
      sym_float,
    ACTIONS(125), 1,
      sym__string_start,
    ACTIONS(129), 1,
      sym__indent,
    STATE(54), 1,
      sym__statements,
    STATE(57), 1,
      sym_statement,
    STATE(84), 1,
      sym_identifier,
    STATE(116), 1,
      sym_expression,
    ACTIONS(109), 2,
      sym__simple_identifier,
      aux_sym_identifier_token1,
    STATE(56), 2,
      sym_assignment_statement,
      sym_expression_statement,
    STATE(117), 8,
      sym_variable,
      sym_parenthesized_expression,
      sym_binary_operator,
      sym_unary_operator,
      sym_key_action,
      sym_sleep_action,
      sym_action,
      sym_string,
  [610] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(111), 1,
      anon_sym_DASH,
    ACTIONS(113), 1,
      anon_sym_LPAREN,
    ACTIONS(115), 1,
      anon_sym_key_LPAREN,
    ACTIONS(117), 1,
      anon_sym_sleep_LPAREN,
    ACTIONS(119), 1,
      sym_integer,
    ACTIONS(121), 1,
      sym_float,
    ACTIONS(125), 1,
      sym__string_start,
    ACTIONS(129), 1,
      sym__indent,
    STATE(50), 1,
      sym__statements,
    STATE(57), 1,
      sym_statement,
    STATE(84), 1,
      sym_identifier,
    STATE(116), 1,
      sym_expression,
    ACTIONS(109), 2,
      sym__simple_identifier,
      aux_sym_identifier_token1,
    STATE(56), 2,
      sym_assignment_statement,
      sym_expression_statement,
    STATE(117), 8,
      sym_variable,
      sym_parenthesized_expression,
      sym_binary_operator,
      sym_unary_operator,
      sym_key_action,
      sym_sleep_action,
      sym_action,
      sym_string,
  [668] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(111), 1,
      anon_sym_DASH,
    ACTIONS(113), 1,
      anon_sym_LPAREN,
    ACTIONS(115), 1,
      anon_sym_key_LPAREN,
    ACTIONS(117), 1,
      anon_sym_sleep_LPAREN,
    ACTIONS(119), 1,
      sym_integer,
    ACTIONS(121), 1,
      sym_float,
    ACTIONS(125), 1,
      sym__string_start,
    ACTIONS(129), 1,
      sym__indent,
    STATE(49), 1,
      sym__statements,
    STATE(57), 1,
      sym_statement,
    STATE(84), 1,
      sym_identifier,
    STATE(116), 1,
      sym_expression,
    ACTIONS(109), 2,
      sym__simple_identifier,
      aux_sym_identifier_token1,
    STATE(56), 2,
      sym_assignment_statement,
      sym_expression_statement,
    STATE(117), 8,
      sym_variable,
      sym_parenthesized_expression,
      sym_binary_operator,
      sym_unary_operator,
      sym_key_action,
      sym_sleep_action,
      sym_action,
      sym_string,
  [726] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(111), 1,
      anon_sym_DASH,
    ACTIONS(113), 1,
      anon_sym_LPAREN,
    ACTIONS(115), 1,
      anon_sym_key_LPAREN,
    ACTIONS(117), 1,
      anon_sym_sleep_LPAREN,
    ACTIONS(119), 1,
      sym_integer,
    ACTIONS(121), 1,
      sym_float,
    ACTIONS(125), 1,
      sym__string_start,
    ACTIONS(129), 1,
      sym__indent,
    STATE(48), 1,
      sym__statements,
    STATE(57), 1,
      sym_statement,
    STATE(84), 1,
      sym_identifier,
    STATE(116), 1,
      sym_expression,
    ACTIONS(109), 2,
      sym__simple_identifier,
      aux_sym_identifier_token1,
    STATE(56), 2,
      sym_assignment_statement,
      sym_expression_statement,
    STATE(117), 8,
      sym_variable,
      sym_parenthesized_expression,
      sym_binary_operator,
      sym_unary_operator,
      sym_key_action,
      sym_sleep_action,
      sym_action,
      sym_string,
  [784] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(111), 1,
      anon_sym_DASH,
    ACTIONS(113), 1,
      anon_sym_LPAREN,
    ACTIONS(115), 1,
      anon_sym_key_LPAREN,
    ACTIONS(117), 1,
      anon_sym_sleep_LPAREN,
    ACTIONS(119), 1,
      sym_integer,
    ACTIONS(121), 1,
      sym_float,
    ACTIONS(125), 1,
      sym__string_start,
    ACTIONS(129), 1,
      sym__indent,
    STATE(47), 1,
      sym__statements,
    STATE(57), 1,
      sym_statement,
    STATE(84), 1,
      sym_identifier,
    STATE(116), 1,
      sym_expression,
    ACTIONS(109), 2,
      sym__simple_identifier,
      aux_sym_identifier_token1,
    STATE(56), 2,
      sym_assignment_statement,
      sym_expression_statement,
    STATE(117), 8,
      sym_variable,
      sym_parenthesized_expression,
      sym_binary_operator,
      sym_unary_operator,
      sym_key_action,
      sym_sleep_action,
      sym_action,
      sym_string,
  [842] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(111), 1,
      anon_sym_DASH,
    ACTIONS(113), 1,
      anon_sym_LPAREN,
    ACTIONS(115), 1,
      anon_sym_key_LPAREN,
    ACTIONS(117), 1,
      anon_sym_sleep_LPAREN,
    ACTIONS(119), 1,
      sym_integer,
    ACTIONS(121), 1,
      sym_float,
    ACTIONS(125), 1,
      sym__string_start,
    ACTIONS(129), 1,
      sym__indent,
    STATE(46), 1,
      sym__statements,
    STATE(57), 1,
      sym_statement,
    STATE(84), 1,
      sym_identifier,
    STATE(116), 1,
      sym_expression,
    ACTIONS(109), 2,
      sym__simple_identifier,
      aux_sym_identifier_token1,
    STATE(56), 2,
      sym_assignment_statement,
      sym_expression_statement,
    STATE(117), 8,
      sym_variable,
      sym_parenthesized_expression,
      sym_binary_operator,
      sym_unary_operator,
      sym_key_action,
      sym_sleep_action,
      sym_action,
      sym_string,
  [900] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(111), 1,
      anon_sym_DASH,
    ACTIONS(113), 1,
      anon_sym_LPAREN,
    ACTIONS(115), 1,
      anon_sym_key_LPAREN,
    ACTIONS(117), 1,
      anon_sym_sleep_LPAREN,
    ACTIONS(119), 1,
      sym_integer,
    ACTIONS(121), 1,
      sym_float,
    ACTIONS(125), 1,
      sym__string_start,
    ACTIONS(129), 1,
      sym__indent,
    STATE(45), 1,
      sym__statements,
    STATE(57), 1,
      sym_statement,
    STATE(84), 1,
      sym_identifier,
    STATE(116), 1,
      sym_expression,
    ACTIONS(109), 2,
      sym__simple_identifier,
      aux_sym_identifier_token1,
    STATE(56), 2,
      sym_assignment_statement,
      sym_expression_statement,
    STATE(117), 8,
      sym_variable,
      sym_parenthesized_expression,
      sym_binary_operator,
      sym_unary_operator,
      sym_key_action,
      sym_sleep_action,
      sym_action,
      sym_string,
  [958] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(134), 1,
      anon_sym_DASH,
    ACTIONS(137), 1,
      anon_sym_LPAREN,
    ACTIONS(140), 1,
      anon_sym_key_LPAREN,
    ACTIONS(143), 1,
      anon_sym_sleep_LPAREN,
    ACTIONS(146), 1,
      sym_integer,
    ACTIONS(149), 1,
      sym_float,
    ACTIONS(152), 1,
      sym__dedent,
    ACTIONS(154), 1,
      sym__string_start,
    STATE(79), 1,
      sym_identifier,
    STATE(125), 1,
      sym_expression,
    ACTIONS(131), 2,
      sym__simple_identifier,
      aux_sym_identifier_token1,
    STATE(16), 2,
      sym_statement,
      aux_sym_block_repeat1,
    STATE(78), 2,
      sym_assignment_statement,
      sym_expression_statement,
    STATE(117), 8,
      sym_variable,
      sym_parenthesized_expression,
      sym_binary_operator,
      sym_unary_operator,
      sym_key_action,
      sym_sleep_action,
      sym_action,
      sym_string,
  [1014] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_LBRACE,
    ACTIONS(19), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(159), 1,
      anon_sym_STAR,
    ACTIONS(161), 1,
      anon_sym_PLUS,
    STATE(24), 1,
      aux_sym_seq_repeat1,
    ACTIONS(15), 2,
      sym__simple_identifier,
      aux_sym_word_token1,
    ACTIONS(157), 5,
      anon_sym_COLON,
      anon_sym_PIPE,
      sym_end_anchor,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
    STATE(66), 8,
      sym__primary_rule,
      sym_word,
      sym_list,
      sym_capture,
      sym_optional,
      sym_repeat,
      sym_repeat1,
      sym_parenthesized_rule,
  [1060] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(39), 1,
      anon_sym_key_LPAREN,
    ACTIONS(103), 1,
      sym_integer,
    ACTIONS(105), 1,
      sym__string_start,
    ACTIONS(163), 1,
      anon_sym_DASH,
    ACTIONS(165), 1,
      anon_sym_LPAREN,
    ACTIONS(167), 1,
      anon_sym_RPAREN,
    ACTIONS(169), 1,
      anon_sym_sleep_LPAREN,
    ACTIONS(171), 1,
      anon_sym_COMMA,
    ACTIONS(173), 1,
      sym_float,
    STATE(77), 1,
      sym_identifier,
    STATE(87), 1,
      sym_expression,
    ACTIONS(41), 2,
      sym__simple_identifier,
      aux_sym_identifier_token1,
    STATE(102), 8,
      sym_variable,
      sym_parenthesized_expression,
      sym_binary_operator,
      sym_unary_operator,
      sym_key_action,
      sym_sleep_action,
      sym_action,
      sym_string,
  [1111] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(39), 1,
      anon_sym_key_LPAREN,
    ACTIONS(103), 1,
      sym_integer,
    ACTIONS(105), 1,
      sym__string_start,
    ACTIONS(163), 1,
      anon_sym_DASH,
    ACTIONS(165), 1,
      anon_sym_LPAREN,
    ACTIONS(169), 1,
      anon_sym_sleep_LPAREN,
    ACTIONS(173), 1,
      sym_float,
    ACTIONS(175), 1,
      anon_sym_RPAREN,
    ACTIONS(177), 1,
      anon_sym_COMMA,
    STATE(77), 1,
      sym_identifier,
    STATE(88), 1,
      sym_expression,
    ACTIONS(41), 2,
      sym__simple_identifier,
      aux_sym_identifier_token1,
    STATE(102), 8,
      sym_variable,
      sym_parenthesized_expression,
      sym_binary_operator,
      sym_unary_operator,
      sym_key_action,
      sym_sleep_action,
      sym_action,
      sym_string,
  [1162] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      sym_start_anchor,
    ACTIONS(17), 1,
      anon_sym_LBRACE,
    ACTIONS(19), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    STATE(137), 1,
      sym__optional_anchor,
    ACTIONS(15), 2,
      sym__simple_identifier,
      aux_sym_word_token1,
    STATE(138), 2,
      sym__optional_seq,
      sym_seq,
    STATE(160), 2,
      sym__optional_choice,
      sym_choice,
    STATE(17), 8,
      sym__primary_rule,
      sym_word,
      sym_list,
      sym_capture,
      sym_optional,
      sym_repeat,
      sym_repeat1,
      sym_parenthesized_rule,
  [1206] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(184), 1,
      anon_sym_LBRACE,
    ACTIONS(187), 1,
      anon_sym_LT,
    ACTIONS(190), 1,
      anon_sym_LBRACK,
    ACTIONS(193), 1,
      anon_sym_LPAREN,
    STATE(21), 1,
      aux_sym_seq_repeat1,
    ACTIONS(179), 2,
      sym__simple_identifier,
      aux_sym_word_token1,
    ACTIONS(182), 5,
      anon_sym_COLON,
      anon_sym_PIPE,
      sym_end_anchor,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
    STATE(66), 8,
      sym__primary_rule,
      sym_word,
      sym_list,
      sym_capture,
      sym_optional,
      sym_repeat,
      sym_repeat1,
      sym_parenthesized_rule,
  [1246] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(39), 1,
      anon_sym_key_LPAREN,
    ACTIONS(103), 1,
      sym_integer,
    ACTIONS(105), 1,
      sym__string_start,
    ACTIONS(163), 1,
      anon_sym_DASH,
    ACTIONS(165), 1,
      anon_sym_LPAREN,
    ACTIONS(169), 1,
      anon_sym_sleep_LPAREN,
    ACTIONS(173), 1,
      sym_float,
    ACTIONS(196), 1,
      anon_sym_RPAREN,
    STATE(77), 1,
      sym_identifier,
    STATE(104), 1,
      sym_expression,
    ACTIONS(41), 2,
      sym__simple_identifier,
      aux_sym_identifier_token1,
    STATE(102), 8,
      sym_variable,
      sym_parenthesized_expression,
      sym_binary_operator,
      sym_unary_operator,
      sym_key_action,
      sym_sleep_action,
      sym_action,
      sym_string,
  [1294] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      sym_start_anchor,
    ACTIONS(17), 1,
      anon_sym_LBRACE,
    ACTIONS(19), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    STATE(137), 1,
      sym__optional_anchor,
    ACTIONS(15), 2,
      sym__simple_identifier,
      aux_sym_word_token1,
    STATE(138), 2,
      sym__optional_seq,
      sym_seq,
    STATE(161), 2,
      sym__optional_choice,
      sym_choice,
    STATE(17), 8,
      sym__primary_rule,
      sym_word,
      sym_list,
      sym_capture,
      sym_optional,
      sym_repeat,
      sym_repeat1,
      sym_parenthesized_rule,
  [1338] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_LBRACE,
    ACTIONS(19), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    STATE(21), 1,
      aux_sym_seq_repeat1,
    ACTIONS(15), 2,
      sym__simple_identifier,
      aux_sym_word_token1,
    ACTIONS(198), 5,
      anon_sym_COLON,
      anon_sym_PIPE,
      sym_end_anchor,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
    STATE(66), 8,
      sym__primary_rule,
      sym_word,
      sym_list,
      sym_capture,
      sym_optional,
      sym_repeat,
      sym_repeat1,
      sym_parenthesized_rule,
  [1378] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(39), 1,
      anon_sym_key_LPAREN,
    ACTIONS(103), 1,
      sym_integer,
    ACTIONS(105), 1,
      sym__string_start,
    ACTIONS(163), 1,
      anon_sym_DASH,
    ACTIONS(165), 1,
      anon_sym_LPAREN,
    ACTIONS(169), 1,
      anon_sym_sleep_LPAREN,
    ACTIONS(173), 1,
      sym_float,
    ACTIONS(200), 1,
      anon_sym_RPAREN,
    STATE(77), 1,
      sym_identifier,
    STATE(104), 1,
      sym_expression,
    ACTIONS(41), 2,
      sym__simple_identifier,
      aux_sym_identifier_token1,
    STATE(102), 8,
      sym_variable,
      sym_parenthesized_expression,
      sym_binary_operator,
      sym_unary_operator,
      sym_key_action,
      sym_sleep_action,
      sym_action,
      sym_string,
  [1426] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(39), 1,
      anon_sym_key_LPAREN,
    ACTIONS(103), 1,
      sym_integer,
    ACTIONS(105), 1,
      sym__string_start,
    ACTIONS(163), 1,
      anon_sym_DASH,
    ACTIONS(165), 1,
      anon_sym_LPAREN,
    ACTIONS(169), 1,
      anon_sym_sleep_LPAREN,
    ACTIONS(173), 1,
      sym_float,
    ACTIONS(202), 1,
      anon_sym_RPAREN,
    STATE(77), 1,
      sym_identifier,
    STATE(104), 1,
      sym_expression,
    ACTIONS(41), 2,
      sym__simple_identifier,
      aux_sym_identifier_token1,
    STATE(102), 8,
      sym_variable,
      sym_parenthesized_expression,
      sym_binary_operator,
      sym_unary_operator,
      sym_key_action,
      sym_sleep_action,
      sym_action,
      sym_string,
  [1474] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(39), 1,
      anon_sym_key_LPAREN,
    ACTIONS(103), 1,
      sym_integer,
    ACTIONS(105), 1,
      sym__string_start,
    ACTIONS(163), 1,
      anon_sym_DASH,
    ACTIONS(165), 1,
      anon_sym_LPAREN,
    ACTIONS(169), 1,
      anon_sym_sleep_LPAREN,
    ACTIONS(173), 1,
      sym_float,
    ACTIONS(204), 1,
      anon_sym_RPAREN,
    STATE(77), 1,
      sym_identifier,
    STATE(104), 1,
      sym_expression,
    ACTIONS(41), 2,
      sym__simple_identifier,
      aux_sym_identifier_token1,
    STATE(102), 8,
      sym_variable,
      sym_parenthesized_expression,
      sym_binary_operator,
      sym_unary_operator,
      sym_key_action,
      sym_sleep_action,
      sym_action,
      sym_string,
  [1522] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(111), 1,
      anon_sym_DASH,
    ACTIONS(113), 1,
      anon_sym_LPAREN,
    ACTIONS(115), 1,
      anon_sym_key_LPAREN,
    ACTIONS(117), 1,
      anon_sym_sleep_LPAREN,
    ACTIONS(119), 1,
      sym_integer,
    ACTIONS(121), 1,
      sym_float,
    ACTIONS(125), 1,
      sym__string_start,
    STATE(92), 1,
      sym_identifier,
    STATE(127), 1,
      sym_expression,
    ACTIONS(109), 2,
      sym__simple_identifier,
      aux_sym_identifier_token1,
    STATE(117), 8,
      sym_variable,
      sym_parenthesized_expression,
      sym_binary_operator,
      sym_unary_operator,
      sym_key_action,
      sym_sleep_action,
      sym_action,
      sym_string,
  [1567] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(111), 1,
      anon_sym_DASH,
    ACTIONS(113), 1,
      anon_sym_LPAREN,
    ACTIONS(115), 1,
      anon_sym_key_LPAREN,
    ACTIONS(117), 1,
      anon_sym_sleep_LPAREN,
    ACTIONS(119), 1,
      sym_integer,
    ACTIONS(121), 1,
      sym_float,
    ACTIONS(125), 1,
      sym__string_start,
    STATE(92), 1,
      sym_identifier,
    STATE(129), 1,
      sym_expression,
    ACTIONS(109), 2,
      sym__simple_identifier,
      aux_sym_identifier_token1,
    STATE(117), 8,
      sym_variable,
      sym_parenthesized_expression,
      sym_binary_operator,
      sym_unary_operator,
      sym_key_action,
      sym_sleep_action,
      sym_action,
      sym_string,
  [1612] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(111), 1,
      anon_sym_DASH,
    ACTIONS(113), 1,
      anon_sym_LPAREN,
    ACTIONS(115), 1,
      anon_sym_key_LPAREN,
    ACTIONS(117), 1,
      anon_sym_sleep_LPAREN,
    ACTIONS(119), 1,
      sym_integer,
    ACTIONS(121), 1,
      sym_float,
    ACTIONS(125), 1,
      sym__string_start,
    STATE(92), 1,
      sym_identifier,
    STATE(123), 1,
      sym_expression,
    ACTIONS(109), 2,
      sym__simple_identifier,
      aux_sym_identifier_token1,
    STATE(117), 8,
      sym_variable,
      sym_parenthesized_expression,
      sym_binary_operator,
      sym_unary_operator,
      sym_key_action,
      sym_sleep_action,
      sym_action,
      sym_string,
  [1657] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(111), 1,
      anon_sym_DASH,
    ACTIONS(113), 1,
      anon_sym_LPAREN,
    ACTIONS(115), 1,
      anon_sym_key_LPAREN,
    ACTIONS(117), 1,
      anon_sym_sleep_LPAREN,
    ACTIONS(119), 1,
      sym_integer,
    ACTIONS(121), 1,
      sym_float,
    ACTIONS(125), 1,
      sym__string_start,
    STATE(92), 1,
      sym_identifier,
    STATE(112), 1,
      sym_expression,
    ACTIONS(109), 2,
      sym__simple_identifier,
      aux_sym_identifier_token1,
    STATE(117), 8,
      sym_variable,
      sym_parenthesized_expression,
      sym_binary_operator,
      sym_unary_operator,
      sym_key_action,
      sym_sleep_action,
      sym_action,
      sym_string,
  [1702] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(111), 1,
      anon_sym_DASH,
    ACTIONS(113), 1,
      anon_sym_LPAREN,
    ACTIONS(115), 1,
      anon_sym_key_LPAREN,
    ACTIONS(117), 1,
      anon_sym_sleep_LPAREN,
    ACTIONS(119), 1,
      sym_integer,
    ACTIONS(121), 1,
      sym_float,
    ACTIONS(125), 1,
      sym__string_start,
    STATE(92), 1,
      sym_identifier,
    STATE(118), 1,
      sym_expression,
    ACTIONS(109), 2,
      sym__simple_identifier,
      aux_sym_identifier_token1,
    STATE(117), 8,
      sym_variable,
      sym_parenthesized_expression,
      sym_binary_operator,
      sym_unary_operator,
      sym_key_action,
      sym_sleep_action,
      sym_action,
      sym_string,
  [1747] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(39), 1,
      anon_sym_key_LPAREN,
    ACTIONS(103), 1,
      sym_integer,
    ACTIONS(105), 1,
      sym__string_start,
    ACTIONS(163), 1,
      anon_sym_DASH,
    ACTIONS(165), 1,
      anon_sym_LPAREN,
    ACTIONS(169), 1,
      anon_sym_sleep_LPAREN,
    ACTIONS(173), 1,
      sym_float,
    STATE(77), 1,
      sym_identifier,
    STATE(104), 1,
      sym_expression,
    ACTIONS(41), 2,
      sym__simple_identifier,
      aux_sym_identifier_token1,
    STATE(102), 8,
      sym_variable,
      sym_parenthesized_expression,
      sym_binary_operator,
      sym_unary_operator,
      sym_key_action,
      sym_sleep_action,
      sym_action,
      sym_string,
  [1792] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(39), 1,
      anon_sym_key_LPAREN,
    ACTIONS(103), 1,
      sym_integer,
    ACTIONS(105), 1,
      sym__string_start,
    ACTIONS(163), 1,
      anon_sym_DASH,
    ACTIONS(165), 1,
      anon_sym_LPAREN,
    ACTIONS(169), 1,
      anon_sym_sleep_LPAREN,
    ACTIONS(173), 1,
      sym_float,
    STATE(77), 1,
      sym_identifier,
    STATE(101), 1,
      sym_expression,
    ACTIONS(41), 2,
      sym__simple_identifier,
      aux_sym_identifier_token1,
    STATE(102), 8,
      sym_variable,
      sym_parenthesized_expression,
      sym_binary_operator,
      sym_unary_operator,
      sym_key_action,
      sym_sleep_action,
      sym_action,
      sym_string,
  [1837] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(39), 1,
      anon_sym_key_LPAREN,
    ACTIONS(103), 1,
      sym_integer,
    ACTIONS(105), 1,
      sym__string_start,
    ACTIONS(163), 1,
      anon_sym_DASH,
    ACTIONS(165), 1,
      anon_sym_LPAREN,
    ACTIONS(169), 1,
      anon_sym_sleep_LPAREN,
    ACTIONS(173), 1,
      sym_float,
    STATE(77), 1,
      sym_identifier,
    STATE(99), 1,
      sym_expression,
    ACTIONS(41), 2,
      sym__simple_identifier,
      aux_sym_identifier_token1,
    STATE(102), 8,
      sym_variable,
      sym_parenthesized_expression,
      sym_binary_operator,
      sym_unary_operator,
      sym_key_action,
      sym_sleep_action,
      sym_action,
      sym_string,
  [1882] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(39), 1,
      anon_sym_key_LPAREN,
    ACTIONS(103), 1,
      sym_integer,
    ACTIONS(105), 1,
      sym__string_start,
    ACTIONS(163), 1,
      anon_sym_DASH,
    ACTIONS(165), 1,
      anon_sym_LPAREN,
    ACTIONS(169), 1,
      anon_sym_sleep_LPAREN,
    ACTIONS(173), 1,
      sym_float,
    STATE(77), 1,
      sym_identifier,
    STATE(90), 1,
      sym_expression,
    ACTIONS(41), 2,
      sym__simple_identifier,
      aux_sym_identifier_token1,
    STATE(102), 8,
      sym_variable,
      sym_parenthesized_expression,
      sym_binary_operator,
      sym_unary_operator,
      sym_key_action,
      sym_sleep_action,
      sym_action,
      sym_string,
  [1927] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(39), 1,
      anon_sym_key_LPAREN,
    ACTIONS(103), 1,
      sym_integer,
    ACTIONS(105), 1,
      sym__string_start,
    ACTIONS(163), 1,
      anon_sym_DASH,
    ACTIONS(165), 1,
      anon_sym_LPAREN,
    ACTIONS(169), 1,
      anon_sym_sleep_LPAREN,
    ACTIONS(173), 1,
      sym_float,
    STATE(77), 1,
      sym_identifier,
    STATE(119), 1,
      sym_expression,
    ACTIONS(41), 2,
      sym__simple_identifier,
      aux_sym_identifier_token1,
    STATE(102), 8,
      sym_variable,
      sym_parenthesized_expression,
      sym_binary_operator,
      sym_unary_operator,
      sym_key_action,
      sym_sleep_action,
      sym_action,
      sym_string,
  [1972] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(39), 1,
      anon_sym_key_LPAREN,
    ACTIONS(103), 1,
      sym_integer,
    ACTIONS(105), 1,
      sym__string_start,
    ACTIONS(163), 1,
      anon_sym_DASH,
    ACTIONS(165), 1,
      anon_sym_LPAREN,
    ACTIONS(169), 1,
      anon_sym_sleep_LPAREN,
    ACTIONS(173), 1,
      sym_float,
    STATE(77), 1,
      sym_identifier,
    STATE(120), 1,
      sym_expression,
    ACTIONS(41), 2,
      sym__simple_identifier,
      aux_sym_identifier_token1,
    STATE(102), 8,
      sym_variable,
      sym_parenthesized_expression,
      sym_binary_operator,
      sym_unary_operator,
      sym_key_action,
      sym_sleep_action,
      sym_action,
      sym_string,
  [2017] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(111), 1,
      anon_sym_DASH,
    ACTIONS(113), 1,
      anon_sym_LPAREN,
    ACTIONS(115), 1,
      anon_sym_key_LPAREN,
    ACTIONS(117), 1,
      anon_sym_sleep_LPAREN,
    ACTIONS(119), 1,
      sym_integer,
    ACTIONS(121), 1,
      sym_float,
    ACTIONS(125), 1,
      sym__string_start,
    STATE(92), 1,
      sym_identifier,
    STATE(130), 1,
      sym_expression,
    ACTIONS(109), 2,
      sym__simple_identifier,
      aux_sym_identifier_token1,
    STATE(117), 8,
      sym_variable,
      sym_parenthesized_expression,
      sym_binary_operator,
      sym_unary_operator,
      sym_key_action,
      sym_sleep_action,
      sym_action,
      sym_string,
  [2062] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(39), 1,
      anon_sym_key_LPAREN,
    ACTIONS(103), 1,
      sym_integer,
    ACTIONS(105), 1,
      sym__string_start,
    ACTIONS(163), 1,
      anon_sym_DASH,
    ACTIONS(165), 1,
      anon_sym_LPAREN,
    ACTIONS(169), 1,
      anon_sym_sleep_LPAREN,
    ACTIONS(173), 1,
      sym_float,
    STATE(77), 1,
      sym_identifier,
    STATE(89), 1,
      sym_expression,
    ACTIONS(41), 2,
      sym__simple_identifier,
      aux_sym_identifier_token1,
    STATE(102), 8,
      sym_variable,
      sym_parenthesized_expression,
      sym_binary_operator,
      sym_unary_operator,
      sym_key_action,
      sym_sleep_action,
      sym_action,
      sym_string,
  [2107] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      sym_start_anchor,
    ACTIONS(17), 1,
      anon_sym_LBRACE,
    ACTIONS(19), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    STATE(142), 1,
      sym__optional_anchor,
    ACTIONS(15), 2,
      sym__simple_identifier,
      aux_sym_word_token1,
    STATE(138), 2,
      sym__optional_seq,
      sym_seq,
    STATE(17), 8,
      sym__primary_rule,
      sym_word,
      sym_list,
      sym_capture,
      sym_optional,
      sym_repeat,
      sym_repeat1,
      sym_parenthesized_rule,
  [2147] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(208), 2,
      sym__simple_identifier,
      aux_sym_word_token1,
    ACTIONS(206), 14,
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
  [2171] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(212), 2,
      sym__simple_identifier,
      aux_sym_word_token1,
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
  [2195] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(216), 2,
      sym__simple_identifier,
      aux_sym_word_token1,
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
  [2219] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(220), 2,
      sym__simple_identifier,
      aux_sym_word_token1,
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
  [2243] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(224), 2,
      sym__simple_identifier,
      aux_sym_word_token1,
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
  [2267] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(228), 2,
      sym__simple_identifier,
      aux_sym_word_token1,
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
  [2291] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(232), 2,
      sym__simple_identifier,
      aux_sym_word_token1,
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
  [2315] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(236), 2,
      sym__simple_identifier,
      aux_sym_word_token1,
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
  [2339] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(240), 2,
      sym__simple_identifier,
      aux_sym_word_token1,
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
  [2363] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(244), 2,
      sym__simple_identifier,
      aux_sym_word_token1,
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
  [2387] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(248), 2,
      sym__simple_identifier,
      aux_sym_word_token1,
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
  [2411] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_LBRACE,
    ACTIONS(19), 1,
      anon_sym_LT,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(15), 2,
      sym__simple_identifier,
      aux_sym_word_token1,
    STATE(135), 2,
      sym__optional_seq,
      sym_seq,
    STATE(17), 8,
      sym__primary_rule,
      sym_word,
      sym_list,
      sym_capture,
      sym_optional,
      sym_repeat,
      sym_repeat1,
      sym_parenthesized_rule,
  [2445] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(252), 2,
      sym__simple_identifier,
      aux_sym_word_token1,
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
  [2469] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(256), 2,
      sym__simple_identifier,
      aux_sym_word_token1,
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
  [2493] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(260), 2,
      sym__simple_identifier,
      aux_sym_word_token1,
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
  [2517] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(264), 2,
      sym__simple_identifier,
      aux_sym_word_token1,
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
  [2541] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(268), 2,
      sym__simple_identifier,
      aux_sym_word_token1,
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
  [2565] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(272), 2,
      sym__simple_identifier,
      aux_sym_word_token1,
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
  [2589] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(276), 2,
      sym__simple_identifier,
      aux_sym_word_token1,
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
  [2613] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(280), 2,
      sym__simple_identifier,
      aux_sym_word_token1,
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
  [2637] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(282), 2,
      sym__simple_identifier,
      aux_sym_word_token1,
    ACTIONS(284), 11,
      anon_sym_COLON,
      anon_sym_PIPE,
      sym_end_anchor,
      anon_sym_LBRACE,
      anon_sym_LT,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [2658] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(286), 2,
      sym__simple_identifier,
      aux_sym_word_token1,
    ACTIONS(288), 11,
      anon_sym_COLON,
      anon_sym_PIPE,
      sym_end_anchor,
      anon_sym_LBRACE,
      anon_sym_LT,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [2679] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(290), 2,
      sym__simple_identifier,
      aux_sym_word_token1,
    ACTIONS(292), 11,
      anon_sym_COLON,
      anon_sym_PIPE,
      sym_end_anchor,
      anon_sym_LBRACE,
      anon_sym_LT,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [2700] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(294), 2,
      sym__simple_identifier,
      aux_sym_word_token1,
    ACTIONS(296), 11,
      anon_sym_COLON,
      anon_sym_PIPE,
      sym_end_anchor,
      anon_sym_LBRACE,
      anon_sym_LT,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [2721] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(159), 1,
      anon_sym_STAR,
    ACTIONS(161), 1,
      anon_sym_PLUS,
    ACTIONS(298), 2,
      sym__simple_identifier,
      aux_sym_word_token1,
    ACTIONS(300), 9,
      anon_sym_COLON,
      anon_sym_PIPE,
      sym_end_anchor,
      anon_sym_LBRACE,
      anon_sym_LT,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [2746] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(302), 2,
      sym__simple_identifier,
      aux_sym_word_token1,
    ACTIONS(304), 11,
      anon_sym_COLON,
      anon_sym_PIPE,
      sym_end_anchor,
      anon_sym_LBRACE,
      anon_sym_LT,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [2767] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(306), 2,
      sym__simple_identifier,
      aux_sym_word_token1,
    ACTIONS(308), 11,
      anon_sym_COLON,
      anon_sym_PIPE,
      sym_end_anchor,
      anon_sym_LBRACE,
      anon_sym_LT,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [2788] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(310), 2,
      sym__simple_identifier,
      aux_sym_word_token1,
    ACTIONS(312), 11,
      anon_sym_COLON,
      anon_sym_PIPE,
      sym_end_anchor,
      anon_sym_LBRACE,
      anon_sym_LT,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [2809] = 8,
    ACTIONS(91), 1,
      sym_comment,
    ACTIONS(314), 1,
      anon_sym_LBRACE,
    ACTIONS(316), 1,
      anon_sym_RBRACE,
    ACTIONS(322), 1,
      sym_string_content,
    ACTIONS(324), 1,
      sym__string_end,
    ACTIONS(318), 2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_RBRACE_RBRACE,
    ACTIONS(320), 2,
      sym_string_escape_sequence,
      sym__not_escapesequence,
    STATE(75), 4,
      sym_interpolation,
      sym__escape_interpolation,
      sym__not_interpolation,
      aux_sym_string_repeat1,
  [2839] = 8,
    ACTIONS(91), 1,
      sym_comment,
    ACTIONS(314), 1,
      anon_sym_LBRACE,
    ACTIONS(316), 1,
      anon_sym_RBRACE,
    ACTIONS(328), 1,
      sym_string_content,
    ACTIONS(330), 1,
      sym__string_end,
    ACTIONS(318), 2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_RBRACE_RBRACE,
    ACTIONS(326), 2,
      sym_string_escape_sequence,
      sym__not_escapesequence,
    STATE(73), 4,
      sym_interpolation,
      sym__escape_interpolation,
      sym__not_interpolation,
      aux_sym_string_repeat1,
  [2869] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(332), 12,
      anon_sym_DASH,
      anon_sym_COLON,
      anon_sym_RBRACE,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_or,
      anon_sym_LPAREN2,
      anon_sym_COMMA,
  [2887] = 8,
    ACTIONS(91), 1,
      sym_comment,
    ACTIONS(334), 1,
      anon_sym_LBRACE,
    ACTIONS(337), 1,
      anon_sym_RBRACE,
    ACTIONS(346), 1,
      sym_string_content,
    ACTIONS(349), 1,
      sym__string_end,
    ACTIONS(340), 2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_RBRACE_RBRACE,
    ACTIONS(343), 2,
      sym_string_escape_sequence,
      sym__not_escapesequence,
    STATE(73), 4,
      sym_interpolation,
      sym__escape_interpolation,
      sym__not_interpolation,
      aux_sym_string_repeat1,
  [2917] = 8,
    ACTIONS(91), 1,
      sym_comment,
    ACTIONS(314), 1,
      anon_sym_LBRACE,
    ACTIONS(316), 1,
      anon_sym_RBRACE,
    ACTIONS(353), 1,
      sym_string_content,
    ACTIONS(355), 1,
      sym__string_end,
    ACTIONS(318), 2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_RBRACE_RBRACE,
    ACTIONS(351), 2,
      sym_string_escape_sequence,
      sym__not_escapesequence,
    STATE(71), 4,
      sym_interpolation,
      sym__escape_interpolation,
      sym__not_interpolation,
      aux_sym_string_repeat1,
  [2947] = 8,
    ACTIONS(91), 1,
      sym_comment,
    ACTIONS(314), 1,
      anon_sym_LBRACE,
    ACTIONS(316), 1,
      anon_sym_RBRACE,
    ACTIONS(328), 1,
      sym_string_content,
    ACTIONS(357), 1,
      sym__string_end,
    ACTIONS(318), 2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_RBRACE_RBRACE,
    ACTIONS(326), 2,
      sym_string_escape_sequence,
      sym__not_escapesequence,
    STATE(73), 4,
      sym_interpolation,
      sym__escape_interpolation,
      sym__not_interpolation,
      aux_sym_string_repeat1,
  [2977] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(359), 1,
      anon_sym_COLON,
    ACTIONS(290), 2,
      sym__simple_identifier,
      aux_sym_word_token1,
    ACTIONS(292), 8,
      anon_sym_PIPE,
      sym_end_anchor,
      anon_sym_LBRACE,
      anon_sym_LT,
      anon_sym_LBRACK,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_LPAREN,
  [2998] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(364), 1,
      anon_sym_LPAREN2,
    STATE(97), 1,
      sym_argument_list,
    ACTIONS(362), 9,
      anon_sym_DASH,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_or,
      anon_sym_COMMA,
  [3019] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(260), 3,
      sym__simple_identifier,
      aux_sym_identifier_token1,
      sym_integer,
    ACTIONS(258), 7,
      sym__dedent,
      sym__string_start,
      anon_sym_DASH,
      anon_sym_LPAREN,
      anon_sym_key_LPAREN,
      anon_sym_sleep_LPAREN,
      sym_float,
  [3037] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(366), 1,
      anon_sym_EQ,
    ACTIONS(368), 1,
      anon_sym_LPAREN2,
    STATE(128), 1,
      sym_argument_list,
    ACTIONS(362), 7,
      sym__newline,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_or,
  [3059] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(373), 1,
      anon_sym_DASH,
    STATE(167), 1,
      sym_identifier,
    ACTIONS(370), 2,
      sym__simple_identifier,
      aux_sym_identifier_token1,
    ACTIONS(375), 2,
      anon_sym_and,
      anon_sym_not,
    STATE(80), 2,
      sym_match,
      aux_sym_matches_repeat1,
    STATE(114), 2,
      sym_match_modifier,
      aux_sym_match_repeat1,
  [3085] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(272), 3,
      sym__simple_identifier,
      aux_sym_identifier_token1,
      sym_integer,
    ACTIONS(270), 7,
      sym__dedent,
      sym__string_start,
      anon_sym_DASH,
      anon_sym_LPAREN,
      anon_sym_key_LPAREN,
      anon_sym_sleep_LPAREN,
      sym_float,
  [3103] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(248), 3,
      sym__simple_identifier,
      aux_sym_identifier_token1,
      sym_integer,
    ACTIONS(246), 7,
      sym__dedent,
      sym__string_start,
      anon_sym_DASH,
      anon_sym_LPAREN,
      anon_sym_key_LPAREN,
      anon_sym_sleep_LPAREN,
      sym_float,
  [3121] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(378), 10,
      anon_sym_DASH,
      anon_sym_COLON,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_or,
      anon_sym_COMMA,
  [3137] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(368), 1,
      anon_sym_LPAREN2,
    ACTIONS(380), 1,
      anon_sym_EQ,
    STATE(128), 1,
      sym_argument_list,
    ACTIONS(362), 7,
      sym__newline,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_or,
  [3159] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(382), 1,
      anon_sym_DASH,
    STATE(167), 1,
      sym_identifier,
    ACTIONS(11), 2,
      anon_sym_and,
      anon_sym_not,
    ACTIONS(41), 2,
      sym__simple_identifier,
      aux_sym_identifier_token1,
    STATE(80), 2,
      sym_match,
      aux_sym_matches_repeat1,
    STATE(114), 2,
      sym_match_modifier,
      aux_sym_match_repeat1,
  [3185] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(384), 9,
      anon_sym_DASH,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_or,
      anon_sym_COMMA,
  [3200] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(390), 1,
      anon_sym_RPAREN,
    ACTIONS(392), 1,
      anon_sym_or,
    ACTIONS(394), 1,
      anon_sym_COMMA,
    STATE(145), 1,
      aux_sym_argument_list_repeat1,
    ACTIONS(386), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(388), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [3225] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(392), 1,
      anon_sym_or,
    ACTIONS(396), 1,
      anon_sym_RPAREN,
    ACTIONS(398), 1,
      anon_sym_COMMA,
    STATE(143), 1,
      aux_sym_argument_list_repeat1,
    ACTIONS(386), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(388), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [3250] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(400), 9,
      anon_sym_DASH,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_or,
      anon_sym_COMMA,
  [3265] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(388), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(402), 6,
      anon_sym_DASH,
      anon_sym_RBRACE,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_or,
      anon_sym_COMMA,
  [3282] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(404), 9,
      anon_sym_DASH,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_or,
      anon_sym_COMMA,
  [3297] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(368), 1,
      anon_sym_LPAREN2,
    STATE(128), 1,
      sym_argument_list,
    ACTIONS(362), 7,
      sym__newline,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_or,
  [3316] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(406), 9,
      anon_sym_DASH,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_or,
      anon_sym_COMMA,
  [3331] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(408), 9,
      anon_sym_DASH,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_or,
      anon_sym_COMMA,
  [3346] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(410), 9,
      anon_sym_DASH,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_or,
      anon_sym_COMMA,
  [3361] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(412), 9,
      anon_sym_DASH,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_or,
      anon_sym_COMMA,
  [3376] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(414), 9,
      anon_sym_DASH,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_or,
      anon_sym_COMMA,
  [3391] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(416), 9,
      anon_sym_DASH,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_or,
      anon_sym_COMMA,
  [3406] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(402), 9,
      anon_sym_DASH,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_or,
      anon_sym_COMMA,
  [3421] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(418), 9,
      anon_sym_DASH,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_or,
      anon_sym_COMMA,
  [3436] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(386), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(388), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(402), 4,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_or,
      anon_sym_COMMA,
  [3455] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(420), 9,
      anon_sym_DASH,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_or,
      anon_sym_COMMA,
  [3470] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(332), 9,
      sym__newline,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_EQ,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_or,
      anon_sym_LPAREN2,
  [3485] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(392), 1,
      anon_sym_or,
    ACTIONS(386), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(422), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
    ACTIONS(388), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [3505] = 3,
    ACTIONS(91), 1,
      sym_comment,
    ACTIONS(426), 2,
      sym_string_content,
      sym__string_end,
    ACTIONS(424), 6,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACE_LBRACE,
      anon_sym_RBRACE_RBRACE,
      sym_string_escape_sequence,
      sym__not_escapesequence,
  [3521] = 3,
    ACTIONS(91), 1,
      sym_comment,
    ACTIONS(107), 2,
      sym_string_content,
      sym__string_end,
    ACTIONS(95), 6,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACE_LBRACE,
      anon_sym_RBRACE_RBRACE,
      sym_string_escape_sequence,
      sym__not_escapesequence,
  [3537] = 3,
    ACTIONS(91), 1,
      sym_comment,
    ACTIONS(430), 2,
      sym_string_content,
      sym__string_end,
    ACTIONS(428), 6,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACE_LBRACE,
      anon_sym_RBRACE_RBRACE,
      sym_string_escape_sequence,
      sym__not_escapesequence,
  [3553] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(416), 7,
      sym__newline,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_or,
  [3566] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(384), 7,
      sym__newline,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_or,
  [3579] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(378), 7,
      sym__newline,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_or,
  [3592] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(408), 7,
      sym__newline,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_or,
  [3605] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(432), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(402), 4,
      sym__newline,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_or,
  [3620] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(406), 7,
      sym__newline,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_or,
  [3633] = 5,
    ACTIONS(3), 1,
      sym_comment,
    STATE(189), 1,
      sym_identifier,
    ACTIONS(11), 2,
      anon_sym_and,
      anon_sym_not,
    ACTIONS(41), 2,
      sym__simple_identifier,
      aux_sym_identifier_token1,
    STATE(131), 2,
      sym_match_modifier,
      aux_sym_match_repeat1,
  [3652] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(412), 7,
      sym__newline,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_or,
  [3665] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(436), 1,
      anon_sym_or,
    ACTIONS(438), 1,
      sym__newline,
    ACTIONS(434), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(432), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [3684] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(420), 7,
      sym__newline,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_or,
  [3697] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(400), 7,
      sym__newline,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_or,
  [3710] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(392), 1,
      anon_sym_or,
    ACTIONS(440), 1,
      anon_sym_RPAREN,
    ACTIONS(386), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(388), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [3729] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(392), 1,
      anon_sym_or,
    ACTIONS(442), 1,
      anon_sym_RPAREN,
    ACTIONS(386), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(388), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [3748] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(404), 7,
      sym__newline,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_or,
  [3761] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(410), 7,
      sym__newline,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_or,
  [3774] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(402), 7,
      sym__newline,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_or,
  [3787] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(392), 1,
      anon_sym_or,
    ACTIONS(444), 1,
      anon_sym_RBRACE,
    ACTIONS(386), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(388), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [3806] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(436), 1,
      anon_sym_or,
    ACTIONS(446), 1,
      sym__newline,
    ACTIONS(434), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(432), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [3825] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(418), 7,
      sym__newline,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_or,
  [3838] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(436), 1,
      anon_sym_or,
    ACTIONS(448), 1,
      sym__newline,
    ACTIONS(434), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(432), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [3857] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(414), 7,
      sym__newline,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_or,
  [3870] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(402), 2,
      sym__newline,
      anon_sym_or,
    ACTIONS(434), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(432), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [3887] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(436), 1,
      anon_sym_or,
    ACTIONS(450), 1,
      sym__newline,
    ACTIONS(434), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(432), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [3906] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(452), 2,
      sym__simple_identifier,
      aux_sym_identifier_token1,
    ACTIONS(454), 2,
      anon_sym_and,
      anon_sym_not,
    STATE(131), 2,
      sym_match_modifier,
      aux_sym_match_repeat1,
  [3922] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(459), 1,
      anon_sym_DASH,
    ACTIONS(457), 4,
      sym__simple_identifier,
      anon_sym_and,
      anon_sym_not,
      aux_sym_identifier_token1,
  [3935] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(463), 1,
      anon_sym_DASH,
    ACTIONS(461), 4,
      sym__simple_identifier,
      anon_sym_and,
      anon_sym_not,
      aux_sym_identifier_token1,
  [3948] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(467), 1,
      anon_sym_PIPE,
    STATE(134), 1,
      aux_sym_choice_repeat1,
    ACTIONS(465), 3,
      anon_sym_COLON,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
  [3963] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(472), 1,
      sym_end_anchor,
    ACTIONS(470), 4,
      anon_sym_COLON,
      anon_sym_PIPE,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
  [3976] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(476), 1,
      anon_sym_PIPE,
    STATE(134), 1,
      aux_sym_choice_repeat1,
    ACTIONS(474), 3,
      anon_sym_COLON,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
  [3991] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(476), 1,
      anon_sym_PIPE,
    STATE(136), 1,
      aux_sym_choice_repeat1,
    ACTIONS(478), 3,
      anon_sym_COLON,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
  [4006] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(482), 1,
      sym_end_anchor,
    ACTIONS(480), 4,
      anon_sym_COLON,
      anon_sym_PIPE,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
  [4019] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(470), 4,
      anon_sym_COLON,
      anon_sym_PIPE,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
  [4029] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(484), 4,
      sym__simple_identifier,
      anon_sym_and,
      anon_sym_not,
      aux_sym_identifier_token1,
  [4039] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(486), 4,
      anon_sym_COLON,
      anon_sym_PIPE,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
  [4049] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(465), 4,
      anon_sym_COLON,
      anon_sym_PIPE,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
  [4059] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(196), 1,
      anon_sym_RPAREN,
    ACTIONS(488), 1,
      anon_sym_COMMA,
    STATE(147), 1,
      aux_sym_argument_list_repeat1,
  [4072] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(198), 1,
      sym_identifier,
    ACTIONS(109), 2,
      sym__simple_identifier,
      aux_sym_identifier_token1,
  [4083] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(204), 1,
      anon_sym_RPAREN,
    ACTIONS(490), 1,
      anon_sym_COMMA,
    STATE(147), 1,
      aux_sym_argument_list_repeat1,
  [4096] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(163), 1,
      sym_identifier,
    ACTIONS(41), 2,
      sym__simple_identifier,
      aux_sym_identifier_token1,
  [4107] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(422), 1,
      anon_sym_RPAREN,
    ACTIONS(492), 1,
      anon_sym_COMMA,
    STATE(147), 1,
      aux_sym_argument_list_repeat1,
  [4120] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(164), 1,
      sym_identifier,
    ACTIONS(41), 2,
      sym__simple_identifier,
      aux_sym_identifier_token1,
  [4131] = 3,
    ACTIONS(91), 1,
      sym_comment,
    ACTIONS(495), 1,
      aux_sym__implicit_string_argument_token1,
    STATE(175), 1,
      sym__implicit_string_argument,
  [4141] = 3,
    ACTIONS(91), 1,
      sym_comment,
    ACTIONS(497), 1,
      aux_sym__implicit_string_argument_token1,
    STATE(174), 1,
      sym__implicit_string_argument,
  [4151] = 3,
    ACTIONS(91), 1,
      sym_comment,
    ACTIONS(499), 1,
      aux_sym__implicit_string_argument_token1,
    STATE(162), 1,
      sym__implicit_string_argument,
  [4161] = 3,
    ACTIONS(91), 1,
      sym_comment,
    ACTIONS(501), 1,
      aux_sym__implicit_string_argument_token1,
    STATE(165), 1,
      sym__implicit_string_argument,
  [4171] = 3,
    ACTIONS(91), 1,
      sym_comment,
    ACTIONS(503), 1,
      aux_sym__implicit_string_argument_token1,
    STATE(159), 1,
      sym__implicit_string_argument,
  [4181] = 3,
    ACTIONS(91), 1,
      sym_comment,
    ACTIONS(505), 1,
      aux_sym__implicit_string_argument_token1,
    STATE(180), 1,
      sym__implicit_string_argument,
  [4191] = 3,
    ACTIONS(91), 1,
      sym_comment,
    ACTIONS(507), 1,
      aux_sym__implicit_string_argument_token1,
    STATE(182), 1,
      sym__implicit_string_argument,
  [4201] = 3,
    ACTIONS(91), 1,
      sym_comment,
    ACTIONS(509), 1,
      aux_sym__implicit_string_argument_token1,
    STATE(197), 1,
      sym__implicit_string_argument,
  [4211] = 3,
    ACTIONS(91), 1,
      sym_comment,
    ACTIONS(511), 1,
      aux_sym__implicit_string_argument_token1,
    STATE(187), 1,
      sym__implicit_string_argument,
  [4221] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(513), 1,
      sym__newline,
  [4228] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(515), 1,
      anon_sym_RPAREN,
  [4235] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(517), 1,
      anon_sym_RPAREN,
  [4242] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(519), 1,
      anon_sym_RBRACK,
  [4249] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(521), 1,
      anon_sym_RPAREN,
  [4256] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(523), 1,
      anon_sym_GT,
  [4263] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(525), 1,
      anon_sym_RBRACE,
  [4270] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(527), 1,
      anon_sym_RPAREN,
  [4277] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(529), 1,
      sym__newline,
  [4284] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(531), 1,
      anon_sym_COLON,
  [4291] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(533), 1,
      anon_sym_COLON,
  [4298] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(535), 1,
      anon_sym_COLON,
  [4305] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(537), 1,
      anon_sym_COLON,
  [4312] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(539), 1,
      anon_sym_COLON,
  [4319] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(541), 1,
      anon_sym_COLON,
  [4326] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(543), 1,
      anon_sym_COLON,
  [4333] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(545), 1,
      anon_sym_RPAREN,
  [4340] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(547), 1,
      anon_sym_RPAREN,
  [4347] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(549), 1,
      anon_sym_COLON,
  [4354] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(551), 1,
      anon_sym_COLON,
  [4361] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(43), 1,
      ts_builtin_sym_end,
  [4368] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(553), 1,
      ts_builtin_sym_end,
  [4375] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(555), 1,
      anon_sym_RPAREN,
  [4382] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(557), 1,
      anon_sym_COLON,
  [4389] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(559), 1,
      anon_sym_RPAREN,
  [4396] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(561), 1,
      anon_sym_COLON,
  [4403] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(563), 1,
      ts_builtin_sym_end,
  [4410] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(390), 1,
      anon_sym_RPAREN,
  [4417] = 2,
    ACTIONS(91), 1,
      sym_comment,
    ACTIONS(565), 1,
      sym_implicit_string,
  [4424] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(567), 1,
      anon_sym_RPAREN,
  [4431] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(569), 1,
      sym__newline,
  [4438] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(571), 1,
      anon_sym_COLON,
  [4445] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(396), 1,
      anon_sym_RPAREN,
  [4452] = 2,
    ACTIONS(91), 1,
      sym_comment,
    ACTIONS(573), 1,
      sym_implicit_string,
  [4459] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(575), 1,
      anon_sym_COLON,
  [4466] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(577), 1,
      anon_sym_COLON,
  [4473] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(579), 1,
      anon_sym_COLON,
  [4480] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(581), 1,
      anon_sym_COLON,
  [4487] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(583), 1,
      anon_sym_COLON,
  [4494] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(585), 1,
      anon_sym_RPAREN,
  [4501] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(587), 1,
      sym__newline,
  [4508] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(589), 1,
      sym__newline,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 110,
  [SMALL_STATE(4)] = 217,
  [SMALL_STATE(5)] = 324,
  [SMALL_STATE(6)] = 379,
  [SMALL_STATE(7)] = 438,
  [SMALL_STATE(8)] = 494,
  [SMALL_STATE(9)] = 552,
  [SMALL_STATE(10)] = 610,
  [SMALL_STATE(11)] = 668,
  [SMALL_STATE(12)] = 726,
  [SMALL_STATE(13)] = 784,
  [SMALL_STATE(14)] = 842,
  [SMALL_STATE(15)] = 900,
  [SMALL_STATE(16)] = 958,
  [SMALL_STATE(17)] = 1014,
  [SMALL_STATE(18)] = 1060,
  [SMALL_STATE(19)] = 1111,
  [SMALL_STATE(20)] = 1162,
  [SMALL_STATE(21)] = 1206,
  [SMALL_STATE(22)] = 1246,
  [SMALL_STATE(23)] = 1294,
  [SMALL_STATE(24)] = 1338,
  [SMALL_STATE(25)] = 1378,
  [SMALL_STATE(26)] = 1426,
  [SMALL_STATE(27)] = 1474,
  [SMALL_STATE(28)] = 1522,
  [SMALL_STATE(29)] = 1567,
  [SMALL_STATE(30)] = 1612,
  [SMALL_STATE(31)] = 1657,
  [SMALL_STATE(32)] = 1702,
  [SMALL_STATE(33)] = 1747,
  [SMALL_STATE(34)] = 1792,
  [SMALL_STATE(35)] = 1837,
  [SMALL_STATE(36)] = 1882,
  [SMALL_STATE(37)] = 1927,
  [SMALL_STATE(38)] = 1972,
  [SMALL_STATE(39)] = 2017,
  [SMALL_STATE(40)] = 2062,
  [SMALL_STATE(41)] = 2107,
  [SMALL_STATE(42)] = 2147,
  [SMALL_STATE(43)] = 2171,
  [SMALL_STATE(44)] = 2195,
  [SMALL_STATE(45)] = 2219,
  [SMALL_STATE(46)] = 2243,
  [SMALL_STATE(47)] = 2267,
  [SMALL_STATE(48)] = 2291,
  [SMALL_STATE(49)] = 2315,
  [SMALL_STATE(50)] = 2339,
  [SMALL_STATE(51)] = 2363,
  [SMALL_STATE(52)] = 2387,
  [SMALL_STATE(53)] = 2411,
  [SMALL_STATE(54)] = 2445,
  [SMALL_STATE(55)] = 2469,
  [SMALL_STATE(56)] = 2493,
  [SMALL_STATE(57)] = 2517,
  [SMALL_STATE(58)] = 2541,
  [SMALL_STATE(59)] = 2565,
  [SMALL_STATE(60)] = 2589,
  [SMALL_STATE(61)] = 2613,
  [SMALL_STATE(62)] = 2637,
  [SMALL_STATE(63)] = 2658,
  [SMALL_STATE(64)] = 2679,
  [SMALL_STATE(65)] = 2700,
  [SMALL_STATE(66)] = 2721,
  [SMALL_STATE(67)] = 2746,
  [SMALL_STATE(68)] = 2767,
  [SMALL_STATE(69)] = 2788,
  [SMALL_STATE(70)] = 2809,
  [SMALL_STATE(71)] = 2839,
  [SMALL_STATE(72)] = 2869,
  [SMALL_STATE(73)] = 2887,
  [SMALL_STATE(74)] = 2917,
  [SMALL_STATE(75)] = 2947,
  [SMALL_STATE(76)] = 2977,
  [SMALL_STATE(77)] = 2998,
  [SMALL_STATE(78)] = 3019,
  [SMALL_STATE(79)] = 3037,
  [SMALL_STATE(80)] = 3059,
  [SMALL_STATE(81)] = 3085,
  [SMALL_STATE(82)] = 3103,
  [SMALL_STATE(83)] = 3121,
  [SMALL_STATE(84)] = 3137,
  [SMALL_STATE(85)] = 3159,
  [SMALL_STATE(86)] = 3185,
  [SMALL_STATE(87)] = 3200,
  [SMALL_STATE(88)] = 3225,
  [SMALL_STATE(89)] = 3250,
  [SMALL_STATE(90)] = 3265,
  [SMALL_STATE(91)] = 3282,
  [SMALL_STATE(92)] = 3297,
  [SMALL_STATE(93)] = 3316,
  [SMALL_STATE(94)] = 3331,
  [SMALL_STATE(95)] = 3346,
  [SMALL_STATE(96)] = 3361,
  [SMALL_STATE(97)] = 3376,
  [SMALL_STATE(98)] = 3391,
  [SMALL_STATE(99)] = 3406,
  [SMALL_STATE(100)] = 3421,
  [SMALL_STATE(101)] = 3436,
  [SMALL_STATE(102)] = 3455,
  [SMALL_STATE(103)] = 3470,
  [SMALL_STATE(104)] = 3485,
  [SMALL_STATE(105)] = 3505,
  [SMALL_STATE(106)] = 3521,
  [SMALL_STATE(107)] = 3537,
  [SMALL_STATE(108)] = 3553,
  [SMALL_STATE(109)] = 3566,
  [SMALL_STATE(110)] = 3579,
  [SMALL_STATE(111)] = 3592,
  [SMALL_STATE(112)] = 3605,
  [SMALL_STATE(113)] = 3620,
  [SMALL_STATE(114)] = 3633,
  [SMALL_STATE(115)] = 3652,
  [SMALL_STATE(116)] = 3665,
  [SMALL_STATE(117)] = 3684,
  [SMALL_STATE(118)] = 3697,
  [SMALL_STATE(119)] = 3710,
  [SMALL_STATE(120)] = 3729,
  [SMALL_STATE(121)] = 3748,
  [SMALL_STATE(122)] = 3761,
  [SMALL_STATE(123)] = 3774,
  [SMALL_STATE(124)] = 3787,
  [SMALL_STATE(125)] = 3806,
  [SMALL_STATE(126)] = 3825,
  [SMALL_STATE(127)] = 3838,
  [SMALL_STATE(128)] = 3857,
  [SMALL_STATE(129)] = 3870,
  [SMALL_STATE(130)] = 3887,
  [SMALL_STATE(131)] = 3906,
  [SMALL_STATE(132)] = 3922,
  [SMALL_STATE(133)] = 3935,
  [SMALL_STATE(134)] = 3948,
  [SMALL_STATE(135)] = 3963,
  [SMALL_STATE(136)] = 3976,
  [SMALL_STATE(137)] = 3991,
  [SMALL_STATE(138)] = 4006,
  [SMALL_STATE(139)] = 4019,
  [SMALL_STATE(140)] = 4029,
  [SMALL_STATE(141)] = 4039,
  [SMALL_STATE(142)] = 4049,
  [SMALL_STATE(143)] = 4059,
  [SMALL_STATE(144)] = 4072,
  [SMALL_STATE(145)] = 4083,
  [SMALL_STATE(146)] = 4096,
  [SMALL_STATE(147)] = 4107,
  [SMALL_STATE(148)] = 4120,
  [SMALL_STATE(149)] = 4131,
  [SMALL_STATE(150)] = 4141,
  [SMALL_STATE(151)] = 4151,
  [SMALL_STATE(152)] = 4161,
  [SMALL_STATE(153)] = 4171,
  [SMALL_STATE(154)] = 4181,
  [SMALL_STATE(155)] = 4191,
  [SMALL_STATE(156)] = 4201,
  [SMALL_STATE(157)] = 4211,
  [SMALL_STATE(158)] = 4221,
  [SMALL_STATE(159)] = 4228,
  [SMALL_STATE(160)] = 4235,
  [SMALL_STATE(161)] = 4242,
  [SMALL_STATE(162)] = 4249,
  [SMALL_STATE(163)] = 4256,
  [SMALL_STATE(164)] = 4263,
  [SMALL_STATE(165)] = 4270,
  [SMALL_STATE(166)] = 4277,
  [SMALL_STATE(167)] = 4284,
  [SMALL_STATE(168)] = 4291,
  [SMALL_STATE(169)] = 4298,
  [SMALL_STATE(170)] = 4305,
  [SMALL_STATE(171)] = 4312,
  [SMALL_STATE(172)] = 4319,
  [SMALL_STATE(173)] = 4326,
  [SMALL_STATE(174)] = 4333,
  [SMALL_STATE(175)] = 4340,
  [SMALL_STATE(176)] = 4347,
  [SMALL_STATE(177)] = 4354,
  [SMALL_STATE(178)] = 4361,
  [SMALL_STATE(179)] = 4368,
  [SMALL_STATE(180)] = 4375,
  [SMALL_STATE(181)] = 4382,
  [SMALL_STATE(182)] = 4389,
  [SMALL_STATE(183)] = 4396,
  [SMALL_STATE(184)] = 4403,
  [SMALL_STATE(185)] = 4410,
  [SMALL_STATE(186)] = 4417,
  [SMALL_STATE(187)] = 4424,
  [SMALL_STATE(188)] = 4431,
  [SMALL_STATE(189)] = 4438,
  [SMALL_STATE(190)] = 4445,
  [SMALL_STATE(191)] = 4452,
  [SMALL_STATE(192)] = 4459,
  [SMALL_STATE(193)] = 4466,
  [SMALL_STATE(194)] = 4473,
  [SMALL_STATE(195)] = 4480,
  [SMALL_STATE(196)] = 4487,
  [SMALL_STATE(197)] = 4494,
  [SMALL_STATE(198)] = 4501,
  [SMALL_STATE(199)] = 4508,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(140),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declarations, 1),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_declarations_repeat1, 2),
  [49] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_declarations_repeat1, 2), SHIFT_REPEAT(64),
  [52] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_declarations_repeat1, 2), SHIFT_REPEAT(53),
  [55] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_declarations_repeat1, 2), SHIFT_REPEAT(148),
  [58] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_declarations_repeat1, 2), SHIFT_REPEAT(146),
  [61] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_declarations_repeat1, 2), SHIFT_REPEAT(23),
  [64] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_declarations_repeat1, 2), SHIFT_REPEAT(20),
  [67] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_declarations_repeat1, 2), SHIFT_REPEAT(153),
  [70] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_declarations_repeat1, 2), SHIFT_REPEAT(152),
  [73] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_declarations_repeat1, 2), SHIFT_REPEAT(151),
  [76] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_declarations_repeat1, 2), SHIFT_REPEAT(150),
  [79] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_declarations_repeat1, 2), SHIFT_REPEAT(149),
  [82] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_declarations_repeat1, 2), SHIFT_REPEAT(183),
  [85] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_declarations_repeat1, 2), SHIFT_REPEAT(181),
  [88] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_declarations_repeat1, 2), SHIFT_REPEAT(154),
  [91] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [93] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [95] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__not_interpolation, 1),
  [97] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [99] = {.entry = {.count = 1, .reusable = false}}, SHIFT(154),
  [101] = {.entry = {.count = 1, .reusable = false}}, SHIFT(157),
  [103] = {.entry = {.count = 1, .reusable = false}}, SHIFT(102),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__not_interpolation, 1),
  [109] = {.entry = {.count = 1, .reusable = false}}, SHIFT(103),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [119] = {.entry = {.count = 1, .reusable = false}}, SHIFT(117),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [131] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(103),
  [134] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(32),
  [137] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(38),
  [140] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(155),
  [143] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(156),
  [146] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(117),
  [149] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(117),
  [152] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2),
  [154] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(70),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__optional_seq, 1),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [179] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_seq_repeat1, 2), SHIFT_REPEAT(64),
  [182] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_seq_repeat1, 2),
  [184] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_seq_repeat1, 2), SHIFT_REPEAT(148),
  [187] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_seq_repeat1, 2), SHIFT_REPEAT(146),
  [190] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_seq_repeat1, 2), SHIFT_REPEAT(23),
  [193] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_seq_repeat1, 2), SHIFT_REPEAT(20),
  [196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [198] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_seq, 2),
  [200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [206] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declaration, 1),
  [208] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_declaration, 1),
  [210] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_matches, 3),
  [212] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_matches, 3),
  [214] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_matches, 2),
  [216] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_matches, 2),
  [218] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_key_binding_declaration, 3, .production_id = 7),
  [220] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_key_binding_declaration, 3, .production_id = 7),
  [222] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parrot_declaration, 3, .production_id = 4),
  [224] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parrot_declaration, 3, .production_id = 4),
  [226] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_noise_declaration, 3, .production_id = 4),
  [228] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_noise_declaration, 3, .production_id = 4),
  [230] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_gamepad_declaration, 3, .production_id = 4),
  [232] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_gamepad_declaration, 3, .production_id = 4),
  [234] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_face_declaration, 3, .production_id = 4),
  [236] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_face_declaration, 3, .production_id = 4),
  [238] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_app_declaration, 3, .production_id = 4),
  [240] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_app_declaration, 3, .production_id = 4),
  [242] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statements, 2),
  [244] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__statements, 2),
  [246] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_statement, 4, .production_id = 4),
  [248] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assignment_statement, 4, .production_id = 4),
  [250] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command_declaration, 3, .production_id = 4),
  [252] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_command_declaration, 3, .production_id = 4),
  [254] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 1),
  [256] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 1),
  [258] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 1),
  [260] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_statement, 1),
  [262] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statements, 1, .production_id = 5),
  [264] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__statements, 1, .production_id = 5),
  [266] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_settings_declaration, 3, .production_id = 4),
  [268] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_settings_declaration, 3, .production_id = 4),
  [270] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_statement, 2, .production_id = 9),
  [272] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression_statement, 2, .production_id = 9),
  [274] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 2),
  [276] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 2),
  [278] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag_import_declaration, 4, .production_id = 4),
  [280] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag_import_declaration, 4, .production_id = 4),
  [282] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_repeat1, 2),
  [284] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_repeat1, 2),
  [286] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parenthesized_rule, 3),
  [288] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parenthesized_rule, 3),
  [290] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_word, 1),
  [292] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_word, 1),
  [294] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_repeat, 2),
  [296] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_repeat, 2),
  [298] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_seq_repeat1, 1),
  [300] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_seq_repeat1, 1),
  [302] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 3, .production_id = 1),
  [304] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 3, .production_id = 1),
  [306] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_capture, 3, .production_id = 2),
  [308] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_capture, 3, .production_id = 2),
  [310] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_optional, 3),
  [312] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_optional, 3),
  [314] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [316] = {.entry = {.count = 1, .reusable = false}}, SHIFT(106),
  [318] = {.entry = {.count = 1, .reusable = false}}, SHIFT(107),
  [320] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [322] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [324] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [326] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [328] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [330] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [332] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 1),
  [334] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(5),
  [337] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(106),
  [340] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(107),
  [343] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(73),
  [346] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(73),
  [349] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2),
  [351] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [353] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [355] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [357] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [359] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_word, 1), REDUCE(sym_identifier, 1),
  [362] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 1, .production_id = 6),
  [364] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [366] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [368] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [370] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_matches_repeat1, 2), SHIFT_REPEAT(72),
  [373] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_matches_repeat1, 2),
  [375] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_matches_repeat1, 2), SHIFT_REPEAT(140),
  [378] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_key_action, 3, .production_id = 3),
  [380] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [382] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [384] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 4),
  [386] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [388] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [390] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [392] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [394] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [396] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [398] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [400] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_operator, 2, .production_id = 8),
  [402] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_operator, 3, .production_id = 11),
  [404] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parenthesized_expression, 3),
  [406] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2),
  [408] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 5),
  [410] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [412] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sleep_action, 3, .production_id = 3),
  [414] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_action, 2, .production_id = 10),
  [416] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 3),
  [418] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 2),
  [420] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 1),
  [422] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_argument_list_repeat1, 2),
  [424] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_interpolation, 3),
  [426] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interpolation, 3),
  [428] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__escape_interpolation, 1),
  [430] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__escape_interpolation, 1),
  [432] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [434] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [436] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [438] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [440] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [442] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [444] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [446] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [448] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [450] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [452] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_match_repeat1, 2),
  [454] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_match_repeat1, 2), SHIFT_REPEAT(140),
  [457] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_match, 5, .production_id = 12),
  [459] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_match, 5, .production_id = 12),
  [461] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_match, 4, .production_id = 4),
  [463] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_match, 4, .production_id = 4),
  [465] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_choice_repeat1, 2),
  [467] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_choice_repeat1, 2), SHIFT_REPEAT(41),
  [470] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__optional_anchor, 2),
  [472] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [474] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_choice, 2),
  [476] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [478] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__optional_choice, 1),
  [480] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__optional_anchor, 1),
  [482] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [484] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_match_modifier, 1),
  [486] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__optional_anchor, 3),
  [488] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [490] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [492] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_argument_list_repeat1, 2), SHIFT_REPEAT(33),
  [495] = {.entry = {.count = 1, .reusable = false}}, SHIFT(175),
  [497] = {.entry = {.count = 1, .reusable = false}}, SHIFT(174),
  [499] = {.entry = {.count = 1, .reusable = false}}, SHIFT(162),
  [501] = {.entry = {.count = 1, .reusable = false}}, SHIFT(165),
  [503] = {.entry = {.count = 1, .reusable = false}}, SHIFT(159),
  [505] = {.entry = {.count = 1, .reusable = false}}, SHIFT(180),
  [507] = {.entry = {.count = 1, .reusable = false}}, SHIFT(182),
  [509] = {.entry = {.count = 1, .reusable = false}}, SHIFT(197),
  [511] = {.entry = {.count = 1, .reusable = false}}, SHIFT(187),
  [513] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [515] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [517] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [519] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [521] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [523] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [525] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [527] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [529] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [531] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [533] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [535] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [537] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [539] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [541] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [543] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [545] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [547] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [549] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule, 1),
  [551] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [553] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [555] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [557] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [559] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [561] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [563] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2),
  [565] = {.entry = {.count = 1, .reusable = false}}, SHIFT(166),
  [567] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [569] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [571] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [573] = {.entry = {.count = 1, .reusable = false}}, SHIFT(158),
  [575] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_app_binding, 3, .production_id = 3),
  [577] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_face_binding, 3, .production_id = 3),
  [579] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_gamepad_binding, 3, .production_id = 3),
  [581] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_noise_binding, 3, .production_id = 3),
  [583] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parrot_binding, 3, .production_id = 3),
  [585] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [587] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [589] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
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
