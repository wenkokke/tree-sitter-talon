const PREC = {
  parenthesized_expression: 1,
  or: 10,
  plus: 18,
  times: 19,
  negate: 20,
};

module.exports = grammar({
  name: "talon",

  extras: ($) => [
    $.comment,
    /[\s\f\uFEFF\u2060\u200B]|\\\r?\n/,
  ],

  supertypes: ($) => [
    $.declaration,
    $.expression,
    $.number,
    $.statement,
  ],

  externals: ($) => [
    $._matches_start,
    $._matches_end,
    $._matches_empty,
    $._newline,
    $._indent,
    $._dedent,
    $._string_start,
    $.string_content,
    $._string_end,
    $.comment,
  ],

  rules: {
    source_file: ($) =>
      seq(
        $.matches,
        optional($.declarations),
      ),

    comment: ($) => token(/#.*?/),

    /* Context */

    matches: ($) =>
      choice(
        seq(
          $._matches_start,
          repeat($.match),
          $._matches_end,
        ),
        $._matches_empty,
      ),

    match_modifier: ($) => choice("and", "not"),

    match: ($) =>
      seq(
        field("modifiers", repeat($.match_modifier)),
        field("left", $.identifier),
        ":",
        field("right", $.implicit_string),
        $._newline
      ),

    /* Declarations */

    declarations: ($) => repeat1($.declaration),

    declaration: ($) =>
      choice(
        $.command_declaration,
        $.tag_import_declaration,
        $.key_binding_declaration,
        $.settings_declaration,
      ),

    command_declaration: ($) =>
      seq(
        field("left", $.rule),
        ":",
        field("right", $._statements),
      ),

    tag_import_declaration: ($) =>
      seq(
        field("left", "tag()"),
        ":",
        field("right", $.identifier),
        $._newline,
      ),

    key_binding_declaration: ($) =>
      seq(
        field("left", $.key_action),
        ":",
        field("right", $._statements),
      ),

    settings_declaration: ($) =>
      seq(
        field("left", "settings()"),
        ":",
        field("right", $._statements),
      ),

    /* Statements */

    _statements: ($) =>
      choice(
        alias($.statement, $.block),
        seq($._indent, $.block)
      ),

    block: ($) => seq(repeat($.statement), $._dedent),

    statement: ($) =>
      choice(
        $.assignment_statement,
        $.expression_statement,
      ),

    assignment_statement: ($) =>
      seq(
        field("left", $.identifier),
        "=",
        field("right", $.expression),
        $._newline,
      ),

    expression_statement: ($) =>
      seq(
        field("expression", $.expression),
        $._newline,
      ),

    /* Rules */

    rule: ($) => $._optional_choice,

    _optional_choice: ($) => choice($.choice, $._optional_anchor),

    choice: ($) => sep2($._optional_anchor, "|"),

    _optional_anchor: ($) =>
      seq(optional($.start_anchor), $._optional_seq, optional($.end_anchor)),

    start_anchor: ($) => "^",
    end_anchor: ($) => "$",

    _optional_seq: ($) => choice($._primary_rule, $.seq),

    seq: ($) => repeat2($._primary_rule),

    _primary_rule: ($) =>
      choice(
        $.word,
        $.list,
        $.capture,
        $.optional,
        $.repeat,
        $.repeat1,
        $.parenthesized_rule
      ),

    word: ($) => /[\p{Letter}\p{Number}][\p{Letter}\p{Number}-]*/,

    list: ($) => seq("{", field("list_name", $.identifier), "}"),

    capture: ($) => seq("<", field("capture_name", $.identifier), ">"),

    optional: ($) => seq("[", $._optional_choice, "]"),

    repeat: ($) => seq($._primary_rule, "*"),

    repeat1: ($) => seq($._primary_rule, "+"),

    parenthesized_rule: ($) => seq("(", $._optional_choice, ")"),

    /* Expressions */

    expression: ($) =>
      choice(
        $.binary_operator,
        $.unary_operator,
        $.variable,
        $.string,
        $.integer,
        $.float,
        $.key_action,
        $.sleep_action,
        $.action,
        $.parenthesized_expression
      ),

    variable: ($) => field("variable_name", $.identifier),

    parenthesized_expression: ($) =>
      prec(PREC.parenthesized_expression, seq("(", $.expression, ")")),

    operator: ($) => /[\p{Dash_Punctuation}\p{Math_Symbol}]+/,

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
              field("operator", alias(operator, $.operator)),
              field("right", $.expression)
            )
          )
        )
      );
    },
    
    unary_operator: $ => {
      const table = [
        [prec, "-", PREC.negate],
      ];
      
      return choice(
        ...table.map(([fn, operator, precedence]) =>
          fn(
            precedence,
            seq(
              field("operator", alias(operator, $.operator)),
              field("right", $.expression)
            )
          )
        )
      );
    },

    key_action: ($) =>
      seq(
        "key(",
        field("arguments", $._implicit_string_argument),
        ")"
      ),

    sleep_action: ($) =>
      seq(
        "sleep(",
        field("arguments", $._implicit_string_argument),
        ")"
      ),

    _implicit_string_argument: ($) =>
      alias(/[^\)]*/, $.implicit_string),

    action: ($) =>
      seq(
        field("action_name", $.identifier),
        field("arguments", $.argument_list)
      ),

    argument_list: ($) => seq(token.immediate("("), sep($.expression, ","), optional(","), ")"),

    /* Identifiers */

    identifier: ($) => /([A-Za-z_][A-Za-z0-9_]*)(\.[A-Za-z_][A-Za-z0-9_]*)*/,

    /* Values */

    value: ($) => choice($.number, $.string),

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

    implicit_string: ($) => token(/.*/),

    string: ($) =>
      seq(
        alias($._string_start, '"'),
        repeat(
          choice(
            $.interpolation,
            alias($._escape_interpolation, $.string_content),
            alias($._not_interpolation, $.string_content),
            $.string_escape_sequence,
            alias($._not_escapesequence, $.string_content),
            $.string_content
          )
        ),
        alias($._string_end, '"')
      ),

    interpolation: ($) => prec(1, seq("{", $.expression, "}")),

    _escape_interpolation: ($) =>
      prec(1, choice(alias("{{", "{"), alias("}}", "}"))),

    string_escape_sequence: ($) =>
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
              "'",
              '"',
              "a",
              "b",
              "f",
              "r",
              "n",
              "t",
              "v",
              "\\"
            )
          )
        )
      ),

    _not_escapesequence: ($) => "\\",

    _not_interpolation: ($) => choice("{", "}"),
  },
});

function sep(rule, separator) {
  return optional(sep1(rule, separator));
}

function sep1(rule, separator) {
  return seq(rule, repeat(seq(separator, rule)));
}

function sep2(rule, separator) {
  return seq(rule, repeat1(seq(separator, rule)));
}

function repeat2(rule) {
  return seq(rule, repeat1(rule));
}
