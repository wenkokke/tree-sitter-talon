module.exports = grammar({
  name: "talon",

  externals: ($) => [
    $._newline,
    $._indent,
    $._dedent,
    $._string_start,
    $._string_content,
    $._string_end,

    // Mark comments as external tokens so that the external scanner is always
    // invoked, even if no external token is expected. This allows for better
    // error recovery, because the external scanner can maintain the overall
    // structure by returning dedent tokens whenever a dedent occurs, even
    // if no dedent is expected.
    $.comment,

    // Allow the external scanner to check for the validity of closing brackets
    // so that it can avoid returning dedent tokens between brackets.
    "]",
    ")",
    "}",
  ],

  rules: {
    source_file: ($) => seq(optional($.context_matches)),

    /* Context Header */

    context_matches: ($) =>
      seq(repeat($.context_matches_stmt), seq("-", $._newline)),

    context_matches_stmt: ($) =>
      choice(
        seq(
          optional("and"),
          optional("not"),
          field("key", $.qualified_identifier),
          ":",
          field("value", /.*/),
          $._newline
        ),
        $.comment
      ),

    /* Tags */
    /* Settings */
    /* Commands */
    /* Rules */

    top_level_rule: ($) =>
      seq(optional($.start_anchor), $.rule, optional($.end_anchor)),

    start_anchor: ($) => "^",
    end_anchor: ($) => "$",

    rule: ($) => choice($.primary_rule, $.parenthesized_rule),

    parenthesized_rule: ($) => seq("(", repeat1($.primary_rule), ")"),

    primary_rule: ($) =>
      choice(
        $.word,
        $.optional,
        $.repeat,
        $.repeat1,
        $.choice,
        $.list,
        $.capture,
        $.parenthesized_rule
      ),

    word: ($) => /[a-z]+/,

    optional: ($) => seq("[", $.rule, "]"),

    repeat: ($) => seq($.primary_rule, "*"),

    repeat1: ($) => seq($.primary_rule, "+"),

    choice: ($) => seq($.primary_rule, "|", $.primary_rule),

    list: ($) => seq("{", $.qualified_identifier, "}"),

    capture: ($) => seq("<", $.qualified_identifier, ">"),

    qualified_identifier: ($) =>
      choice(
        $.identifier,
        seq(field("namespace", $.identifier), ".", $.qualified_identifier)
      ),

    identifier: ($) => /[a-z_]+/,

    number: ($) => /\d+/,

    comment: ($) => token(seq("#", /.*/)),
  },
});
