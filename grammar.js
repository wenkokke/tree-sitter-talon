const PREC = {
  parenthesized_expression: 1,
  or: 10,
  plus: 18,
  times: 19,
  action: 22,
};

module.exports = grammar({
  name: "talon",

  extras: ($) => [$.comment],

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
    source_file: ($) => seq(optional($.context), repeat($.declaration)),

    comment: ($) => token(seq("#", /.*/)),

    /* Context */

    context: ($) => seq(repeat($.match_statement), "-", $._newline),

    match_statement: ($) =>
      seq(
        optional("and"),
        optional("not"),
        field("key", $.qualified_identifier),
        ":",
        field("value", /.*/),
        $._newline
      ),

    /* Declarations */
    declaration: ($) =>
      choice($.tag_declaration, $.settings_declaration, $.command_declaration),

    /* Tags */
    tag_declaration: ($) => seq("tag()", ":", $.qualified_identifier),

    /* Settings */
    settings_declaration: ($) => seq("settings()", ":", $._settings_suite),

    _settings_suite: ($) =>
      choice(
        alias($.settings_statement, $.settings_block),
        seq($._indent, $.settings_block),
        alias($._newline, $.settings_block)
      ),

    settings_block: ($) => seq(repeat($.settings_statement), $._dedent),

    settings_statement: ($) =>
      seq(field("left", $.qualified_identifier), "=", field("right", $.value)),

    /* Commands */
    command_declaration: ($) => seq($.top_level_rule, ":", $._command_suite),

    _command_suite: ($) =>
      choice(
        alias($.statement, $.command_block),
        seq($._indent, $.command_block),
        alias($._newline, $.command_block)
      ),

    command_block: ($) => seq(repeat($.statement), $._dedent),

    /* Rules */

    top_level_rule: ($) =>
      seq(optional($.start_anchor), $.rule, optional($.end_anchor)),

    start_anchor: ($) => "^",
    end_anchor: ($) => "$",

    rule: ($) => choice($.choice, $.primary_rule),

    primary_rule: ($) =>
      choice(
        $.word,
        $.optional,
        $.repeat,
        $.repeat1,
        $.list,
        $.capture,
        $.parenthesized_rule
      ),

    parenthesized_rule: ($) => seq("(", repeat1($.rule), ")"),

    word: ($) => /[a-z]+/,

    optional: ($) => seq("[", $.rule, "]"),

    repeat: ($) => seq($.primary_rule, "*"),

    repeat1: ($) => seq($.primary_rule, "+"),

    choice: ($) => seq($.primary_rule, "|", $.rule),

    list: ($) => seq("{", $.qualified_identifier, "}"),

    capture: ($) => seq("<", $.qualified_identifier, ">"),

    /* Talon Script */

    statement: ($) =>
      choice($.expression, $.key_statement, $.sleep_statement, $.assignment),

    key_statement: ($) => seq("key", "(", $._string_content, ")"),

    sleep_statement: ($) => seq("sleep", "(", $._string_content, ")"),

    assignment: ($) =>
      seq(field("left", $.identifier), "=", field("right", $.expression)),

    /* Expressions */

    expression: ($) =>
      choice(
        $.binary_operator,
        $.string,
        $.integer,
        $.float,
        $.action,
        $.parenthesized_expression
      ),

    parenthesized_expression: ($) =>
      prec(PREC.parenthesized_expression, seq("(", $.expression, ")")),

    binary_operator: ($) => {
      const table = [
        [prec.left, "+", PREC.plus],
        [prec.left, "-", PREC.plus],
        [prec.left, "*", PREC.times],
        [prec.left, "/", PREC.times],
        [prec.left, "%", PREC.times],
        [prec.left, "or", PREC.or],
      ];

      return choice(
        ...table.map(([fn, operator, precedence]) =>
          fn(
            precedence,
            seq(
              field("left", $.expression),
              field("operator", operator),
              field("right", $.expression)
            )
          )
        )
      );
    },

    action: ($) =>
      prec(
        PREC.action,
        seq(
          field("action", $.qualified_identifier),
          field("arguments", $.argument_list)
        )
      ),

    argument_list: ($) =>
      seq("(", optional(commaSep1($.expression)), optional(","), ")"),

    /* Values */

    value: ($) => choice($.string, $.number),

    /* Numbers */

    number: ($) => choice($.integer, $.float),

    integer: ($) =>
      token(
        choice(
          seq(choice("0x", "0X"), repeat1(/_?[A-Fa-f0-9]+/), optional(/[Ll]/)),
          seq(choice("0o", "0O"), repeat1(/_?[0-7]+/), optional(/[Ll]/)),
          seq(choice("0b", "0B"), repeat1(/_?[0-1]+/), optional(/[Ll]/)),
          seq(
            repeat1(/[0-9]+_?/),
            choice(
              optional(/[Ll]/), // long numbers
              optional(/[jJ]/) // complex numbers
            )
          )
        )
      ),

    float: ($) => {
      const digits = repeat1(/[0-9]+_?/);
      const exponent = seq(/[eE][\+-]?/, digits);

      return token(
        seq(
          choice(
            seq(digits, ".", optional(digits), optional(exponent)),
            seq(optional(digits), ".", digits, optional(exponent)),
            seq(digits, exponent)
          ),
          optional(choice(/[Ll]/, /[jJ]/))
        )
      );
    },

    /* Strings */

    string: ($) =>
      seq(
        alias($._string_start, '"'),
        repeat(
          choice(
            $.interpolation,
            $._escape_interpolation,
            $.escape_sequence,
            $._not_escape_sequence,
            $._string_content
          )
        ),
        alias($._string_end, '"')
      ),

    interpolation: ($) => seq("{", $.value, "}"),

    _escape_interpolation: ($) => choice("{{", "}}"),

    escape_sequence: ($) =>
      token(
        prec(
          1,
          seq(
            "\\",
            choice(
              /u[a-fA-F\d]{4}/,
              /U[a-fA-F\d]{8}/,
              /x[a-fA-F\d]{2}/,
              /\d{3}/,
              /\r?\n/,
              /['"abfrntv\\]/
            )
          )
        )
      ),

    _not_escape_sequence: ($) => "\\",

    /* Identifiers */

    qualified_identifier: ($) =>
      choice(
        $.identifier,
        seq(field("namespace", $.identifier), ".", $.qualified_identifier)
      ),

    identifier: ($) => /[A-Za-z_]+/,
  },
});

function commaSep1(rule) {
  return sep1(rule, ",");
}

function sep1(rule, separator) {
  return seq(rule, repeat(seq(separator, rule)));
}
