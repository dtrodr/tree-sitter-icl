module.exports = grammar({
  name: 'ICL',

  rules: {
    source_file: $ => repeat($._icl_source_items),

    _icl_source_items: $ => choice(
        $.namespace_definition,
        $.use_namespace_definition,
        $.module_definition
    ),
    namespace_definition: $ => seq(
        'NameSpace',
        optional($.identifier),
        ';'
    ),

    use_namespace_definition: $ => seq(
        'UseNameSpace',
        optional($.identifier),
        ';'
    ),

    module_definition: $ => seq(
        'Module', 
        $.identifier,
        $.module_body
    ),
    module_body: $ => seq(
        '{',
        //TODO: repeat($._module_statement),
        '}'
    ),

    //_module_statement: $ => r

    // must start with letter - then underscore and digits allowed
    identifier: $ => /[a-zA-Z][a-zA-Z0-9_$]*/,

  }
});
