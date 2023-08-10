module.exports = grammar({
    name: 'ICL',

    rules: {
        source_file: $ => repeat(choice(
            $._icl_source_items,
            // Illegal by the spec but makes the testing much simpler
            $._module_statement
        )),

        _icl_source_items: $ => choice(
            $.namespace_definition,
            prec(1, $.use_namespace_definition),
            $.module_definition
        ),
        namespace_definition: $ => seq(
            'NameSpace',
            optional($.scalar_identifier),
            ';'
        ),

        use_namespace_definition: $ => seq(
            'UseNameSpace',
            optional($.scalar_identifier),
            ';'
        ),

        module_definition: $ => seq(
            'Module', 
            $.scalar_identifier,
            $.module_body
        ),
        module_body: $ => seq(
            '{',
            repeat($._module_statement),
            '}'
        ),

        _module_statement: $ => choice(
            $.use_namespace_definition,
            $._port_definition,
        ),

        // must start with letter - then underscore and digits allowed
        scalar_identifier: $ => /[a-zA-Z][a-zA-Z0-9_$]*/,
        vector_identifier: $ => seq(
            $.scalar_identifier,
            '[', choice($.index, $.range), ']'
        ),

        index: $ => $.positive_integer, // TODO replace with integer_expr
        range: $ => seq($.index, ':', $.index),


        _port_definition: $ => choice(
            $.scan_in_port_definition,
            $.capture_enable_port_definition,
            $.shift_enable_port_definition,
            $.update_enable_port_definition,
            $.select_port_definition,
            $.reset_port_definition,
            $.tck_port_definition,
            $.scan_out_port_definition,
            // TODO: Impl
            $.data_in_port_definition,
            $.data_out_port_definition,
            $.to_shift_enable_port_definition,
            $.to_update_enable_port_definition,
            $.to_capture_enable_port_definition,
            $.to_select_port_definition,
            $.to_reset_port_definition,
            $.tms_port_definition,
            $.to_tms_port_definition,
            $.to_tck_port_definition,
            $.clock_port_definition,
            $.to_clock_port_definition,
            $.trst_port_definition,
            $.to_trst_port_definition,
            $.to_ir_select_port_definition,
            $.address_port_definition,
            $.write_enable_port_definition,
            $.read_enable_port_definition,
        ),

        scan_in_port_definition: $ => seq(
            'ScanInPort', $.scalar_identifier,
            choice(
                ';',
                seq('{', repeat($.attribute_definition), '}')
            ),
        ),
        capture_enable_port_definition: $ => seq(
            'CaptureEnPort', $.scalar_identifier,
            choice(
                ';',
                seq('{', repeat($.attribute_definition), '}')
            ),
        ),
        shift_enable_port_definition: $ => seq(
            'ShiftEnPort', $.scalar_identifier,
            choice(
                ';',
                seq('{', repeat($.attribute_definition), '}')
            ),
        ),
        update_enable_port_definition: $ => seq(
            'UpdateEnPort', $.scalar_identifier,
            choice(
                ';',
                seq('{', repeat($.attribute_definition), '}')
            ),
        ),
        select_port_definition: $ => seq(
            'SelectPort', $.scalar_identifier,
            choice(
                ';',
                seq('{', repeat($.attribute_definition), '}')
            ),
        ),
        reset_port_definition: $ => seq(
            'ResetPort', $.scalar_identifier,
            choice(
                ';',
                seq('{', repeat($.attribute_definition), '}')
            ),
        ),
        tck_port_definition: $ => seq(
            'TCKPort', $.scalar_identifier,
            choice(
                ';',
                seq('{', repeat($.attribute_definition), '}')
            ),
        ),
        scan_out_port_definition: $ => seq(
            'ScanOutPort', $.scalar_identifier,
            choice(
                ';',
                seq('{', repeat($._scan_out_port_item), '}')
            ),
        ),

        _scan_out_port_item: $ => choice(
            $.attribute_definition,
            $.scan_out_port_source,
            $.scan_out_port_enable
        ),

        scan_out_port_source: $ => seq(
            //TODO: signal/concat signal
            'Source', $.scalar_identifier, ';'
        ),
        scan_out_port_enable: $ => seq(
            //TODO: signal/concat signal
            'Enable', $.scalar_identifier, ';'
        ),

        data_in_port_definition: $ => seq(
            'DataInPort', $.scalar_identifier,
            choice(
                ';',
                seq('{', repeat($.attribute_definition), '}'),
            ),
        ),

        data_out_port_definition: $ => seq(
            'DataOutPort', $.scalar_identifier,
            choice(
                ';',
                seq('{', repeat($.attribute_definition), '}'),
            ),
        ),
        to_shift_enable_port_definition: $ => seq(
            'ToShiftEnPort', $.scalar_identifier,
            choice(
                ';',
                seq('{', repeat($.attribute_definition), '}'),
            ),
        ),

        to_update_enable_port_definition: $ => seq(
            'ToUpdateEnPort', $.scalar_identifier,
            choice(
                ';',
                seq('{', repeat($.attribute_definition), '}'),
            ),
        ),

        to_capture_enable_port_definition: $ => seq(
            'ToCaptureEnPort', $.scalar_identifier,
            choice(
                ';',
                seq('{', repeat($.attribute_definition), '}'),
            ),
        ),


        to_select_port_definition: $ => seq(
            'ToSelectPort', $.scalar_identifier,
            choice(
                ';',
                seq('{', repeat($.attribute_definition), '}'),
            ),
        ),

        to_reset_port_definition: $ => seq(
            'ToResetPort', $.scalar_identifier,
            choice(
                ';',
                seq('{', repeat($.attribute_definition), '}'),
            ),
        ),

        tms_port_definition: $ => seq(
            'TMSPort', $.scalar_identifier,
            choice(
                ';',
                seq('{', repeat($.attribute_definition), '}'),
            ),
        ),

        to_tms_port_definition: $ => seq(
            'ToTMSPort', $.scalar_identifier,
            choice(
                ';',
                seq('{', repeat($.attribute_definition), '}'),
            ),
        ),

        to_tck_port_definition: $ => seq(
            'ToTCKPort', $.scalar_identifier,
            choice(
                ';',
                seq('{', repeat($.attribute_definition), '}'),
            ),
        ),

        clock_port_definition: $ => seq(
            'ClockPort', $.scalar_identifier,
            choice(
                ';',
                seq('{', repeat($.attribute_definition), '}'),
            ),
        ),

        to_clock_port_definition: $ => seq(
            'ToClockPort', $.scalar_identifier,
            choice(
                ';',
                seq('{', repeat($.attribute_definition), '}'),
            ),
        ),

        trst_port_definition: $ => seq(
            'TRSTPort', $.scalar_identifier,
            choice(
                ';',
                seq('{', repeat($.attribute_definition), '}'),
            ),
        ),

        to_trst_port_definition: $ => seq(
            'ToTRSTPort', $.scalar_identifier,
            choice(
                ';',
                seq('{', repeat($.attribute_definition), '}'),
            ),
        ),

        to_ir_select_port_definition: $ => seq(
            'ToIRSelectPort', $.scalar_identifier,
            choice(
                ';',
                seq('{', repeat($.attribute_definition), '}'),
            ),
        ),

        address_port_definition: $ => seq(
            'AddressPort', $.scalar_identifier,
            choice(
                ';',
                seq('{', repeat($.attribute_definition), '}'),
            ),
        ),

        write_enable_port_definition: $ => seq(
            'WriteEnPort', $.scalar_identifier,
            choice(
                ';',
                seq('{', repeat($.attribute_definition), '}'),
            ),
        ),

        read_enable_port_definition: $ => seq(
            'ReadEnPort', $.scalar_identifier,
            choice(
                ';',
                seq('{', repeat($.attribute_definition), '}'),
            ),
        ),

        attribute_definition: $ => seq(
            'Attribute', $.scalar_identifier,
            optional(seq('=', $.attribute_value)),
            ';'
        ),

        attribute_value: $ => choice(
            $.concat_number,
            $.concat_string
        ),

        positive_integer: $ => /[0-9][0-9_]*/,

        signal: $ => choice(
            // $.number,
            // $.reg_port_signal_id,
            // $.hier_port
        ),
        concat_number: $ => seq(
            optional('~'),
            $._number,
            repeat(seq(
                ',',
                optional('~'),
                $._number
            )),
        ),

        _number: $ => choice(
            $.unsized_number,
            $.sized_number,
            //TODO: integer_expr
        ),

        size: $ => choice(
            $.positive_integer,
            seq('$', $.scalar_identifier)
        ),

        unsized_number: $ => choice(
            $.positive_integer,
            $.unsized_decimal_number,
            $.unsized_binary_number,
            $.unsized_hex_number
        ),
        sized_number: $ => choice(
            $.sized_decimal_number,
            $.sized_binary_number,
            $.sized_hex_number
        ),

        unsized_decimal_number: $ => seq(
            '\'', choice('d', 'D'), repeat(choice(' ', '\t')), $.positive_integer
        ),
        sized_decimal_number: $ => seq($.size, $.unsized_decimal_number),

        unsized_binary_number: $ => seq(
            '\'', choice('b', 'B'), repeat(choice(' ', '\t')), /[01Xx][01Xx_]*/,
        ),
        sized_binary_number: $ => seq($.size, $.unsized_binary_number),


        unsized_hex_number: $ => seq(
            '\'', choice('h', 'H'), repeat(choice(' ', '\t')), /[0-9a-fA-F][0-9a-fA-F_]*/,
        ),
        sized_hex_number: $ => seq($.size, $.unsized_hex_number),

        concat_string: $ => seq(
            choice($.string, $.parameter_ref),
            repeat(seq(',', choice($.string, $.parameter_ref))),
        ),

        string: $ => seq(
            '"',
            repeat(choice(
                $.string_content,
                $.escape_sequence
            )),
            '"',
        ),

        string_content: $ => seq(token.immediate(prec(1, /[^"\\]+/))),

        escape_sequence: $ => seq('\\',choice('\\', '"')),

        parameter_ref: $ => seq('$', $.scalar_identifier),

        // from: https://github.com/tree-sitter/tree-sitter-c/blob/master/grammar.js
        comment: $ => token(choice(
            seq('//', /.*/),
            seq(
                '/*',
                /[^*]*\*+([^/*][^*]*\*+)*/,
                    '/'
                )
            )),

    }
});
