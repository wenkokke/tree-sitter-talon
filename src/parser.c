#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 207
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 117
#define ALIAS_COUNT 1
#define TOKEN_COUNT 52
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
  anon_sym_deck_LPAREN = 23,
  anon_sym_gamepad_LPAREN = 24,
  anon_sym_noise_LPAREN = 25,
  anon_sym_parrot_LPAREN = 26,
  sym_settings_binding = 27,
  sym_tag_binding = 28,
  anon_sym_EQ = 29,
  anon_sym_SLASH = 30,
  anon_sym_PERCENT = 31,
  anon_sym_or = 32,
  anon_sym_key_LPAREN = 33,
  anon_sym_sleep_LPAREN = 34,
  aux_sym__implicit_string_argument_token1 = 35,
  anon_sym_LPAREN2 = 36,
  anon_sym_COMMA = 37,
  aux_sym_identifier_token1 = 38,
  sym_integer = 39,
  sym_float = 40,
  sym_implicit_string = 41,
  anon_sym_LBRACE_LBRACE = 42,
  anon_sym_RBRACE_RBRACE = 43,
  sym_string_escape_sequence = 44,
  sym__not_escapesequence = 45,
  sym__newline = 46,
  sym__indent = 47,
  sym__dedent = 48,
  sym__string_start = 49,
  sym_string_content = 50,
  sym__string_end = 51,
  sym_source_file = 52,
  sym_matches = 53,
  sym_match_modifier = 54,
  sym_match = 55,
  sym_declarations = 56,
  sym_declaration = 57,
  sym_command_declaration = 58,
  sym_app_declaration = 59,
  sym_face_declaration = 60,
  sym_deck_declaration = 61,
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
  sym_word = 75,
  sym_list = 76,
  sym_capture = 77,
  sym_optional = 78,
  sym_repeat = 79,
  sym_repeat1 = 80,
  sym_parenthesized_rule = 81,
  sym_app_binding = 82,
  sym_face_binding = 83,
  sym_deck_binding = 84,
  sym_gamepad_binding = 85,
  sym_noise_binding = 86,
  sym_parrot_binding = 87,
  sym__statements = 88,
  sym_block = 89,
  sym_statement = 90,
  sym_assignment_statement = 91,
  sym_expression_statement = 92,
  sym_expression = 93,
  sym_variable = 94,
  sym_parenthesized_expression = 95,
  sym_binary_operator = 96,
  sym_unary_operator = 97,
  sym_key_action = 98,
  sym_sleep_action = 99,
  sym__implicit_string_argument = 100,
  sym_action = 101,
  sym_argument_list = 102,
  sym_identifier = 103,
  sym_string = 104,
  sym_interpolation = 105,
  sym__escape_interpolation = 106,
  sym__not_interpolation = 107,
  aux_sym_matches_repeat1 = 108,
  aux_sym_matches_repeat2 = 109,
  aux_sym_match_repeat1 = 110,
  aux_sym_declarations_repeat1 = 111,
  aux_sym_choice_repeat1 = 112,
  aux_sym_seq_repeat1 = 113,
  aux_sym_block_repeat1 = 114,
  aux_sym_argument_list_repeat1 = 115,
  aux_sym_string_repeat1 = 116,
  alias_sym_key_binding = 117,
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
  [anon_sym_deck_LPAREN] = "deck(",
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
  [sym_deck_declaration] = "deck_declaration",
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
  [sym_deck_binding] = "deck_binding",
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
  [aux_sym_matches_repeat2] = "matches_repeat2",
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
  [anon_sym_deck_LPAREN] = anon_sym_deck_LPAREN,
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
  [sym_deck_declaration] = sym_deck_declaration,
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
  [sym_deck_binding] = sym_deck_binding,
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
  [aux_sym_matches_repeat2] = aux_sym_matches_repeat2,
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
  [anon_sym_deck_LPAREN] = {
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
  [sym_deck_declaration] = {
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
  [sym_deck_binding] = {
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
  [aux_sym_matches_repeat2] = {
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
  [19] = 19,
  [20] = 19,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 22,
  [27] = 27,
  [28] = 24,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 31,
  [35] = 33,
  [36] = 29,
  [37] = 37,
  [38] = 32,
  [39] = 39,
  [40] = 30,
  [41] = 37,
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
  [74] = 72,
  [75] = 75,
  [76] = 76,
  [77] = 75,
  [78] = 78,
  [79] = 79,
  [80] = 80,
  [81] = 81,
  [82] = 82,
  [83] = 83,
  [84] = 52,
  [85] = 82,
  [86] = 58,
  [87] = 48,
  [88] = 88,
  [89] = 89,
  [90] = 90,
  [91] = 91,
  [92] = 92,
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
  [103] = 76,
  [104] = 91,
  [105] = 80,
  [106] = 106,
  [107] = 107,
  [108] = 108,
  [109] = 109,
  [110] = 83,
  [111] = 99,
  [112] = 102,
  [113] = 113,
  [114] = 114,
  [115] = 95,
  [116] = 88,
  [117] = 117,
  [118] = 118,
  [119] = 119,
  [120] = 101,
  [121] = 114,
  [122] = 89,
  [123] = 119,
  [124] = 94,
  [125] = 100,
  [126] = 113,
  [127] = 98,
  [128] = 93,
  [129] = 97,
  [130] = 90,
  [131] = 96,
  [132] = 92,
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
  [145] = 145,
  [146] = 146,
  [147] = 147,
  [148] = 148,
  [149] = 149,
  [150] = 150,
  [151] = 151,
  [152] = 150,
  [153] = 153,
  [154] = 154,
  [155] = 155,
  [156] = 156,
  [157] = 157,
  [158] = 158,
  [159] = 159,
  [160] = 154,
  [161] = 161,
  [162] = 162,
  [163] = 156,
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
  [182] = 182,
  [183] = 183,
  [184] = 184,
  [185] = 185,
  [186] = 186,
  [187] = 187,
  [188] = 188,
  [189] = 189,
  [190] = 190,
  [191] = 191,
  [192] = 192,
  [193] = 193,
  [194] = 194,
  [195] = 195,
  [196] = 194,
  [197] = 197,
  [198] = 198,
  [199] = 199,
  [200] = 200,
  [201] = 201,
  [202] = 202,
  [203] = 203,
  [204] = 197,
  [205] = 189,
  [206] = 206,
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
      if (eof) ADVANCE(103);
      if (lookahead == '#') ADVANCE(106);
      if (lookahead == '$') ADVANCE(219);
      if (lookahead == '%') ADVANCE(243);
      if (lookahead == '(') ADVANCE(251);
      if (lookahead == ')') ADVANCE(232);
      if (lookahead == '*') ADVANCE(229);
      if (lookahead == '+') ADVANCE(230);
      if (lookahead == ',') ADVANCE(252);
      if (lookahead == '-') ADVANCE(209);
      if (lookahead == '.') ADVANCE(80);
      if (lookahead == '/') ADVANCE(242);
      if (lookahead == '0') ADVANCE(256);
      if (lookahead == ':') ADVANCE(216);
      if (lookahead == '<') ADVANCE(225);
      if (lookahead == '=') ADVANCE(241);
      if (lookahead == '>') ADVANCE(226);
      if (lookahead == '[') ADVANCE(227);
      if (lookahead == '\\') SKIP(95)
      if (lookahead == ']') ADVANCE(228);
      if (lookahead == '^') ADVANCE(218);
      if (lookahead == 'a') ADVANCE(60);
      if (lookahead == 'd') ADVANCE(46);
      if (lookahead == 'f') ADVANCE(41);
      if (lookahead == 'g') ADVANCE(37);
      if (lookahead == 'k') ADVANCE(47);
      if (lookahead == 'n') ADVANCE(62);
      if (lookahead == 'o') ADVANCE(67);
      if (lookahead == 'p') ADVANCE(39);
      if (lookahead == 's') ADVANCE(48);
      if (lookahead == 't') ADVANCE(38);
      if (lookahead == '{') ADVANCE(222);
      if (lookahead == '|') ADVANCE(217);
      if (lookahead == '}') ADVANCE(224);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(100)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(255);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(272);
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
      if (lookahead == '#') ADVANCE(105);
      if (lookahead == '\\') ADVANCE(266);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(12);
      if (lookahead == '\f' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) ADVANCE(267);
      if (lookahead != 0) ADVANCE(268);
      END_STATE();
    case 13:
      if (lookahead == '\n') SKIP(21)
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(78);
      if (lookahead != 0) ADVANCE(268);
      END_STATE();
    case 14:
      if (lookahead == '#') ADVANCE(106);
      if (lookahead == '$') ADVANCE(219);
      if (lookahead == '(') ADVANCE(231);
      if (lookahead == ')') ADVANCE(232);
      if (lookahead == '*') ADVANCE(229);
      if (lookahead == '+') ADVANCE(230);
      if (lookahead == ':') ADVANCE(216);
      if (lookahead == '<') ADVANCE(225);
      if (lookahead == '[') ADVANCE(227);
      if (lookahead == '\\') SKIP(5)
      if (lookahead == ']') ADVANCE(228);
      if (lookahead == '^') ADVANCE(218);
      if (lookahead == '{') ADVANCE(221);
      if (lookahead == '|') ADVANCE(217);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(14)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(208);
      if (aux_sym_word_token1_character_set_1(lookahead)) ADVANCE(220);
      END_STATE();
    case 15:
      if (lookahead == '#') ADVANCE(106);
      if (lookahead == '%') ADVANCE(243);
      if (lookahead == '(') ADVANCE(251);
      if (lookahead == ')') ADVANCE(232);
      if (lookahead == '*') ADVANCE(229);
      if (lookahead == '+') ADVANCE(230);
      if (lookahead == ',') ADVANCE(252);
      if (lookahead == '-') ADVANCE(209);
      if (lookahead == '/') ADVANCE(242);
      if (lookahead == ':') ADVANCE(216);
      if (lookahead == '=') ADVANCE(241);
      if (lookahead == '>') ADVANCE(226);
      if (lookahead == '\\') SKIP(7)
      if (lookahead == 'o') ADVANCE(67);
      if (lookahead == '}') ADVANCE(223);
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
      if (lookahead == '#') ADVANCE(106);
      if (lookahead == '%') ADVANCE(243);
      if (lookahead == ')') ADVANCE(232);
      if (lookahead == '*') ADVANCE(229);
      if (lookahead == '+') ADVANCE(230);
      if (lookahead == ',') ADVANCE(252);
      if (lookahead == '-') ADVANCE(209);
      if (lookahead == '/') ADVANCE(242);
      if (lookahead == ':') ADVANCE(216);
      if (lookahead == '=') ADVANCE(241);
      if (lookahead == '>') ADVANCE(226);
      if (lookahead == '\\') SKIP(7)
      if (lookahead == 'o') ADVANCE(67);
      if (lookahead == '}') ADVANCE(223);
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
      if (lookahead == '#') ADVANCE(106);
      if (lookahead == '(') ADVANCE(231);
      if (lookahead == ')') ADVANCE(232);
      if (lookahead == ',') ADVANCE(252);
      if (lookahead == '-') ADVANCE(209);
      if (lookahead == '.') ADVANCE(80);
      if (lookahead == '0') ADVANCE(256);
      if (lookahead == '\\') SKIP(3)
      if (lookahead == '_') ADVANCE(253);
      if (lookahead == 'k') ADVANCE(140);
      if (lookahead == 's') ADVANCE(151);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(17)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(255);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 18:
      if (lookahead == '#') ADVANCE(106);
      if (lookahead == '(') ADVANCE(231);
      if (lookahead == '-') ADVANCE(209);
      if (lookahead == '.') ADVANCE(80);
      if (lookahead == '0') ADVANCE(256);
      if (lookahead == '\\') ADVANCE(273);
      if (lookahead == '_') ADVANCE(253);
      if (lookahead == 'k') ADVANCE(140);
      if (lookahead == 's') ADVANCE(151);
      if (lookahead == '{') ADVANCE(222);
      if (lookahead == '}') ADVANCE(224);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(18)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(255);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 19:
      if (lookahead == '#') ADVANCE(106);
      if (lookahead == '-') ADVANCE(209);
      if (lookahead == '\\') SKIP(9)
      if (lookahead == '_') ADVANCE(253);
      if (lookahead == 'a') ADVANCE(154);
      if (lookahead == 'n') ADVANCE(157);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(19)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 20:
      if (lookahead == '#') ADVANCE(106);
      if (lookahead == '\\') SKIP(11)
      if (lookahead == '_') ADVANCE(253);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(20)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 21:
      if (lookahead == '#') ADVANCE(105);
      if (lookahead == '\\') ADVANCE(266);
      if (lookahead == '\f' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) ADVANCE(267);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(21)
      if (lookahead != 0) ADVANCE(268);
      END_STATE();
    case 22:
      if (lookahead == '(') ADVANCE(233);
      END_STATE();
    case 23:
      if (lookahead == '(') ADVANCE(245);
      END_STATE();
    case 24:
      if (lookahead == '(') ADVANCE(32);
      END_STATE();
    case 25:
      if (lookahead == '(') ADVANCE(235);
      END_STATE();
    case 26:
      if (lookahead == '(') ADVANCE(234);
      END_STATE();
    case 27:
      if (lookahead == '(') ADVANCE(237);
      END_STATE();
    case 28:
      if (lookahead == '(') ADVANCE(246);
      END_STATE();
    case 29:
      if (lookahead == '(') ADVANCE(238);
      END_STATE();
    case 30:
      if (lookahead == '(') ADVANCE(236);
      END_STATE();
    case 31:
      if (lookahead == '(') ADVANCE(33);
      END_STATE();
    case 32:
      if (lookahead == ')') ADVANCE(240);
      END_STATE();
    case 33:
      if (lookahead == ')') ADVANCE(239);
      END_STATE();
    case 34:
      if (lookahead == '_') ADVANCE(77);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(258);
      END_STATE();
    case 35:
      if (lookahead == '_') ADVANCE(79);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(259);
      END_STATE();
    case 36:
      if (lookahead == '_') ADVANCE(84);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(260);
      END_STATE();
    case 37:
      if (lookahead == 'a') ADVANCE(59);
      END_STATE();
    case 38:
      if (lookahead == 'a') ADVANCE(55);
      END_STATE();
    case 39:
      if (lookahead == 'a') ADVANCE(69);
      END_STATE();
    case 40:
      if (lookahead == 'a') ADVANCE(45);
      END_STATE();
    case 41:
      if (lookahead == 'a') ADVANCE(43);
      END_STATE();
    case 42:
      if (lookahead == 'c') ADVANCE(58);
      END_STATE();
    case 43:
      if (lookahead == 'c') ADVANCE(50);
      END_STATE();
    case 44:
      if (lookahead == 'd') ADVANCE(210);
      END_STATE();
    case 45:
      if (lookahead == 'd') ADVANCE(30);
      END_STATE();
    case 46:
      if (lookahead == 'e') ADVANCE(42);
      END_STATE();
    case 47:
      if (lookahead == 'e') ADVANCE(75);
      END_STATE();
    case 48:
      if (lookahead == 'e') ADVANCE(73);
      if (lookahead == 'l') ADVANCE(51);
      END_STATE();
    case 49:
      if (lookahead == 'e') ADVANCE(65);
      END_STATE();
    case 50:
      if (lookahead == 'e') ADVANCE(26);
      END_STATE();
    case 51:
      if (lookahead == 'e') ADVANCE(53);
      END_STATE();
    case 52:
      if (lookahead == 'e') ADVANCE(27);
      END_STATE();
    case 53:
      if (lookahead == 'e') ADVANCE(66);
      END_STATE();
    case 54:
      if (lookahead == 'g') ADVANCE(70);
      END_STATE();
    case 55:
      if (lookahead == 'g') ADVANCE(24);
      END_STATE();
    case 56:
      if (lookahead == 'i') ADVANCE(71);
      if (lookahead == 't') ADVANCE(213);
      END_STATE();
    case 57:
      if (lookahead == 'i') ADVANCE(61);
      END_STATE();
    case 58:
      if (lookahead == 'k') ADVANCE(25);
      END_STATE();
    case 59:
      if (lookahead == 'm') ADVANCE(49);
      END_STATE();
    case 60:
      if (lookahead == 'n') ADVANCE(44);
      if (lookahead == 'p') ADVANCE(64);
      END_STATE();
    case 61:
      if (lookahead == 'n') ADVANCE(54);
      END_STATE();
    case 62:
      if (lookahead == 'o') ADVANCE(56);
      END_STATE();
    case 63:
      if (lookahead == 'o') ADVANCE(74);
      END_STATE();
    case 64:
      if (lookahead == 'p') ADVANCE(22);
      END_STATE();
    case 65:
      if (lookahead == 'p') ADVANCE(40);
      END_STATE();
    case 66:
      if (lookahead == 'p') ADVANCE(28);
      END_STATE();
    case 67:
      if (lookahead == 'r') ADVANCE(244);
      END_STATE();
    case 68:
      if (lookahead == 'r') ADVANCE(63);
      END_STATE();
    case 69:
      if (lookahead == 'r') ADVANCE(68);
      END_STATE();
    case 70:
      if (lookahead == 's') ADVANCE(31);
      END_STATE();
    case 71:
      if (lookahead == 's') ADVANCE(52);
      END_STATE();
    case 72:
      if (lookahead == 't') ADVANCE(57);
      END_STATE();
    case 73:
      if (lookahead == 't') ADVANCE(72);
      END_STATE();
    case 74:
      if (lookahead == 't') ADVANCE(29);
      END_STATE();
    case 75:
      if (lookahead == 'y') ADVANCE(23);
      END_STATE();
    case 76:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(81);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(263);
      END_STATE();
    case 77:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(258);
      END_STATE();
    case 78:
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(78);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(268);
      END_STATE();
    case 79:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(259);
      END_STATE();
    case 80:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(262);
      END_STATE();
    case 81:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(263);
      END_STATE();
    case 82:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(271);
      END_STATE();
    case 83:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(82);
      END_STATE();
    case 84:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(260);
      END_STATE();
    case 85:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(271);
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
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(88);
      END_STATE();
    case 90:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(89);
      END_STATE();
    case 91:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(90);
      END_STATE();
    case 92:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(91);
      END_STATE();
    case 93:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(253);
      END_STATE();
    case 94:
      if (eof) ADVANCE(103);
      if (lookahead == '\n') SKIP(100)
      END_STATE();
    case 95:
      if (eof) ADVANCE(103);
      if (lookahead == '\n') SKIP(100)
      if (lookahead == '\r') SKIP(94)
      END_STATE();
    case 96:
      if (eof) ADVANCE(103);
      if (lookahead == '\n') SKIP(101)
      END_STATE();
    case 97:
      if (eof) ADVANCE(103);
      if (lookahead == '\n') SKIP(101)
      if (lookahead == '\r') SKIP(96)
      END_STATE();
    case 98:
      if (eof) ADVANCE(103);
      if (lookahead == '\n') SKIP(102)
      END_STATE();
    case 99:
      if (eof) ADVANCE(103);
      if (lookahead == '\n') SKIP(102)
      if (lookahead == '\r') SKIP(98)
      END_STATE();
    case 100:
      if (eof) ADVANCE(103);
      if (lookahead == '#') ADVANCE(106);
      if (lookahead == '$') ADVANCE(219);
      if (lookahead == '%') ADVANCE(243);
      if (lookahead == '(') ADVANCE(231);
      if (lookahead == ')') ADVANCE(232);
      if (lookahead == '*') ADVANCE(229);
      if (lookahead == '+') ADVANCE(230);
      if (lookahead == ',') ADVANCE(252);
      if (lookahead == '-') ADVANCE(209);
      if (lookahead == '.') ADVANCE(80);
      if (lookahead == '/') ADVANCE(242);
      if (lookahead == '0') ADVANCE(256);
      if (lookahead == ':') ADVANCE(216);
      if (lookahead == '<') ADVANCE(225);
      if (lookahead == '=') ADVANCE(241);
      if (lookahead == '>') ADVANCE(226);
      if (lookahead == '[') ADVANCE(227);
      if (lookahead == '\\') SKIP(95)
      if (lookahead == ']') ADVANCE(228);
      if (lookahead == '^') ADVANCE(218);
      if (lookahead == 'a') ADVANCE(60);
      if (lookahead == 'd') ADVANCE(46);
      if (lookahead == 'f') ADVANCE(41);
      if (lookahead == 'g') ADVANCE(37);
      if (lookahead == 'k') ADVANCE(47);
      if (lookahead == 'n') ADVANCE(62);
      if (lookahead == 'o') ADVANCE(67);
      if (lookahead == 'p') ADVANCE(39);
      if (lookahead == 's') ADVANCE(48);
      if (lookahead == 't') ADVANCE(38);
      if (lookahead == '{') ADVANCE(222);
      if (lookahead == '|') ADVANCE(217);
      if (lookahead == '}') ADVANCE(224);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(100)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(255);
      END_STATE();
    case 101:
      if (eof) ADVANCE(103);
      if (lookahead == '#') ADVANCE(106);
      if (lookahead == '(') ADVANCE(231);
      if (lookahead == '-') ADVANCE(209);
      if (lookahead == '<') ADVANCE(225);
      if (lookahead == '[') ADVANCE(227);
      if (lookahead == '\\') SKIP(97)
      if (lookahead == '^') ADVANCE(218);
      if (lookahead == '_') ADVANCE(253);
      if (lookahead == 'a') ADVANCE(153);
      if (lookahead == 'd') ADVANCE(137);
      if (lookahead == 'f') ADVANCE(131);
      if (lookahead == 'g') ADVANCE(127);
      if (lookahead == 'k') ADVANCE(138);
      if (lookahead == 'n') ADVANCE(156);
      if (lookahead == 'p') ADVANCE(128);
      if (lookahead == 's') ADVANCE(139);
      if (lookahead == 't') ADVANCE(129);
      if (lookahead == '{') ADVANCE(221);
      if (lookahead == '}') ADVANCE(223);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(101)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(172);
      if (aux_sym_word_token1_character_set_1(lookahead)) ADVANCE(220);
      END_STATE();
    case 102:
      if (eof) ADVANCE(103);
      if (lookahead == '#') ADVANCE(106);
      if (lookahead == '(') ADVANCE(231);
      if (lookahead == '<') ADVANCE(225);
      if (lookahead == '[') ADVANCE(227);
      if (lookahead == '\\') SKIP(99)
      if (lookahead == '^') ADVANCE(218);
      if (lookahead == 'a') ADVANCE(198);
      if (lookahead == 'd') ADVANCE(182);
      if (lookahead == 'f') ADVANCE(178);
      if (lookahead == 'g') ADVANCE(174);
      if (lookahead == 'k') ADVANCE(183);
      if (lookahead == 'n') ADVANCE(195);
      if (lookahead == 'p') ADVANCE(175);
      if (lookahead == 's') ADVANCE(184);
      if (lookahead == 't') ADVANCE(176);
      if (lookahead == '{') ADVANCE(221);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(102)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(208);
      if (aux_sym_word_token1_character_set_1(lookahead)) ADVANCE(220);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(250);
      if (lookahead == ')') ADVANCE(106);
      if (lookahead != 0) ADVANCE(104);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(105);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(105);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(106);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == '(') ADVANCE(233);
      if (lookahead == '.') ADVANCE(93);
      if (lookahead == '_') ADVANCE(253);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(172);
      if (aux_sym_word_token1_character_set_2(lookahead)) ADVANCE(220);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == '(') ADVANCE(233);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(208);
      if (aux_sym_word_token1_character_set_2(lookahead)) ADVANCE(220);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == '(') ADVANCE(245);
      if (lookahead == '.') ADVANCE(93);
      if (lookahead == '_') ADVANCE(253);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(172);
      if (aux_sym_word_token1_character_set_2(lookahead)) ADVANCE(220);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == '(') ADVANCE(245);
      if (lookahead == '.') ADVANCE(93);
      if (lookahead == '_') ADVANCE(253);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == '(') ADVANCE(245);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(208);
      if (aux_sym_word_token1_character_set_2(lookahead)) ADVANCE(220);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == '(') ADVANCE(32);
      if (lookahead == '.') ADVANCE(93);
      if (lookahead == '_') ADVANCE(253);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(172);
      if (aux_sym_word_token1_character_set_2(lookahead)) ADVANCE(220);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == '(') ADVANCE(32);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(208);
      if (aux_sym_word_token1_character_set_2(lookahead)) ADVANCE(220);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == '(') ADVANCE(235);
      if (lookahead == '.') ADVANCE(93);
      if (lookahead == '_') ADVANCE(253);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(172);
      if (aux_sym_word_token1_character_set_2(lookahead)) ADVANCE(220);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == '(') ADVANCE(235);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(208);
      if (aux_sym_word_token1_character_set_2(lookahead)) ADVANCE(220);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == '(') ADVANCE(234);
      if (lookahead == '.') ADVANCE(93);
      if (lookahead == '_') ADVANCE(253);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(172);
      if (aux_sym_word_token1_character_set_2(lookahead)) ADVANCE(220);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == '(') ADVANCE(234);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(208);
      if (aux_sym_word_token1_character_set_2(lookahead)) ADVANCE(220);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == '(') ADVANCE(237);
      if (lookahead == '.') ADVANCE(93);
      if (lookahead == '_') ADVANCE(253);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(172);
      if (aux_sym_word_token1_character_set_2(lookahead)) ADVANCE(220);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == '(') ADVANCE(237);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(208);
      if (aux_sym_word_token1_character_set_2(lookahead)) ADVANCE(220);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == '(') ADVANCE(246);
      if (lookahead == '.') ADVANCE(93);
      if (lookahead == '_') ADVANCE(253);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == '(') ADVANCE(238);
      if (lookahead == '.') ADVANCE(93);
      if (lookahead == '_') ADVANCE(253);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(172);
      if (aux_sym_word_token1_character_set_2(lookahead)) ADVANCE(220);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == '(') ADVANCE(238);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(208);
      if (aux_sym_word_token1_character_set_2(lookahead)) ADVANCE(220);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == '(') ADVANCE(236);
      if (lookahead == '.') ADVANCE(93);
      if (lookahead == '_') ADVANCE(253);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(172);
      if (aux_sym_word_token1_character_set_2(lookahead)) ADVANCE(220);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == '(') ADVANCE(236);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(208);
      if (aux_sym_word_token1_character_set_2(lookahead)) ADVANCE(220);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == '(') ADVANCE(33);
      if (lookahead == '.') ADVANCE(93);
      if (lookahead == '_') ADVANCE(253);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(172);
      if (aux_sym_word_token1_character_set_2(lookahead)) ADVANCE(220);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == '(') ADVANCE(33);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(208);
      if (aux_sym_word_token1_character_set_2(lookahead)) ADVANCE(220);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == '.') ADVANCE(93);
      if (lookahead == '_') ADVANCE(253);
      if (lookahead == 'a') ADVANCE(152);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(172);
      if (aux_sym_word_token1_character_set_2(lookahead)) ADVANCE(220);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == '.') ADVANCE(93);
      if (lookahead == '_') ADVANCE(253);
      if (lookahead == 'a') ADVANCE(163);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(172);
      if (aux_sym_word_token1_character_set_2(lookahead)) ADVANCE(220);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == '.') ADVANCE(93);
      if (lookahead == '_') ADVANCE(253);
      if (lookahead == 'a') ADVANCE(147);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(172);
      if (aux_sym_word_token1_character_set_2(lookahead)) ADVANCE(220);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == '.') ADVANCE(93);
      if (lookahead == '_') ADVANCE(253);
      if (lookahead == 'a') ADVANCE(136);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(172);
      if (aux_sym_word_token1_character_set_2(lookahead)) ADVANCE(220);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == '.') ADVANCE(93);
      if (lookahead == '_') ADVANCE(253);
      if (lookahead == 'a') ADVANCE(133);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(172);
      if (aux_sym_word_token1_character_set_2(lookahead)) ADVANCE(220);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == '.') ADVANCE(93);
      if (lookahead == '_') ADVANCE(253);
      if (lookahead == 'c') ADVANCE(150);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(172);
      if (aux_sym_word_token1_character_set_2(lookahead)) ADVANCE(220);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == '.') ADVANCE(93);
      if (lookahead == '_') ADVANCE(253);
      if (lookahead == 'c') ADVANCE(144);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(172);
      if (aux_sym_word_token1_character_set_2(lookahead)) ADVANCE(220);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == '.') ADVANCE(93);
      if (lookahead == '_') ADVANCE(253);
      if (lookahead == 'd') ADVANCE(211);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(172);
      if (aux_sym_word_token1_character_set_2(lookahead)) ADVANCE(220);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == '.') ADVANCE(93);
      if (lookahead == '_') ADVANCE(253);
      if (lookahead == 'd') ADVANCE(212);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == '.') ADVANCE(93);
      if (lookahead == '_') ADVANCE(253);
      if (lookahead == 'd') ADVANCE(123);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(172);
      if (aux_sym_word_token1_character_set_2(lookahead)) ADVANCE(220);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == '.') ADVANCE(93);
      if (lookahead == '_') ADVANCE(253);
      if (lookahead == 'e') ADVANCE(132);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(172);
      if (aux_sym_word_token1_character_set_2(lookahead)) ADVANCE(220);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == '.') ADVANCE(93);
      if (lookahead == '_') ADVANCE(253);
      if (lookahead == 'e') ADVANCE(171);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(172);
      if (aux_sym_word_token1_character_set_2(lookahead)) ADVANCE(220);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == '.') ADVANCE(93);
      if (lookahead == '_') ADVANCE(253);
      if (lookahead == 'e') ADVANCE(168);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(172);
      if (aux_sym_word_token1_character_set_2(lookahead)) ADVANCE(220);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == '.') ADVANCE(93);
      if (lookahead == '_') ADVANCE(253);
      if (lookahead == 'e') ADVANCE(170);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == '.') ADVANCE(93);
      if (lookahead == '_') ADVANCE(253);
      if (lookahead == 'e') ADVANCE(160);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == '.') ADVANCE(93);
      if (lookahead == '_') ADVANCE(253);
      if (lookahead == 'e') ADVANCE(161);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(172);
      if (aux_sym_word_token1_character_set_2(lookahead)) ADVANCE(220);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == '.') ADVANCE(93);
      if (lookahead == '_') ADVANCE(253);
      if (lookahead == 'e') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == '.') ADVANCE(93);
      if (lookahead == '_') ADVANCE(253);
      if (lookahead == 'e') ADVANCE(116);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(172);
      if (aux_sym_word_token1_character_set_2(lookahead)) ADVANCE(220);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == '.') ADVANCE(93);
      if (lookahead == '_') ADVANCE(253);
      if (lookahead == 'e') ADVANCE(118);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(172);
      if (aux_sym_word_token1_character_set_2(lookahead)) ADVANCE(220);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == '.') ADVANCE(93);
      if (lookahead == '_') ADVANCE(253);
      if (lookahead == 'g') ADVANCE(164);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(172);
      if (aux_sym_word_token1_character_set_2(lookahead)) ADVANCE(220);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == '.') ADVANCE(93);
      if (lookahead == '_') ADVANCE(253);
      if (lookahead == 'g') ADVANCE(112);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(172);
      if (aux_sym_word_token1_character_set_2(lookahead)) ADVANCE(220);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == '.') ADVANCE(93);
      if (lookahead == '_') ADVANCE(253);
      if (lookahead == 'i') ADVANCE(165);
      if (lookahead == 't') ADVANCE(214);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(172);
      if (aux_sym_word_token1_character_set_2(lookahead)) ADVANCE(220);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == '.') ADVANCE(93);
      if (lookahead == '_') ADVANCE(253);
      if (lookahead == 'i') ADVANCE(155);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(172);
      if (aux_sym_word_token1_character_set_2(lookahead)) ADVANCE(220);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == '.') ADVANCE(93);
      if (lookahead == '_') ADVANCE(253);
      if (lookahead == 'k') ADVANCE(114);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(172);
      if (aux_sym_word_token1_character_set_2(lookahead)) ADVANCE(220);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == '.') ADVANCE(93);
      if (lookahead == '_') ADVANCE(253);
      if (lookahead == 'l') ADVANCE(143);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == '.') ADVANCE(93);
      if (lookahead == '_') ADVANCE(253);
      if (lookahead == 'm') ADVANCE(142);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(172);
      if (aux_sym_word_token1_character_set_2(lookahead)) ADVANCE(220);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == '.') ADVANCE(93);
      if (lookahead == '_') ADVANCE(253);
      if (lookahead == 'n') ADVANCE(134);
      if (lookahead == 'p') ADVANCE(159);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(172);
      if (aux_sym_word_token1_character_set_2(lookahead)) ADVANCE(220);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == '.') ADVANCE(93);
      if (lookahead == '_') ADVANCE(253);
      if (lookahead == 'n') ADVANCE(135);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == '.') ADVANCE(93);
      if (lookahead == '_') ADVANCE(253);
      if (lookahead == 'n') ADVANCE(146);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(172);
      if (aux_sym_word_token1_character_set_2(lookahead)) ADVANCE(220);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == '.') ADVANCE(93);
      if (lookahead == '_') ADVANCE(253);
      if (lookahead == 'o') ADVANCE(148);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(172);
      if (aux_sym_word_token1_character_set_2(lookahead)) ADVANCE(220);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == '.') ADVANCE(93);
      if (lookahead == '_') ADVANCE(253);
      if (lookahead == 'o') ADVANCE(167);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == '.') ADVANCE(93);
      if (lookahead == '_') ADVANCE(253);
      if (lookahead == 'o') ADVANCE(169);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(172);
      if (aux_sym_word_token1_character_set_2(lookahead)) ADVANCE(220);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == '.') ADVANCE(93);
      if (lookahead == '_') ADVANCE(253);
      if (lookahead == 'p') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(172);
      if (aux_sym_word_token1_character_set_2(lookahead)) ADVANCE(220);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == '.') ADVANCE(93);
      if (lookahead == '_') ADVANCE(253);
      if (lookahead == 'p') ADVANCE(120);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == '.') ADVANCE(93);
      if (lookahead == '_') ADVANCE(253);
      if (lookahead == 'p') ADVANCE(130);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(172);
      if (aux_sym_word_token1_character_set_2(lookahead)) ADVANCE(220);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == '.') ADVANCE(93);
      if (lookahead == '_') ADVANCE(253);
      if (lookahead == 'r') ADVANCE(158);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(172);
      if (aux_sym_word_token1_character_set_2(lookahead)) ADVANCE(220);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == '.') ADVANCE(93);
      if (lookahead == '_') ADVANCE(253);
      if (lookahead == 'r') ADVANCE(162);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(172);
      if (aux_sym_word_token1_character_set_2(lookahead)) ADVANCE(220);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == '.') ADVANCE(93);
      if (lookahead == '_') ADVANCE(253);
      if (lookahead == 's') ADVANCE(125);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(172);
      if (aux_sym_word_token1_character_set_2(lookahead)) ADVANCE(220);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == '.') ADVANCE(93);
      if (lookahead == '_') ADVANCE(253);
      if (lookahead == 's') ADVANCE(145);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(172);
      if (aux_sym_word_token1_character_set_2(lookahead)) ADVANCE(220);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == '.') ADVANCE(93);
      if (lookahead == '_') ADVANCE(253);
      if (lookahead == 't') ADVANCE(149);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(172);
      if (aux_sym_word_token1_character_set_2(lookahead)) ADVANCE(220);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == '.') ADVANCE(93);
      if (lookahead == '_') ADVANCE(253);
      if (lookahead == 't') ADVANCE(215);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == '.') ADVANCE(93);
      if (lookahead == '_') ADVANCE(253);
      if (lookahead == 't') ADVANCE(166);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(172);
      if (aux_sym_word_token1_character_set_2(lookahead)) ADVANCE(220);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == '.') ADVANCE(93);
      if (lookahead == '_') ADVANCE(253);
      if (lookahead == 't') ADVANCE(121);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(172);
      if (aux_sym_word_token1_character_set_2(lookahead)) ADVANCE(220);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == '.') ADVANCE(93);
      if (lookahead == '_') ADVANCE(253);
      if (lookahead == 'y') ADVANCE(110);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == '.') ADVANCE(93);
      if (lookahead == '_') ADVANCE(253);
      if (lookahead == 'y') ADVANCE(109);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(172);
      if (aux_sym_word_token1_character_set_2(lookahead)) ADVANCE(220);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == '.') ADVANCE(93);
      if (lookahead == '_') ADVANCE(253);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(172);
      if (aux_sym_word_token1_character_set_2(lookahead)) ADVANCE(220);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == '.') ADVANCE(93);
      if (lookahead == '_') ADVANCE(253);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'a') ADVANCE(193);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(208);
      if (aux_sym_word_token1_character_set_2(lookahead)) ADVANCE(220);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'a') ADVANCE(201);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(208);
      if (aux_sym_word_token1_character_set_2(lookahead)) ADVANCE(220);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'a') ADVANCE(189);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(208);
      if (aux_sym_word_token1_character_set_2(lookahead)) ADVANCE(220);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'a') ADVANCE(181);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(208);
      if (aux_sym_word_token1_character_set_2(lookahead)) ADVANCE(220);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'a') ADVANCE(180);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(208);
      if (aux_sym_word_token1_character_set_2(lookahead)) ADVANCE(220);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'c') ADVANCE(192);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(208);
      if (aux_sym_word_token1_character_set_2(lookahead)) ADVANCE(220);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'c') ADVANCE(186);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(208);
      if (aux_sym_word_token1_character_set_2(lookahead)) ADVANCE(220);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'd') ADVANCE(124);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(208);
      if (aux_sym_word_token1_character_set_2(lookahead)) ADVANCE(220);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'e') ADVANCE(179);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(208);
      if (aux_sym_word_token1_character_set_2(lookahead)) ADVANCE(220);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'e') ADVANCE(207);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(208);
      if (aux_sym_word_token1_character_set_2(lookahead)) ADVANCE(220);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'e') ADVANCE(205);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(208);
      if (aux_sym_word_token1_character_set_2(lookahead)) ADVANCE(220);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'e') ADVANCE(199);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(208);
      if (aux_sym_word_token1_character_set_2(lookahead)) ADVANCE(220);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'e') ADVANCE(117);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(208);
      if (aux_sym_word_token1_character_set_2(lookahead)) ADVANCE(220);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'e') ADVANCE(119);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(208);
      if (aux_sym_word_token1_character_set_2(lookahead)) ADVANCE(220);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'g') ADVANCE(202);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(208);
      if (aux_sym_word_token1_character_set_2(lookahead)) ADVANCE(220);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'g') ADVANCE(113);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(208);
      if (aux_sym_word_token1_character_set_2(lookahead)) ADVANCE(220);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'i') ADVANCE(203);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(208);
      if (aux_sym_word_token1_character_set_2(lookahead)) ADVANCE(220);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'i') ADVANCE(194);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(208);
      if (aux_sym_word_token1_character_set_2(lookahead)) ADVANCE(220);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'k') ADVANCE(115);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(208);
      if (aux_sym_word_token1_character_set_2(lookahead)) ADVANCE(220);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'm') ADVANCE(185);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(208);
      if (aux_sym_word_token1_character_set_2(lookahead)) ADVANCE(220);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'n') ADVANCE(188);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(208);
      if (aux_sym_word_token1_character_set_2(lookahead)) ADVANCE(220);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'o') ADVANCE(190);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(208);
      if (aux_sym_word_token1_character_set_2(lookahead)) ADVANCE(220);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'o') ADVANCE(206);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(208);
      if (aux_sym_word_token1_character_set_2(lookahead)) ADVANCE(220);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'p') ADVANCE(108);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(208);
      if (aux_sym_word_token1_character_set_2(lookahead)) ADVANCE(220);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'p') ADVANCE(197);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(208);
      if (aux_sym_word_token1_character_set_2(lookahead)) ADVANCE(220);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'p') ADVANCE(177);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(208);
      if (aux_sym_word_token1_character_set_2(lookahead)) ADVANCE(220);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'r') ADVANCE(196);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(208);
      if (aux_sym_word_token1_character_set_2(lookahead)) ADVANCE(220);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'r') ADVANCE(200);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(208);
      if (aux_sym_word_token1_character_set_2(lookahead)) ADVANCE(220);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 's') ADVANCE(126);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(208);
      if (aux_sym_word_token1_character_set_2(lookahead)) ADVANCE(220);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 's') ADVANCE(187);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(208);
      if (aux_sym_word_token1_character_set_2(lookahead)) ADVANCE(220);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 't') ADVANCE(191);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(208);
      if (aux_sym_word_token1_character_set_2(lookahead)) ADVANCE(220);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 't') ADVANCE(204);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(208);
      if (aux_sym_word_token1_character_set_2(lookahead)) ADVANCE(220);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 't') ADVANCE(122);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(208);
      if (aux_sym_word_token1_character_set_2(lookahead)) ADVANCE(220);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'y') ADVANCE(111);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(208);
      if (aux_sym_word_token1_character_set_2(lookahead)) ADVANCE(220);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(208);
      if (aux_sym_word_token1_character_set_2(lookahead)) ADVANCE(220);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(anon_sym_and);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(anon_sym_and);
      if (lookahead == '.') ADVANCE(93);
      if (lookahead == '_') ADVANCE(253);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(172);
      if (aux_sym_word_token1_character_set_2(lookahead)) ADVANCE(220);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(anon_sym_and);
      if (lookahead == '.') ADVANCE(93);
      if (lookahead == '_') ADVANCE(253);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(anon_sym_not);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(anon_sym_not);
      if (lookahead == '.') ADVANCE(93);
      if (lookahead == '_') ADVANCE(253);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(172);
      if (aux_sym_word_token1_character_set_2(lookahead)) ADVANCE(220);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(anon_sym_not);
      if (lookahead == '.') ADVANCE(93);
      if (lookahead == '_') ADVANCE(253);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(sym_start_anchor);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(sym_end_anchor);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (aux_sym_word_token1_character_set_3(lookahead)) ADVANCE(220);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      if (lookahead == '{') ADVANCE(269);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      if (lookahead == '}') ADVANCE(270);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(anon_sym_app_LPAREN);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(anon_sym_face_LPAREN);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(anon_sym_deck_LPAREN);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(anon_sym_gamepad_LPAREN);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(anon_sym_noise_LPAREN);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(anon_sym_parrot_LPAREN);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(sym_settings_binding);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(sym_tag_binding);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(anon_sym_or);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(anon_sym_key_LPAREN);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(anon_sym_sleep_LPAREN);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(aux_sym__implicit_string_argument_token1);
      if (lookahead == '\n') ADVANCE(249);
      if (lookahead == '\r') ADVANCE(248);
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(250);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(aux_sym__implicit_string_argument_token1);
      if (lookahead == '\n') ADVANCE(249);
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(250);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(aux_sym__implicit_string_argument_token1);
      if (lookahead == '#') ADVANCE(104);
      if (lookahead == '\\') ADVANCE(247);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) ADVANCE(249);
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(250);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(aux_sym__implicit_string_argument_token1);
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(250);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(anon_sym_LPAREN2);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(93);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(253);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(sym_integer);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(264);
      if (lookahead == '_') ADVANCE(257);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(76);
      if (lookahead == 'J' ||
          lookahead == 'L' ||
          lookahead == 'j' ||
          lookahead == 'l') ADVANCE(254);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(255);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(264);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(34);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(35);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(36);
      if (lookahead == '_') ADVANCE(257);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(76);
      if (lookahead == 'J' ||
          lookahead == 'L' ||
          lookahead == 'j' ||
          lookahead == 'l') ADVANCE(254);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(255);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(264);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(76);
      if (lookahead == 'J' ||
          lookahead == 'L' ||
          lookahead == 'j' ||
          lookahead == 'l') ADVANCE(254);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(255);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '_') ADVANCE(77);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(254);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(258);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '_') ADVANCE(79);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(254);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(259);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '_') ADVANCE(84);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(254);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(260);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(sym_float);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == '_') ADVANCE(264);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(76);
      if (lookahead == 'J' ||
          lookahead == 'L' ||
          lookahead == 'j' ||
          lookahead == 'l') ADVANCE(261);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(262);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == '_') ADVANCE(265);
      if (lookahead == 'J' ||
          lookahead == 'L' ||
          lookahead == 'j' ||
          lookahead == 'l') ADVANCE(261);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(263);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(76);
      if (lookahead == 'J' ||
          lookahead == 'L' ||
          lookahead == 'j' ||
          lookahead == 'l') ADVANCE(261);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(262);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == 'J' ||
          lookahead == 'L' ||
          lookahead == 'j' ||
          lookahead == 'l') ADVANCE(261);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(263);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(sym_implicit_string);
      if (lookahead == '\r') ADVANCE(13);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(78);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(268);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(sym_implicit_string);
      if (lookahead == '#') ADVANCE(105);
      if (lookahead == '\\') ADVANCE(266);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(12);
      if (lookahead == '\f' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) ADVANCE(267);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(268);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(sym_implicit_string);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(78);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(268);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(anon_sym_LBRACE_LBRACE);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(anon_sym_RBRACE_RBRACE);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(sym_string_escape_sequence);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(sym_string_escape_sequence);
      if (lookahead == '\\') ADVANCE(273);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(sym__not_escapesequence);
      if (lookahead == '\n') ADVANCE(272);
      if (lookahead == '\r') ADVANCE(1);
      if (sym_string_escape_sequence_character_set_1(lookahead)) ADVANCE(271);
      if (lookahead == 'U') ADVANCE(92);
      if (lookahead == 'u') ADVANCE(88);
      if (lookahead == 'x') ADVANCE(86);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(83);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 101, .external_lex_state = 2},
  [2] = {.lex_state = 102, .external_lex_state = 2},
  [3] = {.lex_state = 102, .external_lex_state = 2},
  [4] = {.lex_state = 102, .external_lex_state = 2},
  [5] = {.lex_state = 18, .external_lex_state = 3},
  [6] = {.lex_state = 17, .external_lex_state = 4},
  [7] = {.lex_state = 17, .external_lex_state = 5},
  [8] = {.lex_state = 17, .external_lex_state = 5},
  [9] = {.lex_state = 17, .external_lex_state = 4},
  [10] = {.lex_state = 17, .external_lex_state = 5},
  [11] = {.lex_state = 17, .external_lex_state = 4},
  [12] = {.lex_state = 17, .external_lex_state = 5},
  [13] = {.lex_state = 17, .external_lex_state = 5},
  [14] = {.lex_state = 17, .external_lex_state = 5},
  [15] = {.lex_state = 17, .external_lex_state = 5},
  [16] = {.lex_state = 17, .external_lex_state = 5},
  [17] = {.lex_state = 17, .external_lex_state = 5},
  [18] = {.lex_state = 14, .external_lex_state = 2},
  [19] = {.lex_state = 17, .external_lex_state = 6},
  [20] = {.lex_state = 17, .external_lex_state = 6},
  [21] = {.lex_state = 14, .external_lex_state = 2},
  [22] = {.lex_state = 17, .external_lex_state = 6},
  [23] = {.lex_state = 14, .external_lex_state = 2},
  [24] = {.lex_state = 17, .external_lex_state = 6},
  [25] = {.lex_state = 14, .external_lex_state = 2},
  [26] = {.lex_state = 17, .external_lex_state = 6},
  [27] = {.lex_state = 14, .external_lex_state = 2},
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
  [41] = {.lex_state = 17, .external_lex_state = 6},
  [42] = {.lex_state = 14, .external_lex_state = 2},
  [43] = {.lex_state = 102, .external_lex_state = 2},
  [44] = {.lex_state = 102, .external_lex_state = 2},
  [45] = {.lex_state = 102, .external_lex_state = 2},
  [46] = {.lex_state = 102, .external_lex_state = 2},
  [47] = {.lex_state = 102, .external_lex_state = 2},
  [48] = {.lex_state = 102, .external_lex_state = 2},
  [49] = {.lex_state = 102, .external_lex_state = 2},
  [50] = {.lex_state = 102, .external_lex_state = 2},
  [51] = {.lex_state = 102, .external_lex_state = 2},
  [52] = {.lex_state = 102, .external_lex_state = 2},
  [53] = {.lex_state = 102, .external_lex_state = 2},
  [54] = {.lex_state = 102, .external_lex_state = 2},
  [55] = {.lex_state = 102, .external_lex_state = 2},
  [56] = {.lex_state = 102, .external_lex_state = 2},
  [57] = {.lex_state = 102, .external_lex_state = 2},
  [58] = {.lex_state = 102, .external_lex_state = 2},
  [59] = {.lex_state = 102, .external_lex_state = 2},
  [60] = {.lex_state = 102, .external_lex_state = 2},
  [61] = {.lex_state = 102, .external_lex_state = 2},
  [62] = {.lex_state = 102, .external_lex_state = 2},
  [63] = {.lex_state = 14, .external_lex_state = 2},
  [64] = {.lex_state = 14, .external_lex_state = 2},
  [65] = {.lex_state = 14, .external_lex_state = 2},
  [66] = {.lex_state = 14, .external_lex_state = 2},
  [67] = {.lex_state = 14, .external_lex_state = 2},
  [68] = {.lex_state = 14, .external_lex_state = 2},
  [69] = {.lex_state = 14, .external_lex_state = 2},
  [70] = {.lex_state = 14, .external_lex_state = 2},
  [71] = {.lex_state = 14, .external_lex_state = 2},
  [72] = {.lex_state = 18, .external_lex_state = 7},
  [73] = {.lex_state = 18, .external_lex_state = 7},
  [74] = {.lex_state = 18, .external_lex_state = 7},
  [75] = {.lex_state = 18, .external_lex_state = 7},
  [76] = {.lex_state = 15, .external_lex_state = 2},
  [77] = {.lex_state = 18, .external_lex_state = 7},
  [78] = {.lex_state = 14, .external_lex_state = 2},
  [79] = {.lex_state = 19, .external_lex_state = 2},
  [80] = {.lex_state = 15, .external_lex_state = 2},
  [81] = {.lex_state = 19, .external_lex_state = 2},
  [82] = {.lex_state = 15, .external_lex_state = 8},
  [83] = {.lex_state = 15, .external_lex_state = 2},
  [84] = {.lex_state = 17, .external_lex_state = 4},
  [85] = {.lex_state = 15, .external_lex_state = 8},
  [86] = {.lex_state = 17, .external_lex_state = 4},
  [87] = {.lex_state = 17, .external_lex_state = 4},
  [88] = {.lex_state = 15, .external_lex_state = 2},
  [89] = {.lex_state = 15, .external_lex_state = 2},
  [90] = {.lex_state = 15, .external_lex_state = 2},
  [91] = {.lex_state = 0, .external_lex_state = 2},
  [92] = {.lex_state = 15, .external_lex_state = 2},
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
  [105] = {.lex_state = 15, .external_lex_state = 8},
  [106] = {.lex_state = 18, .external_lex_state = 7},
  [107] = {.lex_state = 18, .external_lex_state = 7},
  [108] = {.lex_state = 0, .external_lex_state = 2},
  [109] = {.lex_state = 18, .external_lex_state = 7},
  [110] = {.lex_state = 0, .external_lex_state = 8},
  [111] = {.lex_state = 0, .external_lex_state = 8},
  [112] = {.lex_state = 0, .external_lex_state = 8},
  [113] = {.lex_state = 0, .external_lex_state = 2},
  [114] = {.lex_state = 0, .external_lex_state = 8},
  [115] = {.lex_state = 0, .external_lex_state = 8},
  [116] = {.lex_state = 0, .external_lex_state = 8},
  [117] = {.lex_state = 19, .external_lex_state = 2},
  [118] = {.lex_state = 15, .external_lex_state = 2},
  [119] = {.lex_state = 0, .external_lex_state = 8},
  [120] = {.lex_state = 0, .external_lex_state = 8},
  [121] = {.lex_state = 0, .external_lex_state = 8},
  [122] = {.lex_state = 0, .external_lex_state = 8},
  [123] = {.lex_state = 0, .external_lex_state = 8},
  [124] = {.lex_state = 0, .external_lex_state = 8},
  [125] = {.lex_state = 0, .external_lex_state = 8},
  [126] = {.lex_state = 0, .external_lex_state = 2},
  [127] = {.lex_state = 0, .external_lex_state = 8},
  [128] = {.lex_state = 0, .external_lex_state = 8},
  [129] = {.lex_state = 0, .external_lex_state = 8},
  [130] = {.lex_state = 0, .external_lex_state = 8},
  [131] = {.lex_state = 0, .external_lex_state = 8},
  [132] = {.lex_state = 0, .external_lex_state = 8},
  [133] = {.lex_state = 19, .external_lex_state = 2},
  [134] = {.lex_state = 0, .external_lex_state = 2},
  [135] = {.lex_state = 19, .external_lex_state = 2},
  [136] = {.lex_state = 0, .external_lex_state = 2},
  [137] = {.lex_state = 19, .external_lex_state = 2},
  [138] = {.lex_state = 0, .external_lex_state = 2},
  [139] = {.lex_state = 0, .external_lex_state = 2},
  [140] = {.lex_state = 0, .external_lex_state = 2},
  [141] = {.lex_state = 0, .external_lex_state = 2},
  [142] = {.lex_state = 0, .external_lex_state = 2},
  [143] = {.lex_state = 19, .external_lex_state = 2},
  [144] = {.lex_state = 0, .external_lex_state = 2},
  [145] = {.lex_state = 0, .external_lex_state = 8},
  [146] = {.lex_state = 0, .external_lex_state = 8},
  [147] = {.lex_state = 20, .external_lex_state = 2},
  [148] = {.lex_state = 20, .external_lex_state = 2},
  [149] = {.lex_state = 20, .external_lex_state = 2},
  [150] = {.lex_state = 0, .external_lex_state = 2},
  [151] = {.lex_state = 0, .external_lex_state = 8},
  [152] = {.lex_state = 0, .external_lex_state = 2},
  [153] = {.lex_state = 0, .external_lex_state = 2},
  [154] = {.lex_state = 249, .external_lex_state = 2},
  [155] = {.lex_state = 249, .external_lex_state = 2},
  [156] = {.lex_state = 249, .external_lex_state = 2},
  [157] = {.lex_state = 249, .external_lex_state = 2},
  [158] = {.lex_state = 249, .external_lex_state = 2},
  [159] = {.lex_state = 249, .external_lex_state = 2},
  [160] = {.lex_state = 249, .external_lex_state = 2},
  [161] = {.lex_state = 249, .external_lex_state = 2},
  [162] = {.lex_state = 249, .external_lex_state = 2},
  [163] = {.lex_state = 249, .external_lex_state = 2},
  [164] = {.lex_state = 0, .external_lex_state = 2},
  [165] = {.lex_state = 0, .external_lex_state = 2},
  [166] = {.lex_state = 0, .external_lex_state = 2},
  [167] = {.lex_state = 0, .external_lex_state = 2},
  [168] = {.lex_state = 0, .external_lex_state = 2},
  [169] = {.lex_state = 101, .external_lex_state = 2},
  [170] = {.lex_state = 0, .external_lex_state = 2},
  [171] = {.lex_state = 0, .external_lex_state = 2},
  [172] = {.lex_state = 0, .external_lex_state = 2},
  [173] = {.lex_state = 0, .external_lex_state = 2},
  [174] = {.lex_state = 0, .external_lex_state = 2},
  [175] = {.lex_state = 0, .external_lex_state = 2},
  [176] = {.lex_state = 21, .external_lex_state = 2},
  [177] = {.lex_state = 0, .external_lex_state = 2},
  [178] = {.lex_state = 0, .external_lex_state = 2},
  [179] = {.lex_state = 0, .external_lex_state = 2},
  [180] = {.lex_state = 0, .external_lex_state = 2},
  [181] = {.lex_state = 0, .external_lex_state = 2},
  [182] = {.lex_state = 21, .external_lex_state = 2},
  [183] = {.lex_state = 0, .external_lex_state = 2},
  [184] = {.lex_state = 0, .external_lex_state = 2},
  [185] = {.lex_state = 0, .external_lex_state = 2},
  [186] = {.lex_state = 0, .external_lex_state = 2},
  [187] = {.lex_state = 0, .external_lex_state = 8},
  [188] = {.lex_state = 0, .external_lex_state = 2},
  [189] = {.lex_state = 0, .external_lex_state = 2},
  [190] = {.lex_state = 0, .external_lex_state = 2},
  [191] = {.lex_state = 0, .external_lex_state = 2},
  [192] = {.lex_state = 0, .external_lex_state = 2},
  [193] = {.lex_state = 0, .external_lex_state = 8},
  [194] = {.lex_state = 0, .external_lex_state = 2},
  [195] = {.lex_state = 0, .external_lex_state = 2},
  [196] = {.lex_state = 0, .external_lex_state = 2},
  [197] = {.lex_state = 0, .external_lex_state = 2},
  [198] = {.lex_state = 0, .external_lex_state = 2},
  [199] = {.lex_state = 0, .external_lex_state = 2},
  [200] = {.lex_state = 0, .external_lex_state = 2},
  [201] = {.lex_state = 0, .external_lex_state = 2},
  [202] = {.lex_state = 0, .external_lex_state = 8},
  [203] = {.lex_state = 0, .external_lex_state = 2},
  [204] = {.lex_state = 0, .external_lex_state = 2},
  [205] = {.lex_state = 0, .external_lex_state = 2},
  [206] = {.lex_state = 0, .external_lex_state = 2},
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
    [anon_sym_deck_LPAREN] = ACTIONS(1),
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
    [sym_source_file] = STATE(186),
    [sym_matches] = STATE(2),
    [sym_match_modifier] = STATE(117),
    [sym_match] = STATE(79),
    [sym_declarations] = STATE(165),
    [sym_declaration] = STATE(4),
    [sym_command_declaration] = STATE(44),
    [sym_app_declaration] = STATE(44),
    [sym_face_declaration] = STATE(44),
    [sym_deck_declaration] = STATE(44),
    [sym_gamepad_declaration] = STATE(44),
    [sym_noise_declaration] = STATE(44),
    [sym_parrot_declaration] = STATE(44),
    [sym_tag_import_declaration] = STATE(44),
    [sym_key_binding_declaration] = STATE(44),
    [sym_settings_declaration] = STATE(44),
    [sym_rule] = STATE(184),
    [sym__optional_choice] = STATE(183),
    [sym_choice] = STATE(183),
    [sym__optional_anchor] = STATE(140),
    [sym__optional_seq] = STATE(134),
    [sym_seq] = STATE(134),
    [sym__primary_rule] = STATE(18),
    [sym_word] = STATE(18),
    [sym_list] = STATE(18),
    [sym_capture] = STATE(18),
    [sym_optional] = STATE(18),
    [sym_repeat] = STATE(18),
    [sym_repeat1] = STATE(18),
    [sym_parenthesized_rule] = STATE(18),
    [sym_app_binding] = STATE(180),
    [sym_face_binding] = STATE(179),
    [sym_deck_binding] = STATE(178),
    [sym_gamepad_binding] = STATE(177),
    [sym_noise_binding] = STATE(164),
    [sym_parrot_binding] = STATE(175),
    [sym_key_action] = STATE(174),
    [sym_identifier] = STATE(173),
    [aux_sym_matches_repeat1] = STATE(79),
    [aux_sym_matches_repeat2] = STATE(146),
    [aux_sym_match_repeat1] = STATE(117),
    [aux_sym_declarations_repeat1] = STATE(4),
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
    [anon_sym_deck_LPAREN] = ACTIONS(29),
    [anon_sym_gamepad_LPAREN] = ACTIONS(31),
    [anon_sym_noise_LPAREN] = ACTIONS(33),
    [anon_sym_parrot_LPAREN] = ACTIONS(35),
    [sym_settings_binding] = ACTIONS(37),
    [sym_tag_binding] = ACTIONS(39),
    [anon_sym_key_LPAREN] = ACTIONS(41),
    [aux_sym_identifier_token1] = ACTIONS(43),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 32,
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
      anon_sym_deck_LPAREN,
    ACTIONS(31), 1,
      anon_sym_gamepad_LPAREN,
    ACTIONS(33), 1,
      anon_sym_noise_LPAREN,
    ACTIONS(35), 1,
      anon_sym_parrot_LPAREN,
    ACTIONS(37), 1,
      sym_settings_binding,
    ACTIONS(39), 1,
      sym_tag_binding,
    ACTIONS(41), 1,
      anon_sym_key_LPAREN,
    ACTIONS(45), 1,
      ts_builtin_sym_end,
    STATE(140), 1,
      sym__optional_anchor,
    STATE(164), 1,
      sym_noise_binding,
    STATE(174), 1,
      sym_key_action,
    STATE(175), 1,
      sym_parrot_binding,
    STATE(177), 1,
      sym_gamepad_binding,
    STATE(178), 1,
      sym_deck_binding,
    STATE(179), 1,
      sym_face_binding,
    STATE(180), 1,
      sym_app_binding,
    STATE(184), 1,
      sym_rule,
    STATE(206), 1,
      sym_declarations,
    ACTIONS(15), 2,
      sym__simple_identifier,
      aux_sym_word_token1,
    STATE(4), 2,
      sym_declaration,
      aux_sym_declarations_repeat1,
    STATE(134), 2,
      sym__optional_seq,
      sym_seq,
    STATE(183), 2,
      sym__optional_choice,
      sym_choice,
    STATE(18), 8,
      sym__primary_rule,
      sym_word,
      sym_list,
      sym_capture,
      sym_optional,
      sym_repeat,
      sym_repeat1,
      sym_parenthesized_rule,
    STATE(44), 10,
      sym_command_declaration,
      sym_app_declaration,
      sym_face_declaration,
      sym_deck_declaration,
      sym_gamepad_declaration,
      sym_noise_declaration,
      sym_parrot_declaration,
      sym_tag_import_declaration,
      sym_key_binding_declaration,
      sym_settings_declaration,
  [117] = 31,
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
      anon_sym_deck_LPAREN,
    ACTIONS(76), 1,
      anon_sym_gamepad_LPAREN,
    ACTIONS(79), 1,
      anon_sym_noise_LPAREN,
    ACTIONS(82), 1,
      anon_sym_parrot_LPAREN,
    ACTIONS(85), 1,
      sym_settings_binding,
    ACTIONS(88), 1,
      sym_tag_binding,
    ACTIONS(91), 1,
      anon_sym_key_LPAREN,
    STATE(140), 1,
      sym__optional_anchor,
    STATE(164), 1,
      sym_noise_binding,
    STATE(174), 1,
      sym_key_action,
    STATE(175), 1,
      sym_parrot_binding,
    STATE(177), 1,
      sym_gamepad_binding,
    STATE(178), 1,
      sym_deck_binding,
    STATE(179), 1,
      sym_face_binding,
    STATE(180), 1,
      sym_app_binding,
    STATE(184), 1,
      sym_rule,
    ACTIONS(49), 2,
      sym__simple_identifier,
      aux_sym_word_token1,
    STATE(3), 2,
      sym_declaration,
      aux_sym_declarations_repeat1,
    STATE(134), 2,
      sym__optional_seq,
      sym_seq,
    STATE(183), 2,
      sym__optional_choice,
      sym_choice,
    STATE(18), 8,
      sym__primary_rule,
      sym_word,
      sym_list,
      sym_capture,
      sym_optional,
      sym_repeat,
      sym_repeat1,
      sym_parenthesized_rule,
    STATE(44), 10,
      sym_command_declaration,
      sym_app_declaration,
      sym_face_declaration,
      sym_deck_declaration,
      sym_gamepad_declaration,
      sym_noise_declaration,
      sym_parrot_declaration,
      sym_tag_import_declaration,
      sym_key_binding_declaration,
      sym_settings_declaration,
  [231] = 31,
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
      anon_sym_deck_LPAREN,
    ACTIONS(31), 1,
      anon_sym_gamepad_LPAREN,
    ACTIONS(33), 1,
      anon_sym_noise_LPAREN,
    ACTIONS(35), 1,
      anon_sym_parrot_LPAREN,
    ACTIONS(37), 1,
      sym_settings_binding,
    ACTIONS(39), 1,
      sym_tag_binding,
    ACTIONS(41), 1,
      anon_sym_key_LPAREN,
    ACTIONS(94), 1,
      ts_builtin_sym_end,
    STATE(140), 1,
      sym__optional_anchor,
    STATE(164), 1,
      sym_noise_binding,
    STATE(174), 1,
      sym_key_action,
    STATE(175), 1,
      sym_parrot_binding,
    STATE(177), 1,
      sym_gamepad_binding,
    STATE(178), 1,
      sym_deck_binding,
    STATE(179), 1,
      sym_face_binding,
    STATE(180), 1,
      sym_app_binding,
    STATE(184), 1,
      sym_rule,
    ACTIONS(15), 2,
      sym__simple_identifier,
      aux_sym_word_token1,
    STATE(3), 2,
      sym_declaration,
      aux_sym_declarations_repeat1,
    STATE(134), 2,
      sym__optional_seq,
      sym_seq,
    STATE(183), 2,
      sym__optional_choice,
      sym_choice,
    STATE(18), 8,
      sym__primary_rule,
      sym_word,
      sym_list,
      sym_capture,
      sym_optional,
      sym_repeat,
      sym_repeat1,
      sym_parenthesized_rule,
    STATE(44), 10,
      sym_command_declaration,
      sym_app_declaration,
      sym_face_declaration,
      sym_deck_declaration,
      sym_gamepad_declaration,
      sym_noise_declaration,
      sym_parrot_declaration,
      sym_tag_import_declaration,
      sym_key_binding_declaration,
      sym_settings_declaration,
  [345] = 13,
    ACTIONS(96), 1,
      sym_comment,
    ACTIONS(98), 1,
      anon_sym_DASH,
    ACTIONS(102), 1,
      anon_sym_LPAREN,
    ACTIONS(104), 1,
      anon_sym_key_LPAREN,
    ACTIONS(106), 1,
      anon_sym_sleep_LPAREN,
    ACTIONS(110), 1,
      sym__string_start,
    STATE(80), 1,
      sym_identifier,
    STATE(118), 1,
      sym_expression,
    ACTIONS(43), 2,
      sym__simple_identifier,
      aux_sym_identifier_token1,
    ACTIONS(108), 2,
      sym_integer,
      sym_float,
    ACTIONS(112), 2,
      sym_string_content,
      sym__string_end,
    ACTIONS(100), 6,
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
  [400] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(116), 1,
      anon_sym_DASH,
    ACTIONS(118), 1,
      anon_sym_LPAREN,
    ACTIONS(120), 1,
      anon_sym_key_LPAREN,
    ACTIONS(122), 1,
      anon_sym_sleep_LPAREN,
    ACTIONS(124), 1,
      sym_integer,
    ACTIONS(126), 1,
      sym_float,
    ACTIONS(128), 1,
      sym__dedent,
    ACTIONS(130), 1,
      sym__string_start,
    STATE(53), 1,
      sym_block,
    STATE(82), 1,
      sym_identifier,
    STATE(114), 1,
      sym_expression,
    ACTIONS(114), 2,
      sym__simple_identifier,
      aux_sym_identifier_token1,
    STATE(9), 2,
      sym_statement,
      aux_sym_block_repeat1,
    STATE(84), 2,
      sym_assignment_statement,
      sym_expression_statement,
    STATE(112), 8,
      sym_variable,
      sym_parenthesized_expression,
      sym_binary_operator,
      sym_unary_operator,
      sym_key_action,
      sym_sleep_action,
      sym_action,
      sym_string,
  [459] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(116), 1,
      anon_sym_DASH,
    ACTIONS(118), 1,
      anon_sym_LPAREN,
    ACTIONS(120), 1,
      anon_sym_key_LPAREN,
    ACTIONS(122), 1,
      anon_sym_sleep_LPAREN,
    ACTIONS(124), 1,
      sym_integer,
    ACTIONS(126), 1,
      sym_float,
    ACTIONS(130), 1,
      sym__string_start,
    ACTIONS(132), 1,
      sym__indent,
    STATE(57), 1,
      sym__statements,
    STATE(60), 1,
      sym_statement,
    STATE(85), 1,
      sym_identifier,
    STATE(121), 1,
      sym_expression,
    ACTIONS(114), 2,
      sym__simple_identifier,
      aux_sym_identifier_token1,
    STATE(52), 2,
      sym_assignment_statement,
      sym_expression_statement,
    STATE(112), 8,
      sym_variable,
      sym_parenthesized_expression,
      sym_binary_operator,
      sym_unary_operator,
      sym_key_action,
      sym_sleep_action,
      sym_action,
      sym_string,
  [517] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(116), 1,
      anon_sym_DASH,
    ACTIONS(118), 1,
      anon_sym_LPAREN,
    ACTIONS(120), 1,
      anon_sym_key_LPAREN,
    ACTIONS(122), 1,
      anon_sym_sleep_LPAREN,
    ACTIONS(124), 1,
      sym_integer,
    ACTIONS(126), 1,
      sym_float,
    ACTIONS(130), 1,
      sym__string_start,
    ACTIONS(132), 1,
      sym__indent,
    STATE(59), 1,
      sym__statements,
    STATE(60), 1,
      sym_statement,
    STATE(85), 1,
      sym_identifier,
    STATE(121), 1,
      sym_expression,
    ACTIONS(114), 2,
      sym__simple_identifier,
      aux_sym_identifier_token1,
    STATE(52), 2,
      sym_assignment_statement,
      sym_expression_statement,
    STATE(112), 8,
      sym_variable,
      sym_parenthesized_expression,
      sym_binary_operator,
      sym_unary_operator,
      sym_key_action,
      sym_sleep_action,
      sym_action,
      sym_string,
  [575] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(116), 1,
      anon_sym_DASH,
    ACTIONS(118), 1,
      anon_sym_LPAREN,
    ACTIONS(120), 1,
      anon_sym_key_LPAREN,
    ACTIONS(122), 1,
      anon_sym_sleep_LPAREN,
    ACTIONS(124), 1,
      sym_integer,
    ACTIONS(126), 1,
      sym_float,
    ACTIONS(130), 1,
      sym__string_start,
    ACTIONS(134), 1,
      sym__dedent,
    STATE(82), 1,
      sym_identifier,
    STATE(114), 1,
      sym_expression,
    ACTIONS(114), 2,
      sym__simple_identifier,
      aux_sym_identifier_token1,
    STATE(11), 2,
      sym_statement,
      aux_sym_block_repeat1,
    STATE(84), 2,
      sym_assignment_statement,
      sym_expression_statement,
    STATE(112), 8,
      sym_variable,
      sym_parenthesized_expression,
      sym_binary_operator,
      sym_unary_operator,
      sym_key_action,
      sym_sleep_action,
      sym_action,
      sym_string,
  [631] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(116), 1,
      anon_sym_DASH,
    ACTIONS(118), 1,
      anon_sym_LPAREN,
    ACTIONS(120), 1,
      anon_sym_key_LPAREN,
    ACTIONS(122), 1,
      anon_sym_sleep_LPAREN,
    ACTIONS(124), 1,
      sym_integer,
    ACTIONS(126), 1,
      sym_float,
    ACTIONS(130), 1,
      sym__string_start,
    ACTIONS(132), 1,
      sym__indent,
    STATE(60), 1,
      sym_statement,
    STATE(61), 1,
      sym__statements,
    STATE(85), 1,
      sym_identifier,
    STATE(121), 1,
      sym_expression,
    ACTIONS(114), 2,
      sym__simple_identifier,
      aux_sym_identifier_token1,
    STATE(52), 2,
      sym_assignment_statement,
      sym_expression_statement,
    STATE(112), 8,
      sym_variable,
      sym_parenthesized_expression,
      sym_binary_operator,
      sym_unary_operator,
      sym_key_action,
      sym_sleep_action,
      sym_action,
      sym_string,
  [689] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(139), 1,
      anon_sym_DASH,
    ACTIONS(142), 1,
      anon_sym_LPAREN,
    ACTIONS(145), 1,
      anon_sym_key_LPAREN,
    ACTIONS(148), 1,
      anon_sym_sleep_LPAREN,
    ACTIONS(151), 1,
      sym_integer,
    ACTIONS(154), 1,
      sym_float,
    ACTIONS(157), 1,
      sym__dedent,
    ACTIONS(159), 1,
      sym__string_start,
    STATE(82), 1,
      sym_identifier,
    STATE(114), 1,
      sym_expression,
    ACTIONS(136), 2,
      sym__simple_identifier,
      aux_sym_identifier_token1,
    STATE(11), 2,
      sym_statement,
      aux_sym_block_repeat1,
    STATE(84), 2,
      sym_assignment_statement,
      sym_expression_statement,
    STATE(112), 8,
      sym_variable,
      sym_parenthesized_expression,
      sym_binary_operator,
      sym_unary_operator,
      sym_key_action,
      sym_sleep_action,
      sym_action,
      sym_string,
  [745] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(116), 1,
      anon_sym_DASH,
    ACTIONS(118), 1,
      anon_sym_LPAREN,
    ACTIONS(120), 1,
      anon_sym_key_LPAREN,
    ACTIONS(122), 1,
      anon_sym_sleep_LPAREN,
    ACTIONS(124), 1,
      sym_integer,
    ACTIONS(126), 1,
      sym_float,
    ACTIONS(130), 1,
      sym__string_start,
    ACTIONS(132), 1,
      sym__indent,
    STATE(45), 1,
      sym__statements,
    STATE(60), 1,
      sym_statement,
    STATE(85), 1,
      sym_identifier,
    STATE(121), 1,
      sym_expression,
    ACTIONS(114), 2,
      sym__simple_identifier,
      aux_sym_identifier_token1,
    STATE(52), 2,
      sym_assignment_statement,
      sym_expression_statement,
    STATE(112), 8,
      sym_variable,
      sym_parenthesized_expression,
      sym_binary_operator,
      sym_unary_operator,
      sym_key_action,
      sym_sleep_action,
      sym_action,
      sym_string,
  [803] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(116), 1,
      anon_sym_DASH,
    ACTIONS(118), 1,
      anon_sym_LPAREN,
    ACTIONS(120), 1,
      anon_sym_key_LPAREN,
    ACTIONS(122), 1,
      anon_sym_sleep_LPAREN,
    ACTIONS(124), 1,
      sym_integer,
    ACTIONS(126), 1,
      sym_float,
    ACTIONS(130), 1,
      sym__string_start,
    ACTIONS(132), 1,
      sym__indent,
    STATE(60), 1,
      sym_statement,
    STATE(62), 1,
      sym__statements,
    STATE(85), 1,
      sym_identifier,
    STATE(121), 1,
      sym_expression,
    ACTIONS(114), 2,
      sym__simple_identifier,
      aux_sym_identifier_token1,
    STATE(52), 2,
      sym_assignment_statement,
      sym_expression_statement,
    STATE(112), 8,
      sym_variable,
      sym_parenthesized_expression,
      sym_binary_operator,
      sym_unary_operator,
      sym_key_action,
      sym_sleep_action,
      sym_action,
      sym_string,
  [861] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(116), 1,
      anon_sym_DASH,
    ACTIONS(118), 1,
      anon_sym_LPAREN,
    ACTIONS(120), 1,
      anon_sym_key_LPAREN,
    ACTIONS(122), 1,
      anon_sym_sleep_LPAREN,
    ACTIONS(124), 1,
      sym_integer,
    ACTIONS(126), 1,
      sym_float,
    ACTIONS(130), 1,
      sym__string_start,
    ACTIONS(132), 1,
      sym__indent,
    STATE(49), 1,
      sym__statements,
    STATE(60), 1,
      sym_statement,
    STATE(85), 1,
      sym_identifier,
    STATE(121), 1,
      sym_expression,
    ACTIONS(114), 2,
      sym__simple_identifier,
      aux_sym_identifier_token1,
    STATE(52), 2,
      sym_assignment_statement,
      sym_expression_statement,
    STATE(112), 8,
      sym_variable,
      sym_parenthesized_expression,
      sym_binary_operator,
      sym_unary_operator,
      sym_key_action,
      sym_sleep_action,
      sym_action,
      sym_string,
  [919] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(116), 1,
      anon_sym_DASH,
    ACTIONS(118), 1,
      anon_sym_LPAREN,
    ACTIONS(120), 1,
      anon_sym_key_LPAREN,
    ACTIONS(122), 1,
      anon_sym_sleep_LPAREN,
    ACTIONS(124), 1,
      sym_integer,
    ACTIONS(126), 1,
      sym_float,
    ACTIONS(130), 1,
      sym__string_start,
    ACTIONS(132), 1,
      sym__indent,
    STATE(47), 1,
      sym__statements,
    STATE(60), 1,
      sym_statement,
    STATE(85), 1,
      sym_identifier,
    STATE(121), 1,
      sym_expression,
    ACTIONS(114), 2,
      sym__simple_identifier,
      aux_sym_identifier_token1,
    STATE(52), 2,
      sym_assignment_statement,
      sym_expression_statement,
    STATE(112), 8,
      sym_variable,
      sym_parenthesized_expression,
      sym_binary_operator,
      sym_unary_operator,
      sym_key_action,
      sym_sleep_action,
      sym_action,
      sym_string,
  [977] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(116), 1,
      anon_sym_DASH,
    ACTIONS(118), 1,
      anon_sym_LPAREN,
    ACTIONS(120), 1,
      anon_sym_key_LPAREN,
    ACTIONS(122), 1,
      anon_sym_sleep_LPAREN,
    ACTIONS(124), 1,
      sym_integer,
    ACTIONS(126), 1,
      sym_float,
    ACTIONS(130), 1,
      sym__string_start,
    ACTIONS(132), 1,
      sym__indent,
    STATE(50), 1,
      sym__statements,
    STATE(60), 1,
      sym_statement,
    STATE(85), 1,
      sym_identifier,
    STATE(121), 1,
      sym_expression,
    ACTIONS(114), 2,
      sym__simple_identifier,
      aux_sym_identifier_token1,
    STATE(52), 2,
      sym_assignment_statement,
      sym_expression_statement,
    STATE(112), 8,
      sym_variable,
      sym_parenthesized_expression,
      sym_binary_operator,
      sym_unary_operator,
      sym_key_action,
      sym_sleep_action,
      sym_action,
      sym_string,
  [1035] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(116), 1,
      anon_sym_DASH,
    ACTIONS(118), 1,
      anon_sym_LPAREN,
    ACTIONS(120), 1,
      anon_sym_key_LPAREN,
    ACTIONS(122), 1,
      anon_sym_sleep_LPAREN,
    ACTIONS(124), 1,
      sym_integer,
    ACTIONS(126), 1,
      sym_float,
    ACTIONS(130), 1,
      sym__string_start,
    ACTIONS(132), 1,
      sym__indent,
    STATE(46), 1,
      sym__statements,
    STATE(60), 1,
      sym_statement,
    STATE(85), 1,
      sym_identifier,
    STATE(121), 1,
      sym_expression,
    ACTIONS(114), 2,
      sym__simple_identifier,
      aux_sym_identifier_token1,
    STATE(52), 2,
      sym_assignment_statement,
      sym_expression_statement,
    STATE(112), 8,
      sym_variable,
      sym_parenthesized_expression,
      sym_binary_operator,
      sym_unary_operator,
      sym_key_action,
      sym_sleep_action,
      sym_action,
      sym_string,
  [1093] = 11,
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
    ACTIONS(164), 1,
      anon_sym_STAR,
    ACTIONS(166), 1,
      anon_sym_PLUS,
    STATE(25), 1,
      aux_sym_seq_repeat1,
    ACTIONS(15), 2,
      sym__simple_identifier,
      aux_sym_word_token1,
    ACTIONS(162), 5,
      anon_sym_COLON,
      anon_sym_PIPE,
      sym_end_anchor,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
    STATE(64), 8,
      sym__primary_rule,
      sym_word,
      sym_list,
      sym_capture,
      sym_optional,
      sym_repeat,
      sym_repeat1,
      sym_parenthesized_rule,
  [1139] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(41), 1,
      anon_sym_key_LPAREN,
    ACTIONS(108), 1,
      sym_integer,
    ACTIONS(110), 1,
      sym__string_start,
    ACTIONS(168), 1,
      anon_sym_DASH,
    ACTIONS(170), 1,
      anon_sym_LPAREN,
    ACTIONS(172), 1,
      anon_sym_RPAREN,
    ACTIONS(174), 1,
      anon_sym_sleep_LPAREN,
    ACTIONS(176), 1,
      anon_sym_COMMA,
    ACTIONS(178), 1,
      sym_float,
    STATE(80), 1,
      sym_identifier,
    STATE(91), 1,
      sym_expression,
    ACTIONS(43), 2,
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
  [1190] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(41), 1,
      anon_sym_key_LPAREN,
    ACTIONS(108), 1,
      sym_integer,
    ACTIONS(110), 1,
      sym__string_start,
    ACTIONS(168), 1,
      anon_sym_DASH,
    ACTIONS(170), 1,
      anon_sym_LPAREN,
    ACTIONS(174), 1,
      anon_sym_sleep_LPAREN,
    ACTIONS(178), 1,
      sym_float,
    ACTIONS(180), 1,
      anon_sym_RPAREN,
    ACTIONS(182), 1,
      anon_sym_COMMA,
    STATE(80), 1,
      sym_identifier,
    STATE(104), 1,
      sym_expression,
    ACTIONS(43), 2,
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
  [1241] = 11,
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
    STATE(140), 1,
      sym__optional_anchor,
    ACTIONS(15), 2,
      sym__simple_identifier,
      aux_sym_word_token1,
    STATE(134), 2,
      sym__optional_seq,
      sym_seq,
    STATE(166), 2,
      sym__optional_choice,
      sym_choice,
    STATE(18), 8,
      sym__primary_rule,
      sym_word,
      sym_list,
      sym_capture,
      sym_optional,
      sym_repeat,
      sym_repeat1,
      sym_parenthesized_rule,
  [1285] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(41), 1,
      anon_sym_key_LPAREN,
    ACTIONS(108), 1,
      sym_integer,
    ACTIONS(110), 1,
      sym__string_start,
    ACTIONS(168), 1,
      anon_sym_DASH,
    ACTIONS(170), 1,
      anon_sym_LPAREN,
    ACTIONS(174), 1,
      anon_sym_sleep_LPAREN,
    ACTIONS(178), 1,
      sym_float,
    ACTIONS(184), 1,
      anon_sym_RPAREN,
    STATE(80), 1,
      sym_identifier,
    STATE(108), 1,
      sym_expression,
    ACTIONS(43), 2,
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
  [1333] = 11,
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
    STATE(140), 1,
      sym__optional_anchor,
    ACTIONS(15), 2,
      sym__simple_identifier,
      aux_sym_word_token1,
    STATE(134), 2,
      sym__optional_seq,
      sym_seq,
    STATE(167), 2,
      sym__optional_choice,
      sym_choice,
    STATE(18), 8,
      sym__primary_rule,
      sym_word,
      sym_list,
      sym_capture,
      sym_optional,
      sym_repeat,
      sym_repeat1,
      sym_parenthesized_rule,
  [1377] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(41), 1,
      anon_sym_key_LPAREN,
    ACTIONS(108), 1,
      sym_integer,
    ACTIONS(110), 1,
      sym__string_start,
    ACTIONS(168), 1,
      anon_sym_DASH,
    ACTIONS(170), 1,
      anon_sym_LPAREN,
    ACTIONS(174), 1,
      anon_sym_sleep_LPAREN,
    ACTIONS(178), 1,
      sym_float,
    ACTIONS(186), 1,
      anon_sym_RPAREN,
    STATE(80), 1,
      sym_identifier,
    STATE(108), 1,
      sym_expression,
    ACTIONS(43), 2,
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
  [1425] = 9,
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
    STATE(27), 1,
      aux_sym_seq_repeat1,
    ACTIONS(15), 2,
      sym__simple_identifier,
      aux_sym_word_token1,
    ACTIONS(188), 5,
      anon_sym_COLON,
      anon_sym_PIPE,
      sym_end_anchor,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
    STATE(64), 8,
      sym__primary_rule,
      sym_word,
      sym_list,
      sym_capture,
      sym_optional,
      sym_repeat,
      sym_repeat1,
      sym_parenthesized_rule,
  [1465] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(41), 1,
      anon_sym_key_LPAREN,
    ACTIONS(108), 1,
      sym_integer,
    ACTIONS(110), 1,
      sym__string_start,
    ACTIONS(168), 1,
      anon_sym_DASH,
    ACTIONS(170), 1,
      anon_sym_LPAREN,
    ACTIONS(174), 1,
      anon_sym_sleep_LPAREN,
    ACTIONS(178), 1,
      sym_float,
    ACTIONS(190), 1,
      anon_sym_RPAREN,
    STATE(80), 1,
      sym_identifier,
    STATE(108), 1,
      sym_expression,
    ACTIONS(43), 2,
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
  [1513] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(197), 1,
      anon_sym_LBRACE,
    ACTIONS(200), 1,
      anon_sym_LT,
    ACTIONS(203), 1,
      anon_sym_LBRACK,
    ACTIONS(206), 1,
      anon_sym_LPAREN,
    STATE(27), 1,
      aux_sym_seq_repeat1,
    ACTIONS(192), 2,
      sym__simple_identifier,
      aux_sym_word_token1,
    ACTIONS(195), 5,
      anon_sym_COLON,
      anon_sym_PIPE,
      sym_end_anchor,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
    STATE(64), 8,
      sym__primary_rule,
      sym_word,
      sym_list,
      sym_capture,
      sym_optional,
      sym_repeat,
      sym_repeat1,
      sym_parenthesized_rule,
  [1553] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(41), 1,
      anon_sym_key_LPAREN,
    ACTIONS(108), 1,
      sym_integer,
    ACTIONS(110), 1,
      sym__string_start,
    ACTIONS(168), 1,
      anon_sym_DASH,
    ACTIONS(170), 1,
      anon_sym_LPAREN,
    ACTIONS(174), 1,
      anon_sym_sleep_LPAREN,
    ACTIONS(178), 1,
      sym_float,
    ACTIONS(209), 1,
      anon_sym_RPAREN,
    STATE(80), 1,
      sym_identifier,
    STATE(108), 1,
      sym_expression,
    ACTIONS(43), 2,
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
  [1601] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(116), 1,
      anon_sym_DASH,
    ACTIONS(118), 1,
      anon_sym_LPAREN,
    ACTIONS(120), 1,
      anon_sym_key_LPAREN,
    ACTIONS(122), 1,
      anon_sym_sleep_LPAREN,
    ACTIONS(124), 1,
      sym_integer,
    ACTIONS(126), 1,
      sym_float,
    ACTIONS(130), 1,
      sym__string_start,
    STATE(105), 1,
      sym_identifier,
    STATE(119), 1,
      sym_expression,
    ACTIONS(114), 2,
      sym__simple_identifier,
      aux_sym_identifier_token1,
    STATE(112), 8,
      sym_variable,
      sym_parenthesized_expression,
      sym_binary_operator,
      sym_unary_operator,
      sym_key_action,
      sym_sleep_action,
      sym_action,
      sym_string,
  [1646] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(116), 1,
      anon_sym_DASH,
    ACTIONS(118), 1,
      anon_sym_LPAREN,
    ACTIONS(120), 1,
      anon_sym_key_LPAREN,
    ACTIONS(122), 1,
      anon_sym_sleep_LPAREN,
    ACTIONS(124), 1,
      sym_integer,
    ACTIONS(126), 1,
      sym_float,
    ACTIONS(130), 1,
      sym__string_start,
    STATE(105), 1,
      sym_identifier,
    STATE(132), 1,
      sym_expression,
    ACTIONS(114), 2,
      sym__simple_identifier,
      aux_sym_identifier_token1,
    STATE(112), 8,
      sym_variable,
      sym_parenthesized_expression,
      sym_binary_operator,
      sym_unary_operator,
      sym_key_action,
      sym_sleep_action,
      sym_action,
      sym_string,
  [1691] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(41), 1,
      anon_sym_key_LPAREN,
    ACTIONS(108), 1,
      sym_integer,
    ACTIONS(110), 1,
      sym__string_start,
    ACTIONS(168), 1,
      anon_sym_DASH,
    ACTIONS(170), 1,
      anon_sym_LPAREN,
    ACTIONS(174), 1,
      anon_sym_sleep_LPAREN,
    ACTIONS(178), 1,
      sym_float,
    STATE(80), 1,
      sym_identifier,
    STATE(126), 1,
      sym_expression,
    ACTIONS(43), 2,
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
  [1736] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(116), 1,
      anon_sym_DASH,
    ACTIONS(118), 1,
      anon_sym_LPAREN,
    ACTIONS(120), 1,
      anon_sym_key_LPAREN,
    ACTIONS(122), 1,
      anon_sym_sleep_LPAREN,
    ACTIONS(124), 1,
      sym_integer,
    ACTIONS(126), 1,
      sym_float,
    ACTIONS(130), 1,
      sym__string_start,
    STATE(105), 1,
      sym_identifier,
    STATE(125), 1,
      sym_expression,
    ACTIONS(114), 2,
      sym__simple_identifier,
      aux_sym_identifier_token1,
    STATE(112), 8,
      sym_variable,
      sym_parenthesized_expression,
      sym_binary_operator,
      sym_unary_operator,
      sym_key_action,
      sym_sleep_action,
      sym_action,
      sym_string,
  [1781] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(41), 1,
      anon_sym_key_LPAREN,
    ACTIONS(108), 1,
      sym_integer,
    ACTIONS(110), 1,
      sym__string_start,
    ACTIONS(168), 1,
      anon_sym_DASH,
    ACTIONS(170), 1,
      anon_sym_LPAREN,
    ACTIONS(174), 1,
      anon_sym_sleep_LPAREN,
    ACTIONS(178), 1,
      sym_float,
    STATE(80), 1,
      sym_identifier,
    STATE(90), 1,
      sym_expression,
    ACTIONS(43), 2,
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
  [1826] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(41), 1,
      anon_sym_key_LPAREN,
    ACTIONS(108), 1,
      sym_integer,
    ACTIONS(110), 1,
      sym__string_start,
    ACTIONS(168), 1,
      anon_sym_DASH,
    ACTIONS(170), 1,
      anon_sym_LPAREN,
    ACTIONS(174), 1,
      anon_sym_sleep_LPAREN,
    ACTIONS(178), 1,
      sym_float,
    STATE(80), 1,
      sym_identifier,
    STATE(113), 1,
      sym_expression,
    ACTIONS(43), 2,
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
  [1871] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(116), 1,
      anon_sym_DASH,
    ACTIONS(118), 1,
      anon_sym_LPAREN,
    ACTIONS(120), 1,
      anon_sym_key_LPAREN,
    ACTIONS(122), 1,
      anon_sym_sleep_LPAREN,
    ACTIONS(124), 1,
      sym_integer,
    ACTIONS(126), 1,
      sym_float,
    ACTIONS(130), 1,
      sym__string_start,
    STATE(105), 1,
      sym_identifier,
    STATE(130), 1,
      sym_expression,
    ACTIONS(114), 2,
      sym__simple_identifier,
      aux_sym_identifier_token1,
    STATE(112), 8,
      sym_variable,
      sym_parenthesized_expression,
      sym_binary_operator,
      sym_unary_operator,
      sym_key_action,
      sym_sleep_action,
      sym_action,
      sym_string,
  [1916] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(116), 1,
      anon_sym_DASH,
    ACTIONS(118), 1,
      anon_sym_LPAREN,
    ACTIONS(120), 1,
      anon_sym_key_LPAREN,
    ACTIONS(122), 1,
      anon_sym_sleep_LPAREN,
    ACTIONS(124), 1,
      sym_integer,
    ACTIONS(126), 1,
      sym_float,
    ACTIONS(130), 1,
      sym__string_start,
    STATE(105), 1,
      sym_identifier,
    STATE(123), 1,
      sym_expression,
    ACTIONS(114), 2,
      sym__simple_identifier,
      aux_sym_identifier_token1,
    STATE(112), 8,
      sym_variable,
      sym_parenthesized_expression,
      sym_binary_operator,
      sym_unary_operator,
      sym_key_action,
      sym_sleep_action,
      sym_action,
      sym_string,
  [1961] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(116), 1,
      anon_sym_DASH,
    ACTIONS(118), 1,
      anon_sym_LPAREN,
    ACTIONS(120), 1,
      anon_sym_key_LPAREN,
    ACTIONS(122), 1,
      anon_sym_sleep_LPAREN,
    ACTIONS(124), 1,
      sym_integer,
    ACTIONS(126), 1,
      sym_float,
    ACTIONS(130), 1,
      sym__string_start,
    STATE(105), 1,
      sym_identifier,
    STATE(128), 1,
      sym_expression,
    ACTIONS(114), 2,
      sym__simple_identifier,
      aux_sym_identifier_token1,
    STATE(112), 8,
      sym_variable,
      sym_parenthesized_expression,
      sym_binary_operator,
      sym_unary_operator,
      sym_key_action,
      sym_sleep_action,
      sym_action,
      sym_string,
  [2006] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(41), 1,
      anon_sym_key_LPAREN,
    ACTIONS(108), 1,
      sym_integer,
    ACTIONS(110), 1,
      sym__string_start,
    ACTIONS(168), 1,
      anon_sym_DASH,
    ACTIONS(170), 1,
      anon_sym_LPAREN,
    ACTIONS(174), 1,
      anon_sym_sleep_LPAREN,
    ACTIONS(178), 1,
      sym_float,
    STATE(80), 1,
      sym_identifier,
    STATE(100), 1,
      sym_expression,
    ACTIONS(43), 2,
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
  [2051] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(41), 1,
      anon_sym_key_LPAREN,
    ACTIONS(108), 1,
      sym_integer,
    ACTIONS(110), 1,
      sym__string_start,
    ACTIONS(168), 1,
      anon_sym_DASH,
    ACTIONS(170), 1,
      anon_sym_LPAREN,
    ACTIONS(174), 1,
      anon_sym_sleep_LPAREN,
    ACTIONS(178), 1,
      sym_float,
    STATE(80), 1,
      sym_identifier,
    STATE(108), 1,
      sym_expression,
    ACTIONS(43), 2,
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
  [2096] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(41), 1,
      anon_sym_key_LPAREN,
    ACTIONS(108), 1,
      sym_integer,
    ACTIONS(110), 1,
      sym__string_start,
    ACTIONS(168), 1,
      anon_sym_DASH,
    ACTIONS(170), 1,
      anon_sym_LPAREN,
    ACTIONS(174), 1,
      anon_sym_sleep_LPAREN,
    ACTIONS(178), 1,
      sym_float,
    STATE(80), 1,
      sym_identifier,
    STATE(92), 1,
      sym_expression,
    ACTIONS(43), 2,
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
  [2141] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(41), 1,
      anon_sym_key_LPAREN,
    ACTIONS(108), 1,
      sym_integer,
    ACTIONS(110), 1,
      sym__string_start,
    ACTIONS(168), 1,
      anon_sym_DASH,
    ACTIONS(170), 1,
      anon_sym_LPAREN,
    ACTIONS(174), 1,
      anon_sym_sleep_LPAREN,
    ACTIONS(178), 1,
      sym_float,
    STATE(80), 1,
      sym_identifier,
    STATE(93), 1,
      sym_expression,
    ACTIONS(43), 2,
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
  [2186] = 10,
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
    STATE(144), 1,
      sym__optional_anchor,
    ACTIONS(15), 2,
      sym__simple_identifier,
      aux_sym_word_token1,
    STATE(134), 2,
      sym__optional_seq,
      sym_seq,
    STATE(18), 8,
      sym__primary_rule,
      sym_word,
      sym_list,
      sym_capture,
      sym_optional,
      sym_repeat,
      sym_repeat1,
      sym_parenthesized_rule,
  [2226] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(213), 2,
      sym__simple_identifier,
      aux_sym_word_token1,
    ACTIONS(211), 15,
      ts_builtin_sym_end,
      sym_start_anchor,
      anon_sym_LBRACE,
      anon_sym_LT,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_app_LPAREN,
      anon_sym_face_LPAREN,
      anon_sym_deck_LPAREN,
      anon_sym_gamepad_LPAREN,
      anon_sym_noise_LPAREN,
      anon_sym_parrot_LPAREN,
      sym_settings_binding,
      sym_tag_binding,
      anon_sym_key_LPAREN,
  [2251] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(217), 2,
      sym__simple_identifier,
      aux_sym_word_token1,
    ACTIONS(215), 15,
      ts_builtin_sym_end,
      sym_start_anchor,
      anon_sym_LBRACE,
      anon_sym_LT,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_app_LPAREN,
      anon_sym_face_LPAREN,
      anon_sym_deck_LPAREN,
      anon_sym_gamepad_LPAREN,
      anon_sym_noise_LPAREN,
      anon_sym_parrot_LPAREN,
      sym_settings_binding,
      sym_tag_binding,
      anon_sym_key_LPAREN,
  [2276] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(221), 2,
      sym__simple_identifier,
      aux_sym_word_token1,
    ACTIONS(219), 15,
      ts_builtin_sym_end,
      sym_start_anchor,
      anon_sym_LBRACE,
      anon_sym_LT,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_app_LPAREN,
      anon_sym_face_LPAREN,
      anon_sym_deck_LPAREN,
      anon_sym_gamepad_LPAREN,
      anon_sym_noise_LPAREN,
      anon_sym_parrot_LPAREN,
      sym_settings_binding,
      sym_tag_binding,
      anon_sym_key_LPAREN,
  [2301] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(225), 2,
      sym__simple_identifier,
      aux_sym_word_token1,
    ACTIONS(223), 15,
      ts_builtin_sym_end,
      sym_start_anchor,
      anon_sym_LBRACE,
      anon_sym_LT,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_app_LPAREN,
      anon_sym_face_LPAREN,
      anon_sym_deck_LPAREN,
      anon_sym_gamepad_LPAREN,
      anon_sym_noise_LPAREN,
      anon_sym_parrot_LPAREN,
      sym_settings_binding,
      sym_tag_binding,
      anon_sym_key_LPAREN,
  [2326] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(229), 2,
      sym__simple_identifier,
      aux_sym_word_token1,
    ACTIONS(227), 15,
      ts_builtin_sym_end,
      sym_start_anchor,
      anon_sym_LBRACE,
      anon_sym_LT,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_app_LPAREN,
      anon_sym_face_LPAREN,
      anon_sym_deck_LPAREN,
      anon_sym_gamepad_LPAREN,
      anon_sym_noise_LPAREN,
      anon_sym_parrot_LPAREN,
      sym_settings_binding,
      sym_tag_binding,
      anon_sym_key_LPAREN,
  [2351] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(233), 2,
      sym__simple_identifier,
      aux_sym_word_token1,
    ACTIONS(231), 15,
      ts_builtin_sym_end,
      sym_start_anchor,
      anon_sym_LBRACE,
      anon_sym_LT,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_app_LPAREN,
      anon_sym_face_LPAREN,
      anon_sym_deck_LPAREN,
      anon_sym_gamepad_LPAREN,
      anon_sym_noise_LPAREN,
      anon_sym_parrot_LPAREN,
      sym_settings_binding,
      sym_tag_binding,
      anon_sym_key_LPAREN,
  [2376] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(237), 2,
      sym__simple_identifier,
      aux_sym_word_token1,
    ACTIONS(235), 15,
      ts_builtin_sym_end,
      sym_start_anchor,
      anon_sym_LBRACE,
      anon_sym_LT,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_app_LPAREN,
      anon_sym_face_LPAREN,
      anon_sym_deck_LPAREN,
      anon_sym_gamepad_LPAREN,
      anon_sym_noise_LPAREN,
      anon_sym_parrot_LPAREN,
      sym_settings_binding,
      sym_tag_binding,
      anon_sym_key_LPAREN,
  [2401] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(241), 2,
      sym__simple_identifier,
      aux_sym_word_token1,
    ACTIONS(239), 15,
      ts_builtin_sym_end,
      sym_start_anchor,
      anon_sym_LBRACE,
      anon_sym_LT,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_app_LPAREN,
      anon_sym_face_LPAREN,
      anon_sym_deck_LPAREN,
      anon_sym_gamepad_LPAREN,
      anon_sym_noise_LPAREN,
      anon_sym_parrot_LPAREN,
      sym_settings_binding,
      sym_tag_binding,
      anon_sym_key_LPAREN,
  [2426] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(245), 2,
      sym__simple_identifier,
      aux_sym_word_token1,
    ACTIONS(243), 15,
      ts_builtin_sym_end,
      sym_start_anchor,
      anon_sym_LBRACE,
      anon_sym_LT,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_app_LPAREN,
      anon_sym_face_LPAREN,
      anon_sym_deck_LPAREN,
      anon_sym_gamepad_LPAREN,
      anon_sym_noise_LPAREN,
      anon_sym_parrot_LPAREN,
      sym_settings_binding,
      sym_tag_binding,
      anon_sym_key_LPAREN,
  [2451] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(249), 2,
      sym__simple_identifier,
      aux_sym_word_token1,
    ACTIONS(247), 15,
      ts_builtin_sym_end,
      sym_start_anchor,
      anon_sym_LBRACE,
      anon_sym_LT,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_app_LPAREN,
      anon_sym_face_LPAREN,
      anon_sym_deck_LPAREN,
      anon_sym_gamepad_LPAREN,
      anon_sym_noise_LPAREN,
      anon_sym_parrot_LPAREN,
      sym_settings_binding,
      sym_tag_binding,
      anon_sym_key_LPAREN,
  [2476] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(253), 2,
      sym__simple_identifier,
      aux_sym_word_token1,
    ACTIONS(251), 15,
      ts_builtin_sym_end,
      sym_start_anchor,
      anon_sym_LBRACE,
      anon_sym_LT,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_app_LPAREN,
      anon_sym_face_LPAREN,
      anon_sym_deck_LPAREN,
      anon_sym_gamepad_LPAREN,
      anon_sym_noise_LPAREN,
      anon_sym_parrot_LPAREN,
      sym_settings_binding,
      sym_tag_binding,
      anon_sym_key_LPAREN,
  [2501] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(257), 2,
      sym__simple_identifier,
      aux_sym_word_token1,
    ACTIONS(255), 15,
      ts_builtin_sym_end,
      sym_start_anchor,
      anon_sym_LBRACE,
      anon_sym_LT,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_app_LPAREN,
      anon_sym_face_LPAREN,
      anon_sym_deck_LPAREN,
      anon_sym_gamepad_LPAREN,
      anon_sym_noise_LPAREN,
      anon_sym_parrot_LPAREN,
      sym_settings_binding,
      sym_tag_binding,
      anon_sym_key_LPAREN,
  [2526] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(261), 2,
      sym__simple_identifier,
      aux_sym_word_token1,
    ACTIONS(259), 15,
      ts_builtin_sym_end,
      sym_start_anchor,
      anon_sym_LBRACE,
      anon_sym_LT,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_app_LPAREN,
      anon_sym_face_LPAREN,
      anon_sym_deck_LPAREN,
      anon_sym_gamepad_LPAREN,
      anon_sym_noise_LPAREN,
      anon_sym_parrot_LPAREN,
      sym_settings_binding,
      sym_tag_binding,
      anon_sym_key_LPAREN,
  [2551] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(265), 2,
      sym__simple_identifier,
      aux_sym_word_token1,
    ACTIONS(263), 15,
      ts_builtin_sym_end,
      sym_start_anchor,
      anon_sym_LBRACE,
      anon_sym_LT,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_app_LPAREN,
      anon_sym_face_LPAREN,
      anon_sym_deck_LPAREN,
      anon_sym_gamepad_LPAREN,
      anon_sym_noise_LPAREN,
      anon_sym_parrot_LPAREN,
      sym_settings_binding,
      sym_tag_binding,
      anon_sym_key_LPAREN,
  [2576] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(269), 2,
      sym__simple_identifier,
      aux_sym_word_token1,
    ACTIONS(267), 15,
      ts_builtin_sym_end,
      sym_start_anchor,
      anon_sym_LBRACE,
      anon_sym_LT,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_app_LPAREN,
      anon_sym_face_LPAREN,
      anon_sym_deck_LPAREN,
      anon_sym_gamepad_LPAREN,
      anon_sym_noise_LPAREN,
      anon_sym_parrot_LPAREN,
      sym_settings_binding,
      sym_tag_binding,
      anon_sym_key_LPAREN,
  [2601] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(273), 2,
      sym__simple_identifier,
      aux_sym_word_token1,
    ACTIONS(271), 15,
      ts_builtin_sym_end,
      sym_start_anchor,
      anon_sym_LBRACE,
      anon_sym_LT,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_app_LPAREN,
      anon_sym_face_LPAREN,
      anon_sym_deck_LPAREN,
      anon_sym_gamepad_LPAREN,
      anon_sym_noise_LPAREN,
      anon_sym_parrot_LPAREN,
      sym_settings_binding,
      sym_tag_binding,
      anon_sym_key_LPAREN,
  [2626] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(277), 2,
      sym__simple_identifier,
      aux_sym_word_token1,
    ACTIONS(275), 15,
      ts_builtin_sym_end,
      sym_start_anchor,
      anon_sym_LBRACE,
      anon_sym_LT,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_app_LPAREN,
      anon_sym_face_LPAREN,
      anon_sym_deck_LPAREN,
      anon_sym_gamepad_LPAREN,
      anon_sym_noise_LPAREN,
      anon_sym_parrot_LPAREN,
      sym_settings_binding,
      sym_tag_binding,
      anon_sym_key_LPAREN,
  [2651] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(281), 2,
      sym__simple_identifier,
      aux_sym_word_token1,
    ACTIONS(279), 15,
      ts_builtin_sym_end,
      sym_start_anchor,
      anon_sym_LBRACE,
      anon_sym_LT,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_app_LPAREN,
      anon_sym_face_LPAREN,
      anon_sym_deck_LPAREN,
      anon_sym_gamepad_LPAREN,
      anon_sym_noise_LPAREN,
      anon_sym_parrot_LPAREN,
      sym_settings_binding,
      sym_tag_binding,
      anon_sym_key_LPAREN,
  [2676] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(285), 2,
      sym__simple_identifier,
      aux_sym_word_token1,
    ACTIONS(283), 15,
      ts_builtin_sym_end,
      sym_start_anchor,
      anon_sym_LBRACE,
      anon_sym_LT,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_app_LPAREN,
      anon_sym_face_LPAREN,
      anon_sym_deck_LPAREN,
      anon_sym_gamepad_LPAREN,
      anon_sym_noise_LPAREN,
      anon_sym_parrot_LPAREN,
      sym_settings_binding,
      sym_tag_binding,
      anon_sym_key_LPAREN,
  [2701] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(289), 2,
      sym__simple_identifier,
      aux_sym_word_token1,
    ACTIONS(287), 15,
      ts_builtin_sym_end,
      sym_start_anchor,
      anon_sym_LBRACE,
      anon_sym_LT,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_app_LPAREN,
      anon_sym_face_LPAREN,
      anon_sym_deck_LPAREN,
      anon_sym_gamepad_LPAREN,
      anon_sym_noise_LPAREN,
      anon_sym_parrot_LPAREN,
      sym_settings_binding,
      sym_tag_binding,
      anon_sym_key_LPAREN,
  [2726] = 8,
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
    STATE(139), 2,
      sym__optional_seq,
      sym_seq,
    STATE(18), 8,
      sym__primary_rule,
      sym_word,
      sym_list,
      sym_capture,
      sym_optional,
      sym_repeat,
      sym_repeat1,
      sym_parenthesized_rule,
  [2760] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(164), 1,
      anon_sym_STAR,
    ACTIONS(166), 1,
      anon_sym_PLUS,
    ACTIONS(291), 2,
      sym__simple_identifier,
      aux_sym_word_token1,
    ACTIONS(293), 9,
      anon_sym_COLON,
      anon_sym_PIPE,
      sym_end_anchor,
      anon_sym_LBRACE,
      anon_sym_LT,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [2785] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(295), 2,
      sym__simple_identifier,
      aux_sym_word_token1,
    ACTIONS(297), 11,
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
  [2806] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(299), 2,
      sym__simple_identifier,
      aux_sym_word_token1,
    ACTIONS(301), 11,
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
  [2827] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(303), 2,
      sym__simple_identifier,
      aux_sym_word_token1,
    ACTIONS(305), 11,
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
  [2848] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(307), 2,
      sym__simple_identifier,
      aux_sym_word_token1,
    ACTIONS(309), 11,
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
  [2869] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(311), 2,
      sym__simple_identifier,
      aux_sym_word_token1,
    ACTIONS(313), 11,
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
  [2890] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(315), 2,
      sym__simple_identifier,
      aux_sym_word_token1,
    ACTIONS(317), 11,
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
  [2911] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(319), 2,
      sym__simple_identifier,
      aux_sym_word_token1,
    ACTIONS(321), 11,
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
  [2932] = 8,
    ACTIONS(96), 1,
      sym_comment,
    ACTIONS(323), 1,
      anon_sym_LBRACE,
    ACTIONS(325), 1,
      anon_sym_RBRACE,
    ACTIONS(331), 1,
      sym_string_content,
    ACTIONS(333), 1,
      sym__string_end,
    ACTIONS(327), 2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_RBRACE_RBRACE,
    ACTIONS(329), 2,
      sym_string_escape_sequence,
      sym__not_escapesequence,
    STATE(73), 4,
      sym_interpolation,
      sym__escape_interpolation,
      sym__not_interpolation,
      aux_sym_string_repeat1,
  [2962] = 8,
    ACTIONS(96), 1,
      sym_comment,
    ACTIONS(335), 1,
      anon_sym_LBRACE,
    ACTIONS(338), 1,
      anon_sym_RBRACE,
    ACTIONS(347), 1,
      sym_string_content,
    ACTIONS(350), 1,
      sym__string_end,
    ACTIONS(341), 2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_RBRACE_RBRACE,
    ACTIONS(344), 2,
      sym_string_escape_sequence,
      sym__not_escapesequence,
    STATE(73), 4,
      sym_interpolation,
      sym__escape_interpolation,
      sym__not_interpolation,
      aux_sym_string_repeat1,
  [2992] = 8,
    ACTIONS(96), 1,
      sym_comment,
    ACTIONS(323), 1,
      anon_sym_LBRACE,
    ACTIONS(325), 1,
      anon_sym_RBRACE,
    ACTIONS(331), 1,
      sym_string_content,
    ACTIONS(352), 1,
      sym__string_end,
    ACTIONS(327), 2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_RBRACE_RBRACE,
    ACTIONS(329), 2,
      sym_string_escape_sequence,
      sym__not_escapesequence,
    STATE(73), 4,
      sym_interpolation,
      sym__escape_interpolation,
      sym__not_interpolation,
      aux_sym_string_repeat1,
  [3022] = 8,
    ACTIONS(96), 1,
      sym_comment,
    ACTIONS(323), 1,
      anon_sym_LBRACE,
    ACTIONS(325), 1,
      anon_sym_RBRACE,
    ACTIONS(356), 1,
      sym_string_content,
    ACTIONS(358), 1,
      sym__string_end,
    ACTIONS(327), 2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_RBRACE_RBRACE,
    ACTIONS(354), 2,
      sym_string_escape_sequence,
      sym__not_escapesequence,
    STATE(74), 4,
      sym_interpolation,
      sym__escape_interpolation,
      sym__not_interpolation,
      aux_sym_string_repeat1,
  [3052] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(360), 12,
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
  [3070] = 8,
    ACTIONS(96), 1,
      sym_comment,
    ACTIONS(323), 1,
      anon_sym_LBRACE,
    ACTIONS(325), 1,
      anon_sym_RBRACE,
    ACTIONS(364), 1,
      sym_string_content,
    ACTIONS(366), 1,
      sym__string_end,
    ACTIONS(327), 2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_RBRACE_RBRACE,
    ACTIONS(362), 2,
      sym_string_escape_sequence,
      sym__not_escapesequence,
    STATE(72), 4,
      sym_interpolation,
      sym__escape_interpolation,
      sym__not_interpolation,
      aux_sym_string_repeat1,
  [3100] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(368), 1,
      anon_sym_COLON,
    ACTIONS(319), 2,
      sym__simple_identifier,
      aux_sym_word_token1,
    ACTIONS(321), 8,
      anon_sym_PIPE,
      sym_end_anchor,
      anon_sym_LBRACE,
      anon_sym_LT,
      anon_sym_LBRACK,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_LPAREN,
  [3121] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(371), 1,
      anon_sym_DASH,
    STATE(145), 1,
      aux_sym_matches_repeat2,
    STATE(173), 1,
      sym_identifier,
    ACTIONS(11), 2,
      anon_sym_and,
      anon_sym_not,
    ACTIONS(43), 2,
      sym__simple_identifier,
      aux_sym_identifier_token1,
    STATE(81), 2,
      sym_match,
      aux_sym_matches_repeat1,
    STATE(117), 2,
      sym_match_modifier,
      aux_sym_match_repeat1,
  [3150] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(375), 1,
      anon_sym_LPAREN2,
    STATE(96), 1,
      sym_argument_list,
    ACTIONS(373), 9,
      anon_sym_DASH,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_or,
      anon_sym_COMMA,
  [3171] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(380), 1,
      anon_sym_DASH,
    STATE(173), 1,
      sym_identifier,
    ACTIONS(377), 2,
      sym__simple_identifier,
      aux_sym_identifier_token1,
    ACTIONS(382), 2,
      anon_sym_and,
      anon_sym_not,
    STATE(81), 2,
      sym_match,
      aux_sym_matches_repeat1,
    STATE(117), 2,
      sym_match_modifier,
      aux_sym_match_repeat1,
  [3197] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(385), 1,
      anon_sym_EQ,
    ACTIONS(387), 1,
      anon_sym_LPAREN2,
    STATE(131), 1,
      sym_argument_list,
    ACTIONS(373), 7,
      sym__newline,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_or,
  [3219] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(389), 10,
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
  [3235] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(249), 3,
      sym__simple_identifier,
      aux_sym_identifier_token1,
      sym_integer,
    ACTIONS(247), 7,
      sym__dedent,
      sym__string_start,
      anon_sym_DASH,
      anon_sym_LPAREN,
      anon_sym_key_LPAREN,
      anon_sym_sleep_LPAREN,
      sym_float,
  [3253] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(387), 1,
      anon_sym_LPAREN2,
    ACTIONS(391), 1,
      anon_sym_EQ,
    STATE(131), 1,
      sym_argument_list,
    ACTIONS(373), 7,
      sym__newline,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_or,
  [3275] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(273), 3,
      sym__simple_identifier,
      aux_sym_identifier_token1,
      sym_integer,
    ACTIONS(271), 7,
      sym__dedent,
      sym__string_start,
      anon_sym_DASH,
      anon_sym_LPAREN,
      anon_sym_key_LPAREN,
      anon_sym_sleep_LPAREN,
      sym_float,
  [3293] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(233), 3,
      sym__simple_identifier,
      aux_sym_identifier_token1,
      sym_integer,
    ACTIONS(231), 7,
      sym__dedent,
      sym__string_start,
      anon_sym_DASH,
      anon_sym_LPAREN,
      anon_sym_key_LPAREN,
      anon_sym_sleep_LPAREN,
      sym_float,
  [3311] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(393), 9,
      anon_sym_DASH,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_or,
      anon_sym_COMMA,
  [3326] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(395), 9,
      anon_sym_DASH,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_or,
      anon_sym_COMMA,
  [3341] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(399), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(397), 6,
      anon_sym_DASH,
      anon_sym_RBRACE,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_or,
      anon_sym_COMMA,
  [3358] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(403), 1,
      anon_sym_RPAREN,
    ACTIONS(405), 1,
      anon_sym_or,
    ACTIONS(407), 1,
      anon_sym_COMMA,
    STATE(152), 1,
      aux_sym_argument_list_repeat1,
    ACTIONS(401), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(399), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [3383] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(397), 9,
      anon_sym_DASH,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_or,
      anon_sym_COMMA,
  [3398] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(401), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(399), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(397), 4,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_or,
      anon_sym_COMMA,
  [3417] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(409), 9,
      anon_sym_DASH,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_or,
      anon_sym_COMMA,
  [3432] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(411), 9,
      anon_sym_DASH,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_or,
      anon_sym_COMMA,
  [3447] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(413), 9,
      anon_sym_DASH,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_or,
      anon_sym_COMMA,
  [3462] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(415), 9,
      anon_sym_DASH,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_or,
      anon_sym_COMMA,
  [3477] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(417), 9,
      anon_sym_DASH,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_or,
      anon_sym_COMMA,
  [3492] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(419), 9,
      anon_sym_DASH,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_or,
      anon_sym_COMMA,
  [3507] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(421), 9,
      anon_sym_DASH,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_or,
      anon_sym_COMMA,
  [3522] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(423), 9,
      anon_sym_DASH,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_or,
      anon_sym_COMMA,
  [3537] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(425), 9,
      anon_sym_DASH,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_or,
      anon_sym_COMMA,
  [3552] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(360), 9,
      sym__newline,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_EQ,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_or,
      anon_sym_LPAREN2,
  [3567] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(405), 1,
      anon_sym_or,
    ACTIONS(427), 1,
      anon_sym_RPAREN,
    ACTIONS(429), 1,
      anon_sym_COMMA,
    STATE(150), 1,
      aux_sym_argument_list_repeat1,
    ACTIONS(401), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(399), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [3592] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(387), 1,
      anon_sym_LPAREN2,
    STATE(131), 1,
      sym_argument_list,
    ACTIONS(373), 7,
      sym__newline,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_or,
  [3611] = 3,
    ACTIONS(96), 1,
      sym_comment,
    ACTIONS(433), 2,
      sym_string_content,
      sym__string_end,
    ACTIONS(431), 6,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACE_LBRACE,
      anon_sym_RBRACE_RBRACE,
      sym_string_escape_sequence,
      sym__not_escapesequence,
  [3627] = 3,
    ACTIONS(96), 1,
      sym_comment,
    ACTIONS(112), 2,
      sym_string_content,
      sym__string_end,
    ACTIONS(100), 6,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACE_LBRACE,
      anon_sym_RBRACE_RBRACE,
      sym_string_escape_sequence,
      sym__not_escapesequence,
  [3643] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(405), 1,
      anon_sym_or,
    ACTIONS(401), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(435), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
    ACTIONS(399), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [3663] = 3,
    ACTIONS(96), 1,
      sym_comment,
    ACTIONS(439), 2,
      sym_string_content,
      sym__string_end,
    ACTIONS(437), 6,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACE_LBRACE,
      anon_sym_RBRACE_RBRACE,
      sym_string_escape_sequence,
      sym__not_escapesequence,
  [3679] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(389), 7,
      sym__newline,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_or,
  [3692] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(419), 7,
      sym__newline,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_or,
  [3705] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(425), 7,
      sym__newline,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_or,
  [3718] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(405), 1,
      anon_sym_or,
    ACTIONS(441), 1,
      anon_sym_RPAREN,
    ACTIONS(401), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(399), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [3737] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(447), 1,
      anon_sym_or,
    ACTIONS(449), 1,
      sym__newline,
    ACTIONS(443), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(445), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [3756] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(411), 7,
      sym__newline,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_or,
  [3769] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(393), 7,
      sym__newline,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_or,
  [3782] = 5,
    ACTIONS(3), 1,
      sym_comment,
    STATE(198), 1,
      sym_identifier,
    ACTIONS(11), 2,
      anon_sym_and,
      anon_sym_not,
    ACTIONS(43), 2,
      sym__simple_identifier,
      aux_sym_identifier_token1,
    STATE(133), 2,
      sym_match_modifier,
      aux_sym_match_repeat1,
  [3801] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(405), 1,
      anon_sym_or,
    ACTIONS(451), 1,
      anon_sym_RBRACE,
    ACTIONS(401), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(399), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [3820] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(447), 1,
      anon_sym_or,
    ACTIONS(453), 1,
      sym__newline,
    ACTIONS(443), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(445), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [3839] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(423), 7,
      sym__newline,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_or,
  [3852] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(447), 1,
      anon_sym_or,
    ACTIONS(455), 1,
      sym__newline,
    ACTIONS(443), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(445), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [3871] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(395), 7,
      sym__newline,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_or,
  [3884] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(447), 1,
      anon_sym_or,
    ACTIONS(457), 1,
      sym__newline,
    ACTIONS(443), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(445), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [3903] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(409), 7,
      sym__newline,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_or,
  [3916] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(421), 7,
      sym__newline,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_or,
  [3929] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(405), 1,
      anon_sym_or,
    ACTIONS(459), 1,
      anon_sym_RPAREN,
    ACTIONS(401), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(399), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [3948] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(417), 7,
      sym__newline,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_or,
  [3961] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(397), 2,
      sym__newline,
      anon_sym_or,
    ACTIONS(443), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(445), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [3978] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(415), 7,
      sym__newline,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_or,
  [3991] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(445), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(397), 4,
      sym__newline,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_or,
  [4006] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(413), 7,
      sym__newline,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_or,
  [4019] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(397), 7,
      sym__newline,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_or,
  [4032] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(461), 2,
      sym__simple_identifier,
      aux_sym_identifier_token1,
    ACTIONS(463), 2,
      anon_sym_and,
      anon_sym_not,
    STATE(133), 2,
      sym_match_modifier,
      aux_sym_match_repeat1,
  [4048] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(468), 1,
      sym_end_anchor,
    ACTIONS(466), 4,
      anon_sym_COLON,
      anon_sym_PIPE,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
  [4061] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(472), 1,
      anon_sym_DASH,
    ACTIONS(470), 4,
      sym__simple_identifier,
      anon_sym_and,
      anon_sym_not,
      aux_sym_identifier_token1,
  [4074] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(476), 1,
      anon_sym_PIPE,
    STATE(138), 1,
      aux_sym_choice_repeat1,
    ACTIONS(474), 3,
      anon_sym_COLON,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
  [4089] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(480), 1,
      anon_sym_DASH,
    ACTIONS(478), 4,
      sym__simple_identifier,
      anon_sym_and,
      anon_sym_not,
      aux_sym_identifier_token1,
  [4102] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(484), 1,
      anon_sym_PIPE,
    STATE(138), 1,
      aux_sym_choice_repeat1,
    ACTIONS(482), 3,
      anon_sym_COLON,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
  [4117] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(489), 1,
      sym_end_anchor,
    ACTIONS(487), 4,
      anon_sym_COLON,
      anon_sym_PIPE,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
  [4130] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(476), 1,
      anon_sym_PIPE,
    STATE(136), 1,
      aux_sym_choice_repeat1,
    ACTIONS(491), 3,
      anon_sym_COLON,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
  [4145] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(493), 4,
      anon_sym_COLON,
      anon_sym_PIPE,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
  [4155] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(487), 4,
      anon_sym_COLON,
      anon_sym_PIPE,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
  [4165] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(495), 4,
      sym__simple_identifier,
      anon_sym_and,
      anon_sym_not,
      aux_sym_identifier_token1,
  [4175] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(482), 4,
      anon_sym_COLON,
      anon_sym_PIPE,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
  [4185] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(497), 1,
      anon_sym_DASH,
    ACTIONS(499), 1,
      sym__newline,
    STATE(151), 1,
      aux_sym_matches_repeat2,
  [4198] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(497), 1,
      anon_sym_DASH,
    ACTIONS(501), 1,
      sym__newline,
    STATE(151), 1,
      aux_sym_matches_repeat2,
  [4211] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(169), 1,
      sym_identifier,
    ACTIONS(43), 2,
      sym__simple_identifier,
      aux_sym_identifier_token1,
  [4222] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(168), 1,
      sym_identifier,
    ACTIONS(43), 2,
      sym__simple_identifier,
      aux_sym_identifier_token1,
  [4233] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(202), 1,
      sym_identifier,
    ACTIONS(114), 2,
      sym__simple_identifier,
      aux_sym_identifier_token1,
  [4244] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(209), 1,
      anon_sym_RPAREN,
    ACTIONS(503), 1,
      anon_sym_COMMA,
    STATE(153), 1,
      aux_sym_argument_list_repeat1,
  [4257] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(505), 1,
      anon_sym_DASH,
    ACTIONS(508), 1,
      sym__newline,
    STATE(151), 1,
      aux_sym_matches_repeat2,
  [4270] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(186), 1,
      anon_sym_RPAREN,
    ACTIONS(510), 1,
      anon_sym_COMMA,
    STATE(153), 1,
      aux_sym_argument_list_repeat1,
  [4283] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(435), 1,
      anon_sym_RPAREN,
    ACTIONS(512), 1,
      anon_sym_COMMA,
    STATE(153), 1,
      aux_sym_argument_list_repeat1,
  [4296] = 3,
    ACTIONS(96), 1,
      sym_comment,
    ACTIONS(515), 1,
      aux_sym__implicit_string_argument_token1,
    STATE(194), 1,
      sym__implicit_string_argument,
  [4306] = 3,
    ACTIONS(96), 1,
      sym_comment,
    ACTIONS(517), 1,
      aux_sym__implicit_string_argument_token1,
    STATE(185), 1,
      sym__implicit_string_argument,
  [4316] = 3,
    ACTIONS(96), 1,
      sym_comment,
    ACTIONS(519), 1,
      aux_sym__implicit_string_argument_token1,
    STATE(189), 1,
      sym__implicit_string_argument,
  [4326] = 3,
    ACTIONS(96), 1,
      sym_comment,
    ACTIONS(521), 1,
      aux_sym__implicit_string_argument_token1,
    STATE(195), 1,
      sym__implicit_string_argument,
  [4336] = 3,
    ACTIONS(96), 1,
      sym_comment,
    ACTIONS(523), 1,
      aux_sym__implicit_string_argument_token1,
    STATE(199), 1,
      sym__implicit_string_argument,
  [4346] = 3,
    ACTIONS(96), 1,
      sym_comment,
    ACTIONS(525), 1,
      aux_sym__implicit_string_argument_token1,
    STATE(200), 1,
      sym__implicit_string_argument,
  [4356] = 3,
    ACTIONS(96), 1,
      sym_comment,
    ACTIONS(527), 1,
      aux_sym__implicit_string_argument_token1,
    STATE(196), 1,
      sym__implicit_string_argument,
  [4366] = 3,
    ACTIONS(96), 1,
      sym_comment,
    ACTIONS(529), 1,
      aux_sym__implicit_string_argument_token1,
    STATE(201), 1,
      sym__implicit_string_argument,
  [4376] = 3,
    ACTIONS(96), 1,
      sym_comment,
    ACTIONS(531), 1,
      aux_sym__implicit_string_argument_token1,
    STATE(203), 1,
      sym__implicit_string_argument,
  [4386] = 3,
    ACTIONS(96), 1,
      sym_comment,
    ACTIONS(533), 1,
      aux_sym__implicit_string_argument_token1,
    STATE(205), 1,
      sym__implicit_string_argument,
  [4396] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(535), 1,
      anon_sym_COLON,
  [4403] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(45), 1,
      ts_builtin_sym_end,
  [4410] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(537), 1,
      anon_sym_RPAREN,
  [4417] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(539), 1,
      anon_sym_RBRACK,
  [4424] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(541), 1,
      anon_sym_GT,
  [4431] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(543), 1,
      anon_sym_RBRACE,
  [4438] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(545), 1,
      anon_sym_COLON,
  [4445] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(547), 1,
      anon_sym_COLON,
  [4452] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(549), 1,
      anon_sym_COLON,
  [4459] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(551), 1,
      anon_sym_COLON,
  [4466] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(553), 1,
      anon_sym_COLON,
  [4473] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(555), 1,
      anon_sym_COLON,
  [4480] = 2,
    ACTIONS(96), 1,
      sym_comment,
    ACTIONS(557), 1,
      sym_implicit_string,
  [4487] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(559), 1,
      anon_sym_COLON,
  [4494] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(561), 1,
      anon_sym_COLON,
  [4501] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(563), 1,
      anon_sym_COLON,
  [4508] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(565), 1,
      anon_sym_COLON,
  [4515] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(567), 1,
      anon_sym_COLON,
  [4522] = 2,
    ACTIONS(96), 1,
      sym_comment,
    ACTIONS(569), 1,
      sym_implicit_string,
  [4529] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(571), 1,
      anon_sym_COLON,
  [4536] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(573), 1,
      anon_sym_COLON,
  [4543] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(575), 1,
      anon_sym_RPAREN,
  [4550] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(577), 1,
      ts_builtin_sym_end,
  [4557] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(579), 1,
      sym__newline,
  [4564] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(581), 1,
      anon_sym_COLON,
  [4571] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(583), 1,
      anon_sym_RPAREN,
  [4578] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(585), 1,
      anon_sym_COLON,
  [4585] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(587), 1,
      anon_sym_COLON,
  [4592] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(589), 1,
      anon_sym_COLON,
  [4599] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(591), 1,
      sym__newline,
  [4606] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(593), 1,
      anon_sym_RPAREN,
  [4613] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(595), 1,
      anon_sym_RPAREN,
  [4620] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(597), 1,
      anon_sym_RPAREN,
  [4627] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(427), 1,
      anon_sym_RPAREN,
  [4634] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(599), 1,
      anon_sym_COLON,
  [4641] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(601), 1,
      anon_sym_RPAREN,
  [4648] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(603), 1,
      anon_sym_RPAREN,
  [4655] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(605), 1,
      anon_sym_RPAREN,
  [4662] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(607), 1,
      sym__newline,
  [4669] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(609), 1,
      anon_sym_RPAREN,
  [4676] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(403), 1,
      anon_sym_RPAREN,
  [4683] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(611), 1,
      anon_sym_RPAREN,
  [4690] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(613), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 117,
  [SMALL_STATE(4)] = 231,
  [SMALL_STATE(5)] = 345,
  [SMALL_STATE(6)] = 400,
  [SMALL_STATE(7)] = 459,
  [SMALL_STATE(8)] = 517,
  [SMALL_STATE(9)] = 575,
  [SMALL_STATE(10)] = 631,
  [SMALL_STATE(11)] = 689,
  [SMALL_STATE(12)] = 745,
  [SMALL_STATE(13)] = 803,
  [SMALL_STATE(14)] = 861,
  [SMALL_STATE(15)] = 919,
  [SMALL_STATE(16)] = 977,
  [SMALL_STATE(17)] = 1035,
  [SMALL_STATE(18)] = 1093,
  [SMALL_STATE(19)] = 1139,
  [SMALL_STATE(20)] = 1190,
  [SMALL_STATE(21)] = 1241,
  [SMALL_STATE(22)] = 1285,
  [SMALL_STATE(23)] = 1333,
  [SMALL_STATE(24)] = 1377,
  [SMALL_STATE(25)] = 1425,
  [SMALL_STATE(26)] = 1465,
  [SMALL_STATE(27)] = 1513,
  [SMALL_STATE(28)] = 1553,
  [SMALL_STATE(29)] = 1601,
  [SMALL_STATE(30)] = 1646,
  [SMALL_STATE(31)] = 1691,
  [SMALL_STATE(32)] = 1736,
  [SMALL_STATE(33)] = 1781,
  [SMALL_STATE(34)] = 1826,
  [SMALL_STATE(35)] = 1871,
  [SMALL_STATE(36)] = 1916,
  [SMALL_STATE(37)] = 1961,
  [SMALL_STATE(38)] = 2006,
  [SMALL_STATE(39)] = 2051,
  [SMALL_STATE(40)] = 2096,
  [SMALL_STATE(41)] = 2141,
  [SMALL_STATE(42)] = 2186,
  [SMALL_STATE(43)] = 2226,
  [SMALL_STATE(44)] = 2251,
  [SMALL_STATE(45)] = 2276,
  [SMALL_STATE(46)] = 2301,
  [SMALL_STATE(47)] = 2326,
  [SMALL_STATE(48)] = 2351,
  [SMALL_STATE(49)] = 2376,
  [SMALL_STATE(50)] = 2401,
  [SMALL_STATE(51)] = 2426,
  [SMALL_STATE(52)] = 2451,
  [SMALL_STATE(53)] = 2476,
  [SMALL_STATE(54)] = 2501,
  [SMALL_STATE(55)] = 2526,
  [SMALL_STATE(56)] = 2551,
  [SMALL_STATE(57)] = 2576,
  [SMALL_STATE(58)] = 2601,
  [SMALL_STATE(59)] = 2626,
  [SMALL_STATE(60)] = 2651,
  [SMALL_STATE(61)] = 2676,
  [SMALL_STATE(62)] = 2701,
  [SMALL_STATE(63)] = 2726,
  [SMALL_STATE(64)] = 2760,
  [SMALL_STATE(65)] = 2785,
  [SMALL_STATE(66)] = 2806,
  [SMALL_STATE(67)] = 2827,
  [SMALL_STATE(68)] = 2848,
  [SMALL_STATE(69)] = 2869,
  [SMALL_STATE(70)] = 2890,
  [SMALL_STATE(71)] = 2911,
  [SMALL_STATE(72)] = 2932,
  [SMALL_STATE(73)] = 2962,
  [SMALL_STATE(74)] = 2992,
  [SMALL_STATE(75)] = 3022,
  [SMALL_STATE(76)] = 3052,
  [SMALL_STATE(77)] = 3070,
  [SMALL_STATE(78)] = 3100,
  [SMALL_STATE(79)] = 3121,
  [SMALL_STATE(80)] = 3150,
  [SMALL_STATE(81)] = 3171,
  [SMALL_STATE(82)] = 3197,
  [SMALL_STATE(83)] = 3219,
  [SMALL_STATE(84)] = 3235,
  [SMALL_STATE(85)] = 3253,
  [SMALL_STATE(86)] = 3275,
  [SMALL_STATE(87)] = 3293,
  [SMALL_STATE(88)] = 3311,
  [SMALL_STATE(89)] = 3326,
  [SMALL_STATE(90)] = 3341,
  [SMALL_STATE(91)] = 3358,
  [SMALL_STATE(92)] = 3383,
  [SMALL_STATE(93)] = 3398,
  [SMALL_STATE(94)] = 3417,
  [SMALL_STATE(95)] = 3432,
  [SMALL_STATE(96)] = 3447,
  [SMALL_STATE(97)] = 3462,
  [SMALL_STATE(98)] = 3477,
  [SMALL_STATE(99)] = 3492,
  [SMALL_STATE(100)] = 3507,
  [SMALL_STATE(101)] = 3522,
  [SMALL_STATE(102)] = 3537,
  [SMALL_STATE(103)] = 3552,
  [SMALL_STATE(104)] = 3567,
  [SMALL_STATE(105)] = 3592,
  [SMALL_STATE(106)] = 3611,
  [SMALL_STATE(107)] = 3627,
  [SMALL_STATE(108)] = 3643,
  [SMALL_STATE(109)] = 3663,
  [SMALL_STATE(110)] = 3679,
  [SMALL_STATE(111)] = 3692,
  [SMALL_STATE(112)] = 3705,
  [SMALL_STATE(113)] = 3718,
  [SMALL_STATE(114)] = 3737,
  [SMALL_STATE(115)] = 3756,
  [SMALL_STATE(116)] = 3769,
  [SMALL_STATE(117)] = 3782,
  [SMALL_STATE(118)] = 3801,
  [SMALL_STATE(119)] = 3820,
  [SMALL_STATE(120)] = 3839,
  [SMALL_STATE(121)] = 3852,
  [SMALL_STATE(122)] = 3871,
  [SMALL_STATE(123)] = 3884,
  [SMALL_STATE(124)] = 3903,
  [SMALL_STATE(125)] = 3916,
  [SMALL_STATE(126)] = 3929,
  [SMALL_STATE(127)] = 3948,
  [SMALL_STATE(128)] = 3961,
  [SMALL_STATE(129)] = 3978,
  [SMALL_STATE(130)] = 3991,
  [SMALL_STATE(131)] = 4006,
  [SMALL_STATE(132)] = 4019,
  [SMALL_STATE(133)] = 4032,
  [SMALL_STATE(134)] = 4048,
  [SMALL_STATE(135)] = 4061,
  [SMALL_STATE(136)] = 4074,
  [SMALL_STATE(137)] = 4089,
  [SMALL_STATE(138)] = 4102,
  [SMALL_STATE(139)] = 4117,
  [SMALL_STATE(140)] = 4130,
  [SMALL_STATE(141)] = 4145,
  [SMALL_STATE(142)] = 4155,
  [SMALL_STATE(143)] = 4165,
  [SMALL_STATE(144)] = 4175,
  [SMALL_STATE(145)] = 4185,
  [SMALL_STATE(146)] = 4198,
  [SMALL_STATE(147)] = 4211,
  [SMALL_STATE(148)] = 4222,
  [SMALL_STATE(149)] = 4233,
  [SMALL_STATE(150)] = 4244,
  [SMALL_STATE(151)] = 4257,
  [SMALL_STATE(152)] = 4270,
  [SMALL_STATE(153)] = 4283,
  [SMALL_STATE(154)] = 4296,
  [SMALL_STATE(155)] = 4306,
  [SMALL_STATE(156)] = 4316,
  [SMALL_STATE(157)] = 4326,
  [SMALL_STATE(158)] = 4336,
  [SMALL_STATE(159)] = 4346,
  [SMALL_STATE(160)] = 4356,
  [SMALL_STATE(161)] = 4366,
  [SMALL_STATE(162)] = 4376,
  [SMALL_STATE(163)] = 4386,
  [SMALL_STATE(164)] = 4396,
  [SMALL_STATE(165)] = 4403,
  [SMALL_STATE(166)] = 4410,
  [SMALL_STATE(167)] = 4417,
  [SMALL_STATE(168)] = 4424,
  [SMALL_STATE(169)] = 4431,
  [SMALL_STATE(170)] = 4438,
  [SMALL_STATE(171)] = 4445,
  [SMALL_STATE(172)] = 4452,
  [SMALL_STATE(173)] = 4459,
  [SMALL_STATE(174)] = 4466,
  [SMALL_STATE(175)] = 4473,
  [SMALL_STATE(176)] = 4480,
  [SMALL_STATE(177)] = 4487,
  [SMALL_STATE(178)] = 4494,
  [SMALL_STATE(179)] = 4501,
  [SMALL_STATE(180)] = 4508,
  [SMALL_STATE(181)] = 4515,
  [SMALL_STATE(182)] = 4522,
  [SMALL_STATE(183)] = 4529,
  [SMALL_STATE(184)] = 4536,
  [SMALL_STATE(185)] = 4543,
  [SMALL_STATE(186)] = 4550,
  [SMALL_STATE(187)] = 4557,
  [SMALL_STATE(188)] = 4564,
  [SMALL_STATE(189)] = 4571,
  [SMALL_STATE(190)] = 4578,
  [SMALL_STATE(191)] = 4585,
  [SMALL_STATE(192)] = 4592,
  [SMALL_STATE(193)] = 4599,
  [SMALL_STATE(194)] = 4606,
  [SMALL_STATE(195)] = 4613,
  [SMALL_STATE(196)] = 4620,
  [SMALL_STATE(197)] = 4627,
  [SMALL_STATE(198)] = 4634,
  [SMALL_STATE(199)] = 4641,
  [SMALL_STATE(200)] = 4648,
  [SMALL_STATE(201)] = 4655,
  [SMALL_STATE(202)] = 4662,
  [SMALL_STATE(203)] = 4669,
  [SMALL_STATE(204)] = 4676,
  [SMALL_STATE(205)] = 4683,
  [SMALL_STATE(206)] = 4690,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(78),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(143),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_declarations_repeat1, 2),
  [49] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_declarations_repeat1, 2), SHIFT_REPEAT(71),
  [52] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_declarations_repeat1, 2), SHIFT_REPEAT(63),
  [55] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_declarations_repeat1, 2), SHIFT_REPEAT(147),
  [58] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_declarations_repeat1, 2), SHIFT_REPEAT(148),
  [61] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_declarations_repeat1, 2), SHIFT_REPEAT(23),
  [64] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_declarations_repeat1, 2), SHIFT_REPEAT(21),
  [67] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_declarations_repeat1, 2), SHIFT_REPEAT(155),
  [70] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_declarations_repeat1, 2), SHIFT_REPEAT(157),
  [73] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_declarations_repeat1, 2), SHIFT_REPEAT(158),
  [76] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_declarations_repeat1, 2), SHIFT_REPEAT(159),
  [79] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_declarations_repeat1, 2), SHIFT_REPEAT(161),
  [82] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_declarations_repeat1, 2), SHIFT_REPEAT(162),
  [85] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_declarations_repeat1, 2), SHIFT_REPEAT(190),
  [88] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_declarations_repeat1, 2), SHIFT_REPEAT(188),
  [91] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_declarations_repeat1, 2), SHIFT_REPEAT(163),
  [94] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declarations, 1),
  [96] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [98] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [100] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__not_interpolation, 1),
  [102] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [104] = {.entry = {.count = 1, .reusable = false}}, SHIFT(163),
  [106] = {.entry = {.count = 1, .reusable = false}}, SHIFT(154),
  [108] = {.entry = {.count = 1, .reusable = false}}, SHIFT(102),
  [110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__not_interpolation, 1),
  [114] = {.entry = {.count = 1, .reusable = false}}, SHIFT(103),
  [116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [124] = {.entry = {.count = 1, .reusable = false}}, SHIFT(112),
  [126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [136] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(103),
  [139] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(32),
  [142] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(31),
  [145] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(156),
  [148] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(160),
  [151] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(112),
  [154] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(112),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2),
  [159] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(77),
  [162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__optional_seq, 1),
  [164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [188] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_seq, 2),
  [190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [192] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_seq_repeat1, 2), SHIFT_REPEAT(71),
  [195] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_seq_repeat1, 2),
  [197] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_seq_repeat1, 2), SHIFT_REPEAT(147),
  [200] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_seq_repeat1, 2), SHIFT_REPEAT(148),
  [203] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_seq_repeat1, 2), SHIFT_REPEAT(23),
  [206] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_seq_repeat1, 2), SHIFT_REPEAT(21),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [211] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 2),
  [213] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 2),
  [215] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declaration, 1),
  [217] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_declaration, 1),
  [219] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command_declaration, 3, .production_id = 4),
  [221] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_command_declaration, 3, .production_id = 4),
  [223] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_app_declaration, 3, .production_id = 4),
  [225] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_app_declaration, 3, .production_id = 4),
  [227] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_deck_declaration, 3, .production_id = 4),
  [229] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_deck_declaration, 3, .production_id = 4),
  [231] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_statement, 4, .production_id = 4),
  [233] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assignment_statement, 4, .production_id = 4),
  [235] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_gamepad_declaration, 3, .production_id = 4),
  [237] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_gamepad_declaration, 3, .production_id = 4),
  [239] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_face_declaration, 3, .production_id = 4),
  [241] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_face_declaration, 3, .production_id = 4),
  [243] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_matches, 2),
  [245] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_matches, 2),
  [247] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 1),
  [249] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_statement, 1),
  [251] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statements, 2),
  [253] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__statements, 2),
  [255] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 1),
  [257] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 1),
  [259] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag_import_declaration, 4, .production_id = 4),
  [261] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag_import_declaration, 4, .production_id = 4),
  [263] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_matches, 3),
  [265] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_matches, 3),
  [267] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_key_binding_declaration, 3, .production_id = 7),
  [269] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_key_binding_declaration, 3, .production_id = 7),
  [271] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_statement, 2, .production_id = 9),
  [273] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression_statement, 2, .production_id = 9),
  [275] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parrot_declaration, 3, .production_id = 4),
  [277] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parrot_declaration, 3, .production_id = 4),
  [279] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statements, 1, .production_id = 5),
  [281] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__statements, 1, .production_id = 5),
  [283] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_settings_declaration, 3, .production_id = 4),
  [285] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_settings_declaration, 3, .production_id = 4),
  [287] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_noise_declaration, 3, .production_id = 4),
  [289] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_noise_declaration, 3, .production_id = 4),
  [291] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_seq_repeat1, 1),
  [293] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_seq_repeat1, 1),
  [295] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_repeat1, 2),
  [297] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_repeat1, 2),
  [299] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_repeat, 2),
  [301] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_repeat, 2),
  [303] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parenthesized_rule, 3),
  [305] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parenthesized_rule, 3),
  [307] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 3, .production_id = 1),
  [309] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 3, .production_id = 1),
  [311] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_capture, 3, .production_id = 2),
  [313] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_capture, 3, .production_id = 2),
  [315] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_optional, 3),
  [317] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_optional, 3),
  [319] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_word, 1),
  [321] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_word, 1),
  [323] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [325] = {.entry = {.count = 1, .reusable = false}}, SHIFT(107),
  [327] = {.entry = {.count = 1, .reusable = false}}, SHIFT(109),
  [329] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [331] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [333] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [335] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(5),
  [338] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(107),
  [341] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(109),
  [344] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(73),
  [347] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(73),
  [350] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2),
  [352] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [354] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [356] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [358] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [360] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 1),
  [362] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [364] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [366] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [368] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_word, 1), REDUCE(sym_identifier, 1),
  [371] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [373] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 1, .production_id = 6),
  [375] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [377] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_matches_repeat1, 2), SHIFT_REPEAT(76),
  [380] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_matches_repeat1, 2),
  [382] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_matches_repeat1, 2), SHIFT_REPEAT(143),
  [385] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [387] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [389] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_key_action, 3, .production_id = 3),
  [391] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [393] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sleep_action, 3, .production_id = 3),
  [395] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parenthesized_expression, 3),
  [397] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_operator, 3, .production_id = 11),
  [399] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [401] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [403] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [405] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [407] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [409] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 2),
  [411] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [413] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_action, 2, .production_id = 10),
  [415] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 3),
  [417] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 4),
  [419] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 5),
  [421] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_operator, 2, .production_id = 8),
  [423] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2),
  [425] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 1),
  [427] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [429] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [431] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_interpolation, 3),
  [433] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interpolation, 3),
  [435] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_argument_list_repeat1, 2),
  [437] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__escape_interpolation, 1),
  [439] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__escape_interpolation, 1),
  [441] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [443] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [445] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [447] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [449] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [451] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [453] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [455] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [457] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [459] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [461] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_match_repeat1, 2),
  [463] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_match_repeat1, 2), SHIFT_REPEAT(143),
  [466] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__optional_anchor, 1),
  [468] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [470] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_match, 5, .production_id = 12),
  [472] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_match, 5, .production_id = 12),
  [474] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_choice, 2),
  [476] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [478] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_match, 4, .production_id = 4),
  [480] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_match, 4, .production_id = 4),
  [482] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_choice_repeat1, 2),
  [484] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_choice_repeat1, 2), SHIFT_REPEAT(42),
  [487] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__optional_anchor, 2),
  [489] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [491] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__optional_choice, 1),
  [493] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__optional_anchor, 3),
  [495] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_match_modifier, 1),
  [497] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [499] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [501] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [503] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [505] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_matches_repeat2, 2), SHIFT_REPEAT(151),
  [508] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_matches_repeat2, 2),
  [510] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [512] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_argument_list_repeat1, 2), SHIFT_REPEAT(39),
  [515] = {.entry = {.count = 1, .reusable = false}}, SHIFT(194),
  [517] = {.entry = {.count = 1, .reusable = false}}, SHIFT(185),
  [519] = {.entry = {.count = 1, .reusable = false}}, SHIFT(189),
  [521] = {.entry = {.count = 1, .reusable = false}}, SHIFT(195),
  [523] = {.entry = {.count = 1, .reusable = false}}, SHIFT(199),
  [525] = {.entry = {.count = 1, .reusable = false}}, SHIFT(200),
  [527] = {.entry = {.count = 1, .reusable = false}}, SHIFT(196),
  [529] = {.entry = {.count = 1, .reusable = false}}, SHIFT(201),
  [531] = {.entry = {.count = 1, .reusable = false}}, SHIFT(203),
  [533] = {.entry = {.count = 1, .reusable = false}}, SHIFT(205),
  [535] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [537] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [539] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [541] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [543] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [545] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_face_binding, 3, .production_id = 3),
  [547] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_deck_binding, 3, .production_id = 3),
  [549] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_gamepad_binding, 3, .production_id = 3),
  [551] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [553] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [555] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [557] = {.entry = {.count = 1, .reusable = false}}, SHIFT(193),
  [559] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [561] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [563] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [565] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [567] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_noise_binding, 3, .production_id = 3),
  [569] = {.entry = {.count = 1, .reusable = false}}, SHIFT(187),
  [571] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule, 1),
  [573] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [575] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [577] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [579] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [581] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [583] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [585] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [587] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parrot_binding, 3, .production_id = 3),
  [589] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_app_binding, 3, .production_id = 3),
  [591] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [593] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [595] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [597] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [599] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [601] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [603] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [605] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [607] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [609] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [611] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [613] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2),
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
