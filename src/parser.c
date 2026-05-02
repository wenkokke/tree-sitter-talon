#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 227
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 122
#define ALIAS_COUNT 1
#define TOKEN_COUNT 55
#define EXTERNAL_TOKEN_COUNT 7
#define FIELD_COUNT 14
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 15

enum ts_symbol_identifiers {
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
  anon_sym_if = 29,
  anon_sym_for = 30,
  anon_sym_in = 31,
  anon_sym_EQ = 32,
  anon_sym_SLASH = 33,
  anon_sym_PERCENT = 34,
  anon_sym_or = 35,
  anon_sym_key_LPAREN = 36,
  anon_sym_sleep_LPAREN = 37,
  aux_sym__implicit_string_argument_token1 = 38,
  anon_sym_LPAREN2 = 39,
  anon_sym_COMMA = 40,
  aux_sym_identifier_token1 = 41,
  sym_integer = 42,
  sym_float = 43,
  sym_implicit_string = 44,
  anon_sym_LBRACE_LBRACE = 45,
  anon_sym_RBRACE_RBRACE = 46,
  sym_string_escape_sequence = 47,
  sym__not_escapesequence = 48,
  sym__newline = 49,
  sym__indent = 50,
  sym__dedent = 51,
  sym__string_start = 52,
  sym_string_content = 53,
  sym__string_end = 54,
  sym_source_file = 55,
  sym_matches = 56,
  sym_match_modifier = 57,
  sym_match = 58,
  sym_declarations = 59,
  sym_declaration = 60,
  sym_command_declaration = 61,
  sym_app_declaration = 62,
  sym_face_declaration = 63,
  sym_deck_declaration = 64,
  sym_gamepad_declaration = 65,
  sym_noise_declaration = 66,
  sym_parrot_declaration = 67,
  sym_tag_import_declaration = 68,
  sym_key_binding_declaration = 69,
  sym_settings_declaration = 70,
  sym_rule = 71,
  sym__optional_choice = 72,
  sym_choice = 73,
  sym__optional_anchor = 74,
  sym__optional_seq = 75,
  sym_seq = 76,
  sym__primary_rule = 77,
  sym_word = 78,
  sym_list = 79,
  sym_capture = 80,
  sym_optional = 81,
  sym_repeat = 82,
  sym_repeat1 = 83,
  sym_parenthesized_rule = 84,
  sym_app_binding = 85,
  sym_face_binding = 86,
  sym_deck_binding = 87,
  sym_gamepad_binding = 88,
  sym_noise_binding = 89,
  sym_parrot_binding = 90,
  sym__statements = 91,
  sym_block = 92,
  sym_statement = 93,
  sym_if_statement = 94,
  sym_for_statement = 95,
  sym_assignment_statement = 96,
  sym_expression_statement = 97,
  sym_expression = 98,
  sym_variable = 99,
  sym_parenthesized_expression = 100,
  sym_binary_operator = 101,
  sym_unary_operator = 102,
  sym_key_action = 103,
  sym_sleep_action = 104,
  sym__implicit_string_argument = 105,
  sym_action = 106,
  sym_argument_list = 107,
  sym_identifier = 108,
  sym_string = 109,
  sym_interpolation = 110,
  sym__escape_interpolation = 111,
  sym__not_interpolation = 112,
  aux_sym_matches_repeat1 = 113,
  aux_sym_matches_repeat2 = 114,
  aux_sym_match_repeat1 = 115,
  aux_sym_declarations_repeat1 = 116,
  aux_sym_choice_repeat1 = 117,
  aux_sym_seq_repeat1 = 118,
  aux_sym_block_repeat1 = 119,
  aux_sym_argument_list_repeat1 = 120,
  aux_sym_string_repeat1 = 121,
  alias_sym_key_binding = 122,
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
  [anon_sym_if] = "if",
  [anon_sym_for] = "for",
  [anon_sym_in] = "in",
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
  [sym_if_statement] = "if_statement",
  [sym_for_statement] = "for_statement",
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
  [anon_sym_if] = anon_sym_if,
  [anon_sym_for] = anon_sym_for,
  [anon_sym_in] = anon_sym_in,
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
  [sym_if_statement] = sym_if_statement,
  [sym_for_statement] = sym_for_statement,
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
  [anon_sym_if] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_for] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_in] = {
    .visible = true,
    .named = false,
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
  [sym_if_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_for_statement] = {
    .visible = true,
    .named = true,
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

enum ts_field_identifiers {
  field_action_name = 1,
  field_arguments = 2,
  field_body = 3,
  field_capture_name = 4,
  field_condition = 5,
  field_expression = 6,
  field_left = 7,
  field_list_name = 8,
  field_modifiers = 9,
  field_name = 10,
  field_operator = 11,
  field_right = 12,
  field_value = 13,
  field_variable_name = 14,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_action_name] = "action_name",
  [field_arguments] = "arguments",
  [field_body] = "body",
  [field_capture_name] = "capture_name",
  [field_condition] = "condition",
  [field_expression] = "expression",
  [field_left] = "left",
  [field_list_name] = "list_name",
  [field_modifiers] = "modifiers",
  [field_name] = "name",
  [field_operator] = "operator",
  [field_right] = "right",
  [field_value] = "value",
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
  [13] = {.index = 17, .length = 2},
  [14] = {.index = 19, .length = 3},
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
  [17] =
    {field_body, 3},
    {field_condition, 1},
  [19] =
    {field_body, 5},
    {field_name, 1},
    {field_value, 3},
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
  [20] = 18,
  [21] = 19,
  [22] = 22,
  [23] = 23,
  [24] = 23,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 27,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 31,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 38,
  [43] = 39,
  [44] = 33,
  [45] = 34,
  [46] = 35,
  [47] = 40,
  [48] = 37,
  [49] = 41,
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
  [74] = 74,
  [75] = 75,
  [76] = 76,
  [77] = 77,
  [78] = 78,
  [79] = 79,
  [80] = 80,
  [81] = 81,
  [82] = 82,
  [83] = 69,
  [84] = 84,
  [85] = 84,
  [86] = 86,
  [87] = 87,
  [88] = 87,
  [89] = 58,
  [90] = 90,
  [91] = 57,
  [92] = 59,
  [93] = 71,
  [94] = 94,
  [95] = 95,
  [96] = 96,
  [97] = 97,
  [98] = 98,
  [99] = 99,
  [100] = 100,
  [101] = 101,
  [102] = 102,
  [103] = 97,
  [104] = 104,
  [105] = 105,
  [106] = 106,
  [107] = 107,
  [108] = 108,
  [109] = 109,
  [110] = 110,
  [111] = 111,
  [112] = 112,
  [113] = 113,
  [114] = 114,
  [115] = 114,
  [116] = 90,
  [117] = 77,
  [118] = 118,
  [119] = 119,
  [120] = 120,
  [121] = 121,
  [122] = 122,
  [123] = 123,
  [124] = 98,
  [125] = 96,
  [126] = 111,
  [127] = 112,
  [128] = 104,
  [129] = 129,
  [130] = 122,
  [131] = 131,
  [132] = 132,
  [133] = 129,
  [134] = 134,
  [135] = 109,
  [136] = 131,
  [137] = 105,
  [138] = 108,
  [139] = 113,
  [140] = 123,
  [141] = 141,
  [142] = 107,
  [143] = 100,
  [144] = 101,
  [145] = 132,
  [146] = 106,
  [147] = 99,
  [148] = 110,
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
  [166] = 161,
  [167] = 167,
  [168] = 168,
  [169] = 163,
  [170] = 170,
  [171] = 171,
  [172] = 172,
  [173] = 173,
  [174] = 174,
  [175] = 175,
  [176] = 175,
  [177] = 177,
  [178] = 178,
  [179] = 174,
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
  [196] = 196,
  [197] = 197,
  [198] = 198,
  [199] = 199,
  [200] = 200,
  [201] = 196,
  [202] = 202,
  [203] = 203,
  [204] = 204,
  [205] = 205,
  [206] = 197,
  [207] = 207,
  [208] = 208,
  [209] = 209,
  [210] = 210,
  [211] = 211,
  [212] = 212,
  [213] = 213,
  [214] = 214,
  [215] = 215,
  [216] = 216,
  [217] = 217,
  [218] = 218,
  [219] = 219,
  [220] = 220,
  [221] = 210,
  [222] = 222,
  [223] = 223,
  [224] = 224,
  [225] = 194,
  [226] = 226,
};

static TSCharacterRange aux_sym_word_token1_character_set_1[] = {
  {'0', '9'}, {'A', 'Z'}, {'a', 'z'}, {0xaa, 0xaa}, {0xb2, 0xb3}, {0xb5, 0xb5}, {0xb9, 0xba}, {0xbc, 0xbe},
  {0xc0, 0xd6}, {0xd8, 0xf6}, {0xf8, 0x2c1}, {0x2c6, 0x2d1}, {0x2e0, 0x2e4}, {0x2ec, 0x2ec}, {0x2ee, 0x2ee}, {0x370, 0x374},
  {0x376, 0x377}, {0x37a, 0x37d}, {0x37f, 0x37f}, {0x386, 0x386}, {0x388, 0x38a}, {0x38c, 0x38c}, {0x38e, 0x3a1}, {0x3a3, 0x3f5},
  {0x3f7, 0x481}, {0x48a, 0x52f}, {0x531, 0x556}, {0x559, 0x559}, {0x560, 0x588}, {0x5d0, 0x5ea}, {0x5ef, 0x5f2}, {0x620, 0x64a},
  {0x660, 0x669}, {0x66e, 0x66f}, {0x671, 0x6d3}, {0x6d5, 0x6d5}, {0x6e5, 0x6e6}, {0x6ee, 0x6fc}, {0x6ff, 0x6ff}, {0x710, 0x710},
  {0x712, 0x72f}, {0x74d, 0x7a5}, {0x7b1, 0x7b1}, {0x7c0, 0x7ea}, {0x7f4, 0x7f5}, {0x7fa, 0x7fa}, {0x800, 0x815}, {0x81a, 0x81a},
  {0x824, 0x824}, {0x828, 0x828}, {0x840, 0x858}, {0x860, 0x86a}, {0x870, 0x887}, {0x889, 0x88e}, {0x8a0, 0x8c9}, {0x904, 0x939},
  {0x93d, 0x93d}, {0x950, 0x950}, {0x958, 0x961}, {0x966, 0x96f}, {0x971, 0x980}, {0x985, 0x98c}, {0x98f, 0x990}, {0x993, 0x9a8},
  {0x9aa, 0x9b0}, {0x9b2, 0x9b2}, {0x9b6, 0x9b9}, {0x9bd, 0x9bd}, {0x9ce, 0x9ce}, {0x9dc, 0x9dd}, {0x9df, 0x9e1}, {0x9e6, 0x9f1},
  {0x9f4, 0x9f9}, {0x9fc, 0x9fc}, {0xa05, 0xa0a}, {0xa0f, 0xa10}, {0xa13, 0xa28}, {0xa2a, 0xa30}, {0xa32, 0xa33}, {0xa35, 0xa36},
  {0xa38, 0xa39}, {0xa59, 0xa5c}, {0xa5e, 0xa5e}, {0xa66, 0xa6f}, {0xa72, 0xa74}, {0xa85, 0xa8d}, {0xa8f, 0xa91}, {0xa93, 0xaa8},
  {0xaaa, 0xab0}, {0xab2, 0xab3}, {0xab5, 0xab9}, {0xabd, 0xabd}, {0xad0, 0xad0}, {0xae0, 0xae1}, {0xae6, 0xaef}, {0xaf9, 0xaf9},
  {0xb05, 0xb0c}, {0xb0f, 0xb10}, {0xb13, 0xb28}, {0xb2a, 0xb30}, {0xb32, 0xb33}, {0xb35, 0xb39}, {0xb3d, 0xb3d}, {0xb5c, 0xb5d},
  {0xb5f, 0xb61}, {0xb66, 0xb6f}, {0xb71, 0xb77}, {0xb83, 0xb83}, {0xb85, 0xb8a}, {0xb8e, 0xb90}, {0xb92, 0xb95}, {0xb99, 0xb9a},
  {0xb9c, 0xb9c}, {0xb9e, 0xb9f}, {0xba3, 0xba4}, {0xba8, 0xbaa}, {0xbae, 0xbb9}, {0xbd0, 0xbd0}, {0xbe6, 0xbf2}, {0xc05, 0xc0c},
  {0xc0e, 0xc10}, {0xc12, 0xc28}, {0xc2a, 0xc39}, {0xc3d, 0xc3d}, {0xc58, 0xc5a}, {0xc5d, 0xc5d}, {0xc60, 0xc61}, {0xc66, 0xc6f},
  {0xc78, 0xc7e}, {0xc80, 0xc80}, {0xc85, 0xc8c}, {0xc8e, 0xc90}, {0xc92, 0xca8}, {0xcaa, 0xcb3}, {0xcb5, 0xcb9}, {0xcbd, 0xcbd},
  {0xcdd, 0xcde}, {0xce0, 0xce1}, {0xce6, 0xcef}, {0xcf1, 0xcf2}, {0xd04, 0xd0c}, {0xd0e, 0xd10}, {0xd12, 0xd3a}, {0xd3d, 0xd3d},
  {0xd4e, 0xd4e}, {0xd54, 0xd56}, {0xd58, 0xd61}, {0xd66, 0xd78}, {0xd7a, 0xd7f}, {0xd85, 0xd96}, {0xd9a, 0xdb1}, {0xdb3, 0xdbb},
  {0xdbd, 0xdbd}, {0xdc0, 0xdc6}, {0xde6, 0xdef}, {0xe01, 0xe30}, {0xe32, 0xe33}, {0xe40, 0xe46}, {0xe50, 0xe59}, {0xe81, 0xe82},
  {0xe84, 0xe84}, {0xe86, 0xe8a}, {0xe8c, 0xea3}, {0xea5, 0xea5}, {0xea7, 0xeb0}, {0xeb2, 0xeb3}, {0xebd, 0xebd}, {0xec0, 0xec4},
  {0xec6, 0xec6}, {0xed0, 0xed9}, {0xedc, 0xedf}, {0xf00, 0xf00}, {0xf20, 0xf33}, {0xf40, 0xf47}, {0xf49, 0xf6c}, {0xf88, 0xf8c},
  {0x1000, 0x102a}, {0x103f, 0x1049}, {0x1050, 0x1055}, {0x105a, 0x105d}, {0x1061, 0x1061}, {0x1065, 0x1066}, {0x106e, 0x1070}, {0x1075, 0x1081},
  {0x108e, 0x108e}, {0x1090, 0x1099}, {0x10a0, 0x10c5}, {0x10c7, 0x10c7}, {0x10cd, 0x10cd}, {0x10d0, 0x10fa}, {0x10fc, 0x1248}, {0x124a, 0x124d},
  {0x1250, 0x1256}, {0x1258, 0x1258}, {0x125a, 0x125d}, {0x1260, 0x1288}, {0x128a, 0x128d}, {0x1290, 0x12b0}, {0x12b2, 0x12b5}, {0x12b8, 0x12be},
  {0x12c0, 0x12c0}, {0x12c2, 0x12c5}, {0x12c8, 0x12d6}, {0x12d8, 0x1310}, {0x1312, 0x1315}, {0x1318, 0x135a}, {0x1369, 0x137c}, {0x1380, 0x138f},
  {0x13a0, 0x13f5}, {0x13f8, 0x13fd}, {0x1401, 0x166c}, {0x166f, 0x167f}, {0x1681, 0x169a}, {0x16a0, 0x16ea}, {0x16ee, 0x16f8}, {0x1700, 0x1711},
  {0x171f, 0x1731}, {0x1740, 0x1751}, {0x1760, 0x176c}, {0x176e, 0x1770}, {0x1780, 0x17b3}, {0x17d7, 0x17d7}, {0x17dc, 0x17dc}, {0x17e0, 0x17e9},
  {0x17f0, 0x17f9}, {0x1810, 0x1819}, {0x1820, 0x1878}, {0x1880, 0x1884}, {0x1887, 0x18a8}, {0x18aa, 0x18aa}, {0x18b0, 0x18f5}, {0x1900, 0x191e},
  {0x1946, 0x196d}, {0x1970, 0x1974}, {0x1980, 0x19ab}, {0x19b0, 0x19c9}, {0x19d0, 0x19da}, {0x1a00, 0x1a16}, {0x1a20, 0x1a54}, {0x1a80, 0x1a89},
  {0x1a90, 0x1a99}, {0x1aa7, 0x1aa7}, {0x1b05, 0x1b33}, {0x1b45, 0x1b4c}, {0x1b50, 0x1b59}, {0x1b83, 0x1ba0}, {0x1bae, 0x1be5}, {0x1c00, 0x1c23},
  {0x1c40, 0x1c49}, {0x1c4d, 0x1c7d}, {0x1c80, 0x1c88}, {0x1c90, 0x1cba}, {0x1cbd, 0x1cbf}, {0x1ce9, 0x1cec}, {0x1cee, 0x1cf3}, {0x1cf5, 0x1cf6},
  {0x1cfa, 0x1cfa}, {0x1d00, 0x1dbf}, {0x1e00, 0x1f15}, {0x1f18, 0x1f1d}, {0x1f20, 0x1f45}, {0x1f48, 0x1f4d}, {0x1f50, 0x1f57}, {0x1f59, 0x1f59},
  {0x1f5b, 0x1f5b}, {0x1f5d, 0x1f5d}, {0x1f5f, 0x1f7d}, {0x1f80, 0x1fb4}, {0x1fb6, 0x1fbc}, {0x1fbe, 0x1fbe}, {0x1fc2, 0x1fc4}, {0x1fc6, 0x1fcc},
  {0x1fd0, 0x1fd3}, {0x1fd6, 0x1fdb}, {0x1fe0, 0x1fec}, {0x1ff2, 0x1ff4}, {0x1ff6, 0x1ffc}, {0x2070, 0x2071}, {0x2074, 0x2079}, {0x207f, 0x2089},
  {0x2090, 0x209c}, {0x2102, 0x2102}, {0x2107, 0x2107}, {0x210a, 0x2113}, {0x2115, 0x2115}, {0x2119, 0x211d}, {0x2124, 0x2124}, {0x2126, 0x2126},
  {0x2128, 0x2128}, {0x212a, 0x212d}, {0x212f, 0x2139}, {0x213c, 0x213f}, {0x2145, 0x2149}, {0x214e, 0x214e}, {0x2150, 0x2189}, {0x2460, 0x249b},
  {0x24ea, 0x24ff}, {0x2776, 0x2793}, {0x2c00, 0x2ce4}, {0x2ceb, 0x2cee}, {0x2cf2, 0x2cf3}, {0x2cfd, 0x2cfd}, {0x2d00, 0x2d25}, {0x2d27, 0x2d27},
  {0x2d2d, 0x2d2d}, {0x2d30, 0x2d67}, {0x2d6f, 0x2d6f}, {0x2d80, 0x2d96}, {0x2da0, 0x2da6}, {0x2da8, 0x2dae}, {0x2db0, 0x2db6}, {0x2db8, 0x2dbe},
  {0x2dc0, 0x2dc6}, {0x2dc8, 0x2dce}, {0x2dd0, 0x2dd6}, {0x2dd8, 0x2dde}, {0x2e2f, 0x2e2f}, {0x3005, 0x3007}, {0x3021, 0x3029}, {0x3031, 0x3035},
  {0x3038, 0x303c}, {0x3041, 0x3096}, {0x309d, 0x309f}, {0x30a1, 0x30fa}, {0x30fc, 0x30ff}, {0x3105, 0x312f}, {0x3131, 0x318e}, {0x3192, 0x3195},
  {0x31a0, 0x31bf}, {0x31f0, 0x31ff}, {0x3220, 0x3229}, {0x3248, 0x324f}, {0x3251, 0x325f}, {0x3280, 0x3289}, {0x32b1, 0x32bf}, {0x3400, 0x3400},
  {0x4dbf, 0x4dbf}, {0x4e00, 0x4e00}, {0x9fff, 0xa48c}, {0xa4d0, 0xa4fd}, {0xa500, 0xa60c}, {0xa610, 0xa62b}, {0xa640, 0xa66e}, {0xa67f, 0xa69d},
  {0xa6a0, 0xa6ef}, {0xa717, 0xa71f}, {0xa722, 0xa788}, {0xa78b, 0xa7ca}, {0xa7d0, 0xa7d1}, {0xa7d3, 0xa7d3}, {0xa7d5, 0xa7d9}, {0xa7f2, 0xa801},
  {0xa803, 0xa805}, {0xa807, 0xa80a}, {0xa80c, 0xa822}, {0xa830, 0xa835}, {0xa840, 0xa873}, {0xa882, 0xa8b3}, {0xa8d0, 0xa8d9}, {0xa8f2, 0xa8f7},
  {0xa8fb, 0xa8fb}, {0xa8fd, 0xa8fe}, {0xa900, 0xa925}, {0xa930, 0xa946}, {0xa960, 0xa97c}, {0xa984, 0xa9b2}, {0xa9cf, 0xa9d9}, {0xa9e0, 0xa9e4},
  {0xa9e6, 0xa9fe}, {0xaa00, 0xaa28}, {0xaa40, 0xaa42}, {0xaa44, 0xaa4b}, {0xaa50, 0xaa59}, {0xaa60, 0xaa76}, {0xaa7a, 0xaa7a}, {0xaa7e, 0xaaaf},
  {0xaab1, 0xaab1}, {0xaab5, 0xaab6}, {0xaab9, 0xaabd}, {0xaac0, 0xaac0}, {0xaac2, 0xaac2}, {0xaadb, 0xaadd}, {0xaae0, 0xaaea}, {0xaaf2, 0xaaf4},
  {0xab01, 0xab06}, {0xab09, 0xab0e}, {0xab11, 0xab16}, {0xab20, 0xab26}, {0xab28, 0xab2e}, {0xab30, 0xab5a}, {0xab5c, 0xab69}, {0xab70, 0xabe2},
  {0xabf0, 0xabf9}, {0xac00, 0xac00}, {0xd7a3, 0xd7a3}, {0xd7b0, 0xd7c6}, {0xd7cb, 0xd7fb}, {0xf900, 0xfa6d}, {0xfa70, 0xfad9}, {0xfb00, 0xfb06},
  {0xfb13, 0xfb17}, {0xfb1d, 0xfb1d}, {0xfb1f, 0xfb28}, {0xfb2a, 0xfb36}, {0xfb38, 0xfb3c}, {0xfb3e, 0xfb3e}, {0xfb40, 0xfb41}, {0xfb43, 0xfb44},
  {0xfb46, 0xfbb1}, {0xfbd3, 0xfd3d}, {0xfd50, 0xfd8f}, {0xfd92, 0xfdc7}, {0xfdf0, 0xfdfb}, {0xfe70, 0xfe74}, {0xfe76, 0xfefc}, {0xff10, 0xff19},
  {0xff21, 0xff3a}, {0xff41, 0xff5a}, {0xff66, 0xffbe}, {0xffc2, 0xffc7}, {0xffca, 0xffcf}, {0xffd2, 0xffd7}, {0xffda, 0xffdc}, {0x10000, 0x1000b},
  {0x1000d, 0x10026}, {0x10028, 0x1003a}, {0x1003c, 0x1003d}, {0x1003f, 0x1004d}, {0x10050, 0x1005d}, {0x10080, 0x100fa}, {0x10107, 0x10133}, {0x10140, 0x10178},
  {0x1018a, 0x1018b}, {0x10280, 0x1029c}, {0x102a0, 0x102d0}, {0x102e1, 0x102fb}, {0x10300, 0x10323}, {0x1032d, 0x1034a}, {0x10350, 0x10375}, {0x10380, 0x1039d},
  {0x103a0, 0x103c3}, {0x103c8, 0x103cf}, {0x103d1, 0x103d5}, {0x10400, 0x1049d}, {0x104a0, 0x104a9}, {0x104b0, 0x104d3}, {0x104d8, 0x104fb}, {0x10500, 0x10527},
  {0x10530, 0x10563}, {0x10570, 0x1057a}, {0x1057c, 0x1058a}, {0x1058c, 0x10592}, {0x10594, 0x10595}, {0x10597, 0x105a1}, {0x105a3, 0x105b1}, {0x105b3, 0x105b9},
  {0x105bb, 0x105bc}, {0x10600, 0x10736}, {0x10740, 0x10755}, {0x10760, 0x10767}, {0x10780, 0x10785}, {0x10787, 0x107b0}, {0x107b2, 0x107ba}, {0x10800, 0x10805},
  {0x10808, 0x10808}, {0x1080a, 0x10835}, {0x10837, 0x10838}, {0x1083c, 0x1083c}, {0x1083f, 0x10855}, {0x10858, 0x10876}, {0x10879, 0x1089e}, {0x108a7, 0x108af},
  {0x108e0, 0x108f2}, {0x108f4, 0x108f5}, {0x108fb, 0x1091b}, {0x10920, 0x1092b},
};

static TSCharacterRange aux_sym_word_token1_character_set_2[] = {
  {'\'', '\''}, {'-', '-'}, {'0', '9'}, {'A', 'Z'}, {'a', 'z'}, {0xaa, 0xaa}, {0xb2, 0xb3}, {0xb5, 0xb5},
  {0xb9, 0xba}, {0xbc, 0xbe}, {0xc0, 0xd6}, {0xd8, 0xf6}, {0xf8, 0x2c1}, {0x2c6, 0x2d1}, {0x2e0, 0x2e4}, {0x2ec, 0x2ec},
  {0x2ee, 0x2ee}, {0x370, 0x374}, {0x376, 0x377}, {0x37a, 0x37d}, {0x37f, 0x37f}, {0x386, 0x386}, {0x388, 0x38a}, {0x38c, 0x38c},
  {0x38e, 0x3a1}, {0x3a3, 0x3f5}, {0x3f7, 0x481}, {0x48a, 0x52f}, {0x531, 0x556}, {0x559, 0x559}, {0x560, 0x588}, {0x5d0, 0x5ea},
  {0x5ef, 0x5f2}, {0x620, 0x64a}, {0x660, 0x669}, {0x66e, 0x66f}, {0x671, 0x6d3}, {0x6d5, 0x6d5}, {0x6e5, 0x6e6}, {0x6ee, 0x6fc},
  {0x6ff, 0x6ff}, {0x710, 0x710}, {0x712, 0x72f}, {0x74d, 0x7a5}, {0x7b1, 0x7b1}, {0x7c0, 0x7ea}, {0x7f4, 0x7f5}, {0x7fa, 0x7fa},
  {0x800, 0x815}, {0x81a, 0x81a}, {0x824, 0x824}, {0x828, 0x828}, {0x840, 0x858}, {0x860, 0x86a}, {0x870, 0x887}, {0x889, 0x88e},
  {0x8a0, 0x8c9}, {0x904, 0x939}, {0x93d, 0x93d}, {0x950, 0x950}, {0x958, 0x961}, {0x966, 0x96f}, {0x971, 0x980}, {0x985, 0x98c},
  {0x98f, 0x990}, {0x993, 0x9a8}, {0x9aa, 0x9b0}, {0x9b2, 0x9b2}, {0x9b6, 0x9b9}, {0x9bd, 0x9bd}, {0x9ce, 0x9ce}, {0x9dc, 0x9dd},
  {0x9df, 0x9e1}, {0x9e6, 0x9f1}, {0x9f4, 0x9f9}, {0x9fc, 0x9fc}, {0xa05, 0xa0a}, {0xa0f, 0xa10}, {0xa13, 0xa28}, {0xa2a, 0xa30},
  {0xa32, 0xa33}, {0xa35, 0xa36}, {0xa38, 0xa39}, {0xa59, 0xa5c}, {0xa5e, 0xa5e}, {0xa66, 0xa6f}, {0xa72, 0xa74}, {0xa85, 0xa8d},
  {0xa8f, 0xa91}, {0xa93, 0xaa8}, {0xaaa, 0xab0}, {0xab2, 0xab3}, {0xab5, 0xab9}, {0xabd, 0xabd}, {0xad0, 0xad0}, {0xae0, 0xae1},
  {0xae6, 0xaef}, {0xaf9, 0xaf9}, {0xb05, 0xb0c}, {0xb0f, 0xb10}, {0xb13, 0xb28}, {0xb2a, 0xb30}, {0xb32, 0xb33}, {0xb35, 0xb39},
  {0xb3d, 0xb3d}, {0xb5c, 0xb5d}, {0xb5f, 0xb61}, {0xb66, 0xb6f}, {0xb71, 0xb77}, {0xb83, 0xb83}, {0xb85, 0xb8a}, {0xb8e, 0xb90},
  {0xb92, 0xb95}, {0xb99, 0xb9a}, {0xb9c, 0xb9c}, {0xb9e, 0xb9f}, {0xba3, 0xba4}, {0xba8, 0xbaa}, {0xbae, 0xbb9}, {0xbd0, 0xbd0},
  {0xbe6, 0xbf2}, {0xc05, 0xc0c}, {0xc0e, 0xc10}, {0xc12, 0xc28}, {0xc2a, 0xc39}, {0xc3d, 0xc3d}, {0xc58, 0xc5a}, {0xc5d, 0xc5d},
  {0xc60, 0xc61}, {0xc66, 0xc6f}, {0xc78, 0xc7e}, {0xc80, 0xc80}, {0xc85, 0xc8c}, {0xc8e, 0xc90}, {0xc92, 0xca8}, {0xcaa, 0xcb3},
  {0xcb5, 0xcb9}, {0xcbd, 0xcbd}, {0xcdd, 0xcde}, {0xce0, 0xce1}, {0xce6, 0xcef}, {0xcf1, 0xcf2}, {0xd04, 0xd0c}, {0xd0e, 0xd10},
  {0xd12, 0xd3a}, {0xd3d, 0xd3d}, {0xd4e, 0xd4e}, {0xd54, 0xd56}, {0xd58, 0xd61}, {0xd66, 0xd78}, {0xd7a, 0xd7f}, {0xd85, 0xd96},
  {0xd9a, 0xdb1}, {0xdb3, 0xdbb}, {0xdbd, 0xdbd}, {0xdc0, 0xdc6}, {0xde6, 0xdef}, {0xe01, 0xe30}, {0xe32, 0xe33}, {0xe40, 0xe46},
  {0xe50, 0xe59}, {0xe81, 0xe82}, {0xe84, 0xe84}, {0xe86, 0xe8a}, {0xe8c, 0xea3}, {0xea5, 0xea5}, {0xea7, 0xeb0}, {0xeb2, 0xeb3},
  {0xebd, 0xebd}, {0xec0, 0xec4}, {0xec6, 0xec6}, {0xed0, 0xed9}, {0xedc, 0xedf}, {0xf00, 0xf00}, {0xf20, 0xf33}, {0xf40, 0xf47},
  {0xf49, 0xf6c}, {0xf88, 0xf8c}, {0x1000, 0x102a}, {0x103f, 0x1049}, {0x1050, 0x1055}, {0x105a, 0x105d}, {0x1061, 0x1061}, {0x1065, 0x1066},
  {0x106e, 0x1070}, {0x1075, 0x1081}, {0x108e, 0x108e}, {0x1090, 0x1099}, {0x10a0, 0x10c5}, {0x10c7, 0x10c7}, {0x10cd, 0x10cd}, {0x10d0, 0x10fa},
  {0x10fc, 0x1248}, {0x124a, 0x124d}, {0x1250, 0x1256}, {0x1258, 0x1258}, {0x125a, 0x125d}, {0x1260, 0x1288}, {0x128a, 0x128d}, {0x1290, 0x12b0},
  {0x12b2, 0x12b5}, {0x12b8, 0x12be}, {0x12c0, 0x12c0}, {0x12c2, 0x12c5}, {0x12c8, 0x12d6}, {0x12d8, 0x1310}, {0x1312, 0x1315}, {0x1318, 0x135a},
  {0x1369, 0x137c}, {0x1380, 0x138f}, {0x13a0, 0x13f5}, {0x13f8, 0x13fd}, {0x1401, 0x166c}, {0x166f, 0x167f}, {0x1681, 0x169a}, {0x16a0, 0x16ea},
  {0x16ee, 0x16f8}, {0x1700, 0x1711}, {0x171f, 0x1731}, {0x1740, 0x1751}, {0x1760, 0x176c}, {0x176e, 0x1770}, {0x1780, 0x17b3}, {0x17d7, 0x17d7},
  {0x17dc, 0x17dc}, {0x17e0, 0x17e9}, {0x17f0, 0x17f9}, {0x1810, 0x1819}, {0x1820, 0x1878}, {0x1880, 0x1884}, {0x1887, 0x18a8}, {0x18aa, 0x18aa},
  {0x18b0, 0x18f5}, {0x1900, 0x191e}, {0x1946, 0x196d}, {0x1970, 0x1974}, {0x1980, 0x19ab}, {0x19b0, 0x19c9}, {0x19d0, 0x19da}, {0x1a00, 0x1a16},
  {0x1a20, 0x1a54}, {0x1a80, 0x1a89}, {0x1a90, 0x1a99}, {0x1aa7, 0x1aa7}, {0x1b05, 0x1b33}, {0x1b45, 0x1b4c}, {0x1b50, 0x1b59}, {0x1b83, 0x1ba0},
  {0x1bae, 0x1be5}, {0x1c00, 0x1c23}, {0x1c40, 0x1c49}, {0x1c4d, 0x1c7d}, {0x1c80, 0x1c88}, {0x1c90, 0x1cba}, {0x1cbd, 0x1cbf}, {0x1ce9, 0x1cec},
  {0x1cee, 0x1cf3}, {0x1cf5, 0x1cf6}, {0x1cfa, 0x1cfa}, {0x1d00, 0x1dbf}, {0x1e00, 0x1f15}, {0x1f18, 0x1f1d}, {0x1f20, 0x1f45}, {0x1f48, 0x1f4d},
  {0x1f50, 0x1f57}, {0x1f59, 0x1f59}, {0x1f5b, 0x1f5b}, {0x1f5d, 0x1f5d}, {0x1f5f, 0x1f7d}, {0x1f80, 0x1fb4}, {0x1fb6, 0x1fbc}, {0x1fbe, 0x1fbe},
  {0x1fc2, 0x1fc4}, {0x1fc6, 0x1fcc}, {0x1fd0, 0x1fd3}, {0x1fd6, 0x1fdb}, {0x1fe0, 0x1fec}, {0x1ff2, 0x1ff4}, {0x1ff6, 0x1ffc}, {0x2070, 0x2071},
  {0x2074, 0x2079}, {0x207f, 0x2089}, {0x2090, 0x209c}, {0x2102, 0x2102}, {0x2107, 0x2107}, {0x210a, 0x2113}, {0x2115, 0x2115}, {0x2119, 0x211d},
  {0x2124, 0x2124}, {0x2126, 0x2126}, {0x2128, 0x2128}, {0x212a, 0x212d}, {0x212f, 0x2139}, {0x213c, 0x213f}, {0x2145, 0x2149}, {0x214e, 0x214e},
  {0x2150, 0x2189}, {0x2460, 0x249b}, {0x24ea, 0x24ff}, {0x2776, 0x2793}, {0x2c00, 0x2ce4}, {0x2ceb, 0x2cee}, {0x2cf2, 0x2cf3}, {0x2cfd, 0x2cfd},
  {0x2d00, 0x2d25}, {0x2d27, 0x2d27}, {0x2d2d, 0x2d2d}, {0x2d30, 0x2d67}, {0x2d6f, 0x2d6f}, {0x2d80, 0x2d96}, {0x2da0, 0x2da6}, {0x2da8, 0x2dae},
  {0x2db0, 0x2db6}, {0x2db8, 0x2dbe}, {0x2dc0, 0x2dc6}, {0x2dc8, 0x2dce}, {0x2dd0, 0x2dd6}, {0x2dd8, 0x2dde}, {0x2e2f, 0x2e2f}, {0x3005, 0x3007},
  {0x3021, 0x3029}, {0x3031, 0x3035}, {0x3038, 0x303c}, {0x3041, 0x3096}, {0x309d, 0x309f}, {0x30a1, 0x30fa}, {0x30fc, 0x30ff}, {0x3105, 0x312f},
  {0x3131, 0x318e}, {0x3192, 0x3195}, {0x31a0, 0x31bf}, {0x31f0, 0x31ff}, {0x3220, 0x3229}, {0x3248, 0x324f}, {0x3251, 0x325f}, {0x3280, 0x3289},
  {0x32b1, 0x32bf}, {0x3400, 0x3400}, {0x4dbf, 0x4dbf}, {0x4e00, 0x4e00}, {0x9fff, 0xa48c}, {0xa4d0, 0xa4fd}, {0xa500, 0xa60c}, {0xa610, 0xa62b},
  {0xa640, 0xa66e}, {0xa67f, 0xa69d}, {0xa6a0, 0xa6ef}, {0xa717, 0xa71f}, {0xa722, 0xa788}, {0xa78b, 0xa7ca}, {0xa7d0, 0xa7d1}, {0xa7d3, 0xa7d3},
  {0xa7d5, 0xa7d9}, {0xa7f2, 0xa801}, {0xa803, 0xa805}, {0xa807, 0xa80a}, {0xa80c, 0xa822}, {0xa830, 0xa835}, {0xa840, 0xa873}, {0xa882, 0xa8b3},
  {0xa8d0, 0xa8d9}, {0xa8f2, 0xa8f7}, {0xa8fb, 0xa8fb}, {0xa8fd, 0xa8fe}, {0xa900, 0xa925}, {0xa930, 0xa946}, {0xa960, 0xa97c}, {0xa984, 0xa9b2},
  {0xa9cf, 0xa9d9}, {0xa9e0, 0xa9e4}, {0xa9e6, 0xa9fe}, {0xaa00, 0xaa28}, {0xaa40, 0xaa42}, {0xaa44, 0xaa4b}, {0xaa50, 0xaa59}, {0xaa60, 0xaa76},
  {0xaa7a, 0xaa7a}, {0xaa7e, 0xaaaf}, {0xaab1, 0xaab1}, {0xaab5, 0xaab6}, {0xaab9, 0xaabd}, {0xaac0, 0xaac0}, {0xaac2, 0xaac2}, {0xaadb, 0xaadd},
  {0xaae0, 0xaaea}, {0xaaf2, 0xaaf4}, {0xab01, 0xab06}, {0xab09, 0xab0e}, {0xab11, 0xab16}, {0xab20, 0xab26}, {0xab28, 0xab2e}, {0xab30, 0xab5a},
  {0xab5c, 0xab69}, {0xab70, 0xabe2}, {0xabf0, 0xabf9}, {0xac00, 0xac00}, {0xd7a3, 0xd7a3}, {0xd7b0, 0xd7c6}, {0xd7cb, 0xd7fb}, {0xf900, 0xfa6d},
  {0xfa70, 0xfad9}, {0xfb00, 0xfb06}, {0xfb13, 0xfb17}, {0xfb1d, 0xfb1d}, {0xfb1f, 0xfb28}, {0xfb2a, 0xfb36}, {0xfb38, 0xfb3c}, {0xfb3e, 0xfb3e},
  {0xfb40, 0xfb41}, {0xfb43, 0xfb44}, {0xfb46, 0xfbb1}, {0xfbd3, 0xfd3d}, {0xfd50, 0xfd8f}, {0xfd92, 0xfdc7}, {0xfdf0, 0xfdfb}, {0xfe70, 0xfe74},
  {0xfe76, 0xfefc}, {0xff10, 0xff19}, {0xff21, 0xff3a}, {0xff41, 0xff5a}, {0xff66, 0xffbe}, {0xffc2, 0xffc7}, {0xffca, 0xffcf}, {0xffd2, 0xffd7},
  {0xffda, 0xffdc}, {0x10000, 0x1000b}, {0x1000d, 0x10026}, {0x10028, 0x1003a}, {0x1003c, 0x1003d}, {0x1003f, 0x1004d}, {0x10050, 0x1005d}, {0x10080, 0x100fa},
  {0x10107, 0x10133}, {0x10140, 0x10178}, {0x1018a, 0x1018b}, {0x10280, 0x1029c}, {0x102a0, 0x102d0}, {0x102e1, 0x102fb}, {0x10300, 0x10323}, {0x1032d, 0x1034a},
  {0x10350, 0x10375}, {0x10380, 0x1039d}, {0x103a0, 0x103c3}, {0x103c8, 0x103cf}, {0x103d1, 0x103d5}, {0x10400, 0x1049d}, {0x104a0, 0x104a9}, {0x104b0, 0x104d3},
  {0x104d8, 0x104fb}, {0x10500, 0x10527}, {0x10530, 0x10563}, {0x10570, 0x1057a}, {0x1057c, 0x1058a}, {0x1058c, 0x10592}, {0x10594, 0x10595}, {0x10597, 0x105a1},
  {0x105a3, 0x105b1}, {0x105b3, 0x105b9}, {0x105bb, 0x105bc}, {0x10600, 0x10736}, {0x10740, 0x10755}, {0x10760, 0x10767}, {0x10780, 0x10785}, {0x10787, 0x107b0},
  {0x107b2, 0x107ba}, {0x10800, 0x10805}, {0x10808, 0x10808}, {0x1080a, 0x10835}, {0x10837, 0x10838}, {0x1083c, 0x1083c}, {0x1083f, 0x10855}, {0x10858, 0x10876},
  {0x10879, 0x1089e}, {0x108a7, 0x108af}, {0x108e0, 0x108f2}, {0x108f4, 0x108f5}, {0x108fb, 0x1091b}, {0x10920, 0x1092b},
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(109);
      ADVANCE_MAP(
        '#', 112,
        '$', 228,
        '%', 257,
        '(', 265,
        ')', 241,
        '*', 238,
        '+', 239,
        ',', 266,
        '-', 218,
        '.', 86,
        '/', 256,
        '0', 269,
        ':', 225,
        '<', 234,
        '=', 255,
        '>', 235,
        '[', 236,
      );
      if (lookahead == '\\') SKIP(101);
      if (lookahead == ']') ADVANCE(237);
      if (lookahead == '^') ADVANCE(227);
      if (lookahead == 'a') ADVANCE(64);
      if (lookahead == 'd') ADVANCE(49);
      if (lookahead == 'f') ADVANCE(43);
      if (lookahead == 'g') ADVANCE(40);
      if (lookahead == 'i') ADVANCE(57);
      if (lookahead == 'k') ADVANCE(50);
      if (lookahead == 'n') ADVANCE(67);
      if (lookahead == 'o') ADVANCE(72);
      if (lookahead == 'p') ADVANCE(44);
      if (lookahead == 's') ADVANCE(51);
      if (lookahead == 't') ADVANCE(41);
      if (lookahead == '{') ADVANCE(231);
      if (lookahead == '|') ADVANCE(226);
      if (lookahead == '}') ADVANCE(233);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == 0x200b ||
          lookahead == 0x2060 ||
          lookahead == 0xfeff) SKIP(106);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(270);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(20);
      END_STATE();
    case 2:
      if (lookahead == '\n') SKIP(20);
      if (lookahead == '\r') SKIP(1);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(286);
      END_STATE();
    case 4:
      if (lookahead == '\n') SKIP(16);
      END_STATE();
    case 5:
      if (lookahead == '\n') SKIP(16);
      if (lookahead == '\r') SKIP(4);
      END_STATE();
    case 6:
      if (lookahead == '\n') SKIP(19);
      END_STATE();
    case 7:
      if (lookahead == '\n') SKIP(19);
      if (lookahead == '\r') SKIP(6);
      END_STATE();
    case 8:
      if (lookahead == '\n') SKIP(18);
      END_STATE();
    case 9:
      if (lookahead == '\n') SKIP(18);
      if (lookahead == '\r') SKIP(8);
      END_STATE();
    case 10:
      if (lookahead == '\n') SKIP(22);
      END_STATE();
    case 11:
      if (lookahead == '\n') SKIP(22);
      if (lookahead == '\r') SKIP(10);
      END_STATE();
    case 12:
      if (lookahead == '\n') SKIP(23);
      END_STATE();
    case 13:
      if (lookahead == '\n') SKIP(23);
      if (lookahead == '\r') SKIP(12);
      END_STATE();
    case 14:
      if (lookahead == '\n') SKIP(24);
      if (lookahead == '#') ADVANCE(110);
      if (lookahead == '\\') ADVANCE(280);
      if (lookahead == 0x200b ||
          lookahead == 0x2060 ||
          lookahead == 0xfeff) ADVANCE(281);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(14);
      if (lookahead != 0) ADVANCE(282);
      END_STATE();
    case 15:
      if (lookahead == '\n') SKIP(24);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(84);
      if (lookahead != 0) ADVANCE(282);
      END_STATE();
    case 16:
      ADVANCE_MAP(
        '#', 112,
        '$', 228,
        '(', 240,
        ')', 241,
        '*', 238,
        '+', 239,
        ':', 225,
        '<', 234,
        '[', 236,
      );
      if (lookahead == '\\') SKIP(5);
      if (lookahead == ']') ADVANCE(237);
      if (lookahead == '^') ADVANCE(227);
      if (lookahead == '{') ADVANCE(230);
      if (lookahead == '|') ADVANCE(226);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == 0x200b ||
          lookahead == 0x2060 ||
          lookahead == 0xfeff) SKIP(16);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(217);
      if (set_contains(aux_sym_word_token1_character_set_1, 476, lookahead)) ADVANCE(229);
      END_STATE();
    case 17:
      ADVANCE_MAP(
        '#', 112,
        '%', 257,
        '(', 265,
        ')', 241,
        '*', 238,
        '+', 239,
        ',', 266,
        '-', 218,
        '/', 256,
        ':', 225,
        '=', 255,
        '>', 235,
      );
      if (lookahead == '\\') SKIP(9);
      if (lookahead == 'i') ADVANCE(65);
      if (lookahead == 'o') ADVANCE(72);
      if (lookahead == '}') ADVANCE(232);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == 0x200b ||
          lookahead == 0x2060 ||
          lookahead == 0xfeff) SKIP(18);
      END_STATE();
    case 18:
      ADVANCE_MAP(
        '#', 112,
        '%', 257,
        ')', 241,
        '*', 238,
        '+', 239,
        ',', 266,
        '-', 218,
        '/', 256,
        ':', 225,
        '=', 255,
        '>', 235,
      );
      if (lookahead == '\\') SKIP(9);
      if (lookahead == 'i') ADVANCE(65);
      if (lookahead == 'o') ADVANCE(72);
      if (lookahead == '}') ADVANCE(232);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == 0x200b ||
          lookahead == 0x2060 ||
          lookahead == 0xfeff) SKIP(18);
      END_STATE();
    case 19:
      if (lookahead == '#') ADVANCE(112);
      if (lookahead == '(') ADVANCE(240);
      if (lookahead == ')') ADVANCE(241);
      if (lookahead == ',') ADVANCE(266);
      if (lookahead == '-') ADVANCE(218);
      if (lookahead == '.') ADVANCE(86);
      if (lookahead == '0') ADVANCE(269);
      if (lookahead == '\\') SKIP(7);
      if (lookahead == '_') ADVANCE(267);
      if (lookahead == 'k') ADVANCE(146);
      if (lookahead == 's') ADVANCE(158);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == 0x200b ||
          lookahead == 0x2060 ||
          lookahead == 0xfeff) SKIP(19);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(270);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(182);
      END_STATE();
    case 20:
      if (lookahead == '#') ADVANCE(112);
      if (lookahead == '(') ADVANCE(240);
      if (lookahead == '-') ADVANCE(218);
      if (lookahead == '.') ADVANCE(86);
      if (lookahead == '0') ADVANCE(269);
      if (lookahead == '\\') SKIP(2);
      if (lookahead == '_') ADVANCE(267);
      if (lookahead == 'f') ADVANCE(164);
      if (lookahead == 'i') ADVANCE(152);
      if (lookahead == 'k') ADVANCE(146);
      if (lookahead == 's') ADVANCE(158);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == 0x200b ||
          lookahead == 0x2060 ||
          lookahead == 0xfeff) SKIP(20);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(270);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(182);
      END_STATE();
    case 21:
      ADVANCE_MAP(
        '#', 112,
        '(', 240,
        '-', 218,
        '.', 86,
        '0', 269,
        '\\', 287,
        '_', 267,
        'k', 146,
        's', 158,
        '{', 231,
        '}', 233,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == 0x200b ||
          lookahead == 0x2060 ||
          lookahead == 0xfeff) SKIP(21);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(270);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(182);
      END_STATE();
    case 22:
      if (lookahead == '#') ADVANCE(112);
      if (lookahead == '-') ADVANCE(218);
      if (lookahead == '\\') SKIP(11);
      if (lookahead == '_') ADVANCE(267);
      if (lookahead == 'a') ADVANCE(161);
      if (lookahead == 'n') ADVANCE(165);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == 0x200b ||
          lookahead == 0x2060 ||
          lookahead == 0xfeff) SKIP(22);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(182);
      END_STATE();
    case 23:
      if (lookahead == '#') ADVANCE(112);
      if (lookahead == '\\') SKIP(13);
      if (lookahead == '_') ADVANCE(267);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == 0x200b ||
          lookahead == 0x2060 ||
          lookahead == 0xfeff) SKIP(23);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(182);
      END_STATE();
    case 24:
      if (lookahead == '#') ADVANCE(110);
      if (lookahead == '\\') ADVANCE(280);
      if (lookahead == 0x200b ||
          lookahead == 0x2060 ||
          lookahead == 0xfeff) ADVANCE(281);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(24);
      if (lookahead != 0) ADVANCE(282);
      END_STATE();
    case 25:
      if (lookahead == '(') ADVANCE(242);
      END_STATE();
    case 26:
      if (lookahead == '(') ADVANCE(259);
      END_STATE();
    case 27:
      if (lookahead == '(') ADVANCE(35);
      END_STATE();
    case 28:
      if (lookahead == '(') ADVANCE(244);
      END_STATE();
    case 29:
      if (lookahead == '(') ADVANCE(243);
      END_STATE();
    case 30:
      if (lookahead == '(') ADVANCE(246);
      END_STATE();
    case 31:
      if (lookahead == '(') ADVANCE(260);
      END_STATE();
    case 32:
      if (lookahead == '(') ADVANCE(247);
      END_STATE();
    case 33:
      if (lookahead == '(') ADVANCE(245);
      END_STATE();
    case 34:
      if (lookahead == '(') ADVANCE(36);
      END_STATE();
    case 35:
      if (lookahead == ')') ADVANCE(249);
      END_STATE();
    case 36:
      if (lookahead == ')') ADVANCE(248);
      END_STATE();
    case 37:
      if (lookahead == '_') ADVANCE(83);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(272);
      END_STATE();
    case 38:
      if (lookahead == '_') ADVANCE(85);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(273);
      END_STATE();
    case 39:
      if (lookahead == '_') ADVANCE(90);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(274);
      END_STATE();
    case 40:
      if (lookahead == 'a') ADVANCE(63);
      END_STATE();
    case 41:
      if (lookahead == 'a') ADVANCE(59);
      END_STATE();
    case 42:
      if (lookahead == 'a') ADVANCE(48);
      END_STATE();
    case 43:
      if (lookahead == 'a') ADVANCE(46);
      if (lookahead == 'o') ADVANCE(73);
      END_STATE();
    case 44:
      if (lookahead == 'a') ADVANCE(75);
      END_STATE();
    case 45:
      if (lookahead == 'c') ADVANCE(62);
      END_STATE();
    case 46:
      if (lookahead == 'c') ADVANCE(53);
      END_STATE();
    case 47:
      if (lookahead == 'd') ADVANCE(219);
      END_STATE();
    case 48:
      if (lookahead == 'd') ADVANCE(33);
      END_STATE();
    case 49:
      if (lookahead == 'e') ADVANCE(45);
      END_STATE();
    case 50:
      if (lookahead == 'e') ADVANCE(81);
      END_STATE();
    case 51:
      if (lookahead == 'e') ADVANCE(79);
      if (lookahead == 'l') ADVANCE(54);
      END_STATE();
    case 52:
      if (lookahead == 'e') ADVANCE(70);
      END_STATE();
    case 53:
      if (lookahead == 'e') ADVANCE(29);
      END_STATE();
    case 54:
      if (lookahead == 'e') ADVANCE(56);
      END_STATE();
    case 55:
      if (lookahead == 'e') ADVANCE(30);
      END_STATE();
    case 56:
      if (lookahead == 'e') ADVANCE(71);
      END_STATE();
    case 57:
      if (lookahead == 'f') ADVANCE(250);
      if (lookahead == 'n') ADVANCE(254);
      END_STATE();
    case 58:
      if (lookahead == 'g') ADVANCE(76);
      END_STATE();
    case 59:
      if (lookahead == 'g') ADVANCE(27);
      END_STATE();
    case 60:
      if (lookahead == 'i') ADVANCE(77);
      if (lookahead == 't') ADVANCE(222);
      END_STATE();
    case 61:
      if (lookahead == 'i') ADVANCE(66);
      END_STATE();
    case 62:
      if (lookahead == 'k') ADVANCE(28);
      END_STATE();
    case 63:
      if (lookahead == 'm') ADVANCE(52);
      END_STATE();
    case 64:
      if (lookahead == 'n') ADVANCE(47);
      if (lookahead == 'p') ADVANCE(69);
      END_STATE();
    case 65:
      if (lookahead == 'n') ADVANCE(254);
      END_STATE();
    case 66:
      if (lookahead == 'n') ADVANCE(58);
      END_STATE();
    case 67:
      if (lookahead == 'o') ADVANCE(60);
      END_STATE();
    case 68:
      if (lookahead == 'o') ADVANCE(80);
      END_STATE();
    case 69:
      if (lookahead == 'p') ADVANCE(25);
      END_STATE();
    case 70:
      if (lookahead == 'p') ADVANCE(42);
      END_STATE();
    case 71:
      if (lookahead == 'p') ADVANCE(31);
      END_STATE();
    case 72:
      if (lookahead == 'r') ADVANCE(258);
      END_STATE();
    case 73:
      if (lookahead == 'r') ADVANCE(252);
      END_STATE();
    case 74:
      if (lookahead == 'r') ADVANCE(68);
      END_STATE();
    case 75:
      if (lookahead == 'r') ADVANCE(74);
      END_STATE();
    case 76:
      if (lookahead == 's') ADVANCE(34);
      END_STATE();
    case 77:
      if (lookahead == 's') ADVANCE(55);
      END_STATE();
    case 78:
      if (lookahead == 't') ADVANCE(61);
      END_STATE();
    case 79:
      if (lookahead == 't') ADVANCE(78);
      END_STATE();
    case 80:
      if (lookahead == 't') ADVANCE(32);
      END_STATE();
    case 81:
      if (lookahead == 'y') ADVANCE(26);
      END_STATE();
    case 82:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(87);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(277);
      END_STATE();
    case 83:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(272);
      END_STATE();
    case 84:
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(84);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(282);
      END_STATE();
    case 85:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(273);
      END_STATE();
    case 86:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(276);
      END_STATE();
    case 87:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(277);
      END_STATE();
    case 88:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(285);
      END_STATE();
    case 89:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(88);
      END_STATE();
    case 90:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(274);
      END_STATE();
    case 91:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(285);
      END_STATE();
    case 92:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(91);
      END_STATE();
    case 93:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(92);
      END_STATE();
    case 94:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(93);
      END_STATE();
    case 95:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(94);
      END_STATE();
    case 96:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(95);
      END_STATE();
    case 97:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(96);
      END_STATE();
    case 98:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(97);
      END_STATE();
    case 99:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(267);
      END_STATE();
    case 100:
      if (eof) ADVANCE(109);
      if (lookahead == '\n') SKIP(106);
      END_STATE();
    case 101:
      if (eof) ADVANCE(109);
      if (lookahead == '\n') SKIP(106);
      if (lookahead == '\r') SKIP(100);
      END_STATE();
    case 102:
      if (eof) ADVANCE(109);
      if (lookahead == '\n') SKIP(107);
      END_STATE();
    case 103:
      if (eof) ADVANCE(109);
      if (lookahead == '\n') SKIP(107);
      if (lookahead == '\r') SKIP(102);
      END_STATE();
    case 104:
      if (eof) ADVANCE(109);
      if (lookahead == '\n') SKIP(108);
      END_STATE();
    case 105:
      if (eof) ADVANCE(109);
      if (lookahead == '\n') SKIP(108);
      if (lookahead == '\r') SKIP(104);
      END_STATE();
    case 106:
      if (eof) ADVANCE(109);
      ADVANCE_MAP(
        '#', 112,
        '$', 228,
        '%', 257,
        '(', 240,
        ')', 241,
        '*', 238,
        '+', 239,
        ',', 266,
        '-', 218,
        '.', 86,
        '/', 256,
        '0', 269,
        ':', 225,
        '<', 234,
        '=', 255,
        '>', 235,
        '[', 236,
      );
      if (lookahead == '\\') SKIP(101);
      if (lookahead == ']') ADVANCE(237);
      if (lookahead == '^') ADVANCE(227);
      if (lookahead == 'a') ADVANCE(64);
      if (lookahead == 'd') ADVANCE(49);
      if (lookahead == 'f') ADVANCE(43);
      if (lookahead == 'g') ADVANCE(40);
      if (lookahead == 'i') ADVANCE(57);
      if (lookahead == 'k') ADVANCE(50);
      if (lookahead == 'n') ADVANCE(67);
      if (lookahead == 'o') ADVANCE(72);
      if (lookahead == 'p') ADVANCE(44);
      if (lookahead == 's') ADVANCE(51);
      if (lookahead == 't') ADVANCE(41);
      if (lookahead == '{') ADVANCE(231);
      if (lookahead == '|') ADVANCE(226);
      if (lookahead == '}') ADVANCE(233);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == 0x200b ||
          lookahead == 0x2060 ||
          lookahead == 0xfeff) SKIP(106);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(270);
      END_STATE();
    case 107:
      if (eof) ADVANCE(109);
      if (lookahead == '#') ADVANCE(112);
      if (lookahead == '(') ADVANCE(240);
      if (lookahead == '-') ADVANCE(218);
      if (lookahead == '<') ADVANCE(234);
      if (lookahead == '[') ADVANCE(236);
      if (lookahead == '\\') SKIP(103);
      if (lookahead == '^') ADVANCE(227);
      if (lookahead == '_') ADVANCE(267);
      if (lookahead == 'a') ADVANCE(160);
      if (lookahead == 'd') ADVANCE(143);
      if (lookahead == 'f') ADVANCE(137);
      if (lookahead == 'g') ADVANCE(133);
      if (lookahead == 'k') ADVANCE(144);
      if (lookahead == 'n') ADVANCE(163);
      if (lookahead == 'p') ADVANCE(134);
      if (lookahead == 's') ADVANCE(145);
      if (lookahead == 't') ADVANCE(135);
      if (lookahead == '{') ADVANCE(230);
      if (lookahead == '}') ADVANCE(232);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == 0x200b ||
          lookahead == 0x2060 ||
          lookahead == 0xfeff) SKIP(107);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(181);
      if (set_contains(aux_sym_word_token1_character_set_1, 476, lookahead)) ADVANCE(229);
      END_STATE();
    case 108:
      if (eof) ADVANCE(109);
      if (lookahead == '#') ADVANCE(112);
      if (lookahead == '(') ADVANCE(240);
      if (lookahead == '<') ADVANCE(234);
      if (lookahead == '[') ADVANCE(236);
      if (lookahead == '\\') SKIP(105);
      if (lookahead == '^') ADVANCE(227);
      if (lookahead == 'a') ADVANCE(207);
      if (lookahead == 'd') ADVANCE(191);
      if (lookahead == 'f') ADVANCE(187);
      if (lookahead == 'g') ADVANCE(183);
      if (lookahead == 'k') ADVANCE(192);
      if (lookahead == 'n') ADVANCE(204);
      if (lookahead == 'p') ADVANCE(184);
      if (lookahead == 's') ADVANCE(193);
      if (lookahead == 't') ADVANCE(185);
      if (lookahead == '{') ADVANCE(230);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == 0x200b ||
          lookahead == 0x2060 ||
          lookahead == 0xfeff) SKIP(108);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(217);
      if (set_contains(aux_sym_word_token1_character_set_1, 476, lookahead)) ADVANCE(229);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\r') ADVANCE(84);
      if (lookahead == '\t' ||
          lookahead == 0x0b ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(110);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(110);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == ')') ADVANCE(112);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(264);
      if (lookahead != 0) ADVANCE(111);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(112);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == '(') ADVANCE(242);
      if (lookahead == '.') ADVANCE(99);
      if (lookahead == '_') ADVANCE(267);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(181);
      if (set_contains(aux_sym_word_token1_character_set_2, 478, lookahead)) ADVANCE(229);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == '(') ADVANCE(242);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(217);
      if (set_contains(aux_sym_word_token1_character_set_2, 478, lookahead)) ADVANCE(229);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == '(') ADVANCE(259);
      if (lookahead == '.') ADVANCE(99);
      if (lookahead == '_') ADVANCE(267);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(181);
      if (set_contains(aux_sym_word_token1_character_set_2, 478, lookahead)) ADVANCE(229);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == '(') ADVANCE(259);
      if (lookahead == '.') ADVANCE(99);
      if (lookahead == '_') ADVANCE(267);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(182);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == '(') ADVANCE(259);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(217);
      if (set_contains(aux_sym_word_token1_character_set_2, 478, lookahead)) ADVANCE(229);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == '(') ADVANCE(35);
      if (lookahead == '.') ADVANCE(99);
      if (lookahead == '_') ADVANCE(267);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(181);
      if (set_contains(aux_sym_word_token1_character_set_2, 478, lookahead)) ADVANCE(229);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == '(') ADVANCE(35);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(217);
      if (set_contains(aux_sym_word_token1_character_set_2, 478, lookahead)) ADVANCE(229);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == '(') ADVANCE(244);
      if (lookahead == '.') ADVANCE(99);
      if (lookahead == '_') ADVANCE(267);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(181);
      if (set_contains(aux_sym_word_token1_character_set_2, 478, lookahead)) ADVANCE(229);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == '(') ADVANCE(244);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(217);
      if (set_contains(aux_sym_word_token1_character_set_2, 478, lookahead)) ADVANCE(229);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == '(') ADVANCE(243);
      if (lookahead == '.') ADVANCE(99);
      if (lookahead == '_') ADVANCE(267);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(181);
      if (set_contains(aux_sym_word_token1_character_set_2, 478, lookahead)) ADVANCE(229);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == '(') ADVANCE(243);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(217);
      if (set_contains(aux_sym_word_token1_character_set_2, 478, lookahead)) ADVANCE(229);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == '(') ADVANCE(246);
      if (lookahead == '.') ADVANCE(99);
      if (lookahead == '_') ADVANCE(267);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(181);
      if (set_contains(aux_sym_word_token1_character_set_2, 478, lookahead)) ADVANCE(229);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == '(') ADVANCE(246);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(217);
      if (set_contains(aux_sym_word_token1_character_set_2, 478, lookahead)) ADVANCE(229);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == '(') ADVANCE(260);
      if (lookahead == '.') ADVANCE(99);
      if (lookahead == '_') ADVANCE(267);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(182);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == '(') ADVANCE(247);
      if (lookahead == '.') ADVANCE(99);
      if (lookahead == '_') ADVANCE(267);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(181);
      if (set_contains(aux_sym_word_token1_character_set_2, 478, lookahead)) ADVANCE(229);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == '(') ADVANCE(247);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(217);
      if (set_contains(aux_sym_word_token1_character_set_2, 478, lookahead)) ADVANCE(229);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == '(') ADVANCE(245);
      if (lookahead == '.') ADVANCE(99);
      if (lookahead == '_') ADVANCE(267);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(181);
      if (set_contains(aux_sym_word_token1_character_set_2, 478, lookahead)) ADVANCE(229);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == '(') ADVANCE(245);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(217);
      if (set_contains(aux_sym_word_token1_character_set_2, 478, lookahead)) ADVANCE(229);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == '(') ADVANCE(36);
      if (lookahead == '.') ADVANCE(99);
      if (lookahead == '_') ADVANCE(267);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(181);
      if (set_contains(aux_sym_word_token1_character_set_2, 478, lookahead)) ADVANCE(229);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == '(') ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(217);
      if (set_contains(aux_sym_word_token1_character_set_2, 478, lookahead)) ADVANCE(229);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == '.') ADVANCE(99);
      if (lookahead == '_') ADVANCE(267);
      if (lookahead == 'a') ADVANCE(159);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(181);
      if (set_contains(aux_sym_word_token1_character_set_2, 478, lookahead)) ADVANCE(229);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == '.') ADVANCE(99);
      if (lookahead == '_') ADVANCE(267);
      if (lookahead == 'a') ADVANCE(172);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(181);
      if (set_contains(aux_sym_word_token1_character_set_2, 478, lookahead)) ADVANCE(229);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == '.') ADVANCE(99);
      if (lookahead == '_') ADVANCE(267);
      if (lookahead == 'a') ADVANCE(154);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(181);
      if (set_contains(aux_sym_word_token1_character_set_2, 478, lookahead)) ADVANCE(229);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == '.') ADVANCE(99);
      if (lookahead == '_') ADVANCE(267);
      if (lookahead == 'a') ADVANCE(142);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(181);
      if (set_contains(aux_sym_word_token1_character_set_2, 478, lookahead)) ADVANCE(229);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == '.') ADVANCE(99);
      if (lookahead == '_') ADVANCE(267);
      if (lookahead == 'a') ADVANCE(139);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(181);
      if (set_contains(aux_sym_word_token1_character_set_2, 478, lookahead)) ADVANCE(229);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == '.') ADVANCE(99);
      if (lookahead == '_') ADVANCE(267);
      if (lookahead == 'c') ADVANCE(157);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(181);
      if (set_contains(aux_sym_word_token1_character_set_2, 478, lookahead)) ADVANCE(229);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == '.') ADVANCE(99);
      if (lookahead == '_') ADVANCE(267);
      if (lookahead == 'c') ADVANCE(150);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(181);
      if (set_contains(aux_sym_word_token1_character_set_2, 478, lookahead)) ADVANCE(229);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == '.') ADVANCE(99);
      if (lookahead == '_') ADVANCE(267);
      if (lookahead == 'd') ADVANCE(220);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(181);
      if (set_contains(aux_sym_word_token1_character_set_2, 478, lookahead)) ADVANCE(229);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == '.') ADVANCE(99);
      if (lookahead == '_') ADVANCE(267);
      if (lookahead == 'd') ADVANCE(221);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(182);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == '.') ADVANCE(99);
      if (lookahead == '_') ADVANCE(267);
      if (lookahead == 'd') ADVANCE(129);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(181);
      if (set_contains(aux_sym_word_token1_character_set_2, 478, lookahead)) ADVANCE(229);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == '.') ADVANCE(99);
      if (lookahead == '_') ADVANCE(267);
      if (lookahead == 'e') ADVANCE(138);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(181);
      if (set_contains(aux_sym_word_token1_character_set_2, 478, lookahead)) ADVANCE(229);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == '.') ADVANCE(99);
      if (lookahead == '_') ADVANCE(267);
      if (lookahead == 'e') ADVANCE(180);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(181);
      if (set_contains(aux_sym_word_token1_character_set_2, 478, lookahead)) ADVANCE(229);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == '.') ADVANCE(99);
      if (lookahead == '_') ADVANCE(267);
      if (lookahead == 'e') ADVANCE(177);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(181);
      if (set_contains(aux_sym_word_token1_character_set_2, 478, lookahead)) ADVANCE(229);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == '.') ADVANCE(99);
      if (lookahead == '_') ADVANCE(267);
      if (lookahead == 'e') ADVANCE(179);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(182);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == '.') ADVANCE(99);
      if (lookahead == '_') ADVANCE(267);
      if (lookahead == 'e') ADVANCE(168);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(182);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == '.') ADVANCE(99);
      if (lookahead == '_') ADVANCE(267);
      if (lookahead == 'e') ADVANCE(169);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(181);
      if (set_contains(aux_sym_word_token1_character_set_2, 478, lookahead)) ADVANCE(229);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == '.') ADVANCE(99);
      if (lookahead == '_') ADVANCE(267);
      if (lookahead == 'e') ADVANCE(147);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(182);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == '.') ADVANCE(99);
      if (lookahead == '_') ADVANCE(267);
      if (lookahead == 'e') ADVANCE(122);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(181);
      if (set_contains(aux_sym_word_token1_character_set_2, 478, lookahead)) ADVANCE(229);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == '.') ADVANCE(99);
      if (lookahead == '_') ADVANCE(267);
      if (lookahead == 'e') ADVANCE(124);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(181);
      if (set_contains(aux_sym_word_token1_character_set_2, 478, lookahead)) ADVANCE(229);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == '.') ADVANCE(99);
      if (lookahead == '_') ADVANCE(267);
      if (lookahead == 'f') ADVANCE(251);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(182);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == '.') ADVANCE(99);
      if (lookahead == '_') ADVANCE(267);
      if (lookahead == 'g') ADVANCE(173);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(181);
      if (set_contains(aux_sym_word_token1_character_set_2, 478, lookahead)) ADVANCE(229);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == '.') ADVANCE(99);
      if (lookahead == '_') ADVANCE(267);
      if (lookahead == 'g') ADVANCE(118);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(181);
      if (set_contains(aux_sym_word_token1_character_set_2, 478, lookahead)) ADVANCE(229);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == '.') ADVANCE(99);
      if (lookahead == '_') ADVANCE(267);
      if (lookahead == 'i') ADVANCE(174);
      if (lookahead == 't') ADVANCE(223);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(181);
      if (set_contains(aux_sym_word_token1_character_set_2, 478, lookahead)) ADVANCE(229);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == '.') ADVANCE(99);
      if (lookahead == '_') ADVANCE(267);
      if (lookahead == 'i') ADVANCE(162);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(181);
      if (set_contains(aux_sym_word_token1_character_set_2, 478, lookahead)) ADVANCE(229);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == '.') ADVANCE(99);
      if (lookahead == '_') ADVANCE(267);
      if (lookahead == 'k') ADVANCE(120);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(181);
      if (set_contains(aux_sym_word_token1_character_set_2, 478, lookahead)) ADVANCE(229);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == '.') ADVANCE(99);
      if (lookahead == '_') ADVANCE(267);
      if (lookahead == 'l') ADVANCE(149);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(182);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == '.') ADVANCE(99);
      if (lookahead == '_') ADVANCE(267);
      if (lookahead == 'm') ADVANCE(148);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(181);
      if (set_contains(aux_sym_word_token1_character_set_2, 478, lookahead)) ADVANCE(229);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == '.') ADVANCE(99);
      if (lookahead == '_') ADVANCE(267);
      if (lookahead == 'n') ADVANCE(140);
      if (lookahead == 'p') ADVANCE(167);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(181);
      if (set_contains(aux_sym_word_token1_character_set_2, 478, lookahead)) ADVANCE(229);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == '.') ADVANCE(99);
      if (lookahead == '_') ADVANCE(267);
      if (lookahead == 'n') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(182);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == '.') ADVANCE(99);
      if (lookahead == '_') ADVANCE(267);
      if (lookahead == 'n') ADVANCE(153);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(181);
      if (set_contains(aux_sym_word_token1_character_set_2, 478, lookahead)) ADVANCE(229);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == '.') ADVANCE(99);
      if (lookahead == '_') ADVANCE(267);
      if (lookahead == 'o') ADVANCE(155);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(181);
      if (set_contains(aux_sym_word_token1_character_set_2, 478, lookahead)) ADVANCE(229);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == '.') ADVANCE(99);
      if (lookahead == '_') ADVANCE(267);
      if (lookahead == 'o') ADVANCE(170);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(182);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == '.') ADVANCE(99);
      if (lookahead == '_') ADVANCE(267);
      if (lookahead == 'o') ADVANCE(176);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(182);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == '.') ADVANCE(99);
      if (lookahead == '_') ADVANCE(267);
      if (lookahead == 'o') ADVANCE(178);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(181);
      if (set_contains(aux_sym_word_token1_character_set_2, 478, lookahead)) ADVANCE(229);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == '.') ADVANCE(99);
      if (lookahead == '_') ADVANCE(267);
      if (lookahead == 'p') ADVANCE(113);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(181);
      if (set_contains(aux_sym_word_token1_character_set_2, 478, lookahead)) ADVANCE(229);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == '.') ADVANCE(99);
      if (lookahead == '_') ADVANCE(267);
      if (lookahead == 'p') ADVANCE(126);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(182);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == '.') ADVANCE(99);
      if (lookahead == '_') ADVANCE(267);
      if (lookahead == 'p') ADVANCE(136);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(181);
      if (set_contains(aux_sym_word_token1_character_set_2, 478, lookahead)) ADVANCE(229);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == '.') ADVANCE(99);
      if (lookahead == '_') ADVANCE(267);
      if (lookahead == 'r') ADVANCE(253);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(182);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == '.') ADVANCE(99);
      if (lookahead == '_') ADVANCE(267);
      if (lookahead == 'r') ADVANCE(166);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(181);
      if (set_contains(aux_sym_word_token1_character_set_2, 478, lookahead)) ADVANCE(229);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == '.') ADVANCE(99);
      if (lookahead == '_') ADVANCE(267);
      if (lookahead == 'r') ADVANCE(171);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(181);
      if (set_contains(aux_sym_word_token1_character_set_2, 478, lookahead)) ADVANCE(229);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == '.') ADVANCE(99);
      if (lookahead == '_') ADVANCE(267);
      if (lookahead == 's') ADVANCE(131);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(181);
      if (set_contains(aux_sym_word_token1_character_set_2, 478, lookahead)) ADVANCE(229);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == '.') ADVANCE(99);
      if (lookahead == '_') ADVANCE(267);
      if (lookahead == 's') ADVANCE(151);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(181);
      if (set_contains(aux_sym_word_token1_character_set_2, 478, lookahead)) ADVANCE(229);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == '.') ADVANCE(99);
      if (lookahead == '_') ADVANCE(267);
      if (lookahead == 't') ADVANCE(156);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(181);
      if (set_contains(aux_sym_word_token1_character_set_2, 478, lookahead)) ADVANCE(229);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == '.') ADVANCE(99);
      if (lookahead == '_') ADVANCE(267);
      if (lookahead == 't') ADVANCE(224);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(182);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == '.') ADVANCE(99);
      if (lookahead == '_') ADVANCE(267);
      if (lookahead == 't') ADVANCE(175);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(181);
      if (set_contains(aux_sym_word_token1_character_set_2, 478, lookahead)) ADVANCE(229);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == '.') ADVANCE(99);
      if (lookahead == '_') ADVANCE(267);
      if (lookahead == 't') ADVANCE(127);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(181);
      if (set_contains(aux_sym_word_token1_character_set_2, 478, lookahead)) ADVANCE(229);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == '.') ADVANCE(99);
      if (lookahead == '_') ADVANCE(267);
      if (lookahead == 'y') ADVANCE(116);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(182);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == '.') ADVANCE(99);
      if (lookahead == '_') ADVANCE(267);
      if (lookahead == 'y') ADVANCE(115);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(181);
      if (set_contains(aux_sym_word_token1_character_set_2, 478, lookahead)) ADVANCE(229);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == '.') ADVANCE(99);
      if (lookahead == '_') ADVANCE(267);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(181);
      if (set_contains(aux_sym_word_token1_character_set_2, 478, lookahead)) ADVANCE(229);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == '.') ADVANCE(99);
      if (lookahead == '_') ADVANCE(267);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(182);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'a') ADVANCE(202);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(217);
      if (set_contains(aux_sym_word_token1_character_set_2, 478, lookahead)) ADVANCE(229);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'a') ADVANCE(210);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(217);
      if (set_contains(aux_sym_word_token1_character_set_2, 478, lookahead)) ADVANCE(229);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'a') ADVANCE(198);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(217);
      if (set_contains(aux_sym_word_token1_character_set_2, 478, lookahead)) ADVANCE(229);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'a') ADVANCE(190);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(217);
      if (set_contains(aux_sym_word_token1_character_set_2, 478, lookahead)) ADVANCE(229);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'a') ADVANCE(189);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(217);
      if (set_contains(aux_sym_word_token1_character_set_2, 478, lookahead)) ADVANCE(229);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'c') ADVANCE(201);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(217);
      if (set_contains(aux_sym_word_token1_character_set_2, 478, lookahead)) ADVANCE(229);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'c') ADVANCE(195);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(217);
      if (set_contains(aux_sym_word_token1_character_set_2, 478, lookahead)) ADVANCE(229);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'd') ADVANCE(130);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(217);
      if (set_contains(aux_sym_word_token1_character_set_2, 478, lookahead)) ADVANCE(229);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'e') ADVANCE(188);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(217);
      if (set_contains(aux_sym_word_token1_character_set_2, 478, lookahead)) ADVANCE(229);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'e') ADVANCE(216);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(217);
      if (set_contains(aux_sym_word_token1_character_set_2, 478, lookahead)) ADVANCE(229);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'e') ADVANCE(214);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(217);
      if (set_contains(aux_sym_word_token1_character_set_2, 478, lookahead)) ADVANCE(229);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'e') ADVANCE(208);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(217);
      if (set_contains(aux_sym_word_token1_character_set_2, 478, lookahead)) ADVANCE(229);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'e') ADVANCE(123);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(217);
      if (set_contains(aux_sym_word_token1_character_set_2, 478, lookahead)) ADVANCE(229);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'e') ADVANCE(125);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(217);
      if (set_contains(aux_sym_word_token1_character_set_2, 478, lookahead)) ADVANCE(229);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'g') ADVANCE(211);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(217);
      if (set_contains(aux_sym_word_token1_character_set_2, 478, lookahead)) ADVANCE(229);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'g') ADVANCE(119);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(217);
      if (set_contains(aux_sym_word_token1_character_set_2, 478, lookahead)) ADVANCE(229);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'i') ADVANCE(212);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(217);
      if (set_contains(aux_sym_word_token1_character_set_2, 478, lookahead)) ADVANCE(229);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'i') ADVANCE(203);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(217);
      if (set_contains(aux_sym_word_token1_character_set_2, 478, lookahead)) ADVANCE(229);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'k') ADVANCE(121);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(217);
      if (set_contains(aux_sym_word_token1_character_set_2, 478, lookahead)) ADVANCE(229);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'm') ADVANCE(194);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(217);
      if (set_contains(aux_sym_word_token1_character_set_2, 478, lookahead)) ADVANCE(229);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'n') ADVANCE(197);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(217);
      if (set_contains(aux_sym_word_token1_character_set_2, 478, lookahead)) ADVANCE(229);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'o') ADVANCE(199);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(217);
      if (set_contains(aux_sym_word_token1_character_set_2, 478, lookahead)) ADVANCE(229);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'o') ADVANCE(215);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(217);
      if (set_contains(aux_sym_word_token1_character_set_2, 478, lookahead)) ADVANCE(229);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'p') ADVANCE(114);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(217);
      if (set_contains(aux_sym_word_token1_character_set_2, 478, lookahead)) ADVANCE(229);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'p') ADVANCE(206);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(217);
      if (set_contains(aux_sym_word_token1_character_set_2, 478, lookahead)) ADVANCE(229);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'p') ADVANCE(186);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(217);
      if (set_contains(aux_sym_word_token1_character_set_2, 478, lookahead)) ADVANCE(229);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'r') ADVANCE(205);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(217);
      if (set_contains(aux_sym_word_token1_character_set_2, 478, lookahead)) ADVANCE(229);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'r') ADVANCE(209);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(217);
      if (set_contains(aux_sym_word_token1_character_set_2, 478, lookahead)) ADVANCE(229);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 's') ADVANCE(132);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(217);
      if (set_contains(aux_sym_word_token1_character_set_2, 478, lookahead)) ADVANCE(229);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 's') ADVANCE(196);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(217);
      if (set_contains(aux_sym_word_token1_character_set_2, 478, lookahead)) ADVANCE(229);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 't') ADVANCE(200);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(217);
      if (set_contains(aux_sym_word_token1_character_set_2, 478, lookahead)) ADVANCE(229);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 't') ADVANCE(213);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(217);
      if (set_contains(aux_sym_word_token1_character_set_2, 478, lookahead)) ADVANCE(229);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 't') ADVANCE(128);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(217);
      if (set_contains(aux_sym_word_token1_character_set_2, 478, lookahead)) ADVANCE(229);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (lookahead == 'y') ADVANCE(117);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(217);
      if (set_contains(aux_sym_word_token1_character_set_2, 478, lookahead)) ADVANCE(229);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(sym__simple_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(217);
      if (set_contains(aux_sym_word_token1_character_set_2, 478, lookahead)) ADVANCE(229);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(anon_sym_and);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(anon_sym_and);
      if (lookahead == '.') ADVANCE(99);
      if (lookahead == '_') ADVANCE(267);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(181);
      if (set_contains(aux_sym_word_token1_character_set_2, 478, lookahead)) ADVANCE(229);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(anon_sym_and);
      if (lookahead == '.') ADVANCE(99);
      if (lookahead == '_') ADVANCE(267);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(182);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(anon_sym_not);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(anon_sym_not);
      if (lookahead == '.') ADVANCE(99);
      if (lookahead == '_') ADVANCE(267);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(181);
      if (set_contains(aux_sym_word_token1_character_set_2, 478, lookahead)) ADVANCE(229);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(anon_sym_not);
      if (lookahead == '.') ADVANCE(99);
      if (lookahead == '_') ADVANCE(267);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(182);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(sym_start_anchor);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(sym_end_anchor);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(aux_sym_word_token1);
      if (set_contains(aux_sym_word_token1_character_set_2, 478, lookahead)) ADVANCE(229);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      if (lookahead == '{') ADVANCE(283);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      if (lookahead == '}') ADVANCE(284);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(anon_sym_app_LPAREN);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(anon_sym_face_LPAREN);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(anon_sym_deck_LPAREN);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(anon_sym_gamepad_LPAREN);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(anon_sym_noise_LPAREN);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(anon_sym_parrot_LPAREN);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(sym_settings_binding);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(sym_tag_binding);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(anon_sym_if);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(anon_sym_if);
      if (lookahead == '.') ADVANCE(99);
      if (lookahead == '_') ADVANCE(267);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(182);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(anon_sym_for);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(anon_sym_for);
      if (lookahead == '.') ADVANCE(99);
      if (lookahead == '_') ADVANCE(267);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(182);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(anon_sym_in);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(anon_sym_or);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(anon_sym_key_LPAREN);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(anon_sym_sleep_LPAREN);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(aux_sym__implicit_string_argument_token1);
      if (lookahead == '\n') ADVANCE(263);
      if (lookahead == '\r') ADVANCE(262);
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(264);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(aux_sym__implicit_string_argument_token1);
      if (lookahead == '\n') ADVANCE(263);
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(264);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(aux_sym__implicit_string_argument_token1);
      if (lookahead == '#') ADVANCE(111);
      if (lookahead == '\\') ADVANCE(261);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == 0x200b ||
          lookahead == 0x2060 ||
          lookahead == 0xfeff) ADVANCE(263);
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(264);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(aux_sym__implicit_string_argument_token1);
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(264);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(anon_sym_LPAREN2);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.') ADVANCE(99);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(267);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(sym_integer);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(sym_integer);
      ADVANCE_MAP(
        '.', 278,
        '_', 271,
        'B', 37,
        'b', 37,
        'E', 82,
        'e', 82,
        'O', 38,
        'o', 38,
        'X', 39,
        'x', 39,
        'J', 268,
        'L', 268,
        'j', 268,
        'l', 268,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(270);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(sym_integer);
      ADVANCE_MAP(
        '.', 278,
        '_', 271,
        'E', 82,
        'e', 82,
        'J', 268,
        'L', 268,
        'j', 268,
        'l', 268,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(270);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(278);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(82);
      if (lookahead == 'J' ||
          lookahead == 'L' ||
          lookahead == 'j' ||
          lookahead == 'l') ADVANCE(268);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(270);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '_') ADVANCE(83);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(268);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(272);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '_') ADVANCE(85);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(268);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(273);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '_') ADVANCE(90);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(268);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(274);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(sym_float);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == '_') ADVANCE(278);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(82);
      if (lookahead == 'J' ||
          lookahead == 'L' ||
          lookahead == 'j' ||
          lookahead == 'l') ADVANCE(275);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(276);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == '_') ADVANCE(279);
      if (lookahead == 'J' ||
          lookahead == 'L' ||
          lookahead == 'j' ||
          lookahead == 'l') ADVANCE(275);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(277);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(82);
      if (lookahead == 'J' ||
          lookahead == 'L' ||
          lookahead == 'j' ||
          lookahead == 'l') ADVANCE(275);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(276);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == 'J' ||
          lookahead == 'L' ||
          lookahead == 'j' ||
          lookahead == 'l') ADVANCE(275);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(277);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(sym_implicit_string);
      if (lookahead == '\r') ADVANCE(15);
      if (lookahead == '\t' ||
          lookahead == 0x0b ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(84);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(282);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(sym_implicit_string);
      if (lookahead == '#') ADVANCE(110);
      if (lookahead == '\\') ADVANCE(280);
      if (lookahead == 0x200b ||
          lookahead == 0x2060 ||
          lookahead == 0xfeff) ADVANCE(281);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(14);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(282);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(sym_implicit_string);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(84);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(282);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(anon_sym_LBRACE_LBRACE);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(anon_sym_RBRACE_RBRACE);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(sym_string_escape_sequence);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(sym_string_escape_sequence);
      if (lookahead == '\\') ADVANCE(287);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(sym__not_escapesequence);
      ADVANCE_MAP(
        '\n', 286,
        '\r', 3,
        'U', 98,
        'u', 94,
        'x', 92,
        '"', 285,
        '\'', 285,
        '\\', 285,
        'a', 285,
        'b', 285,
        'f', 285,
        'n', 285,
        'r', 285,
        't', 285,
        'v', 285,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(89);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 107, .external_lex_state = 2},
  [2] = {.lex_state = 108, .external_lex_state = 2},
  [3] = {.lex_state = 108, .external_lex_state = 2},
  [4] = {.lex_state = 108, .external_lex_state = 2},
  [5] = {.lex_state = 20, .external_lex_state = 3},
  [6] = {.lex_state = 20, .external_lex_state = 4},
  [7] = {.lex_state = 20, .external_lex_state = 4},
  [8] = {.lex_state = 20, .external_lex_state = 4},
  [9] = {.lex_state = 20, .external_lex_state = 4},
  [10] = {.lex_state = 20, .external_lex_state = 4},
  [11] = {.lex_state = 20, .external_lex_state = 4},
  [12] = {.lex_state = 20, .external_lex_state = 4},
  [13] = {.lex_state = 20, .external_lex_state = 4},
  [14] = {.lex_state = 20, .external_lex_state = 3},
  [15] = {.lex_state = 20, .external_lex_state = 3},
  [16] = {.lex_state = 20, .external_lex_state = 4},
  [17] = {.lex_state = 21, .external_lex_state = 5},
  [18] = {.lex_state = 20, .external_lex_state = 6},
  [19] = {.lex_state = 20, .external_lex_state = 6},
  [20] = {.lex_state = 20, .external_lex_state = 6},
  [21] = {.lex_state = 20, .external_lex_state = 6},
  [22] = {.lex_state = 16, .external_lex_state = 2},
  [23] = {.lex_state = 19, .external_lex_state = 6},
  [24] = {.lex_state = 19, .external_lex_state = 6},
  [25] = {.lex_state = 16, .external_lex_state = 2},
  [26] = {.lex_state = 16, .external_lex_state = 2},
  [27] = {.lex_state = 19, .external_lex_state = 6},
  [28] = {.lex_state = 19, .external_lex_state = 6},
  [29] = {.lex_state = 16, .external_lex_state = 2},
  [30] = {.lex_state = 16, .external_lex_state = 2},
  [31] = {.lex_state = 19, .external_lex_state = 6},
  [32] = {.lex_state = 19, .external_lex_state = 6},
  [33] = {.lex_state = 19, .external_lex_state = 6},
  [34] = {.lex_state = 19, .external_lex_state = 6},
  [35] = {.lex_state = 19, .external_lex_state = 6},
  [36] = {.lex_state = 19, .external_lex_state = 6},
  [37] = {.lex_state = 19, .external_lex_state = 6},
  [38] = {.lex_state = 19, .external_lex_state = 6},
  [39] = {.lex_state = 19, .external_lex_state = 6},
  [40] = {.lex_state = 19, .external_lex_state = 6},
  [41] = {.lex_state = 19, .external_lex_state = 6},
  [42] = {.lex_state = 19, .external_lex_state = 6},
  [43] = {.lex_state = 19, .external_lex_state = 6},
  [44] = {.lex_state = 19, .external_lex_state = 6},
  [45] = {.lex_state = 19, .external_lex_state = 6},
  [46] = {.lex_state = 19, .external_lex_state = 6},
  [47] = {.lex_state = 19, .external_lex_state = 6},
  [48] = {.lex_state = 19, .external_lex_state = 6},
  [49] = {.lex_state = 19, .external_lex_state = 6},
  [50] = {.lex_state = 16, .external_lex_state = 2},
  [51] = {.lex_state = 108, .external_lex_state = 2},
  [52] = {.lex_state = 108, .external_lex_state = 2},
  [53] = {.lex_state = 108, .external_lex_state = 2},
  [54] = {.lex_state = 108, .external_lex_state = 2},
  [55] = {.lex_state = 108, .external_lex_state = 2},
  [56] = {.lex_state = 108, .external_lex_state = 2},
  [57] = {.lex_state = 108, .external_lex_state = 2},
  [58] = {.lex_state = 108, .external_lex_state = 2},
  [59] = {.lex_state = 108, .external_lex_state = 2},
  [60] = {.lex_state = 108, .external_lex_state = 2},
  [61] = {.lex_state = 108, .external_lex_state = 2},
  [62] = {.lex_state = 108, .external_lex_state = 2},
  [63] = {.lex_state = 108, .external_lex_state = 2},
  [64] = {.lex_state = 108, .external_lex_state = 2},
  [65] = {.lex_state = 108, .external_lex_state = 2},
  [66] = {.lex_state = 108, .external_lex_state = 2},
  [67] = {.lex_state = 108, .external_lex_state = 2},
  [68] = {.lex_state = 108, .external_lex_state = 2},
  [69] = {.lex_state = 108, .external_lex_state = 2},
  [70] = {.lex_state = 108, .external_lex_state = 2},
  [71] = {.lex_state = 108, .external_lex_state = 2},
  [72] = {.lex_state = 108, .external_lex_state = 2},
  [73] = {.lex_state = 16, .external_lex_state = 2},
  [74] = {.lex_state = 16, .external_lex_state = 2},
  [75] = {.lex_state = 16, .external_lex_state = 2},
  [76] = {.lex_state = 16, .external_lex_state = 2},
  [77] = {.lex_state = 17, .external_lex_state = 2},
  [78] = {.lex_state = 16, .external_lex_state = 2},
  [79] = {.lex_state = 16, .external_lex_state = 2},
  [80] = {.lex_state = 16, .external_lex_state = 2},
  [81] = {.lex_state = 16, .external_lex_state = 2},
  [82] = {.lex_state = 16, .external_lex_state = 2},
  [83] = {.lex_state = 20, .external_lex_state = 3},
  [84] = {.lex_state = 21, .external_lex_state = 7},
  [85] = {.lex_state = 21, .external_lex_state = 7},
  [86] = {.lex_state = 21, .external_lex_state = 7},
  [87] = {.lex_state = 21, .external_lex_state = 7},
  [88] = {.lex_state = 21, .external_lex_state = 7},
  [89] = {.lex_state = 20, .external_lex_state = 3},
  [90] = {.lex_state = 17, .external_lex_state = 2},
  [91] = {.lex_state = 20, .external_lex_state = 3},
  [92] = {.lex_state = 20, .external_lex_state = 3},
  [93] = {.lex_state = 20, .external_lex_state = 3},
  [94] = {.lex_state = 16, .external_lex_state = 2},
  [95] = {.lex_state = 22, .external_lex_state = 2},
  [96] = {.lex_state = 17, .external_lex_state = 2},
  [97] = {.lex_state = 17, .external_lex_state = 8},
  [98] = {.lex_state = 17, .external_lex_state = 2},
  [99] = {.lex_state = 17, .external_lex_state = 2},
  [100] = {.lex_state = 17, .external_lex_state = 2},
  [101] = {.lex_state = 17, .external_lex_state = 2},
  [102] = {.lex_state = 22, .external_lex_state = 2},
  [103] = {.lex_state = 17, .external_lex_state = 8},
  [104] = {.lex_state = 17, .external_lex_state = 2},
  [105] = {.lex_state = 17, .external_lex_state = 2},
  [106] = {.lex_state = 17, .external_lex_state = 2},
  [107] = {.lex_state = 17, .external_lex_state = 2},
  [108] = {.lex_state = 17, .external_lex_state = 2},
  [109] = {.lex_state = 17, .external_lex_state = 2},
  [110] = {.lex_state = 17, .external_lex_state = 2},
  [111] = {.lex_state = 17, .external_lex_state = 2},
  [112] = {.lex_state = 17, .external_lex_state = 2},
  [113] = {.lex_state = 17, .external_lex_state = 2},
  [114] = {.lex_state = 0, .external_lex_state = 2},
  [115] = {.lex_state = 0, .external_lex_state = 2},
  [116] = {.lex_state = 17, .external_lex_state = 8},
  [117] = {.lex_state = 17, .external_lex_state = 8},
  [118] = {.lex_state = 21, .external_lex_state = 7},
  [119] = {.lex_state = 21, .external_lex_state = 7},
  [120] = {.lex_state = 0, .external_lex_state = 2},
  [121] = {.lex_state = 21, .external_lex_state = 7},
  [122] = {.lex_state = 0, .external_lex_state = 2},
  [123] = {.lex_state = 0, .external_lex_state = 8},
  [124] = {.lex_state = 0, .external_lex_state = 8},
  [125] = {.lex_state = 0, .external_lex_state = 8},
  [126] = {.lex_state = 0, .external_lex_state = 8},
  [127] = {.lex_state = 0, .external_lex_state = 8},
  [128] = {.lex_state = 0, .external_lex_state = 8},
  [129] = {.lex_state = 0, .external_lex_state = 2},
  [130] = {.lex_state = 0, .external_lex_state = 2},
  [131] = {.lex_state = 0, .external_lex_state = 8},
  [132] = {.lex_state = 0, .external_lex_state = 2},
  [133] = {.lex_state = 0, .external_lex_state = 2},
  [134] = {.lex_state = 22, .external_lex_state = 2},
  [135] = {.lex_state = 0, .external_lex_state = 8},
  [136] = {.lex_state = 0, .external_lex_state = 8},
  [137] = {.lex_state = 0, .external_lex_state = 8},
  [138] = {.lex_state = 0, .external_lex_state = 8},
  [139] = {.lex_state = 0, .external_lex_state = 8},
  [140] = {.lex_state = 0, .external_lex_state = 8},
  [141] = {.lex_state = 17, .external_lex_state = 2},
  [142] = {.lex_state = 0, .external_lex_state = 8},
  [143] = {.lex_state = 0, .external_lex_state = 8},
  [144] = {.lex_state = 0, .external_lex_state = 8},
  [145] = {.lex_state = 0, .external_lex_state = 2},
  [146] = {.lex_state = 0, .external_lex_state = 8},
  [147] = {.lex_state = 0, .external_lex_state = 8},
  [148] = {.lex_state = 0, .external_lex_state = 8},
  [149] = {.lex_state = 22, .external_lex_state = 2},
  [150] = {.lex_state = 0, .external_lex_state = 2},
  [151] = {.lex_state = 0, .external_lex_state = 2},
  [152] = {.lex_state = 0, .external_lex_state = 2},
  [153] = {.lex_state = 22, .external_lex_state = 2},
  [154] = {.lex_state = 0, .external_lex_state = 2},
  [155] = {.lex_state = 22, .external_lex_state = 2},
  [156] = {.lex_state = 0, .external_lex_state = 2},
  [157] = {.lex_state = 0, .external_lex_state = 2},
  [158] = {.lex_state = 22, .external_lex_state = 2},
  [159] = {.lex_state = 0, .external_lex_state = 2},
  [160] = {.lex_state = 0, .external_lex_state = 2},
  [161] = {.lex_state = 0, .external_lex_state = 2},
  [162] = {.lex_state = 23, .external_lex_state = 2},
  [163] = {.lex_state = 23, .external_lex_state = 2},
  [164] = {.lex_state = 23, .external_lex_state = 2},
  [165] = {.lex_state = 0, .external_lex_state = 8},
  [166] = {.lex_state = 0, .external_lex_state = 2},
  [167] = {.lex_state = 0, .external_lex_state = 8},
  [168] = {.lex_state = 23, .external_lex_state = 2},
  [169] = {.lex_state = 23, .external_lex_state = 2},
  [170] = {.lex_state = 0, .external_lex_state = 8},
  [171] = {.lex_state = 0, .external_lex_state = 2},
  [172] = {.lex_state = 263, .external_lex_state = 2},
  [173] = {.lex_state = 263, .external_lex_state = 2},
  [174] = {.lex_state = 263, .external_lex_state = 2},
  [175] = {.lex_state = 263, .external_lex_state = 2},
  [176] = {.lex_state = 263, .external_lex_state = 2},
  [177] = {.lex_state = 263, .external_lex_state = 2},
  [178] = {.lex_state = 263, .external_lex_state = 2},
  [179] = {.lex_state = 263, .external_lex_state = 2},
  [180] = {.lex_state = 263, .external_lex_state = 2},
  [181] = {.lex_state = 263, .external_lex_state = 2},
  [182] = {.lex_state = 0, .external_lex_state = 2},
  [183] = {.lex_state = 0, .external_lex_state = 2},
  [184] = {.lex_state = 0, .external_lex_state = 2},
  [185] = {.lex_state = 0, .external_lex_state = 2},
  [186] = {.lex_state = 0, .external_lex_state = 2},
  [187] = {.lex_state = 0, .external_lex_state = 2},
  [188] = {.lex_state = 0, .external_lex_state = 2},
  [189] = {.lex_state = 0, .external_lex_state = 2},
  [190] = {.lex_state = 0, .external_lex_state = 2},
  [191] = {.lex_state = 0, .external_lex_state = 2},
  [192] = {.lex_state = 24, .external_lex_state = 2},
  [193] = {.lex_state = 0, .external_lex_state = 2},
  [194] = {.lex_state = 0, .external_lex_state = 2},
  [195] = {.lex_state = 0, .external_lex_state = 2},
  [196] = {.lex_state = 0, .external_lex_state = 2},
  [197] = {.lex_state = 0, .external_lex_state = 2},
  [198] = {.lex_state = 0, .external_lex_state = 2},
  [199] = {.lex_state = 0, .external_lex_state = 2},
  [200] = {.lex_state = 0, .external_lex_state = 2},
  [201] = {.lex_state = 0, .external_lex_state = 2},
  [202] = {.lex_state = 0, .external_lex_state = 2},
  [203] = {.lex_state = 0, .external_lex_state = 2},
  [204] = {.lex_state = 0, .external_lex_state = 2},
  [205] = {.lex_state = 0, .external_lex_state = 2},
  [206] = {.lex_state = 0, .external_lex_state = 2},
  [207] = {.lex_state = 24, .external_lex_state = 2},
  [208] = {.lex_state = 0, .external_lex_state = 8},
  [209] = {.lex_state = 0, .external_lex_state = 2},
  [210] = {.lex_state = 0, .external_lex_state = 2},
  [211] = {.lex_state = 0, .external_lex_state = 2},
  [212] = {.lex_state = 0, .external_lex_state = 2},
  [213] = {.lex_state = 0, .external_lex_state = 2},
  [214] = {.lex_state = 0, .external_lex_state = 2},
  [215] = {.lex_state = 0, .external_lex_state = 2},
  [216] = {.lex_state = 0, .external_lex_state = 8},
  [217] = {.lex_state = 0, .external_lex_state = 2},
  [218] = {.lex_state = 0, .external_lex_state = 8},
  [219] = {.lex_state = 107, .external_lex_state = 2},
  [220] = {.lex_state = 0, .external_lex_state = 2},
  [221] = {.lex_state = 0, .external_lex_state = 2},
  [222] = {.lex_state = 0, .external_lex_state = 2},
  [223] = {.lex_state = 0, .external_lex_state = 2},
  [224] = {.lex_state = 0, .external_lex_state = 2},
  [225] = {.lex_state = 0, .external_lex_state = 2},
  [226] = {.lex_state = 0, .external_lex_state = 2},
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
    [anon_sym_if] = ACTIONS(1),
    [anon_sym_for] = ACTIONS(1),
    [anon_sym_in] = ACTIONS(1),
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
    [sym_source_file] = STATE(191),
    [sym_matches] = STATE(2),
    [sym_match_modifier] = STATE(134),
    [sym_match] = STATE(95),
    [sym_declarations] = STATE(193),
    [sym_declaration] = STATE(3),
    [sym_command_declaration] = STATE(53),
    [sym_app_declaration] = STATE(53),
    [sym_face_declaration] = STATE(53),
    [sym_deck_declaration] = STATE(53),
    [sym_gamepad_declaration] = STATE(53),
    [sym_noise_declaration] = STATE(53),
    [sym_parrot_declaration] = STATE(53),
    [sym_tag_import_declaration] = STATE(53),
    [sym_key_binding_declaration] = STATE(53),
    [sym_settings_declaration] = STATE(53),
    [sym_rule] = STATE(226),
    [sym__optional_choice] = STATE(190),
    [sym_choice] = STATE(190),
    [sym__optional_anchor] = STATE(152),
    [sym__optional_seq] = STATE(150),
    [sym_seq] = STATE(150),
    [sym__primary_rule] = STATE(22),
    [sym_word] = STATE(22),
    [sym_list] = STATE(22),
    [sym_capture] = STATE(22),
    [sym_optional] = STATE(22),
    [sym_repeat] = STATE(22),
    [sym_repeat1] = STATE(22),
    [sym_parenthesized_rule] = STATE(22),
    [sym_app_binding] = STATE(217),
    [sym_face_binding] = STATE(215),
    [sym_deck_binding] = STATE(213),
    [sym_gamepad_binding] = STATE(199),
    [sym_noise_binding] = STATE(220),
    [sym_parrot_binding] = STATE(224),
    [sym_key_action] = STATE(223),
    [sym_identifier] = STATE(222),
    [aux_sym_matches_repeat1] = STATE(95),
    [aux_sym_matches_repeat2] = STATE(170),
    [aux_sym_match_repeat1] = STATE(134),
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
    STATE(152), 1,
      sym__optional_anchor,
    STATE(195), 1,
      sym_declarations,
    STATE(199), 1,
      sym_gamepad_binding,
    STATE(213), 1,
      sym_deck_binding,
    STATE(215), 1,
      sym_face_binding,
    STATE(217), 1,
      sym_app_binding,
    STATE(220), 1,
      sym_noise_binding,
    STATE(223), 1,
      sym_key_action,
    STATE(224), 1,
      sym_parrot_binding,
    STATE(226), 1,
      sym_rule,
    ACTIONS(15), 2,
      sym__simple_identifier,
      aux_sym_word_token1,
    STATE(3), 2,
      sym_declaration,
      aux_sym_declarations_repeat1,
    STATE(150), 2,
      sym__optional_seq,
      sym_seq,
    STATE(190), 2,
      sym__optional_choice,
      sym_choice,
    STATE(22), 8,
      sym__primary_rule,
      sym_word,
      sym_list,
      sym_capture,
      sym_optional,
      sym_repeat,
      sym_repeat1,
      sym_parenthesized_rule,
    STATE(53), 10,
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
    ACTIONS(47), 1,
      ts_builtin_sym_end,
    STATE(152), 1,
      sym__optional_anchor,
    STATE(199), 1,
      sym_gamepad_binding,
    STATE(213), 1,
      sym_deck_binding,
    STATE(215), 1,
      sym_face_binding,
    STATE(217), 1,
      sym_app_binding,
    STATE(220), 1,
      sym_noise_binding,
    STATE(223), 1,
      sym_key_action,
    STATE(224), 1,
      sym_parrot_binding,
    STATE(226), 1,
      sym_rule,
    ACTIONS(15), 2,
      sym__simple_identifier,
      aux_sym_word_token1,
    STATE(4), 2,
      sym_declaration,
      aux_sym_declarations_repeat1,
    STATE(150), 2,
      sym__optional_seq,
      sym_seq,
    STATE(190), 2,
      sym__optional_choice,
      sym_choice,
    STATE(22), 8,
      sym__primary_rule,
      sym_word,
      sym_list,
      sym_capture,
      sym_optional,
      sym_repeat,
      sym_repeat1,
      sym_parenthesized_rule,
    STATE(53), 10,
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
    ACTIONS(49), 1,
      ts_builtin_sym_end,
    ACTIONS(54), 1,
      sym_start_anchor,
    ACTIONS(57), 1,
      anon_sym_LBRACE,
    ACTIONS(60), 1,
      anon_sym_LT,
    ACTIONS(63), 1,
      anon_sym_LBRACK,
    ACTIONS(66), 1,
      anon_sym_LPAREN,
    ACTIONS(69), 1,
      anon_sym_app_LPAREN,
    ACTIONS(72), 1,
      anon_sym_face_LPAREN,
    ACTIONS(75), 1,
      anon_sym_deck_LPAREN,
    ACTIONS(78), 1,
      anon_sym_gamepad_LPAREN,
    ACTIONS(81), 1,
      anon_sym_noise_LPAREN,
    ACTIONS(84), 1,
      anon_sym_parrot_LPAREN,
    ACTIONS(87), 1,
      sym_settings_binding,
    ACTIONS(90), 1,
      sym_tag_binding,
    ACTIONS(93), 1,
      anon_sym_key_LPAREN,
    STATE(152), 1,
      sym__optional_anchor,
    STATE(199), 1,
      sym_gamepad_binding,
    STATE(213), 1,
      sym_deck_binding,
    STATE(215), 1,
      sym_face_binding,
    STATE(217), 1,
      sym_app_binding,
    STATE(220), 1,
      sym_noise_binding,
    STATE(223), 1,
      sym_key_action,
    STATE(224), 1,
      sym_parrot_binding,
    STATE(226), 1,
      sym_rule,
    ACTIONS(51), 2,
      sym__simple_identifier,
      aux_sym_word_token1,
    STATE(4), 2,
      sym_declaration,
      aux_sym_declarations_repeat1,
    STATE(150), 2,
      sym__optional_seq,
      sym_seq,
    STATE(190), 2,
      sym__optional_choice,
      sym_choice,
    STATE(22), 8,
      sym__primary_rule,
      sym_word,
      sym_list,
      sym_capture,
      sym_optional,
      sym_repeat,
      sym_repeat1,
      sym_parenthesized_rule,
    STATE(53), 10,
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
  [345] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(98), 1,
      anon_sym_DASH,
    ACTIONS(100), 1,
      anon_sym_LPAREN,
    ACTIONS(102), 1,
      anon_sym_if,
    ACTIONS(104), 1,
      anon_sym_for,
    ACTIONS(106), 1,
      anon_sym_key_LPAREN,
    ACTIONS(108), 1,
      anon_sym_sleep_LPAREN,
    ACTIONS(110), 1,
      sym_integer,
    ACTIONS(112), 1,
      sym_float,
    ACTIONS(114), 1,
      sym__dedent,
    ACTIONS(116), 1,
      sym__string_start,
    STATE(60), 1,
      sym_block,
    STATE(103), 1,
      sym_identifier,
    STATE(123), 1,
      sym_expression,
    ACTIONS(96), 2,
      sym__simple_identifier,
      aux_sym_identifier_token1,
    STATE(14), 2,
      sym_statement,
      aux_sym_block_repeat1,
    STATE(93), 4,
      sym_if_statement,
      sym_for_statement,
      sym_assignment_statement,
      sym_expression_statement,
    STATE(143), 8,
      sym_variable,
      sym_parenthesized_expression,
      sym_binary_operator,
      sym_unary_operator,
      sym_key_action,
      sym_sleep_action,
      sym_action,
      sym_string,
  [412] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(98), 1,
      anon_sym_DASH,
    ACTIONS(100), 1,
      anon_sym_LPAREN,
    ACTIONS(106), 1,
      anon_sym_key_LPAREN,
    ACTIONS(108), 1,
      anon_sym_sleep_LPAREN,
    ACTIONS(110), 1,
      sym_integer,
    ACTIONS(112), 1,
      sym_float,
    ACTIONS(116), 1,
      sym__string_start,
    ACTIONS(118), 1,
      anon_sym_if,
    ACTIONS(120), 1,
      anon_sym_for,
    ACTIONS(122), 1,
      sym__indent,
    STATE(65), 1,
      sym__statements,
    STATE(72), 1,
      sym_statement,
    STATE(97), 1,
      sym_identifier,
    STATE(140), 1,
      sym_expression,
    ACTIONS(96), 2,
      sym__simple_identifier,
      aux_sym_identifier_token1,
    STATE(71), 4,
      sym_if_statement,
      sym_for_statement,
      sym_assignment_statement,
      sym_expression_statement,
    STATE(143), 8,
      sym_variable,
      sym_parenthesized_expression,
      sym_binary_operator,
      sym_unary_operator,
      sym_key_action,
      sym_sleep_action,
      sym_action,
      sym_string,
  [478] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(98), 1,
      anon_sym_DASH,
    ACTIONS(100), 1,
      anon_sym_LPAREN,
    ACTIONS(106), 1,
      anon_sym_key_LPAREN,
    ACTIONS(108), 1,
      anon_sym_sleep_LPAREN,
    ACTIONS(110), 1,
      sym_integer,
    ACTIONS(112), 1,
      sym_float,
    ACTIONS(116), 1,
      sym__string_start,
    ACTIONS(118), 1,
      anon_sym_if,
    ACTIONS(120), 1,
      anon_sym_for,
    ACTIONS(122), 1,
      sym__indent,
    STATE(51), 1,
      sym__statements,
    STATE(72), 1,
      sym_statement,
    STATE(97), 1,
      sym_identifier,
    STATE(140), 1,
      sym_expression,
    ACTIONS(96), 2,
      sym__simple_identifier,
      aux_sym_identifier_token1,
    STATE(71), 4,
      sym_if_statement,
      sym_for_statement,
      sym_assignment_statement,
      sym_expression_statement,
    STATE(143), 8,
      sym_variable,
      sym_parenthesized_expression,
      sym_binary_operator,
      sym_unary_operator,
      sym_key_action,
      sym_sleep_action,
      sym_action,
      sym_string,
  [544] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(98), 1,
      anon_sym_DASH,
    ACTIONS(100), 1,
      anon_sym_LPAREN,
    ACTIONS(106), 1,
      anon_sym_key_LPAREN,
    ACTIONS(108), 1,
      anon_sym_sleep_LPAREN,
    ACTIONS(110), 1,
      sym_integer,
    ACTIONS(112), 1,
      sym_float,
    ACTIONS(116), 1,
      sym__string_start,
    ACTIONS(118), 1,
      anon_sym_if,
    ACTIONS(120), 1,
      anon_sym_for,
    ACTIONS(122), 1,
      sym__indent,
    STATE(66), 1,
      sym__statements,
    STATE(72), 1,
      sym_statement,
    STATE(97), 1,
      sym_identifier,
    STATE(140), 1,
      sym_expression,
    ACTIONS(96), 2,
      sym__simple_identifier,
      aux_sym_identifier_token1,
    STATE(71), 4,
      sym_if_statement,
      sym_for_statement,
      sym_assignment_statement,
      sym_expression_statement,
    STATE(143), 8,
      sym_variable,
      sym_parenthesized_expression,
      sym_binary_operator,
      sym_unary_operator,
      sym_key_action,
      sym_sleep_action,
      sym_action,
      sym_string,
  [610] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(98), 1,
      anon_sym_DASH,
    ACTIONS(100), 1,
      anon_sym_LPAREN,
    ACTIONS(106), 1,
      anon_sym_key_LPAREN,
    ACTIONS(108), 1,
      anon_sym_sleep_LPAREN,
    ACTIONS(110), 1,
      sym_integer,
    ACTIONS(112), 1,
      sym_float,
    ACTIONS(116), 1,
      sym__string_start,
    ACTIONS(118), 1,
      anon_sym_if,
    ACTIONS(120), 1,
      anon_sym_for,
    ACTIONS(122), 1,
      sym__indent,
    STATE(67), 1,
      sym__statements,
    STATE(72), 1,
      sym_statement,
    STATE(97), 1,
      sym_identifier,
    STATE(140), 1,
      sym_expression,
    ACTIONS(96), 2,
      sym__simple_identifier,
      aux_sym_identifier_token1,
    STATE(71), 4,
      sym_if_statement,
      sym_for_statement,
      sym_assignment_statement,
      sym_expression_statement,
    STATE(143), 8,
      sym_variable,
      sym_parenthesized_expression,
      sym_binary_operator,
      sym_unary_operator,
      sym_key_action,
      sym_sleep_action,
      sym_action,
      sym_string,
  [676] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(98), 1,
      anon_sym_DASH,
    ACTIONS(100), 1,
      anon_sym_LPAREN,
    ACTIONS(106), 1,
      anon_sym_key_LPAREN,
    ACTIONS(108), 1,
      anon_sym_sleep_LPAREN,
    ACTIONS(110), 1,
      sym_integer,
    ACTIONS(112), 1,
      sym_float,
    ACTIONS(116), 1,
      sym__string_start,
    ACTIONS(118), 1,
      anon_sym_if,
    ACTIONS(120), 1,
      anon_sym_for,
    ACTIONS(122), 1,
      sym__indent,
    STATE(68), 1,
      sym__statements,
    STATE(72), 1,
      sym_statement,
    STATE(97), 1,
      sym_identifier,
    STATE(140), 1,
      sym_expression,
    ACTIONS(96), 2,
      sym__simple_identifier,
      aux_sym_identifier_token1,
    STATE(71), 4,
      sym_if_statement,
      sym_for_statement,
      sym_assignment_statement,
      sym_expression_statement,
    STATE(143), 8,
      sym_variable,
      sym_parenthesized_expression,
      sym_binary_operator,
      sym_unary_operator,
      sym_key_action,
      sym_sleep_action,
      sym_action,
      sym_string,
  [742] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(98), 1,
      anon_sym_DASH,
    ACTIONS(100), 1,
      anon_sym_LPAREN,
    ACTIONS(106), 1,
      anon_sym_key_LPAREN,
    ACTIONS(108), 1,
      anon_sym_sleep_LPAREN,
    ACTIONS(110), 1,
      sym_integer,
    ACTIONS(112), 1,
      sym_float,
    ACTIONS(116), 1,
      sym__string_start,
    ACTIONS(118), 1,
      anon_sym_if,
    ACTIONS(120), 1,
      anon_sym_for,
    ACTIONS(122), 1,
      sym__indent,
    STATE(70), 1,
      sym__statements,
    STATE(72), 1,
      sym_statement,
    STATE(97), 1,
      sym_identifier,
    STATE(140), 1,
      sym_expression,
    ACTIONS(96), 2,
      sym__simple_identifier,
      aux_sym_identifier_token1,
    STATE(71), 4,
      sym_if_statement,
      sym_for_statement,
      sym_assignment_statement,
      sym_expression_statement,
    STATE(143), 8,
      sym_variable,
      sym_parenthesized_expression,
      sym_binary_operator,
      sym_unary_operator,
      sym_key_action,
      sym_sleep_action,
      sym_action,
      sym_string,
  [808] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(98), 1,
      anon_sym_DASH,
    ACTIONS(100), 1,
      anon_sym_LPAREN,
    ACTIONS(106), 1,
      anon_sym_key_LPAREN,
    ACTIONS(108), 1,
      anon_sym_sleep_LPAREN,
    ACTIONS(110), 1,
      sym_integer,
    ACTIONS(112), 1,
      sym_float,
    ACTIONS(116), 1,
      sym__string_start,
    ACTIONS(118), 1,
      anon_sym_if,
    ACTIONS(120), 1,
      anon_sym_for,
    ACTIONS(122), 1,
      sym__indent,
    STATE(63), 1,
      sym__statements,
    STATE(72), 1,
      sym_statement,
    STATE(97), 1,
      sym_identifier,
    STATE(140), 1,
      sym_expression,
    ACTIONS(96), 2,
      sym__simple_identifier,
      aux_sym_identifier_token1,
    STATE(71), 4,
      sym_if_statement,
      sym_for_statement,
      sym_assignment_statement,
      sym_expression_statement,
    STATE(143), 8,
      sym_variable,
      sym_parenthesized_expression,
      sym_binary_operator,
      sym_unary_operator,
      sym_key_action,
      sym_sleep_action,
      sym_action,
      sym_string,
  [874] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(98), 1,
      anon_sym_DASH,
    ACTIONS(100), 1,
      anon_sym_LPAREN,
    ACTIONS(106), 1,
      anon_sym_key_LPAREN,
    ACTIONS(108), 1,
      anon_sym_sleep_LPAREN,
    ACTIONS(110), 1,
      sym_integer,
    ACTIONS(112), 1,
      sym_float,
    ACTIONS(116), 1,
      sym__string_start,
    ACTIONS(118), 1,
      anon_sym_if,
    ACTIONS(120), 1,
      anon_sym_for,
    ACTIONS(122), 1,
      sym__indent,
    STATE(54), 1,
      sym__statements,
    STATE(72), 1,
      sym_statement,
    STATE(97), 1,
      sym_identifier,
    STATE(140), 1,
      sym_expression,
    ACTIONS(96), 2,
      sym__simple_identifier,
      aux_sym_identifier_token1,
    STATE(71), 4,
      sym_if_statement,
      sym_for_statement,
      sym_assignment_statement,
      sym_expression_statement,
    STATE(143), 8,
      sym_variable,
      sym_parenthesized_expression,
      sym_binary_operator,
      sym_unary_operator,
      sym_key_action,
      sym_sleep_action,
      sym_action,
      sym_string,
  [940] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(98), 1,
      anon_sym_DASH,
    ACTIONS(100), 1,
      anon_sym_LPAREN,
    ACTIONS(102), 1,
      anon_sym_if,
    ACTIONS(104), 1,
      anon_sym_for,
    ACTIONS(106), 1,
      anon_sym_key_LPAREN,
    ACTIONS(108), 1,
      anon_sym_sleep_LPAREN,
    ACTIONS(110), 1,
      sym_integer,
    ACTIONS(112), 1,
      sym_float,
    ACTIONS(116), 1,
      sym__string_start,
    ACTIONS(124), 1,
      sym__dedent,
    STATE(103), 1,
      sym_identifier,
    STATE(123), 1,
      sym_expression,
    ACTIONS(96), 2,
      sym__simple_identifier,
      aux_sym_identifier_token1,
    STATE(15), 2,
      sym_statement,
      aux_sym_block_repeat1,
    STATE(93), 4,
      sym_if_statement,
      sym_for_statement,
      sym_assignment_statement,
      sym_expression_statement,
    STATE(143), 8,
      sym_variable,
      sym_parenthesized_expression,
      sym_binary_operator,
      sym_unary_operator,
      sym_key_action,
      sym_sleep_action,
      sym_action,
      sym_string,
  [1004] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(129), 1,
      anon_sym_DASH,
    ACTIONS(132), 1,
      anon_sym_LPAREN,
    ACTIONS(135), 1,
      anon_sym_if,
    ACTIONS(138), 1,
      anon_sym_for,
    ACTIONS(141), 1,
      anon_sym_key_LPAREN,
    ACTIONS(144), 1,
      anon_sym_sleep_LPAREN,
    ACTIONS(147), 1,
      sym_integer,
    ACTIONS(150), 1,
      sym_float,
    ACTIONS(153), 1,
      sym__dedent,
    ACTIONS(155), 1,
      sym__string_start,
    STATE(103), 1,
      sym_identifier,
    STATE(123), 1,
      sym_expression,
    ACTIONS(126), 2,
      sym__simple_identifier,
      aux_sym_identifier_token1,
    STATE(15), 2,
      sym_statement,
      aux_sym_block_repeat1,
    STATE(93), 4,
      sym_if_statement,
      sym_for_statement,
      sym_assignment_statement,
      sym_expression_statement,
    STATE(143), 8,
      sym_variable,
      sym_parenthesized_expression,
      sym_binary_operator,
      sym_unary_operator,
      sym_key_action,
      sym_sleep_action,
      sym_action,
      sym_string,
  [1068] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(98), 1,
      anon_sym_DASH,
    ACTIONS(100), 1,
      anon_sym_LPAREN,
    ACTIONS(106), 1,
      anon_sym_key_LPAREN,
    ACTIONS(108), 1,
      anon_sym_sleep_LPAREN,
    ACTIONS(110), 1,
      sym_integer,
    ACTIONS(112), 1,
      sym_float,
    ACTIONS(116), 1,
      sym__string_start,
    ACTIONS(118), 1,
      anon_sym_if,
    ACTIONS(120), 1,
      anon_sym_for,
    ACTIONS(122), 1,
      sym__indent,
    STATE(64), 1,
      sym__statements,
    STATE(72), 1,
      sym_statement,
    STATE(97), 1,
      sym_identifier,
    STATE(140), 1,
      sym_expression,
    ACTIONS(96), 2,
      sym__simple_identifier,
      aux_sym_identifier_token1,
    STATE(71), 4,
      sym_if_statement,
      sym_for_statement,
      sym_assignment_statement,
      sym_expression_statement,
    STATE(143), 8,
      sym_variable,
      sym_parenthesized_expression,
      sym_binary_operator,
      sym_unary_operator,
      sym_key_action,
      sym_sleep_action,
      sym_action,
      sym_string,
  [1134] = 13,
    ACTIONS(158), 1,
      sym_comment,
    ACTIONS(160), 1,
      anon_sym_DASH,
    ACTIONS(164), 1,
      anon_sym_LPAREN,
    ACTIONS(166), 1,
      anon_sym_key_LPAREN,
    ACTIONS(168), 1,
      anon_sym_sleep_LPAREN,
    ACTIONS(172), 1,
      sym__string_start,
    STATE(90), 1,
      sym_identifier,
    STATE(141), 1,
      sym_expression,
    ACTIONS(43), 2,
      sym__simple_identifier,
      aux_sym_identifier_token1,
    ACTIONS(170), 2,
      sym_integer,
      sym_float,
    ACTIONS(174), 2,
      sym_string_content,
      sym__string_end,
    ACTIONS(162), 6,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACE_LBRACE,
      anon_sym_RBRACE_RBRACE,
      sym_string_escape_sequence,
      sym__not_escapesequence,
    STATE(100), 8,
      sym_variable,
      sym_parenthesized_expression,
      sym_binary_operator,
      sym_unary_operator,
      sym_key_action,
      sym_sleep_action,
      sym_action,
      sym_string,
  [1189] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(98), 1,
      anon_sym_DASH,
    ACTIONS(100), 1,
      anon_sym_LPAREN,
    ACTIONS(106), 1,
      anon_sym_key_LPAREN,
    ACTIONS(108), 1,
      anon_sym_sleep_LPAREN,
    ACTIONS(110), 1,
      sym_integer,
    ACTIONS(112), 1,
      sym_float,
    ACTIONS(116), 1,
      sym__string_start,
    ACTIONS(118), 1,
      anon_sym_if,
    ACTIONS(120), 1,
      anon_sym_for,
    STATE(57), 1,
      sym_statement,
    STATE(97), 1,
      sym_identifier,
    STATE(140), 1,
      sym_expression,
    ACTIONS(96), 2,
      sym__simple_identifier,
      aux_sym_identifier_token1,
    STATE(71), 4,
      sym_if_statement,
      sym_for_statement,
      sym_assignment_statement,
      sym_expression_statement,
    STATE(143), 8,
      sym_variable,
      sym_parenthesized_expression,
      sym_binary_operator,
      sym_unary_operator,
      sym_key_action,
      sym_sleep_action,
      sym_action,
      sym_string,
  [1249] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(98), 1,
      anon_sym_DASH,
    ACTIONS(100), 1,
      anon_sym_LPAREN,
    ACTIONS(102), 1,
      anon_sym_if,
    ACTIONS(104), 1,
      anon_sym_for,
    ACTIONS(106), 1,
      anon_sym_key_LPAREN,
    ACTIONS(108), 1,
      anon_sym_sleep_LPAREN,
    ACTIONS(110), 1,
      sym_integer,
    ACTIONS(112), 1,
      sym_float,
    ACTIONS(116), 1,
      sym__string_start,
    STATE(83), 1,
      sym_statement,
    STATE(103), 1,
      sym_identifier,
    STATE(123), 1,
      sym_expression,
    ACTIONS(96), 2,
      sym__simple_identifier,
      aux_sym_identifier_token1,
    STATE(93), 4,
      sym_if_statement,
      sym_for_statement,
      sym_assignment_statement,
      sym_expression_statement,
    STATE(143), 8,
      sym_variable,
      sym_parenthesized_expression,
      sym_binary_operator,
      sym_unary_operator,
      sym_key_action,
      sym_sleep_action,
      sym_action,
      sym_string,
  [1309] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(98), 1,
      anon_sym_DASH,
    ACTIONS(100), 1,
      anon_sym_LPAREN,
    ACTIONS(102), 1,
      anon_sym_if,
    ACTIONS(104), 1,
      anon_sym_for,
    ACTIONS(106), 1,
      anon_sym_key_LPAREN,
    ACTIONS(108), 1,
      anon_sym_sleep_LPAREN,
    ACTIONS(110), 1,
      sym_integer,
    ACTIONS(112), 1,
      sym_float,
    ACTIONS(116), 1,
      sym__string_start,
    STATE(91), 1,
      sym_statement,
    STATE(103), 1,
      sym_identifier,
    STATE(123), 1,
      sym_expression,
    ACTIONS(96), 2,
      sym__simple_identifier,
      aux_sym_identifier_token1,
    STATE(93), 4,
      sym_if_statement,
      sym_for_statement,
      sym_assignment_statement,
      sym_expression_statement,
    STATE(143), 8,
      sym_variable,
      sym_parenthesized_expression,
      sym_binary_operator,
      sym_unary_operator,
      sym_key_action,
      sym_sleep_action,
      sym_action,
      sym_string,
  [1369] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(98), 1,
      anon_sym_DASH,
    ACTIONS(100), 1,
      anon_sym_LPAREN,
    ACTIONS(106), 1,
      anon_sym_key_LPAREN,
    ACTIONS(108), 1,
      anon_sym_sleep_LPAREN,
    ACTIONS(110), 1,
      sym_integer,
    ACTIONS(112), 1,
      sym_float,
    ACTIONS(116), 1,
      sym__string_start,
    ACTIONS(118), 1,
      anon_sym_if,
    ACTIONS(120), 1,
      anon_sym_for,
    STATE(69), 1,
      sym_statement,
    STATE(97), 1,
      sym_identifier,
    STATE(140), 1,
      sym_expression,
    ACTIONS(96), 2,
      sym__simple_identifier,
      aux_sym_identifier_token1,
    STATE(71), 4,
      sym_if_statement,
      sym_for_statement,
      sym_assignment_statement,
      sym_expression_statement,
    STATE(143), 8,
      sym_variable,
      sym_parenthesized_expression,
      sym_binary_operator,
      sym_unary_operator,
      sym_key_action,
      sym_sleep_action,
      sym_action,
      sym_string,
  [1429] = 11,
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
    ACTIONS(178), 1,
      anon_sym_STAR,
    ACTIONS(180), 1,
      anon_sym_PLUS,
    STATE(29), 1,
      aux_sym_seq_repeat1,
    ACTIONS(15), 2,
      sym__simple_identifier,
      aux_sym_word_token1,
    ACTIONS(176), 5,
      anon_sym_COLON,
      anon_sym_PIPE,
      sym_end_anchor,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
    STATE(78), 8,
      sym__primary_rule,
      sym_word,
      sym_list,
      sym_capture,
      sym_optional,
      sym_repeat,
      sym_repeat1,
      sym_parenthesized_rule,
  [1475] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(41), 1,
      anon_sym_key_LPAREN,
    ACTIONS(170), 1,
      sym_integer,
    ACTIONS(172), 1,
      sym__string_start,
    ACTIONS(182), 1,
      anon_sym_DASH,
    ACTIONS(184), 1,
      anon_sym_LPAREN,
    ACTIONS(186), 1,
      anon_sym_RPAREN,
    ACTIONS(188), 1,
      anon_sym_sleep_LPAREN,
    ACTIONS(190), 1,
      anon_sym_COMMA,
    ACTIONS(192), 1,
      sym_float,
    STATE(90), 1,
      sym_identifier,
    STATE(114), 1,
      sym_expression,
    ACTIONS(43), 2,
      sym__simple_identifier,
      aux_sym_identifier_token1,
    STATE(100), 8,
      sym_variable,
      sym_parenthesized_expression,
      sym_binary_operator,
      sym_unary_operator,
      sym_key_action,
      sym_sleep_action,
      sym_action,
      sym_string,
  [1526] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(41), 1,
      anon_sym_key_LPAREN,
    ACTIONS(170), 1,
      sym_integer,
    ACTIONS(172), 1,
      sym__string_start,
    ACTIONS(182), 1,
      anon_sym_DASH,
    ACTIONS(184), 1,
      anon_sym_LPAREN,
    ACTIONS(188), 1,
      anon_sym_sleep_LPAREN,
    ACTIONS(192), 1,
      sym_float,
    ACTIONS(194), 1,
      anon_sym_RPAREN,
    ACTIONS(196), 1,
      anon_sym_COMMA,
    STATE(90), 1,
      sym_identifier,
    STATE(115), 1,
      sym_expression,
    ACTIONS(43), 2,
      sym__simple_identifier,
      aux_sym_identifier_token1,
    STATE(100), 8,
      sym_variable,
      sym_parenthesized_expression,
      sym_binary_operator,
      sym_unary_operator,
      sym_key_action,
      sym_sleep_action,
      sym_action,
      sym_string,
  [1577] = 11,
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
    STATE(152), 1,
      sym__optional_anchor,
    ACTIONS(15), 2,
      sym__simple_identifier,
      aux_sym_word_token1,
    STATE(150), 2,
      sym__optional_seq,
      sym_seq,
    STATE(183), 2,
      sym__optional_choice,
      sym_choice,
    STATE(22), 8,
      sym__primary_rule,
      sym_word,
      sym_list,
      sym_capture,
      sym_optional,
      sym_repeat,
      sym_repeat1,
      sym_parenthesized_rule,
  [1621] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(203), 1,
      anon_sym_LBRACE,
    ACTIONS(206), 1,
      anon_sym_LT,
    ACTIONS(209), 1,
      anon_sym_LBRACK,
    ACTIONS(212), 1,
      anon_sym_LPAREN,
    STATE(26), 1,
      aux_sym_seq_repeat1,
    ACTIONS(198), 2,
      sym__simple_identifier,
      aux_sym_word_token1,
    ACTIONS(201), 5,
      anon_sym_COLON,
      anon_sym_PIPE,
      sym_end_anchor,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
    STATE(78), 8,
      sym__primary_rule,
      sym_word,
      sym_list,
      sym_capture,
      sym_optional,
      sym_repeat,
      sym_repeat1,
      sym_parenthesized_rule,
  [1661] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(41), 1,
      anon_sym_key_LPAREN,
    ACTIONS(170), 1,
      sym_integer,
    ACTIONS(172), 1,
      sym__string_start,
    ACTIONS(182), 1,
      anon_sym_DASH,
    ACTIONS(184), 1,
      anon_sym_LPAREN,
    ACTIONS(188), 1,
      anon_sym_sleep_LPAREN,
    ACTIONS(192), 1,
      sym_float,
    ACTIONS(215), 1,
      anon_sym_RPAREN,
    STATE(90), 1,
      sym_identifier,
    STATE(120), 1,
      sym_expression,
    ACTIONS(43), 2,
      sym__simple_identifier,
      aux_sym_identifier_token1,
    STATE(100), 8,
      sym_variable,
      sym_parenthesized_expression,
      sym_binary_operator,
      sym_unary_operator,
      sym_key_action,
      sym_sleep_action,
      sym_action,
      sym_string,
  [1709] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(41), 1,
      anon_sym_key_LPAREN,
    ACTIONS(170), 1,
      sym_integer,
    ACTIONS(172), 1,
      sym__string_start,
    ACTIONS(182), 1,
      anon_sym_DASH,
    ACTIONS(184), 1,
      anon_sym_LPAREN,
    ACTIONS(188), 1,
      anon_sym_sleep_LPAREN,
    ACTIONS(192), 1,
      sym_float,
    ACTIONS(217), 1,
      anon_sym_RPAREN,
    STATE(90), 1,
      sym_identifier,
    STATE(120), 1,
      sym_expression,
    ACTIONS(43), 2,
      sym__simple_identifier,
      aux_sym_identifier_token1,
    STATE(100), 8,
      sym_variable,
      sym_parenthesized_expression,
      sym_binary_operator,
      sym_unary_operator,
      sym_key_action,
      sym_sleep_action,
      sym_action,
      sym_string,
  [1757] = 9,
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
    STATE(26), 1,
      aux_sym_seq_repeat1,
    ACTIONS(15), 2,
      sym__simple_identifier,
      aux_sym_word_token1,
    ACTIONS(219), 5,
      anon_sym_COLON,
      anon_sym_PIPE,
      sym_end_anchor,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
    STATE(78), 8,
      sym__primary_rule,
      sym_word,
      sym_list,
      sym_capture,
      sym_optional,
      sym_repeat,
      sym_repeat1,
      sym_parenthesized_rule,
  [1797] = 11,
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
    STATE(152), 1,
      sym__optional_anchor,
    ACTIONS(15), 2,
      sym__simple_identifier,
      aux_sym_word_token1,
    STATE(150), 2,
      sym__optional_seq,
      sym_seq,
    STATE(209), 2,
      sym__optional_choice,
      sym_choice,
    STATE(22), 8,
      sym__primary_rule,
      sym_word,
      sym_list,
      sym_capture,
      sym_optional,
      sym_repeat,
      sym_repeat1,
      sym_parenthesized_rule,
  [1841] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(41), 1,
      anon_sym_key_LPAREN,
    ACTIONS(170), 1,
      sym_integer,
    ACTIONS(172), 1,
      sym__string_start,
    ACTIONS(182), 1,
      anon_sym_DASH,
    ACTIONS(184), 1,
      anon_sym_LPAREN,
    ACTIONS(188), 1,
      anon_sym_sleep_LPAREN,
    ACTIONS(192), 1,
      sym_float,
    ACTIONS(221), 1,
      anon_sym_RPAREN,
    STATE(90), 1,
      sym_identifier,
    STATE(120), 1,
      sym_expression,
    ACTIONS(43), 2,
      sym__simple_identifier,
      aux_sym_identifier_token1,
    STATE(100), 8,
      sym_variable,
      sym_parenthesized_expression,
      sym_binary_operator,
      sym_unary_operator,
      sym_key_action,
      sym_sleep_action,
      sym_action,
      sym_string,
  [1889] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(41), 1,
      anon_sym_key_LPAREN,
    ACTIONS(170), 1,
      sym_integer,
    ACTIONS(172), 1,
      sym__string_start,
    ACTIONS(182), 1,
      anon_sym_DASH,
    ACTIONS(184), 1,
      anon_sym_LPAREN,
    ACTIONS(188), 1,
      anon_sym_sleep_LPAREN,
    ACTIONS(192), 1,
      sym_float,
    ACTIONS(223), 1,
      anon_sym_RPAREN,
    STATE(90), 1,
      sym_identifier,
    STATE(120), 1,
      sym_expression,
    ACTIONS(43), 2,
      sym__simple_identifier,
      aux_sym_identifier_token1,
    STATE(100), 8,
      sym_variable,
      sym_parenthesized_expression,
      sym_binary_operator,
      sym_unary_operator,
      sym_key_action,
      sym_sleep_action,
      sym_action,
      sym_string,
  [1937] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(41), 1,
      anon_sym_key_LPAREN,
    ACTIONS(170), 1,
      sym_integer,
    ACTIONS(172), 1,
      sym__string_start,
    ACTIONS(182), 1,
      anon_sym_DASH,
    ACTIONS(184), 1,
      anon_sym_LPAREN,
    ACTIONS(188), 1,
      anon_sym_sleep_LPAREN,
    ACTIONS(192), 1,
      sym_float,
    STATE(90), 1,
      sym_identifier,
    STATE(99), 1,
      sym_expression,
    ACTIONS(43), 2,
      sym__simple_identifier,
      aux_sym_identifier_token1,
    STATE(100), 8,
      sym_variable,
      sym_parenthesized_expression,
      sym_binary_operator,
      sym_unary_operator,
      sym_key_action,
      sym_sleep_action,
      sym_action,
      sym_string,
  [1982] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(41), 1,
      anon_sym_key_LPAREN,
    ACTIONS(170), 1,
      sym_integer,
    ACTIONS(172), 1,
      sym__string_start,
    ACTIONS(182), 1,
      anon_sym_DASH,
    ACTIONS(184), 1,
      anon_sym_LPAREN,
    ACTIONS(188), 1,
      anon_sym_sleep_LPAREN,
    ACTIONS(192), 1,
      sym_float,
    STATE(90), 1,
      sym_identifier,
    STATE(110), 1,
      sym_expression,
    ACTIONS(43), 2,
      sym__simple_identifier,
      aux_sym_identifier_token1,
    STATE(100), 8,
      sym_variable,
      sym_parenthesized_expression,
      sym_binary_operator,
      sym_unary_operator,
      sym_key_action,
      sym_sleep_action,
      sym_action,
      sym_string,
  [2027] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(41), 1,
      anon_sym_key_LPAREN,
    ACTIONS(170), 1,
      sym_integer,
    ACTIONS(172), 1,
      sym__string_start,
    ACTIONS(182), 1,
      anon_sym_DASH,
    ACTIONS(184), 1,
      anon_sym_LPAREN,
    ACTIONS(188), 1,
      anon_sym_sleep_LPAREN,
    ACTIONS(192), 1,
      sym_float,
    STATE(90), 1,
      sym_identifier,
    STATE(104), 1,
      sym_expression,
    ACTIONS(43), 2,
      sym__simple_identifier,
      aux_sym_identifier_token1,
    STATE(100), 8,
      sym_variable,
      sym_parenthesized_expression,
      sym_binary_operator,
      sym_unary_operator,
      sym_key_action,
      sym_sleep_action,
      sym_action,
      sym_string,
  [2072] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(41), 1,
      anon_sym_key_LPAREN,
    ACTIONS(170), 1,
      sym_integer,
    ACTIONS(172), 1,
      sym__string_start,
    ACTIONS(182), 1,
      anon_sym_DASH,
    ACTIONS(184), 1,
      anon_sym_LPAREN,
    ACTIONS(188), 1,
      anon_sym_sleep_LPAREN,
    ACTIONS(192), 1,
      sym_float,
    STATE(90), 1,
      sym_identifier,
    STATE(120), 1,
      sym_expression,
    ACTIONS(43), 2,
      sym__simple_identifier,
      aux_sym_identifier_token1,
    STATE(100), 8,
      sym_variable,
      sym_parenthesized_expression,
      sym_binary_operator,
      sym_unary_operator,
      sym_key_action,
      sym_sleep_action,
      sym_action,
      sym_string,
  [2117] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(98), 1,
      anon_sym_DASH,
    ACTIONS(100), 1,
      anon_sym_LPAREN,
    ACTIONS(106), 1,
      anon_sym_key_LPAREN,
    ACTIONS(108), 1,
      anon_sym_sleep_LPAREN,
    ACTIONS(110), 1,
      sym_integer,
    ACTIONS(112), 1,
      sym_float,
    ACTIONS(116), 1,
      sym__string_start,
    STATE(116), 1,
      sym_identifier,
    STATE(136), 1,
      sym_expression,
    ACTIONS(96), 2,
      sym__simple_identifier,
      aux_sym_identifier_token1,
    STATE(143), 8,
      sym_variable,
      sym_parenthesized_expression,
      sym_binary_operator,
      sym_unary_operator,
      sym_key_action,
      sym_sleep_action,
      sym_action,
      sym_string,
  [2162] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(98), 1,
      anon_sym_DASH,
    ACTIONS(100), 1,
      anon_sym_LPAREN,
    ACTIONS(106), 1,
      anon_sym_key_LPAREN,
    ACTIONS(108), 1,
      anon_sym_sleep_LPAREN,
    ACTIONS(110), 1,
      sym_integer,
    ACTIONS(112), 1,
      sym_float,
    ACTIONS(116), 1,
      sym__string_start,
    STATE(116), 1,
      sym_identifier,
    STATE(127), 1,
      sym_expression,
    ACTIONS(96), 2,
      sym__simple_identifier,
      aux_sym_identifier_token1,
    STATE(143), 8,
      sym_variable,
      sym_parenthesized_expression,
      sym_binary_operator,
      sym_unary_operator,
      sym_key_action,
      sym_sleep_action,
      sym_action,
      sym_string,
  [2207] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(41), 1,
      anon_sym_key_LPAREN,
    ACTIONS(170), 1,
      sym_integer,
    ACTIONS(172), 1,
      sym__string_start,
    ACTIONS(182), 1,
      anon_sym_DASH,
    ACTIONS(184), 1,
      anon_sym_LPAREN,
    ACTIONS(188), 1,
      anon_sym_sleep_LPAREN,
    ACTIONS(192), 1,
      sym_float,
    STATE(90), 1,
      sym_identifier,
    STATE(132), 1,
      sym_expression,
    ACTIONS(43), 2,
      sym__simple_identifier,
      aux_sym_identifier_token1,
    STATE(100), 8,
      sym_variable,
      sym_parenthesized_expression,
      sym_binary_operator,
      sym_unary_operator,
      sym_key_action,
      sym_sleep_action,
      sym_action,
      sym_string,
  [2252] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(41), 1,
      anon_sym_key_LPAREN,
    ACTIONS(170), 1,
      sym_integer,
    ACTIONS(172), 1,
      sym__string_start,
    ACTIONS(182), 1,
      anon_sym_DASH,
    ACTIONS(184), 1,
      anon_sym_LPAREN,
    ACTIONS(188), 1,
      anon_sym_sleep_LPAREN,
    ACTIONS(192), 1,
      sym_float,
    STATE(90), 1,
      sym_identifier,
    STATE(129), 1,
      sym_expression,
    ACTIONS(43), 2,
      sym__simple_identifier,
      aux_sym_identifier_token1,
    STATE(100), 8,
      sym_variable,
      sym_parenthesized_expression,
      sym_binary_operator,
      sym_unary_operator,
      sym_key_action,
      sym_sleep_action,
      sym_action,
      sym_string,
  [2297] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(41), 1,
      anon_sym_key_LPAREN,
    ACTIONS(170), 1,
      sym_integer,
    ACTIONS(172), 1,
      sym__string_start,
    ACTIONS(182), 1,
      anon_sym_DASH,
    ACTIONS(184), 1,
      anon_sym_LPAREN,
    ACTIONS(188), 1,
      anon_sym_sleep_LPAREN,
    ACTIONS(192), 1,
      sym_float,
    STATE(90), 1,
      sym_identifier,
    STATE(130), 1,
      sym_expression,
    ACTIONS(43), 2,
      sym__simple_identifier,
      aux_sym_identifier_token1,
    STATE(100), 8,
      sym_variable,
      sym_parenthesized_expression,
      sym_binary_operator,
      sym_unary_operator,
      sym_key_action,
      sym_sleep_action,
      sym_action,
      sym_string,
  [2342] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(41), 1,
      anon_sym_key_LPAREN,
    ACTIONS(170), 1,
      sym_integer,
    ACTIONS(172), 1,
      sym__string_start,
    ACTIONS(182), 1,
      anon_sym_DASH,
    ACTIONS(184), 1,
      anon_sym_LPAREN,
    ACTIONS(188), 1,
      anon_sym_sleep_LPAREN,
    ACTIONS(192), 1,
      sym_float,
    STATE(90), 1,
      sym_identifier,
    STATE(112), 1,
      sym_expression,
    ACTIONS(43), 2,
      sym__simple_identifier,
      aux_sym_identifier_token1,
    STATE(100), 8,
      sym_variable,
      sym_parenthesized_expression,
      sym_binary_operator,
      sym_unary_operator,
      sym_key_action,
      sym_sleep_action,
      sym_action,
      sym_string,
  [2387] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(41), 1,
      anon_sym_key_LPAREN,
    ACTIONS(170), 1,
      sym_integer,
    ACTIONS(172), 1,
      sym__string_start,
    ACTIONS(182), 1,
      anon_sym_DASH,
    ACTIONS(184), 1,
      anon_sym_LPAREN,
    ACTIONS(188), 1,
      anon_sym_sleep_LPAREN,
    ACTIONS(192), 1,
      sym_float,
    STATE(90), 1,
      sym_identifier,
    STATE(145), 1,
      sym_expression,
    ACTIONS(43), 2,
      sym__simple_identifier,
      aux_sym_identifier_token1,
    STATE(100), 8,
      sym_variable,
      sym_parenthesized_expression,
      sym_binary_operator,
      sym_unary_operator,
      sym_key_action,
      sym_sleep_action,
      sym_action,
      sym_string,
  [2432] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(98), 1,
      anon_sym_DASH,
    ACTIONS(100), 1,
      anon_sym_LPAREN,
    ACTIONS(106), 1,
      anon_sym_key_LPAREN,
    ACTIONS(108), 1,
      anon_sym_sleep_LPAREN,
    ACTIONS(110), 1,
      sym_integer,
    ACTIONS(112), 1,
      sym_float,
    ACTIONS(116), 1,
      sym__string_start,
    STATE(116), 1,
      sym_identifier,
    STATE(147), 1,
      sym_expression,
    ACTIONS(96), 2,
      sym__simple_identifier,
      aux_sym_identifier_token1,
    STATE(143), 8,
      sym_variable,
      sym_parenthesized_expression,
      sym_binary_operator,
      sym_unary_operator,
      sym_key_action,
      sym_sleep_action,
      sym_action,
      sym_string,
  [2477] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(98), 1,
      anon_sym_DASH,
    ACTIONS(100), 1,
      anon_sym_LPAREN,
    ACTIONS(106), 1,
      anon_sym_key_LPAREN,
    ACTIONS(108), 1,
      anon_sym_sleep_LPAREN,
    ACTIONS(110), 1,
      sym_integer,
    ACTIONS(112), 1,
      sym_float,
    ACTIONS(116), 1,
      sym__string_start,
    STATE(116), 1,
      sym_identifier,
    STATE(148), 1,
      sym_expression,
    ACTIONS(96), 2,
      sym__simple_identifier,
      aux_sym_identifier_token1,
    STATE(143), 8,
      sym_variable,
      sym_parenthesized_expression,
      sym_binary_operator,
      sym_unary_operator,
      sym_key_action,
      sym_sleep_action,
      sym_action,
      sym_string,
  [2522] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(98), 1,
      anon_sym_DASH,
    ACTIONS(100), 1,
      anon_sym_LPAREN,
    ACTIONS(106), 1,
      anon_sym_key_LPAREN,
    ACTIONS(108), 1,
      anon_sym_sleep_LPAREN,
    ACTIONS(110), 1,
      sym_integer,
    ACTIONS(112), 1,
      sym_float,
    ACTIONS(116), 1,
      sym__string_start,
    STATE(116), 1,
      sym_identifier,
    STATE(128), 1,
      sym_expression,
    ACTIONS(96), 2,
      sym__simple_identifier,
      aux_sym_identifier_token1,
    STATE(143), 8,
      sym_variable,
      sym_parenthesized_expression,
      sym_binary_operator,
      sym_unary_operator,
      sym_key_action,
      sym_sleep_action,
      sym_action,
      sym_string,
  [2567] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(41), 1,
      anon_sym_key_LPAREN,
    ACTIONS(170), 1,
      sym_integer,
    ACTIONS(172), 1,
      sym__string_start,
    ACTIONS(182), 1,
      anon_sym_DASH,
    ACTIONS(184), 1,
      anon_sym_LPAREN,
    ACTIONS(188), 1,
      anon_sym_sleep_LPAREN,
    ACTIONS(192), 1,
      sym_float,
    STATE(90), 1,
      sym_identifier,
    STATE(133), 1,
      sym_expression,
    ACTIONS(43), 2,
      sym__simple_identifier,
      aux_sym_identifier_token1,
    STATE(100), 8,
      sym_variable,
      sym_parenthesized_expression,
      sym_binary_operator,
      sym_unary_operator,
      sym_key_action,
      sym_sleep_action,
      sym_action,
      sym_string,
  [2612] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(98), 1,
      anon_sym_DASH,
    ACTIONS(100), 1,
      anon_sym_LPAREN,
    ACTIONS(106), 1,
      anon_sym_key_LPAREN,
    ACTIONS(108), 1,
      anon_sym_sleep_LPAREN,
    ACTIONS(110), 1,
      sym_integer,
    ACTIONS(112), 1,
      sym_float,
    ACTIONS(116), 1,
      sym__string_start,
    STATE(116), 1,
      sym_identifier,
    STATE(131), 1,
      sym_expression,
    ACTIONS(96), 2,
      sym__simple_identifier,
      aux_sym_identifier_token1,
    STATE(143), 8,
      sym_variable,
      sym_parenthesized_expression,
      sym_binary_operator,
      sym_unary_operator,
      sym_key_action,
      sym_sleep_action,
      sym_action,
      sym_string,
  [2657] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(41), 1,
      anon_sym_key_LPAREN,
    ACTIONS(170), 1,
      sym_integer,
    ACTIONS(172), 1,
      sym__string_start,
    ACTIONS(182), 1,
      anon_sym_DASH,
    ACTIONS(184), 1,
      anon_sym_LPAREN,
    ACTIONS(188), 1,
      anon_sym_sleep_LPAREN,
    ACTIONS(192), 1,
      sym_float,
    STATE(90), 1,
      sym_identifier,
    STATE(122), 1,
      sym_expression,
    ACTIONS(43), 2,
      sym__simple_identifier,
      aux_sym_identifier_token1,
    STATE(100), 8,
      sym_variable,
      sym_parenthesized_expression,
      sym_binary_operator,
      sym_unary_operator,
      sym_key_action,
      sym_sleep_action,
      sym_action,
      sym_string,
  [2702] = 10,
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
    STATE(159), 1,
      sym__optional_anchor,
    ACTIONS(15), 2,
      sym__simple_identifier,
      aux_sym_word_token1,
    STATE(150), 2,
      sym__optional_seq,
      sym_seq,
    STATE(22), 8,
      sym__primary_rule,
      sym_word,
      sym_list,
      sym_capture,
      sym_optional,
      sym_repeat,
      sym_repeat1,
      sym_parenthesized_rule,
  [2742] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(227), 2,
      sym__simple_identifier,
      aux_sym_word_token1,
    ACTIONS(225), 15,
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
  [2767] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(231), 2,
      sym__simple_identifier,
      aux_sym_word_token1,
    ACTIONS(229), 15,
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
  [2792] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(235), 2,
      sym__simple_identifier,
      aux_sym_word_token1,
    ACTIONS(233), 15,
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
  [2817] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(239), 2,
      sym__simple_identifier,
      aux_sym_word_token1,
    ACTIONS(237), 15,
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
  [2842] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(243), 2,
      sym__simple_identifier,
      aux_sym_word_token1,
    ACTIONS(241), 15,
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
  [2867] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(247), 2,
      sym__simple_identifier,
      aux_sym_word_token1,
    ACTIONS(245), 15,
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
  [2892] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(251), 2,
      sym__simple_identifier,
      aux_sym_word_token1,
    ACTIONS(249), 15,
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
  [2917] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(255), 2,
      sym__simple_identifier,
      aux_sym_word_token1,
    ACTIONS(253), 15,
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
  [2942] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(259), 2,
      sym__simple_identifier,
      aux_sym_word_token1,
    ACTIONS(257), 15,
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
  [2967] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(263), 2,
      sym__simple_identifier,
      aux_sym_word_token1,
    ACTIONS(261), 15,
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
  [2992] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(267), 2,
      sym__simple_identifier,
      aux_sym_word_token1,
    ACTIONS(265), 15,
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
  [3017] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(271), 2,
      sym__simple_identifier,
      aux_sym_word_token1,
    ACTIONS(269), 15,
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
  [3042] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(275), 2,
      sym__simple_identifier,
      aux_sym_word_token1,
    ACTIONS(273), 15,
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
  [3067] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(279), 2,
      sym__simple_identifier,
      aux_sym_word_token1,
    ACTIONS(277), 15,
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
  [3092] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(283), 2,
      sym__simple_identifier,
      aux_sym_word_token1,
    ACTIONS(281), 15,
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
  [3117] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(287), 2,
      sym__simple_identifier,
      aux_sym_word_token1,
    ACTIONS(285), 15,
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
  [3142] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(291), 2,
      sym__simple_identifier,
      aux_sym_word_token1,
    ACTIONS(289), 15,
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
  [3167] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(295), 2,
      sym__simple_identifier,
      aux_sym_word_token1,
    ACTIONS(293), 15,
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
  [3192] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(299), 2,
      sym__simple_identifier,
      aux_sym_word_token1,
    ACTIONS(297), 15,
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
  [3217] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(303), 2,
      sym__simple_identifier,
      aux_sym_word_token1,
    ACTIONS(301), 15,
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
  [3242] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(307), 2,
      sym__simple_identifier,
      aux_sym_word_token1,
    ACTIONS(305), 15,
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
  [3267] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(311), 2,
      sym__simple_identifier,
      aux_sym_word_token1,
    ACTIONS(309), 15,
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
  [3292] = 8,
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
    STATE(154), 2,
      sym__optional_seq,
      sym_seq,
    STATE(22), 8,
      sym__primary_rule,
      sym_word,
      sym_list,
      sym_capture,
      sym_optional,
      sym_repeat,
      sym_repeat1,
      sym_parenthesized_rule,
  [3326] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(313), 2,
      sym__simple_identifier,
      aux_sym_word_token1,
    ACTIONS(315), 11,
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
  [3347] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(317), 2,
      sym__simple_identifier,
      aux_sym_word_token1,
    ACTIONS(319), 11,
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
  [3368] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(321), 2,
      sym__simple_identifier,
      aux_sym_word_token1,
    ACTIONS(323), 11,
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
  [3389] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(325), 13,
      anon_sym_DASH,
      anon_sym_COLON,
      anon_sym_RBRACE,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_in,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_or,
      anon_sym_LPAREN2,
      anon_sym_COMMA,
  [3408] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(178), 1,
      anon_sym_STAR,
    ACTIONS(180), 1,
      anon_sym_PLUS,
    ACTIONS(327), 2,
      sym__simple_identifier,
      aux_sym_word_token1,
    ACTIONS(329), 9,
      anon_sym_COLON,
      anon_sym_PIPE,
      sym_end_anchor,
      anon_sym_LBRACE,
      anon_sym_LT,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [3433] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(331), 2,
      sym__simple_identifier,
      aux_sym_word_token1,
    ACTIONS(333), 11,
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
  [3454] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(335), 2,
      sym__simple_identifier,
      aux_sym_word_token1,
    ACTIONS(337), 11,
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
  [3475] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(339), 2,
      sym__simple_identifier,
      aux_sym_word_token1,
    ACTIONS(341), 11,
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
  [3496] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(343), 2,
      sym__simple_identifier,
      aux_sym_word_token1,
    ACTIONS(345), 11,
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
  [3517] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(299), 5,
      sym__simple_identifier,
      anon_sym_if,
      anon_sym_for,
      aux_sym_identifier_token1,
      sym_integer,
    ACTIONS(297), 7,
      sym__dedent,
      sym__string_start,
      anon_sym_DASH,
      anon_sym_LPAREN,
      anon_sym_key_LPAREN,
      anon_sym_sleep_LPAREN,
      sym_float,
  [3537] = 8,
    ACTIONS(158), 1,
      sym_comment,
    ACTIONS(347), 1,
      anon_sym_LBRACE,
    ACTIONS(349), 1,
      anon_sym_RBRACE,
    ACTIONS(355), 1,
      sym_string_content,
    ACTIONS(357), 1,
      sym__string_end,
    ACTIONS(351), 2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_RBRACE_RBRACE,
    ACTIONS(353), 2,
      sym_string_escape_sequence,
      sym__not_escapesequence,
    STATE(87), 4,
      sym_interpolation,
      sym__escape_interpolation,
      sym__not_interpolation,
      aux_sym_string_repeat1,
  [3567] = 8,
    ACTIONS(158), 1,
      sym_comment,
    ACTIONS(347), 1,
      anon_sym_LBRACE,
    ACTIONS(349), 1,
      anon_sym_RBRACE,
    ACTIONS(361), 1,
      sym_string_content,
    ACTIONS(363), 1,
      sym__string_end,
    ACTIONS(351), 2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_RBRACE_RBRACE,
    ACTIONS(359), 2,
      sym_string_escape_sequence,
      sym__not_escapesequence,
    STATE(88), 4,
      sym_interpolation,
      sym__escape_interpolation,
      sym__not_interpolation,
      aux_sym_string_repeat1,
  [3597] = 8,
    ACTIONS(158), 1,
      sym_comment,
    ACTIONS(365), 1,
      anon_sym_LBRACE,
    ACTIONS(368), 1,
      anon_sym_RBRACE,
    ACTIONS(377), 1,
      sym_string_content,
    ACTIONS(380), 1,
      sym__string_end,
    ACTIONS(371), 2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_RBRACE_RBRACE,
    ACTIONS(374), 2,
      sym_string_escape_sequence,
      sym__not_escapesequence,
    STATE(86), 4,
      sym_interpolation,
      sym__escape_interpolation,
      sym__not_interpolation,
      aux_sym_string_repeat1,
  [3627] = 8,
    ACTIONS(158), 1,
      sym_comment,
    ACTIONS(347), 1,
      anon_sym_LBRACE,
    ACTIONS(349), 1,
      anon_sym_RBRACE,
    ACTIONS(384), 1,
      sym_string_content,
    ACTIONS(386), 1,
      sym__string_end,
    ACTIONS(351), 2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_RBRACE_RBRACE,
    ACTIONS(382), 2,
      sym_string_escape_sequence,
      sym__not_escapesequence,
    STATE(86), 4,
      sym_interpolation,
      sym__escape_interpolation,
      sym__not_interpolation,
      aux_sym_string_repeat1,
  [3657] = 8,
    ACTIONS(158), 1,
      sym_comment,
    ACTIONS(347), 1,
      anon_sym_LBRACE,
    ACTIONS(349), 1,
      anon_sym_RBRACE,
    ACTIONS(384), 1,
      sym_string_content,
    ACTIONS(388), 1,
      sym__string_end,
    ACTIONS(351), 2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_RBRACE_RBRACE,
    ACTIONS(382), 2,
      sym_string_escape_sequence,
      sym__not_escapesequence,
    STATE(86), 4,
      sym_interpolation,
      sym__escape_interpolation,
      sym__not_interpolation,
      aux_sym_string_repeat1,
  [3687] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(255), 5,
      sym__simple_identifier,
      anon_sym_if,
      anon_sym_for,
      aux_sym_identifier_token1,
      sym_integer,
    ACTIONS(253), 7,
      sym__dedent,
      sym__string_start,
      anon_sym_DASH,
      anon_sym_LPAREN,
      anon_sym_key_LPAREN,
      anon_sym_sleep_LPAREN,
      sym_float,
  [3707] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(392), 1,
      anon_sym_LPAREN2,
    STATE(108), 1,
      sym_argument_list,
    ACTIONS(390), 10,
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
  [3729] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(251), 5,
      sym__simple_identifier,
      anon_sym_if,
      anon_sym_for,
      aux_sym_identifier_token1,
      sym_integer,
    ACTIONS(249), 7,
      sym__dedent,
      sym__string_start,
      anon_sym_DASH,
      anon_sym_LPAREN,
      anon_sym_key_LPAREN,
      anon_sym_sleep_LPAREN,
      sym_float,
  [3749] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(259), 5,
      sym__simple_identifier,
      anon_sym_if,
      anon_sym_for,
      aux_sym_identifier_token1,
      sym_integer,
    ACTIONS(257), 7,
      sym__dedent,
      sym__string_start,
      anon_sym_DASH,
      anon_sym_LPAREN,
      anon_sym_key_LPAREN,
      anon_sym_sleep_LPAREN,
      sym_float,
  [3769] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(307), 5,
      sym__simple_identifier,
      anon_sym_if,
      anon_sym_for,
      aux_sym_identifier_token1,
      sym_integer,
    ACTIONS(305), 7,
      sym__dedent,
      sym__string_start,
      anon_sym_DASH,
      anon_sym_LPAREN,
      anon_sym_key_LPAREN,
      anon_sym_sleep_LPAREN,
      sym_float,
  [3789] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(394), 1,
      anon_sym_COLON,
    ACTIONS(335), 2,
      sym__simple_identifier,
      aux_sym_word_token1,
    ACTIONS(337), 8,
      anon_sym_PIPE,
      sym_end_anchor,
      anon_sym_LBRACE,
      anon_sym_LT,
      anon_sym_LBRACK,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_LPAREN,
  [3810] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(397), 1,
      anon_sym_DASH,
    STATE(165), 1,
      aux_sym_matches_repeat2,
    STATE(222), 1,
      sym_identifier,
    ACTIONS(11), 2,
      anon_sym_and,
      anon_sym_not,
    ACTIONS(43), 2,
      sym__simple_identifier,
      aux_sym_identifier_token1,
    STATE(102), 2,
      sym_match,
      aux_sym_matches_repeat1,
    STATE(134), 2,
      sym_match_modifier,
      aux_sym_match_repeat1,
  [3839] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(399), 10,
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
  [3855] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(401), 1,
      anon_sym_EQ,
    ACTIONS(403), 1,
      anon_sym_LPAREN2,
    STATE(138), 1,
      sym_argument_list,
    ACTIONS(390), 7,
      sym__newline,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_or,
  [3877] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(405), 10,
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
  [3893] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(409), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(407), 7,
      anon_sym_DASH,
      anon_sym_COLON,
      anon_sym_RBRACE,
      anon_sym_PLUS,
      anon_sym_RPAREN,
      anon_sym_or,
      anon_sym_COMMA,
  [3911] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(411), 10,
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
  [3927] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(413), 10,
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
  [3943] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(418), 1,
      anon_sym_DASH,
    STATE(222), 1,
      sym_identifier,
    ACTIONS(415), 2,
      sym__simple_identifier,
      aux_sym_identifier_token1,
    ACTIONS(420), 2,
      anon_sym_and,
      anon_sym_not,
    STATE(102), 2,
      sym_match,
      aux_sym_matches_repeat1,
    STATE(134), 2,
      sym_match_modifier,
      aux_sym_match_repeat1,
  [3969] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(403), 1,
      anon_sym_LPAREN2,
    ACTIONS(423), 1,
      anon_sym_EQ,
    STATE(138), 1,
      sym_argument_list,
    ACTIONS(390), 7,
      sym__newline,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_or,
  [3991] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(425), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(409), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(407), 5,
      anon_sym_COLON,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_or,
      anon_sym_COMMA,
  [4011] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(427), 10,
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
  [4027] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(429), 10,
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
  [4043] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(431), 10,
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
  [4059] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(433), 10,
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
  [4075] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(435), 10,
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
  [4091] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(407), 10,
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
  [4107] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(437), 10,
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
  [4123] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(439), 10,
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
  [4139] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(441), 10,
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
  [4155] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(443), 1,
      anon_sym_RPAREN,
    ACTIONS(445), 1,
      anon_sym_or,
    ACTIONS(447), 1,
      anon_sym_COMMA,
    STATE(166), 1,
      aux_sym_argument_list_repeat1,
    ACTIONS(425), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(409), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [4180] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(445), 1,
      anon_sym_or,
    ACTIONS(449), 1,
      anon_sym_RPAREN,
    ACTIONS(451), 1,
      anon_sym_COMMA,
    STATE(161), 1,
      aux_sym_argument_list_repeat1,
    ACTIONS(425), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(409), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [4205] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(403), 1,
      anon_sym_LPAREN2,
    STATE(138), 1,
      sym_argument_list,
    ACTIONS(390), 7,
      sym__newline,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_or,
  [4224] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(325), 9,
      sym__newline,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_EQ,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_or,
      anon_sym_LPAREN2,
  [4239] = 3,
    ACTIONS(158), 1,
      sym_comment,
    ACTIONS(455), 2,
      sym_string_content,
      sym__string_end,
    ACTIONS(453), 6,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACE_LBRACE,
      anon_sym_RBRACE_RBRACE,
      sym_string_escape_sequence,
      sym__not_escapesequence,
  [4255] = 3,
    ACTIONS(158), 1,
      sym_comment,
    ACTIONS(174), 2,
      sym_string_content,
      sym__string_end,
    ACTIONS(162), 6,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACE_LBRACE,
      anon_sym_RBRACE_RBRACE,
      sym_string_escape_sequence,
      sym__not_escapesequence,
  [4271] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(445), 1,
      anon_sym_or,
    ACTIONS(425), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(457), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
    ACTIONS(409), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [4291] = 3,
    ACTIONS(158), 1,
      sym_comment,
    ACTIONS(461), 2,
      sym_string_content,
      sym__string_end,
    ACTIONS(459), 6,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACE_LBRACE,
      anon_sym_RBRACE_RBRACE,
      sym_string_escape_sequence,
      sym__not_escapesequence,
  [4307] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(445), 1,
      anon_sym_or,
    ACTIONS(463), 1,
      anon_sym_COLON,
    ACTIONS(425), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(409), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [4326] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(469), 1,
      anon_sym_or,
    ACTIONS(471), 1,
      sym__newline,
    ACTIONS(465), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(467), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [4345] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(405), 7,
      sym__newline,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_or,
  [4358] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(399), 7,
      sym__newline,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_or,
  [4371] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(437), 7,
      sym__newline,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_or,
  [4384] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(439), 7,
      sym__newline,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_or,
  [4397] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(407), 2,
      sym__newline,
      anon_sym_or,
    ACTIONS(465), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(467), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [4414] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(445), 1,
      anon_sym_or,
    ACTIONS(473), 1,
      anon_sym_RPAREN,
    ACTIONS(425), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(409), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [4433] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(445), 1,
      anon_sym_or,
    ACTIONS(475), 1,
      anon_sym_COLON,
    ACTIONS(425), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(409), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [4452] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(469), 1,
      anon_sym_or,
    ACTIONS(477), 1,
      sym__newline,
    ACTIONS(465), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(467), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [4471] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(445), 1,
      anon_sym_or,
    ACTIONS(479), 1,
      anon_sym_COLON,
    ACTIONS(425), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(409), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [4490] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(445), 1,
      anon_sym_or,
    ACTIONS(481), 1,
      anon_sym_RPAREN,
    ACTIONS(425), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(409), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [4509] = 5,
    ACTIONS(3), 1,
      sym_comment,
    STATE(189), 1,
      sym_identifier,
    ACTIONS(11), 2,
      anon_sym_and,
      anon_sym_not,
    ACTIONS(43), 2,
      sym__simple_identifier,
      aux_sym_identifier_token1,
    STATE(149), 2,
      sym_match_modifier,
      aux_sym_match_repeat1,
  [4528] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(435), 7,
      sym__newline,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_or,
  [4541] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(469), 1,
      anon_sym_or,
    ACTIONS(483), 1,
      sym__newline,
    ACTIONS(465), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(467), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [4560] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(427), 7,
      sym__newline,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_or,
  [4573] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(433), 7,
      sym__newline,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_or,
  [4586] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(441), 7,
      sym__newline,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_or,
  [4599] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(469), 1,
      anon_sym_or,
    ACTIONS(485), 1,
      sym__newline,
    ACTIONS(465), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(467), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [4618] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(445), 1,
      anon_sym_or,
    ACTIONS(487), 1,
      anon_sym_RBRACE,
    ACTIONS(425), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(409), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [4637] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(431), 7,
      sym__newline,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_or,
  [4650] = 2,
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
  [4663] = 2,
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
  [4676] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(445), 1,
      anon_sym_or,
    ACTIONS(489), 1,
      anon_sym_COLON,
    ACTIONS(425), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(409), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [4695] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(429), 7,
      sym__newline,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_or,
  [4708] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(467), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(407), 4,
      sym__newline,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_or,
  [4723] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(407), 7,
      sym__newline,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_or,
  [4736] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(491), 2,
      sym__simple_identifier,
      aux_sym_identifier_token1,
    ACTIONS(493), 2,
      anon_sym_and,
      anon_sym_not,
    STATE(149), 2,
      sym_match_modifier,
      aux_sym_match_repeat1,
  [4752] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(498), 1,
      sym_end_anchor,
    ACTIONS(496), 4,
      anon_sym_COLON,
      anon_sym_PIPE,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
  [4765] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(502), 1,
      anon_sym_PIPE,
    STATE(151), 1,
      aux_sym_choice_repeat1,
    ACTIONS(500), 3,
      anon_sym_COLON,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
  [4780] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(507), 1,
      anon_sym_PIPE,
    STATE(156), 1,
      aux_sym_choice_repeat1,
    ACTIONS(505), 3,
      anon_sym_COLON,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
  [4795] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(511), 1,
      anon_sym_DASH,
    ACTIONS(509), 4,
      sym__simple_identifier,
      anon_sym_and,
      anon_sym_not,
      aux_sym_identifier_token1,
  [4808] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(515), 1,
      sym_end_anchor,
    ACTIONS(513), 4,
      anon_sym_COLON,
      anon_sym_PIPE,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
  [4821] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(519), 1,
      anon_sym_DASH,
    ACTIONS(517), 4,
      sym__simple_identifier,
      anon_sym_and,
      anon_sym_not,
      aux_sym_identifier_token1,
  [4834] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(507), 1,
      anon_sym_PIPE,
    STATE(151), 1,
      aux_sym_choice_repeat1,
    ACTIONS(521), 3,
      anon_sym_COLON,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
  [4849] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(523), 4,
      anon_sym_COLON,
      anon_sym_PIPE,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
  [4859] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(525), 4,
      sym__simple_identifier,
      anon_sym_and,
      anon_sym_not,
      aux_sym_identifier_token1,
  [4869] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(500), 4,
      anon_sym_COLON,
      anon_sym_PIPE,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
  [4879] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(513), 4,
      anon_sym_COLON,
      anon_sym_PIPE,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
  [4889] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(221), 1,
      anon_sym_RPAREN,
    ACTIONS(527), 1,
      anon_sym_COMMA,
    STATE(171), 1,
      aux_sym_argument_list_repeat1,
  [4902] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(216), 1,
      sym_identifier,
    ACTIONS(96), 2,
      sym__simple_identifier,
      aux_sym_identifier_token1,
  [4913] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(225), 1,
      sym_identifier,
    ACTIONS(43), 2,
      sym__simple_identifier,
      aux_sym_identifier_token1,
  [4924] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(211), 1,
      sym_identifier,
    ACTIONS(43), 2,
      sym__simple_identifier,
      aux_sym_identifier_token1,
  [4935] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(529), 1,
      anon_sym_DASH,
    ACTIONS(531), 1,
      sym__newline,
    STATE(167), 1,
      aux_sym_matches_repeat2,
  [4948] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(223), 1,
      anon_sym_RPAREN,
    ACTIONS(533), 1,
      anon_sym_COMMA,
    STATE(171), 1,
      aux_sym_argument_list_repeat1,
  [4961] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(535), 1,
      anon_sym_DASH,
    ACTIONS(538), 1,
      sym__newline,
    STATE(167), 1,
      aux_sym_matches_repeat2,
  [4974] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(219), 1,
      sym_identifier,
    ACTIONS(43), 2,
      sym__simple_identifier,
      aux_sym_identifier_token1,
  [4985] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(194), 1,
      sym_identifier,
    ACTIONS(43), 2,
      sym__simple_identifier,
      aux_sym_identifier_token1,
  [4996] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(529), 1,
      anon_sym_DASH,
    ACTIONS(540), 1,
      sym__newline,
    STATE(167), 1,
      aux_sym_matches_repeat2,
  [5009] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(457), 1,
      anon_sym_RPAREN,
    ACTIONS(542), 1,
      anon_sym_COMMA,
    STATE(171), 1,
      aux_sym_argument_list_repeat1,
  [5022] = 3,
    ACTIONS(158), 1,
      sym_comment,
    ACTIONS(545), 1,
      aux_sym__implicit_string_argument_token1,
    STATE(202), 1,
      sym__implicit_string_argument,
  [5032] = 3,
    ACTIONS(158), 1,
      sym_comment,
    ACTIONS(547), 1,
      aux_sym__implicit_string_argument_token1,
    STATE(198), 1,
      sym__implicit_string_argument,
  [5042] = 3,
    ACTIONS(158), 1,
      sym_comment,
    ACTIONS(549), 1,
      aux_sym__implicit_string_argument_token1,
    STATE(206), 1,
      sym__implicit_string_argument,
  [5052] = 3,
    ACTIONS(158), 1,
      sym_comment,
    ACTIONS(551), 1,
      aux_sym__implicit_string_argument_token1,
    STATE(201), 1,
      sym__implicit_string_argument,
  [5062] = 3,
    ACTIONS(158), 1,
      sym_comment,
    ACTIONS(553), 1,
      aux_sym__implicit_string_argument_token1,
    STATE(196), 1,
      sym__implicit_string_argument,
  [5072] = 3,
    ACTIONS(158), 1,
      sym_comment,
    ACTIONS(555), 1,
      aux_sym__implicit_string_argument_token1,
    STATE(204), 1,
      sym__implicit_string_argument,
  [5082] = 3,
    ACTIONS(158), 1,
      sym_comment,
    ACTIONS(557), 1,
      aux_sym__implicit_string_argument_token1,
    STATE(203), 1,
      sym__implicit_string_argument,
  [5092] = 3,
    ACTIONS(158), 1,
      sym_comment,
    ACTIONS(559), 1,
      aux_sym__implicit_string_argument_token1,
    STATE(197), 1,
      sym__implicit_string_argument,
  [5102] = 3,
    ACTIONS(158), 1,
      sym_comment,
    ACTIONS(561), 1,
      aux_sym__implicit_string_argument_token1,
    STATE(200), 1,
      sym__implicit_string_argument,
  [5112] = 3,
    ACTIONS(158), 1,
      sym_comment,
    ACTIONS(563), 1,
      aux_sym__implicit_string_argument_token1,
    STATE(182), 1,
      sym__implicit_string_argument,
  [5122] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(565), 1,
      anon_sym_RPAREN,
  [5129] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(567), 1,
      anon_sym_RPAREN,
  [5136] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(569), 1,
      anon_sym_COLON,
  [5143] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(571), 1,
      anon_sym_COLON,
  [5150] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(573), 1,
      anon_sym_COLON,
  [5157] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(575), 1,
      anon_sym_COLON,
  [5164] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(577), 1,
      anon_sym_COLON,
  [5171] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(579), 1,
      anon_sym_COLON,
  [5178] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(581), 1,
      anon_sym_COLON,
  [5185] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(583), 1,
      ts_builtin_sym_end,
  [5192] = 2,
    ACTIONS(158), 1,
      sym_comment,
    ACTIONS(585), 1,
      sym_implicit_string,
  [5199] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(45), 1,
      ts_builtin_sym_end,
  [5206] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(587), 1,
      anon_sym_in,
  [5213] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(589), 1,
      ts_builtin_sym_end,
  [5220] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(591), 1,
      anon_sym_RPAREN,
  [5227] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(593), 1,
      anon_sym_RPAREN,
  [5234] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(595), 1,
      anon_sym_RPAREN,
  [5241] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(597), 1,
      anon_sym_COLON,
  [5248] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(599), 1,
      anon_sym_RPAREN,
  [5255] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(601), 1,
      anon_sym_RPAREN,
  [5262] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(603), 1,
      anon_sym_RPAREN,
  [5269] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(605), 1,
      anon_sym_RPAREN,
  [5276] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(607), 1,
      anon_sym_RPAREN,
  [5283] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(609), 1,
      anon_sym_COLON,
  [5290] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(611), 1,
      anon_sym_RPAREN,
  [5297] = 2,
    ACTIONS(158), 1,
      sym_comment,
    ACTIONS(613), 1,
      sym_implicit_string,
  [5304] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(615), 1,
      sym__newline,
  [5311] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(617), 1,
      anon_sym_RBRACK,
  [5318] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(449), 1,
      anon_sym_RPAREN,
  [5325] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(619), 1,
      anon_sym_GT,
  [5332] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(621), 1,
      anon_sym_COLON,
  [5339] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(623), 1,
      anon_sym_COLON,
  [5346] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(625), 1,
      anon_sym_COLON,
  [5353] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(627), 1,
      anon_sym_COLON,
  [5360] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(629), 1,
      sym__newline,
  [5367] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(631), 1,
      anon_sym_COLON,
  [5374] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(633), 1,
      sym__newline,
  [5381] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(635), 1,
      anon_sym_RBRACE,
  [5388] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(637), 1,
      anon_sym_COLON,
  [5395] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(443), 1,
      anon_sym_RPAREN,
  [5402] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(639), 1,
      anon_sym_COLON,
  [5409] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(641), 1,
      anon_sym_COLON,
  [5416] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(643), 1,
      anon_sym_COLON,
  [5423] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(645), 1,
      anon_sym_in,
  [5430] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(647), 1,
      anon_sym_COLON,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 117,
  [SMALL_STATE(4)] = 231,
  [SMALL_STATE(5)] = 345,
  [SMALL_STATE(6)] = 412,
  [SMALL_STATE(7)] = 478,
  [SMALL_STATE(8)] = 544,
  [SMALL_STATE(9)] = 610,
  [SMALL_STATE(10)] = 676,
  [SMALL_STATE(11)] = 742,
  [SMALL_STATE(12)] = 808,
  [SMALL_STATE(13)] = 874,
  [SMALL_STATE(14)] = 940,
  [SMALL_STATE(15)] = 1004,
  [SMALL_STATE(16)] = 1068,
  [SMALL_STATE(17)] = 1134,
  [SMALL_STATE(18)] = 1189,
  [SMALL_STATE(19)] = 1249,
  [SMALL_STATE(20)] = 1309,
  [SMALL_STATE(21)] = 1369,
  [SMALL_STATE(22)] = 1429,
  [SMALL_STATE(23)] = 1475,
  [SMALL_STATE(24)] = 1526,
  [SMALL_STATE(25)] = 1577,
  [SMALL_STATE(26)] = 1621,
  [SMALL_STATE(27)] = 1661,
  [SMALL_STATE(28)] = 1709,
  [SMALL_STATE(29)] = 1757,
  [SMALL_STATE(30)] = 1797,
  [SMALL_STATE(31)] = 1841,
  [SMALL_STATE(32)] = 1889,
  [SMALL_STATE(33)] = 1937,
  [SMALL_STATE(34)] = 1982,
  [SMALL_STATE(35)] = 2027,
  [SMALL_STATE(36)] = 2072,
  [SMALL_STATE(37)] = 2117,
  [SMALL_STATE(38)] = 2162,
  [SMALL_STATE(39)] = 2207,
  [SMALL_STATE(40)] = 2252,
  [SMALL_STATE(41)] = 2297,
  [SMALL_STATE(42)] = 2342,
  [SMALL_STATE(43)] = 2387,
  [SMALL_STATE(44)] = 2432,
  [SMALL_STATE(45)] = 2477,
  [SMALL_STATE(46)] = 2522,
  [SMALL_STATE(47)] = 2567,
  [SMALL_STATE(48)] = 2612,
  [SMALL_STATE(49)] = 2657,
  [SMALL_STATE(50)] = 2702,
  [SMALL_STATE(51)] = 2742,
  [SMALL_STATE(52)] = 2767,
  [SMALL_STATE(53)] = 2792,
  [SMALL_STATE(54)] = 2817,
  [SMALL_STATE(55)] = 2842,
  [SMALL_STATE(56)] = 2867,
  [SMALL_STATE(57)] = 2892,
  [SMALL_STATE(58)] = 2917,
  [SMALL_STATE(59)] = 2942,
  [SMALL_STATE(60)] = 2967,
  [SMALL_STATE(61)] = 2992,
  [SMALL_STATE(62)] = 3017,
  [SMALL_STATE(63)] = 3042,
  [SMALL_STATE(64)] = 3067,
  [SMALL_STATE(65)] = 3092,
  [SMALL_STATE(66)] = 3117,
  [SMALL_STATE(67)] = 3142,
  [SMALL_STATE(68)] = 3167,
  [SMALL_STATE(69)] = 3192,
  [SMALL_STATE(70)] = 3217,
  [SMALL_STATE(71)] = 3242,
  [SMALL_STATE(72)] = 3267,
  [SMALL_STATE(73)] = 3292,
  [SMALL_STATE(74)] = 3326,
  [SMALL_STATE(75)] = 3347,
  [SMALL_STATE(76)] = 3368,
  [SMALL_STATE(77)] = 3389,
  [SMALL_STATE(78)] = 3408,
  [SMALL_STATE(79)] = 3433,
  [SMALL_STATE(80)] = 3454,
  [SMALL_STATE(81)] = 3475,
  [SMALL_STATE(82)] = 3496,
  [SMALL_STATE(83)] = 3517,
  [SMALL_STATE(84)] = 3537,
  [SMALL_STATE(85)] = 3567,
  [SMALL_STATE(86)] = 3597,
  [SMALL_STATE(87)] = 3627,
  [SMALL_STATE(88)] = 3657,
  [SMALL_STATE(89)] = 3687,
  [SMALL_STATE(90)] = 3707,
  [SMALL_STATE(91)] = 3729,
  [SMALL_STATE(92)] = 3749,
  [SMALL_STATE(93)] = 3769,
  [SMALL_STATE(94)] = 3789,
  [SMALL_STATE(95)] = 3810,
  [SMALL_STATE(96)] = 3839,
  [SMALL_STATE(97)] = 3855,
  [SMALL_STATE(98)] = 3877,
  [SMALL_STATE(99)] = 3893,
  [SMALL_STATE(100)] = 3911,
  [SMALL_STATE(101)] = 3927,
  [SMALL_STATE(102)] = 3943,
  [SMALL_STATE(103)] = 3969,
  [SMALL_STATE(104)] = 3991,
  [SMALL_STATE(105)] = 4011,
  [SMALL_STATE(106)] = 4027,
  [SMALL_STATE(107)] = 4043,
  [SMALL_STATE(108)] = 4059,
  [SMALL_STATE(109)] = 4075,
  [SMALL_STATE(110)] = 4091,
  [SMALL_STATE(111)] = 4107,
  [SMALL_STATE(112)] = 4123,
  [SMALL_STATE(113)] = 4139,
  [SMALL_STATE(114)] = 4155,
  [SMALL_STATE(115)] = 4180,
  [SMALL_STATE(116)] = 4205,
  [SMALL_STATE(117)] = 4224,
  [SMALL_STATE(118)] = 4239,
  [SMALL_STATE(119)] = 4255,
  [SMALL_STATE(120)] = 4271,
  [SMALL_STATE(121)] = 4291,
  [SMALL_STATE(122)] = 4307,
  [SMALL_STATE(123)] = 4326,
  [SMALL_STATE(124)] = 4345,
  [SMALL_STATE(125)] = 4358,
  [SMALL_STATE(126)] = 4371,
  [SMALL_STATE(127)] = 4384,
  [SMALL_STATE(128)] = 4397,
  [SMALL_STATE(129)] = 4414,
  [SMALL_STATE(130)] = 4433,
  [SMALL_STATE(131)] = 4452,
  [SMALL_STATE(132)] = 4471,
  [SMALL_STATE(133)] = 4490,
  [SMALL_STATE(134)] = 4509,
  [SMALL_STATE(135)] = 4528,
  [SMALL_STATE(136)] = 4541,
  [SMALL_STATE(137)] = 4560,
  [SMALL_STATE(138)] = 4573,
  [SMALL_STATE(139)] = 4586,
  [SMALL_STATE(140)] = 4599,
  [SMALL_STATE(141)] = 4618,
  [SMALL_STATE(142)] = 4637,
  [SMALL_STATE(143)] = 4650,
  [SMALL_STATE(144)] = 4663,
  [SMALL_STATE(145)] = 4676,
  [SMALL_STATE(146)] = 4695,
  [SMALL_STATE(147)] = 4708,
  [SMALL_STATE(148)] = 4723,
  [SMALL_STATE(149)] = 4736,
  [SMALL_STATE(150)] = 4752,
  [SMALL_STATE(151)] = 4765,
  [SMALL_STATE(152)] = 4780,
  [SMALL_STATE(153)] = 4795,
  [SMALL_STATE(154)] = 4808,
  [SMALL_STATE(155)] = 4821,
  [SMALL_STATE(156)] = 4834,
  [SMALL_STATE(157)] = 4849,
  [SMALL_STATE(158)] = 4859,
  [SMALL_STATE(159)] = 4869,
  [SMALL_STATE(160)] = 4879,
  [SMALL_STATE(161)] = 4889,
  [SMALL_STATE(162)] = 4902,
  [SMALL_STATE(163)] = 4913,
  [SMALL_STATE(164)] = 4924,
  [SMALL_STATE(165)] = 4935,
  [SMALL_STATE(166)] = 4948,
  [SMALL_STATE(167)] = 4961,
  [SMALL_STATE(168)] = 4974,
  [SMALL_STATE(169)] = 4985,
  [SMALL_STATE(170)] = 4996,
  [SMALL_STATE(171)] = 5009,
  [SMALL_STATE(172)] = 5022,
  [SMALL_STATE(173)] = 5032,
  [SMALL_STATE(174)] = 5042,
  [SMALL_STATE(175)] = 5052,
  [SMALL_STATE(176)] = 5062,
  [SMALL_STATE(177)] = 5072,
  [SMALL_STATE(178)] = 5082,
  [SMALL_STATE(179)] = 5092,
  [SMALL_STATE(180)] = 5102,
  [SMALL_STATE(181)] = 5112,
  [SMALL_STATE(182)] = 5122,
  [SMALL_STATE(183)] = 5129,
  [SMALL_STATE(184)] = 5136,
  [SMALL_STATE(185)] = 5143,
  [SMALL_STATE(186)] = 5150,
  [SMALL_STATE(187)] = 5157,
  [SMALL_STATE(188)] = 5164,
  [SMALL_STATE(189)] = 5171,
  [SMALL_STATE(190)] = 5178,
  [SMALL_STATE(191)] = 5185,
  [SMALL_STATE(192)] = 5192,
  [SMALL_STATE(193)] = 5199,
  [SMALL_STATE(194)] = 5206,
  [SMALL_STATE(195)] = 5213,
  [SMALL_STATE(196)] = 5220,
  [SMALL_STATE(197)] = 5227,
  [SMALL_STATE(198)] = 5234,
  [SMALL_STATE(199)] = 5241,
  [SMALL_STATE(200)] = 5248,
  [SMALL_STATE(201)] = 5255,
  [SMALL_STATE(202)] = 5262,
  [SMALL_STATE(203)] = 5269,
  [SMALL_STATE(204)] = 5276,
  [SMALL_STATE(205)] = 5283,
  [SMALL_STATE(206)] = 5290,
  [SMALL_STATE(207)] = 5297,
  [SMALL_STATE(208)] = 5304,
  [SMALL_STATE(209)] = 5311,
  [SMALL_STATE(210)] = 5318,
  [SMALL_STATE(211)] = 5325,
  [SMALL_STATE(212)] = 5332,
  [SMALL_STATE(213)] = 5339,
  [SMALL_STATE(214)] = 5346,
  [SMALL_STATE(215)] = 5353,
  [SMALL_STATE(216)] = 5360,
  [SMALL_STATE(217)] = 5367,
  [SMALL_STATE(218)] = 5374,
  [SMALL_STATE(219)] = 5381,
  [SMALL_STATE(220)] = 5388,
  [SMALL_STATE(221)] = 5395,
  [SMALL_STATE(222)] = 5402,
  [SMALL_STATE(223)] = 5409,
  [SMALL_STATE(224)] = 5416,
  [SMALL_STATE(225)] = 5423,
  [SMALL_STATE(226)] = 5430,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(94),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(158),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(80),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(77),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declarations, 1, 0, 0),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_declarations_repeat1, 2, 0, 0),
  [51] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_declarations_repeat1, 2, 0, 0), SHIFT_REPEAT(80),
  [54] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_declarations_repeat1, 2, 0, 0), SHIFT_REPEAT(73),
  [57] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_declarations_repeat1, 2, 0, 0), SHIFT_REPEAT(168),
  [60] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_declarations_repeat1, 2, 0, 0), SHIFT_REPEAT(164),
  [63] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_declarations_repeat1, 2, 0, 0), SHIFT_REPEAT(30),
  [66] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_declarations_repeat1, 2, 0, 0), SHIFT_REPEAT(25),
  [69] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_declarations_repeat1, 2, 0, 0), SHIFT_REPEAT(177),
  [72] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_declarations_repeat1, 2, 0, 0), SHIFT_REPEAT(178),
  [75] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_declarations_repeat1, 2, 0, 0), SHIFT_REPEAT(172),
  [78] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_declarations_repeat1, 2, 0, 0), SHIFT_REPEAT(180),
  [81] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_declarations_repeat1, 2, 0, 0), SHIFT_REPEAT(181),
  [84] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_declarations_repeat1, 2, 0, 0), SHIFT_REPEAT(173),
  [87] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_declarations_repeat1, 2, 0, 0), SHIFT_REPEAT(187),
  [90] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_declarations_repeat1, 2, 0, 0), SHIFT_REPEAT(214),
  [93] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_declarations_repeat1, 2, 0, 0), SHIFT_REPEAT(176),
  [96] = {.entry = {.count = 1, .reusable = false}}, SHIFT(117),
  [98] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [102] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [104] = {.entry = {.count = 1, .reusable = false}}, SHIFT(163),
  [106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [110] = {.entry = {.count = 1, .reusable = false}}, SHIFT(143),
  [112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [118] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [120] = {.entry = {.count = 1, .reusable = false}}, SHIFT(169),
  [122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [126] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(117),
  [129] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(38),
  [132] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(40),
  [135] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(49),
  [138] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(163),
  [141] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(175),
  [144] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(179),
  [147] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(143),
  [150] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(143),
  [153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0),
  [155] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(85),
  [158] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [160] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [162] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__not_interpolation, 1, 0, 0),
  [164] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [166] = {.entry = {.count = 1, .reusable = false}}, SHIFT(176),
  [168] = {.entry = {.count = 1, .reusable = false}}, SHIFT(174),
  [170] = {.entry = {.count = 1, .reusable = false}}, SHIFT(100),
  [172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [174] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__not_interpolation, 1, 0, 0),
  [176] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__optional_seq, 1, 0, 0),
  [178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [198] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_seq_repeat1, 2, 0, 0), SHIFT_REPEAT(80),
  [201] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_seq_repeat1, 2, 0, 0),
  [203] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_seq_repeat1, 2, 0, 0), SHIFT_REPEAT(168),
  [206] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_seq_repeat1, 2, 0, 0), SHIFT_REPEAT(164),
  [209] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_seq_repeat1, 2, 0, 0), SHIFT_REPEAT(30),
  [212] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_seq_repeat1, 2, 0, 0), SHIFT_REPEAT(25),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [219] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_seq, 2, 0, 0),
  [221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [225] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_gamepad_declaration, 3, 0, 4),
  [227] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_gamepad_declaration, 3, 0, 4),
  [229] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_matches, 3, 0, 0),
  [231] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_matches, 3, 0, 0),
  [233] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declaration, 1, 0, 0),
  [235] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_declaration, 1, 0, 0),
  [237] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_settings_declaration, 3, 0, 4),
  [239] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_settings_declaration, 3, 0, 4),
  [241] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 2, 0, 0),
  [243] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 2, 0, 0),
  [245] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag_import_declaration, 4, 0, 4),
  [247] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag_import_declaration, 4, 0, 4),
  [249] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 4, 0, 13),
  [251] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_statement, 4, 0, 13),
  [253] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_statement, 2, 0, 9),
  [255] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression_statement, 2, 0, 9),
  [257] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_statement, 4, 0, 4),
  [259] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assignment_statement, 4, 0, 4),
  [261] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statements, 2, 0, 0),
  [263] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__statements, 2, 0, 0),
  [265] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 1, 0, 0),
  [267] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 1, 0, 0),
  [269] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_matches, 2, 0, 0),
  [271] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_matches, 2, 0, 0),
  [273] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_key_binding_declaration, 3, 0, 7),
  [275] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_key_binding_declaration, 3, 0, 7),
  [277] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parrot_declaration, 3, 0, 4),
  [279] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parrot_declaration, 3, 0, 4),
  [281] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_noise_declaration, 3, 0, 4),
  [283] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_noise_declaration, 3, 0, 4),
  [285] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_deck_declaration, 3, 0, 4),
  [287] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_deck_declaration, 3, 0, 4),
  [289] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_face_declaration, 3, 0, 4),
  [291] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_face_declaration, 3, 0, 4),
  [293] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_app_declaration, 3, 0, 4),
  [295] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_app_declaration, 3, 0, 4),
  [297] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_statement, 6, 0, 14),
  [299] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_for_statement, 6, 0, 14),
  [301] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command_declaration, 3, 0, 4),
  [303] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_command_declaration, 3, 0, 4),
  [305] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 1, 0, 0),
  [307] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_statement, 1, 0, 0),
  [309] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statements, 1, 0, 5),
  [311] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__statements, 1, 0, 5),
  [313] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_repeat1, 2, 0, 0),
  [315] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_repeat1, 2, 0, 0),
  [317] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 3, 0, 1),
  [319] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 3, 0, 1),
  [321] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_repeat, 2, 0, 0),
  [323] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_repeat, 2, 0, 0),
  [325] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 1, 0, 0),
  [327] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_seq_repeat1, 1, 0, 0),
  [329] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_seq_repeat1, 1, 0, 0),
  [331] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parenthesized_rule, 3, 0, 0),
  [333] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parenthesized_rule, 3, 0, 0),
  [335] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_word, 1, 0, 0),
  [337] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_word, 1, 0, 0),
  [339] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_optional, 3, 0, 0),
  [341] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_optional, 3, 0, 0),
  [343] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_capture, 3, 0, 2),
  [345] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_capture, 3, 0, 2),
  [347] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [349] = {.entry = {.count = 1, .reusable = false}}, SHIFT(119),
  [351] = {.entry = {.count = 1, .reusable = false}}, SHIFT(121),
  [353] = {.entry = {.count = 1, .reusable = false}}, SHIFT(87),
  [355] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [357] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [359] = {.entry = {.count = 1, .reusable = false}}, SHIFT(88),
  [361] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [363] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [365] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2, 0, 0), SHIFT_REPEAT(17),
  [368] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2, 0, 0), SHIFT_REPEAT(119),
  [371] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2, 0, 0), SHIFT_REPEAT(121),
  [374] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2, 0, 0), SHIFT_REPEAT(86),
  [377] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2, 0, 0), SHIFT_REPEAT(86),
  [380] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2, 0, 0),
  [382] = {.entry = {.count = 1, .reusable = false}}, SHIFT(86),
  [384] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [386] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [388] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [390] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 1, 0, 6),
  [392] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [394] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_word, 1, 0, 0), REDUCE(sym_identifier, 1, 0, 0),
  [397] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [399] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 3, 0, 0),
  [401] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [403] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [405] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2, 0, 0),
  [407] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_operator, 3, 0, 11),
  [409] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [411] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 1, 0, 0),
  [413] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parenthesized_expression, 3, 0, 0),
  [415] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_matches_repeat1, 2, 0, 0), SHIFT_REPEAT(77),
  [418] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_matches_repeat1, 2, 0, 0),
  [420] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_matches_repeat1, 2, 0, 0), SHIFT_REPEAT(158),
  [423] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [425] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [427] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 2, 0, 0),
  [429] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sleep_action, 3, 0, 3),
  [431] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3, 0, 0),
  [433] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_action, 2, 0, 10),
  [435] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_key_action, 3, 0, 3),
  [437] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 4, 0, 0),
  [439] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_operator, 2, 0, 8),
  [441] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 5, 0, 0),
  [443] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [445] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [447] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [449] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [451] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [453] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_interpolation, 3, 0, 0),
  [455] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interpolation, 3, 0, 0),
  [457] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_argument_list_repeat1, 2, 0, 0),
  [459] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__escape_interpolation, 1, 0, 0),
  [461] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__escape_interpolation, 1, 0, 0),
  [463] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [465] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [467] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [469] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [471] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [473] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [475] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [477] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [479] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [481] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [483] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [485] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [487] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [489] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [491] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_match_repeat1, 2, 0, 0),
  [493] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_match_repeat1, 2, 0, 0), SHIFT_REPEAT(158),
  [496] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__optional_anchor, 1, 0, 0),
  [498] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [500] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_choice_repeat1, 2, 0, 0),
  [502] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_choice_repeat1, 2, 0, 0), SHIFT_REPEAT(50),
  [505] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__optional_choice, 1, 0, 0),
  [507] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [509] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_match, 4, 0, 4),
  [511] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_match, 4, 0, 4),
  [513] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__optional_anchor, 2, 0, 0),
  [515] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [517] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_match, 5, 0, 12),
  [519] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_match, 5, 0, 12),
  [521] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_choice, 2, 0, 0),
  [523] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__optional_anchor, 3, 0, 0),
  [525] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_match_modifier, 1, 0, 0),
  [527] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [529] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [531] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [533] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [535] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_matches_repeat2, 2, 0, 0), SHIFT_REPEAT(167),
  [538] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_matches_repeat2, 2, 0, 0),
  [540] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [542] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_argument_list_repeat1, 2, 0, 0), SHIFT_REPEAT(36),
  [545] = {.entry = {.count = 1, .reusable = false}}, SHIFT(202),
  [547] = {.entry = {.count = 1, .reusable = false}}, SHIFT(198),
  [549] = {.entry = {.count = 1, .reusable = false}}, SHIFT(206),
  [551] = {.entry = {.count = 1, .reusable = false}}, SHIFT(201),
  [553] = {.entry = {.count = 1, .reusable = false}}, SHIFT(196),
  [555] = {.entry = {.count = 1, .reusable = false}}, SHIFT(204),
  [557] = {.entry = {.count = 1, .reusable = false}}, SHIFT(203),
  [559] = {.entry = {.count = 1, .reusable = false}}, SHIFT(197),
  [561] = {.entry = {.count = 1, .reusable = false}}, SHIFT(200),
  [563] = {.entry = {.count = 1, .reusable = false}}, SHIFT(182),
  [565] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [567] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [569] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_gamepad_binding, 3, 0, 3),
  [571] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_deck_binding, 3, 0, 3),
  [573] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_face_binding, 3, 0, 3),
  [575] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [577] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_app_binding, 3, 0, 3),
  [579] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [581] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule, 1, 0, 0),
  [583] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [585] = {.entry = {.count = 1, .reusable = false}}, SHIFT(218),
  [587] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [589] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2, 0, 0),
  [591] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [593] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [595] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [597] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [599] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [601] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [603] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [605] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [607] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [609] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_noise_binding, 3, 0, 3),
  [611] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [613] = {.entry = {.count = 1, .reusable = false}}, SHIFT(208),
  [615] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [617] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [619] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [621] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parrot_binding, 3, 0, 3),
  [623] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [625] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [627] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [629] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [631] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [633] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [635] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [637] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [639] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [641] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [643] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [645] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [647] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
};

enum ts_external_scanner_symbol_identifiers {
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
    [ts_external_token__dedent] = true,
    [ts_external_token__string_start] = true,
    [ts_external_token_comment] = true,
  },
  [4] = {
    [ts_external_token__indent] = true,
    [ts_external_token__string_start] = true,
    [ts_external_token_comment] = true,
  },
  [5] = {
    [ts_external_token__string_start] = true,
    [ts_external_token_string_content] = true,
    [ts_external_token__string_end] = true,
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

#ifdef __cplusplus
extern "C" {
#endif
void *tree_sitter_talon_external_scanner_create(void);
void tree_sitter_talon_external_scanner_destroy(void *);
bool tree_sitter_talon_external_scanner_scan(void *, TSLexer *, const bool *);
unsigned tree_sitter_talon_external_scanner_serialize(void *, char *);
void tree_sitter_talon_external_scanner_deserialize(void *, const char *, unsigned);

#ifdef TREE_SITTER_HIDE_SYMBOLS
#define TS_PUBLIC
#elif defined(_WIN32)
#define TS_PUBLIC __declspec(dllexport)
#else
#define TS_PUBLIC __attribute__((visibility("default")))
#endif

TS_PUBLIC const TSLanguage *tree_sitter_talon(void) {
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
