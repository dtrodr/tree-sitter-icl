module.exports = grammar({
    name: 'ICL',

    rules: {
        source_file: $ => repeat(choice(
            $._icl_source_items,
            // Illegal by the spec but makes the testing much simpler
            $._module_statement,
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
            $.instance_definition,
            $.scan_register_definition,
            // $.data_register_definition,
            $.logic_signal_definition,
            // $.scan_mux_definition,
            // $.data_mux_definition,
            // $.clock_mux_definition,
            // $.onehot_data_group_definition,
            // $.onehot_scan_group_definition,
            // $.scan_interface_definition,
            // $.access_link_definition,
            // $.alias_definition,
            // $.enum_definition,
            $.parameter_definition,
            $.local_parameter_definition,
            $.attribute_definition,
        ),

        scope: $ => seq($.scalar_identifier, '::'),

        instance_definition: $ => seq(
            'Instance', $.scalar_identifier, 'Of',
            optional($.scope),
            $.scalar_identifier,
            choice(
                ';',
                seq('{', repeat($._instance_item), '}')
            ),
        ),
        _instance_item: $ => choice(
            $.input_port_connection,
            $.allow_broadcast_definition,
            $.attribute_definition,
            alias($.parameter_definition,$.parameter_override),
            $.instance_address_value,
        ),
        input_port_connection: $ => seq(
            'InputPort', $.scalar_identifier, '=', $.concat_signal, ';'
        ),
        allow_broadcast_definition: $ => seq(
            'AllowBroadcastOnScanInterface', $.scalar_identifier, ';'
        ),
        instance_address_value: $ => seq(
            'AddressValue', $._number, ';'
        ),

        scan_register_definition: $ => seq(
            'ScanRegister', $.scalar_identifier,
            choice(
                ';',
                seq('{', repeat($._scan_register_item), '}')
            ),
        ),
        _scan_register_item: $ => choice(
            $.attribute_definition,
            $.scan_in_source,
            $.default_load_value,
            $.capture_source,
            $.reset_value,
            $.ref_enum,
        ),
        scan_in_source: $ => seq(
            'ScanInSource', $.concat_signal, ';'
        ),
        default_load_value: $ => seq(
            'DefaultLoadValue', choice($.concat_number, $.scalar_identifier), ';'
        ),
        capture_source: $ => seq(
            'CaptureSource', choice($.concat_signal, $.scalar_identifier), ';'
        ),
        reset_value: $ => seq(
            'ResetValue', choice($.concat_number, $.scalar_identifier), ';'
        ),

        // must start with letter - then underscore and digits allowed
        scalar_identifier: $ => /[a-zA-Z][a-zA-Z0-9_$]*/,
        vector_identifier: $ => seq(
            $.scalar_identifier,
            '[', choice($.index, $.range), ']'
        ),
        enum_name: $ => /[a-zA-Z][a-zA-Z0-9_$]*/,
        //enum_name: $ => alias($.scalar_identifier, $.enum_name),

        index: $ => $.positive_integer, // TODO replace with integer_expression
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
                seq('{', repeat($._reset_port_item), '}')
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
            $.port_source,
            $.port_enable
        ),
        _data_in_port_item: $ => choice(
            $.attribute_definition,
            $.ref_enum,
            $.port_default_load_value,
        ),
        _data_out_port_item: $ => choice(
            $.attribute_definition,
            $.port_source,
            $.port_enable,
            $.ref_enum,
        ),
        _reset_port_item: $ => choice(
            $.attribute_definition,
            $.port_source,
            $.port_active_polarity,
        ),
        _trst_port_item: $ => choice(
            $.attribute_definition,
            $.port_source,
        ),
        _clock_port_item: $ => choice(
            $.attribute_definition,
            $.port_differential_inv_of
        ),
        _trst_port_item: $ => choice(
            $.attribute_definition,
            $.port_source,
        ),
        _to_shift_enable_port_item: $ => choice(
            $.attribute_definition,
            $.port_source,
        ),
        _to_capture_enable_port_item: $ => choice(
            $.attribute_definition,
            $.port_source,
        ),
        _to_update_enable_port_item: $ => choice(
            $.attribute_definition,
            $.port_source,
        ),
        _to_select_port_item: $ => choice(
            $.attribute_definition,
            $.port_source,
        ),
        _to_reset_port_item: $ => choice(
            $.attribute_definition,
            $.port_source,
            $.port_active_polarity,
        ),
        _to_tms_port_item: $ => choice(
            $.attribute_definition,
            $.port_source,
        ),
        _to_trst_port_item: $ => choice(
            $.attribute_definition,
            $.port_source,
        ),
        _to_clock_port_item: $ => choice(
            $.attribute_definition,
            $.port_source,
            $.port_freq_multiplier,
            $.port_freq_divider,
            $.port_differential_inv_of,
            $.port_period
        ),

        port_source: $ => seq(
            'Source', $.concat_signal, ';'
        ),
        port_enable: $ => seq(
            'Enable', $.signal, ';'
        ),
        ref_enum: $ => seq(
            'RefEnum', $.enum_name, ';'
        ),
        port_default_load_value: $ => seq(
            'DefaultLoadValue',
            choice($.concat_number, $.scalar_identifier),
            ';'
        ),
        port_differential_inv_of: $ => seq(
            'DifferentialInvOf', $.signal, ';'
        ),
        port_active_polarity: $ => seq(
            'ActivePolarity', choice('0', '1'), ';'
        ),
        port_freq_multiplier: $ => seq(
            'FreqMultiplier', $._number, ';'
        ),
        port_freq_divider: $ => seq(
            'FreqDivider', $._number, ';'
        ),
        port_period: $ => seq(
            'Period', $.time, ';'
        ),


        data_in_port_definition: $ => seq(
            'DataInPort', $._signal_identifier,
            choice(
                ';',
                seq('{', repeat($._data_in_port_item), '}'),
            ),
        ),

        data_out_port_definition: $ => seq(
            'DataOutPort', $.scalar_identifier,
            choice(
                ';',
                seq('{', repeat($._data_out_port_item), '}'),
            ),
        ),
        to_shift_enable_port_definition: $ => seq(
            'ToShiftEnPort', $._signal_identifier,
            choice(
                ';',
                seq('{', repeat($._to_shift_enable_port_item), '}'),
            ),
        ),

        to_update_enable_port_definition: $ => seq(
            'ToUpdateEnPort', $._signal_identifier,
            choice(
                ';',
                seq('{', repeat($._to_update_enable_port_item), '}'),
            ),
        ),

        to_capture_enable_port_definition: $ => seq(
            'ToCaptureEnPort', $._signal_identifier,
            choice(
                ';',
                seq('{', repeat($._to_capture_enable_port_item), '}'),
            ),
        ),

        to_select_port_definition: $ => seq(
            'ToSelectPort', $._signal_identifier,
            choice(
                ';',
                seq('{', repeat($._to_select_port_item), '}'),
            ),
        ),

        to_reset_port_definition: $ => seq(
            'ToResetPort', $._signal_identifier,
            choice(
                ';',
                seq('{', repeat($._to_reset_port_item), '}'),
            ),
        ),

        tms_port_definition: $ => seq(
            'TMSPort', $._signal_identifier,
            choice(
                ';',
                seq('{', repeat($.attribute_definition), '}'),
            ),
        ),

        to_tms_port_definition: $ => seq(
            'ToTMSPort', $._signal_identifier,
            choice(
                ';',
                seq('{', repeat($._to_tms_port_item), '}'),
            ),
        ),

        to_tck_port_definition: $ => seq(
            'ToTCKPort', $._signal_identifier,
            choice(
                ';',
                seq('{', repeat($.attribute_definition), '}'),
            ),
        ),

        clock_port_definition: $ => seq(
            'ClockPort', $._signal_identifier,
            choice(
                ';',
                seq('{', repeat($._clock_port_item), '}'),
            ),
        ),

        to_clock_port_definition: $ => seq(
            'ToClockPort', $._signal_identifier,
            choice(
                ';',
                seq('{', repeat($._to_clock_port_item), '}'),
            ),
        ),

        trst_port_definition: $ => seq(
            'TRSTPort', $._signal_identifier,
            choice(
                ';',
                seq('{', repeat($._trst_port_item), '}'),
            ),
        ),

        to_trst_port_definition: $ => seq(
            'ToTRSTPort', $._signal_identifier,
            choice(
                ';',
                seq('{', repeat($._to_trst_port_item), '}'),
            ),
        ),

        to_ir_select_port_definition: $ => seq(
            'ToIRSelectPort', $._signal_identifier,
            choice(
                ';',
                seq('{', repeat($.attribute_definition), '}'),
            ),
        ),

        address_port_definition: $ => seq(
            'AddressPort', $._signal_identifier,
            choice(
                ';',
                seq('{', repeat($.attribute_definition), '}'),
            ),
        ),

        write_enable_port_definition: $ => seq(
            'WriteEnPort', $._signal_identifier,
            choice(
                ';',
                seq('{', repeat($.attribute_definition), '}'),
            ),
        ),

        read_enable_port_definition: $ => seq(
            'ReadEnPort', $._signal_identifier,
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

        logic_signal_definition: $ => seq(
            'LogicSignal', $.scalar_identifier,
            '{', $.logic_expression, '}',
        ),

        parameter_definition: $ => seq(
            'Parameter', $.scalar_identifier,
            '=', $.parameter_value, ';'
        ),
        local_parameter_definition: $ => seq(
            'LocalParameter', $.scalar_identifier,
            '=', $.parameter_value, ';'
        ),
        parameter_value: $ => choice(
            $.concat_number,
            $.concat_string
        ),

        positive_integer: $ => /[0-9][0-9_]*/,

        signal: $ => choice(
            $._number,
            $._signal_identifier,
            $.hier_port
        ),

        //signal: $ => alias($._signal, $.signal),
        //signal: $ => seq(optional('~'), $._signal),
        //jtag_signal: $ => alias($._signal, $._jtag_signal),
        jtag_signal: $ => alias($.signal, $.jtag_signal),

        concat_signal: $ => prec.left(seq(
            $.signal,
            repeat(seq(',', $.signal))
        )),

        _signal_identifier: $ => prec.left(choice(
            $.scalar_identifier,
            $.vector_identifier
        )),
        hier_port: $ => seq(
            repeat1($.scalar_identifier),
            $.scalar_identifier
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

        _number: $ => prec.left(choice(
            $._unsized_number,
            $._sized_number,
            $.integer_expression
        )),

        time: $ => token(seq(
            /[0-9][0-9_]*/,
            optional(choice('s', 'ms', 'us', 'ns', 'ps', 'fs', 'as'))
        )),

        size: $ => choice(
            $.positive_integer,
            seq('$', $.scalar_identifier)
        ),

        _unsized_number: $ => choice(
            prec(2, $.positive_integer),
            $.unsized_decimal_number,
            $.unsized_binary_number,
            $.unsized_hex_number
        ),
        _sized_number: $ => choice(
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
            prec(1, choice($.string, $.parameter_reference)),
            repeat(seq(',', choice($.string, $.parameter_reference))),
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

        //parameter_reference: $ => token.immediate(seq('$', /[a-zA-Z][a-zA-Z0-9_$]*/)),
        parameter_reference: $ => /\$[a-zA-Z][a-zA-Z0-9_$]*/,

        // from: https://github.com/tree-sitter/tree-sitter-c/blob/master/grammar.js
        comment: $ => token(choice(
            seq('//', /.*/),
            seq(
                '/*',
                /[^*]*\*+([^/*][^*]*\*+)*/,
                '/'
            )
        )),

        // === Logic Expression ===
        // Following the IEEE spec
        integer_expression: $ => alias($._integer_expression_lvl1, $.integer_expression),

        _integer_expression_lvl1: $ => prec.left(seq(
            $._integer_expression_lvl2,
            repeat(seq(
                choice('+', '-'),
                $._integer_expression_lvl1
            ))
        )),
        _integer_expression_lvl2: $ => prec.left(seq(
            $._integer_expression_arg,
            repeat(seq(
                choice('*', '/', '%'),
                $._integer_expression_lvl2
            ))
        )),
        _integer_expression_paren: $ => seq(
            '(',
            $.integer_expression,
            ')'
        ),
        _integer_expression_arg: $ => prec.left(1, choice(
            $._integer_expression_paren,
            $.positive_integer,
            $.parameter_reference
        )),

        // === Logic Expression ===
        // Following the IEEE spec
        logic_expression : $ => alias($._logic_expression_lvl1, $.logic_expression),
        _logic_expression_lvl1 : $ => seq(
            $._logic_expression_lvl2,
            optional(seq(
                choice('&&', '||'),
                $._logic_expression_lvl1
            ))
        ),
        _logic_expression_lvl2 : $ => seq(
            $._logic_expression_lvl3,
            optional(seq(
                choice('&', '|', '^'),
                $._logic_expression_lvl2
            ))
        ),
        _logic_expression_lvl3 : $ => seq(
            $._logic_expression_lvl4,
            optional(seq(
                choice('==', '!='),
                $._logic_expression_num_arg
            ))
        ),
        _logic_expression_lvl4 : $ => seq(
            $._logic_expression_arg,
            optional(seq(
                ',',
                $._logic_expression_lvl4
            ))
        ),
        _logic_unary_expression : $ => seq(
            prec(1, choice('~', '!')),
            $._logic_expression_arg
        ),
        _logic_expression_paren : $ => seq(
            '(',
            $.logic_expression,
            ')'
        ),
        _logic_expression_arg : $ => choice(
            $._logic_expression_paren,
            $._logic_unary_expression,
            $.concat_signal
        ),
        _logic_expression_num_arg : $ => choice(
            $.concat_number,
            $.enum_name,
            seq(
                '(',
                $._logic_expression_num_arg,
                ')'
            )
        ),

    },
    
    conflicts: $ => [
        // Resolves conflict between the unary ~ operator and
        // the ability of signals to 
        //[$.signal],

    ],

});
