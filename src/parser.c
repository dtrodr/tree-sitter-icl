#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 117
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 86
#define ALIAS_COUNT 0
#define TOKEN_COUNT 42
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 1

enum {
  anon_sym_NameSpace = 1,
  anon_sym_SEMI = 2,
  anon_sym_UseNameSpace = 3,
  anon_sym_Module = 4,
  anon_sym_LBRACE = 5,
  anon_sym_RBRACE = 6,
  sym_scalar_identifier = 7,
  anon_sym_LBRACK = 8,
  anon_sym_RBRACK = 9,
  anon_sym_COLON = 10,
  anon_sym_ScanInPort = 11,
  anon_sym_CaptureEnPort = 12,
  anon_sym_ShiftEnPort = 13,
  anon_sym_UpdateEnPort = 14,
  anon_sym_SelectPort = 15,
  anon_sym_ResetPort = 16,
  anon_sym_TCKPort = 17,
  anon_sym_ScanOutPort = 18,
  anon_sym_Source = 19,
  anon_sym_Enable = 20,
  anon_sym_Attribute = 21,
  anon_sym_EQ = 22,
  sym_positive_integer = 23,
  anon_sym_TILDE = 24,
  anon_sym_COMMA = 25,
  anon_sym_DOLLAR = 26,
  anon_sym_SQUOTE = 27,
  anon_sym_d = 28,
  anon_sym_D = 29,
  anon_sym_ = 30,
  anon_sym_TAB = 31,
  anon_sym_b = 32,
  anon_sym_B = 33,
  aux_sym_unsized_binary_number_token1 = 34,
  anon_sym_h = 35,
  anon_sym_H = 36,
  aux_sym_unsized_hex_number_token1 = 37,
  anon_sym_DQUOTE = 38,
  aux_sym_string_content_token1 = 39,
  anon_sym_BSLASH = 40,
  sym_comment = 41,
  sym_source_file = 42,
  sym__icl_source_items = 43,
  sym_namespace_definition = 44,
  sym_use_namespace_definition = 45,
  sym_module_definition = 46,
  sym_module_body = 47,
  sym__module_statement = 48,
  sym__port_definition = 49,
  sym_scan_in_port_definition = 50,
  sym_capture_enable_port_definition = 51,
  sym_shift_enable_port_definition = 52,
  sym_update_enable_port_definition = 53,
  sym_select_enable_port_definition = 54,
  sym_reset_port_definition = 55,
  sym_tck_port_definition = 56,
  sym_scan_out_port_definition = 57,
  sym__scan_out_port_item = 58,
  sym_scan_out_port_source = 59,
  sym_scan_out_port_enable = 60,
  sym_attribute_definition = 61,
  sym_attribute_value = 62,
  sym_concat_number = 63,
  sym__number = 64,
  sym_size = 65,
  sym_unsized_number = 66,
  sym_sized_number = 67,
  sym_unsized_decimal_number = 68,
  sym_sized_decimal_number = 69,
  sym_unsized_binary_number = 70,
  sym_sized_binary_number = 71,
  sym_unsized_hex_number = 72,
  sym_sized_hex_number = 73,
  sym_concat_string = 74,
  sym_string = 75,
  sym_string_content = 76,
  sym_escape_sequence = 77,
  sym_parameter_ref = 78,
  aux_sym_source_file_repeat1 = 79,
  aux_sym_module_body_repeat1 = 80,
  aux_sym_scan_out_port_definition_repeat1 = 81,
  aux_sym_concat_number_repeat1 = 82,
  aux_sym_unsized_decimal_number_repeat1 = 83,
  aux_sym_concat_string_repeat1 = 84,
  aux_sym_string_repeat1 = 85,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_NameSpace] = "NameSpace",
  [anon_sym_SEMI] = ";",
  [anon_sym_UseNameSpace] = "UseNameSpace",
  [anon_sym_Module] = "Module",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [sym_scalar_identifier] = "scalar_identifier",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_COLON] = ":",
  [anon_sym_ScanInPort] = "ScanInPort",
  [anon_sym_CaptureEnPort] = "CaptureEnPort",
  [anon_sym_ShiftEnPort] = "ShiftEnPort",
  [anon_sym_UpdateEnPort] = "UpdateEnPort",
  [anon_sym_SelectPort] = "SelectPort",
  [anon_sym_ResetPort] = "ResetPort",
  [anon_sym_TCKPort] = "TCKPort",
  [anon_sym_ScanOutPort] = "ScanOutPort",
  [anon_sym_Source] = "Source",
  [anon_sym_Enable] = "Enable",
  [anon_sym_Attribute] = "Attribute",
  [anon_sym_EQ] = "=",
  [sym_positive_integer] = "positive_integer",
  [anon_sym_TILDE] = "~",
  [anon_sym_COMMA] = ",",
  [anon_sym_DOLLAR] = "$",
  [anon_sym_SQUOTE] = "'",
  [anon_sym_d] = "d",
  [anon_sym_D] = "D",
  [anon_sym_] = " ",
  [anon_sym_TAB] = "\t",
  [anon_sym_b] = "b",
  [anon_sym_B] = "B",
  [aux_sym_unsized_binary_number_token1] = "unsized_binary_number_token1",
  [anon_sym_h] = "h",
  [anon_sym_H] = "H",
  [aux_sym_unsized_hex_number_token1] = "unsized_hex_number_token1",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_string_content_token1] = "string_content_token1",
  [anon_sym_BSLASH] = "\\",
  [sym_comment] = "comment",
  [sym_source_file] = "source_file",
  [sym__icl_source_items] = "_icl_source_items",
  [sym_namespace_definition] = "namespace_definition",
  [sym_use_namespace_definition] = "use_namespace_definition",
  [sym_module_definition] = "module_definition",
  [sym_module_body] = "module_body",
  [sym__module_statement] = "_module_statement",
  [sym__port_definition] = "_port_definition",
  [sym_scan_in_port_definition] = "scan_in_port_definition",
  [sym_capture_enable_port_definition] = "capture_enable_port_definition",
  [sym_shift_enable_port_definition] = "shift_enable_port_definition",
  [sym_update_enable_port_definition] = "update_enable_port_definition",
  [sym_select_enable_port_definition] = "select_enable_port_definition",
  [sym_reset_port_definition] = "reset_port_definition",
  [sym_tck_port_definition] = "tck_port_definition",
  [sym_scan_out_port_definition] = "scan_out_port_definition",
  [sym__scan_out_port_item] = "_scan_out_port_item",
  [sym_scan_out_port_source] = "scan_out_port_source",
  [sym_scan_out_port_enable] = "scan_out_port_enable",
  [sym_attribute_definition] = "attribute_definition",
  [sym_attribute_value] = "attribute_value",
  [sym_concat_number] = "concat_number",
  [sym__number] = "_number",
  [sym_size] = "size",
  [sym_unsized_number] = "unsized_number",
  [sym_sized_number] = "sized_number",
  [sym_unsized_decimal_number] = "unsized_decimal_number",
  [sym_sized_decimal_number] = "sized_decimal_number",
  [sym_unsized_binary_number] = "unsized_binary_number",
  [sym_sized_binary_number] = "sized_binary_number",
  [sym_unsized_hex_number] = "unsized_hex_number",
  [sym_sized_hex_number] = "sized_hex_number",
  [sym_concat_string] = "concat_string",
  [sym_string] = "string",
  [sym_string_content] = "string_content",
  [sym_escape_sequence] = "escape_sequence",
  [sym_parameter_ref] = "parameter_ref",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_module_body_repeat1] = "module_body_repeat1",
  [aux_sym_scan_out_port_definition_repeat1] = "scan_out_port_definition_repeat1",
  [aux_sym_concat_number_repeat1] = "concat_number_repeat1",
  [aux_sym_unsized_decimal_number_repeat1] = "unsized_decimal_number_repeat1",
  [aux_sym_concat_string_repeat1] = "concat_string_repeat1",
  [aux_sym_string_repeat1] = "string_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_NameSpace] = anon_sym_NameSpace,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_UseNameSpace] = anon_sym_UseNameSpace,
  [anon_sym_Module] = anon_sym_Module,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [sym_scalar_identifier] = sym_scalar_identifier,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_ScanInPort] = anon_sym_ScanInPort,
  [anon_sym_CaptureEnPort] = anon_sym_CaptureEnPort,
  [anon_sym_ShiftEnPort] = anon_sym_ShiftEnPort,
  [anon_sym_UpdateEnPort] = anon_sym_UpdateEnPort,
  [anon_sym_SelectPort] = anon_sym_SelectPort,
  [anon_sym_ResetPort] = anon_sym_ResetPort,
  [anon_sym_TCKPort] = anon_sym_TCKPort,
  [anon_sym_ScanOutPort] = anon_sym_ScanOutPort,
  [anon_sym_Source] = anon_sym_Source,
  [anon_sym_Enable] = anon_sym_Enable,
  [anon_sym_Attribute] = anon_sym_Attribute,
  [anon_sym_EQ] = anon_sym_EQ,
  [sym_positive_integer] = sym_positive_integer,
  [anon_sym_TILDE] = anon_sym_TILDE,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_DOLLAR] = anon_sym_DOLLAR,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [anon_sym_d] = anon_sym_d,
  [anon_sym_D] = anon_sym_D,
  [anon_sym_] = anon_sym_,
  [anon_sym_TAB] = anon_sym_TAB,
  [anon_sym_b] = anon_sym_b,
  [anon_sym_B] = anon_sym_B,
  [aux_sym_unsized_binary_number_token1] = aux_sym_unsized_binary_number_token1,
  [anon_sym_h] = anon_sym_h,
  [anon_sym_H] = anon_sym_H,
  [aux_sym_unsized_hex_number_token1] = aux_sym_unsized_hex_number_token1,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_string_content_token1] = aux_sym_string_content_token1,
  [anon_sym_BSLASH] = anon_sym_BSLASH,
  [sym_comment] = sym_comment,
  [sym_source_file] = sym_source_file,
  [sym__icl_source_items] = sym__icl_source_items,
  [sym_namespace_definition] = sym_namespace_definition,
  [sym_use_namespace_definition] = sym_use_namespace_definition,
  [sym_module_definition] = sym_module_definition,
  [sym_module_body] = sym_module_body,
  [sym__module_statement] = sym__module_statement,
  [sym__port_definition] = sym__port_definition,
  [sym_scan_in_port_definition] = sym_scan_in_port_definition,
  [sym_capture_enable_port_definition] = sym_capture_enable_port_definition,
  [sym_shift_enable_port_definition] = sym_shift_enable_port_definition,
  [sym_update_enable_port_definition] = sym_update_enable_port_definition,
  [sym_select_enable_port_definition] = sym_select_enable_port_definition,
  [sym_reset_port_definition] = sym_reset_port_definition,
  [sym_tck_port_definition] = sym_tck_port_definition,
  [sym_scan_out_port_definition] = sym_scan_out_port_definition,
  [sym__scan_out_port_item] = sym__scan_out_port_item,
  [sym_scan_out_port_source] = sym_scan_out_port_source,
  [sym_scan_out_port_enable] = sym_scan_out_port_enable,
  [sym_attribute_definition] = sym_attribute_definition,
  [sym_attribute_value] = sym_attribute_value,
  [sym_concat_number] = sym_concat_number,
  [sym__number] = sym__number,
  [sym_size] = sym_size,
  [sym_unsized_number] = sym_unsized_number,
  [sym_sized_number] = sym_sized_number,
  [sym_unsized_decimal_number] = sym_unsized_decimal_number,
  [sym_sized_decimal_number] = sym_sized_decimal_number,
  [sym_unsized_binary_number] = sym_unsized_binary_number,
  [sym_sized_binary_number] = sym_sized_binary_number,
  [sym_unsized_hex_number] = sym_unsized_hex_number,
  [sym_sized_hex_number] = sym_sized_hex_number,
  [sym_concat_string] = sym_concat_string,
  [sym_string] = sym_string,
  [sym_string_content] = sym_string_content,
  [sym_escape_sequence] = sym_escape_sequence,
  [sym_parameter_ref] = sym_parameter_ref,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_module_body_repeat1] = aux_sym_module_body_repeat1,
  [aux_sym_scan_out_port_definition_repeat1] = aux_sym_scan_out_port_definition_repeat1,
  [aux_sym_concat_number_repeat1] = aux_sym_concat_number_repeat1,
  [aux_sym_unsized_decimal_number_repeat1] = aux_sym_unsized_decimal_number_repeat1,
  [aux_sym_concat_string_repeat1] = aux_sym_concat_string_repeat1,
  [aux_sym_string_repeat1] = aux_sym_string_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_NameSpace] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_UseNameSpace] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Module] = {
    .visible = true,
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
  [sym_scalar_identifier] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ScanInPort] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_CaptureEnPort] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ShiftEnPort] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_UpdateEnPort] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SelectPort] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ResetPort] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_TCKPort] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ScanOutPort] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Source] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Enable] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Attribute] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [sym_positive_integer] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_TILDE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOLLAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_d] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_D] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_TAB] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_b] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_B] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_unsized_binary_number_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_h] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_H] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_unsized_hex_number_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_string_content_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_BSLASH] = {
    .visible = true,
    .named = false,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym__icl_source_items] = {
    .visible = false,
    .named = true,
  },
  [sym_namespace_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_use_namespace_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_module_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_module_body] = {
    .visible = true,
    .named = true,
  },
  [sym__module_statement] = {
    .visible = false,
    .named = true,
  },
  [sym__port_definition] = {
    .visible = false,
    .named = true,
  },
  [sym_scan_in_port_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_capture_enable_port_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_shift_enable_port_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_update_enable_port_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_select_enable_port_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_reset_port_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_tck_port_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_scan_out_port_definition] = {
    .visible = true,
    .named = true,
  },
  [sym__scan_out_port_item] = {
    .visible = false,
    .named = true,
  },
  [sym_scan_out_port_source] = {
    .visible = true,
    .named = true,
  },
  [sym_scan_out_port_enable] = {
    .visible = true,
    .named = true,
  },
  [sym_attribute_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_attribute_value] = {
    .visible = true,
    .named = true,
  },
  [sym_concat_number] = {
    .visible = true,
    .named = true,
  },
  [sym__number] = {
    .visible = false,
    .named = true,
  },
  [sym_size] = {
    .visible = true,
    .named = true,
  },
  [sym_unsized_number] = {
    .visible = true,
    .named = true,
  },
  [sym_sized_number] = {
    .visible = true,
    .named = true,
  },
  [sym_unsized_decimal_number] = {
    .visible = true,
    .named = true,
  },
  [sym_sized_decimal_number] = {
    .visible = true,
    .named = true,
  },
  [sym_unsized_binary_number] = {
    .visible = true,
    .named = true,
  },
  [sym_sized_binary_number] = {
    .visible = true,
    .named = true,
  },
  [sym_unsized_hex_number] = {
    .visible = true,
    .named = true,
  },
  [sym_sized_hex_number] = {
    .visible = true,
    .named = true,
  },
  [sym_concat_string] = {
    .visible = true,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [sym_string_content] = {
    .visible = true,
    .named = true,
  },
  [sym_escape_sequence] = {
    .visible = true,
    .named = true,
  },
  [sym_parameter_ref] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_module_body_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_scan_out_port_definition_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_concat_number_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_unsized_decimal_number_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_concat_string_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_repeat1] = {
    .visible = false,
    .named = false,
  },
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
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
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 36,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 36,
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
  [74] = 74,
  [75] = 75,
  [76] = 76,
  [77] = 77,
  [78] = 78,
  [79] = 79,
  [80] = 80,
  [81] = 81,
  [82] = 82,
  [83] = 83,
  [84] = 84,
  [85] = 85,
  [86] = 86,
  [87] = 87,
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
  [103] = 103,
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
  [115] = 115,
  [116] = 116,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(118);
      if (lookahead == '"') ADVANCE(157);
      if (lookahead == '$') ADVANCE(145);
      if (lookahead == '\'') ADVANCE(146);
      if (lookahead == ',') ADVANCE(144);
      if (lookahead == '/') ADVANCE(6);
      if (lookahead == ':') ADVANCE(128);
      if (lookahead == ';') ADVANCE(120);
      if (lookahead == '=') ADVANCE(140);
      if (lookahead == 'A') ADVANCE(106);
      if (lookahead == 'B') ADVANCE(152);
      if (lookahead == 'C') ADVANCE(26);
      if (lookahead == 'D') ADVANCE(148);
      if (lookahead == 'E') ADVANCE(66);
      if (lookahead == 'H') ADVANCE(155);
      if (lookahead == 'M') ADVANCE(71);
      if (lookahead == 'N') ADVANCE(27);
      if (lookahead == 'R') ADVANCE(43);
      if (lookahead == 'S') ADVANCE(36);
      if (lookahead == 'T') ADVANCE(9);
      if (lookahead == 'U') ADVANCE(80);
      if (lookahead == '[') ADVANCE(126);
      if (lookahead == '\\') ADVANCE(160);
      if (lookahead == ']') ADVANCE(127);
      if (lookahead == 'b') ADVANCE(151);
      if (lookahead == 'd') ADVANCE(147);
      if (lookahead == 'h') ADVANCE(154);
      if (lookahead == '{') ADVANCE(123);
      if (lookahead == '}') ADVANCE(124);
      if (lookahead == '~') ADVANCE(143);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(153);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(141);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(142);
      END_STATE();
    case 1:
      if (lookahead == '\t') ADVANCE(150);
      if (lookahead == ' ') ADVANCE(149);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(1)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(156);
      END_STATE();
    case 2:
      if (lookahead == '\t') ADVANCE(150);
      if (lookahead == ' ') ADVANCE(149);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(2)
      if (lookahead == '0' ||
          lookahead == '1' ||
          lookahead == 'X' ||
          lookahead == 'x') ADVANCE(153);
      END_STATE();
    case 3:
      if (lookahead == '\t') ADVANCE(150);
      if (lookahead == ' ') ADVANCE(149);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(3)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(142);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(157);
      if (lookahead == '$') ADVANCE(145);
      if (lookahead == '\'') ADVANCE(146);
      if (lookahead == ';') ADVANCE(120);
      if (lookahead == '~') ADVANCE(143);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(142);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 5:
      if (lookahead == '"') ADVANCE(157);
      if (lookahead == '\\') ADVANCE(160);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(158);
      if (lookahead != 0) ADVANCE(159);
      END_STATE();
    case 6:
      if (lookahead == '*') ADVANCE(8);
      if (lookahead == '/') ADVANCE(162);
      END_STATE();
    case 7:
      if (lookahead == '*') ADVANCE(7);
      if (lookahead == '/') ADVANCE(161);
      if (lookahead != 0) ADVANCE(8);
      END_STATE();
    case 8:
      if (lookahead == '*') ADVANCE(7);
      if (lookahead != 0) ADVANCE(8);
      END_STATE();
    case 9:
      if (lookahead == 'C') ADVANCE(14);
      END_STATE();
    case 10:
      if (lookahead == 'E') ADVANCE(68);
      END_STATE();
    case 11:
      if (lookahead == 'E') ADVANCE(69);
      END_STATE();
    case 12:
      if (lookahead == 'E') ADVANCE(70);
      END_STATE();
    case 13:
      if (lookahead == 'I') ADVANCE(67);
      if (lookahead == 'O') ADVANCE(117);
      END_STATE();
    case 14:
      if (lookahead == 'K') ADVANCE(16);
      END_STATE();
    case 15:
      if (lookahead == 'N') ADVANCE(33);
      END_STATE();
    case 16:
      if (lookahead == 'P') ADVANCE(72);
      END_STATE();
    case 17:
      if (lookahead == 'P') ADVANCE(73);
      END_STATE();
    case 18:
      if (lookahead == 'P') ADVANCE(74);
      END_STATE();
    case 19:
      if (lookahead == 'P') ADVANCE(75);
      END_STATE();
    case 20:
      if (lookahead == 'P') ADVANCE(76);
      END_STATE();
    case 21:
      if (lookahead == 'P') ADVANCE(77);
      END_STATE();
    case 22:
      if (lookahead == 'P') ADVANCE(78);
      END_STATE();
    case 23:
      if (lookahead == 'P') ADVANCE(79);
      END_STATE();
    case 24:
      if (lookahead == 'S') ADVANCE(82);
      END_STATE();
    case 25:
      if (lookahead == 'S') ADVANCE(83);
      END_STATE();
    case 26:
      if (lookahead == 'a') ADVANCE(81);
      END_STATE();
    case 27:
      if (lookahead == 'a') ADVANCE(63);
      END_STATE();
    case 28:
      if (lookahead == 'a') ADVANCE(34);
      END_STATE();
    case 29:
      if (lookahead == 'a') ADVANCE(65);
      END_STATE();
    case 30:
      if (lookahead == 'a') ADVANCE(107);
      END_STATE();
    case 31:
      if (lookahead == 'a') ADVANCE(38);
      END_STATE();
    case 32:
      if (lookahead == 'a') ADVANCE(39);
      END_STATE();
    case 33:
      if (lookahead == 'a') ADVANCE(64);
      END_STATE();
    case 34:
      if (lookahead == 'b') ADVANCE(61);
      END_STATE();
    case 35:
      if (lookahead == 'b') ADVANCE(115);
      END_STATE();
    case 36:
      if (lookahead == 'c') ADVANCE(29);
      if (lookahead == 'e') ADVANCE(60);
      if (lookahead == 'h') ADVANCE(58);
      if (lookahead == 'o') ADVANCE(113);
      END_STATE();
    case 37:
      if (lookahead == 'c') ADVANCE(49);
      END_STATE();
    case 38:
      if (lookahead == 'c') ADVANCE(51);
      END_STATE();
    case 39:
      if (lookahead == 'c') ADVANCE(52);
      END_STATE();
    case 40:
      if (lookahead == 'c') ADVANCE(111);
      END_STATE();
    case 41:
      if (lookahead == 'd') ADVANCE(116);
      END_STATE();
    case 42:
      if (lookahead == 'd') ADVANCE(30);
      END_STATE();
    case 43:
      if (lookahead == 'e') ADVANCE(95);
      END_STATE();
    case 44:
      if (lookahead == 'e') ADVANCE(15);
      END_STATE();
    case 45:
      if (lookahead == 'e') ADVANCE(24);
      END_STATE();
    case 46:
      if (lookahead == 'e') ADVANCE(40);
      END_STATE();
    case 47:
      if (lookahead == 'e') ADVANCE(138);
      END_STATE();
    case 48:
      if (lookahead == 'e') ADVANCE(122);
      END_STATE();
    case 49:
      if (lookahead == 'e') ADVANCE(137);
      END_STATE();
    case 50:
      if (lookahead == 'e') ADVANCE(139);
      END_STATE();
    case 51:
      if (lookahead == 'e') ADVANCE(119);
      END_STATE();
    case 52:
      if (lookahead == 'e') ADVANCE(121);
      END_STATE();
    case 53:
      if (lookahead == 'e') ADVANCE(110);
      END_STATE();
    case 54:
      if (lookahead == 'e') ADVANCE(25);
      END_STATE();
    case 55:
      if (lookahead == 'e') ADVANCE(11);
      END_STATE();
    case 56:
      if (lookahead == 'e') ADVANCE(12);
      END_STATE();
    case 57:
      if (lookahead == 'f') ADVANCE(97);
      END_STATE();
    case 58:
      if (lookahead == 'i') ADVANCE(57);
      END_STATE();
    case 59:
      if (lookahead == 'i') ADVANCE(35);
      END_STATE();
    case 60:
      if (lookahead == 'l') ADVANCE(46);
      END_STATE();
    case 61:
      if (lookahead == 'l') ADVANCE(47);
      END_STATE();
    case 62:
      if (lookahead == 'l') ADVANCE(48);
      END_STATE();
    case 63:
      if (lookahead == 'm') ADVANCE(45);
      END_STATE();
    case 64:
      if (lookahead == 'm') ADVANCE(54);
      END_STATE();
    case 65:
      if (lookahead == 'n') ADVANCE(13);
      END_STATE();
    case 66:
      if (lookahead == 'n') ADVANCE(28);
      END_STATE();
    case 67:
      if (lookahead == 'n') ADVANCE(18);
      END_STATE();
    case 68:
      if (lookahead == 'n') ADVANCE(21);
      END_STATE();
    case 69:
      if (lookahead == 'n') ADVANCE(22);
      END_STATE();
    case 70:
      if (lookahead == 'n') ADVANCE(23);
      END_STATE();
    case 71:
      if (lookahead == 'o') ADVANCE(41);
      END_STATE();
    case 72:
      if (lookahead == 'o') ADVANCE(86);
      END_STATE();
    case 73:
      if (lookahead == 'o') ADVANCE(87);
      END_STATE();
    case 74:
      if (lookahead == 'o') ADVANCE(88);
      END_STATE();
    case 75:
      if (lookahead == 'o') ADVANCE(89);
      END_STATE();
    case 76:
      if (lookahead == 'o') ADVANCE(90);
      END_STATE();
    case 77:
      if (lookahead == 'o') ADVANCE(91);
      END_STATE();
    case 78:
      if (lookahead == 'o') ADVANCE(92);
      END_STATE();
    case 79:
      if (lookahead == 'o') ADVANCE(93);
      END_STATE();
    case 80:
      if (lookahead == 'p') ADVANCE(42);
      if (lookahead == 's') ADVANCE(44);
      END_STATE();
    case 81:
      if (lookahead == 'p') ADVANCE(109);
      END_STATE();
    case 82:
      if (lookahead == 'p') ADVANCE(31);
      END_STATE();
    case 83:
      if (lookahead == 'p') ADVANCE(32);
      END_STATE();
    case 84:
      if (lookahead == 'r') ADVANCE(59);
      END_STATE();
    case 85:
      if (lookahead == 'r') ADVANCE(37);
      END_STATE();
    case 86:
      if (lookahead == 'r') ADVANCE(98);
      END_STATE();
    case 87:
      if (lookahead == 'r') ADVANCE(99);
      END_STATE();
    case 88:
      if (lookahead == 'r') ADVANCE(100);
      END_STATE();
    case 89:
      if (lookahead == 'r') ADVANCE(101);
      END_STATE();
    case 90:
      if (lookahead == 'r') ADVANCE(102);
      END_STATE();
    case 91:
      if (lookahead == 'r') ADVANCE(103);
      END_STATE();
    case 92:
      if (lookahead == 'r') ADVANCE(104);
      END_STATE();
    case 93:
      if (lookahead == 'r') ADVANCE(105);
      END_STATE();
    case 94:
      if (lookahead == 'r') ADVANCE(56);
      END_STATE();
    case 95:
      if (lookahead == 's') ADVANCE(53);
      END_STATE();
    case 96:
      if (lookahead == 't') ADVANCE(84);
      END_STATE();
    case 97:
      if (lookahead == 't') ADVANCE(10);
      END_STATE();
    case 98:
      if (lookahead == 't') ADVANCE(135);
      END_STATE();
    case 99:
      if (lookahead == 't') ADVANCE(134);
      END_STATE();
    case 100:
      if (lookahead == 't') ADVANCE(129);
      END_STATE();
    case 101:
      if (lookahead == 't') ADVANCE(133);
      END_STATE();
    case 102:
      if (lookahead == 't') ADVANCE(136);
      END_STATE();
    case 103:
      if (lookahead == 't') ADVANCE(131);
      END_STATE();
    case 104:
      if (lookahead == 't') ADVANCE(132);
      END_STATE();
    case 105:
      if (lookahead == 't') ADVANCE(130);
      END_STATE();
    case 106:
      if (lookahead == 't') ADVANCE(96);
      END_STATE();
    case 107:
      if (lookahead == 't') ADVANCE(55);
      END_STATE();
    case 108:
      if (lookahead == 't') ADVANCE(50);
      END_STATE();
    case 109:
      if (lookahead == 't') ADVANCE(114);
      END_STATE();
    case 110:
      if (lookahead == 't') ADVANCE(17);
      END_STATE();
    case 111:
      if (lookahead == 't') ADVANCE(19);
      END_STATE();
    case 112:
      if (lookahead == 't') ADVANCE(20);
      END_STATE();
    case 113:
      if (lookahead == 'u') ADVANCE(85);
      END_STATE();
    case 114:
      if (lookahead == 'u') ADVANCE(94);
      END_STATE();
    case 115:
      if (lookahead == 'u') ADVANCE(108);
      END_STATE();
    case 116:
      if (lookahead == 'u') ADVANCE(62);
      END_STATE();
    case 117:
      if (lookahead == 'u') ADVANCE(112);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(anon_sym_NameSpace);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(anon_sym_UseNameSpace);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(anon_sym_Module);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym_scalar_identifier);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(anon_sym_ScanInPort);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(anon_sym_CaptureEnPort);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(anon_sym_ShiftEnPort);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(anon_sym_UpdateEnPort);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(anon_sym_SelectPort);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(anon_sym_ResetPort);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(anon_sym_TCKPort);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(anon_sym_ScanOutPort);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(anon_sym_Source);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(anon_sym_Enable);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(anon_sym_Attribute);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym_positive_integer);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(153);
      if (lookahead == '0' ||
          lookahead == '1' ||
          lookahead == '_') ADVANCE(141);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(142);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym_positive_integer);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(142);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(anon_sym_d);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(anon_sym_D);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead == '\t') ADVANCE(150);
      if (lookahead == ' ') ADVANCE(149);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(anon_sym_TAB);
      if (lookahead == '\t') ADVANCE(150);
      if (lookahead == ' ') ADVANCE(149);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(anon_sym_b);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(anon_sym_B);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(aux_sym_unsized_binary_number_token1);
      if (lookahead == '0' ||
          lookahead == '1' ||
          lookahead == 'X' ||
          lookahead == '_' ||
          lookahead == 'x') ADVANCE(153);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(anon_sym_h);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(anon_sym_H);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(aux_sym_unsized_hex_number_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(156);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(aux_sym_string_content_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(158);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(159);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(aux_sym_string_content_token1);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(159);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(162);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 0},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 4},
  [6] = {.lex_state = 4},
  [7] = {.lex_state = 4},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 4},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 5},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 5},
  [29] = {.lex_state = 5},
  [30] = {.lex_state = 1},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 1},
  [33] = {.lex_state = 2},
  [34] = {.lex_state = 3},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 1},
  [37] = {.lex_state = 2},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 2},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 3},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 3},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 5},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 5},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 4},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 4},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 4},
  [91] = {.lex_state = 4},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 4},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 4},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 4},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 4},
  [100] = {.lex_state = 4},
  [101] = {.lex_state = 4},
  [102] = {.lex_state = 4},
  [103] = {.lex_state = 4},
  [104] = {.lex_state = 4},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 4},
  [107] = {.lex_state = 4},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 0},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 0},
  [113] = {.lex_state = 0},
  [114] = {.lex_state = 0},
  [115] = {.lex_state = 4},
  [116] = {.lex_state = 4},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_NameSpace] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_UseNameSpace] = ACTIONS(1),
    [anon_sym_Module] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_ScanInPort] = ACTIONS(1),
    [anon_sym_CaptureEnPort] = ACTIONS(1),
    [anon_sym_ShiftEnPort] = ACTIONS(1),
    [anon_sym_UpdateEnPort] = ACTIONS(1),
    [anon_sym_SelectPort] = ACTIONS(1),
    [anon_sym_ResetPort] = ACTIONS(1),
    [anon_sym_TCKPort] = ACTIONS(1),
    [anon_sym_ScanOutPort] = ACTIONS(1),
    [anon_sym_Source] = ACTIONS(1),
    [anon_sym_Enable] = ACTIONS(1),
    [anon_sym_Attribute] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [sym_positive_integer] = ACTIONS(1),
    [anon_sym_TILDE] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_DOLLAR] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [anon_sym_d] = ACTIONS(1),
    [anon_sym_D] = ACTIONS(1),
    [anon_sym_b] = ACTIONS(1),
    [anon_sym_B] = ACTIONS(1),
    [aux_sym_unsized_binary_number_token1] = ACTIONS(1),
    [anon_sym_h] = ACTIONS(1),
    [anon_sym_H] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_BSLASH] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(110),
    [sym__icl_source_items] = STATE(23),
    [sym_namespace_definition] = STATE(23),
    [sym_use_namespace_definition] = STATE(23),
    [sym_module_definition] = STATE(23),
    [aux_sym_source_file_repeat1] = STATE(23),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_NameSpace] = ACTIONS(5),
    [anon_sym_UseNameSpace] = ACTIONS(7),
    [anon_sym_Module] = ACTIONS(9),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 11,
    ACTIONS(7), 1,
      anon_sym_UseNameSpace,
    ACTIONS(11), 1,
      anon_sym_RBRACE,
    ACTIONS(13), 1,
      anon_sym_ScanInPort,
    ACTIONS(15), 1,
      anon_sym_CaptureEnPort,
    ACTIONS(17), 1,
      anon_sym_ShiftEnPort,
    ACTIONS(19), 1,
      anon_sym_UpdateEnPort,
    ACTIONS(21), 1,
      anon_sym_SelectPort,
    ACTIONS(23), 1,
      anon_sym_ResetPort,
    ACTIONS(25), 1,
      anon_sym_TCKPort,
    ACTIONS(27), 1,
      anon_sym_ScanOutPort,
    STATE(3), 12,
      sym_use_namespace_definition,
      sym__module_statement,
      sym__port_definition,
      sym_scan_in_port_definition,
      sym_capture_enable_port_definition,
      sym_shift_enable_port_definition,
      sym_update_enable_port_definition,
      sym_select_enable_port_definition,
      sym_reset_port_definition,
      sym_tck_port_definition,
      sym_scan_out_port_definition,
      aux_sym_module_body_repeat1,
  [45] = 11,
    ACTIONS(29), 1,
      anon_sym_UseNameSpace,
    ACTIONS(32), 1,
      anon_sym_RBRACE,
    ACTIONS(34), 1,
      anon_sym_ScanInPort,
    ACTIONS(37), 1,
      anon_sym_CaptureEnPort,
    ACTIONS(40), 1,
      anon_sym_ShiftEnPort,
    ACTIONS(43), 1,
      anon_sym_UpdateEnPort,
    ACTIONS(46), 1,
      anon_sym_SelectPort,
    ACTIONS(49), 1,
      anon_sym_ResetPort,
    ACTIONS(52), 1,
      anon_sym_TCKPort,
    ACTIONS(55), 1,
      anon_sym_ScanOutPort,
    STATE(3), 12,
      sym_use_namespace_definition,
      sym__module_statement,
      sym__port_definition,
      sym_scan_in_port_definition,
      sym_capture_enable_port_definition,
      sym_shift_enable_port_definition,
      sym_update_enable_port_definition,
      sym_select_enable_port_definition,
      sym_reset_port_definition,
      sym_tck_port_definition,
      sym_scan_out_port_definition,
      aux_sym_module_body_repeat1,
  [90] = 11,
    ACTIONS(7), 1,
      anon_sym_UseNameSpace,
    ACTIONS(13), 1,
      anon_sym_ScanInPort,
    ACTIONS(15), 1,
      anon_sym_CaptureEnPort,
    ACTIONS(17), 1,
      anon_sym_ShiftEnPort,
    ACTIONS(19), 1,
      anon_sym_UpdateEnPort,
    ACTIONS(21), 1,
      anon_sym_SelectPort,
    ACTIONS(23), 1,
      anon_sym_ResetPort,
    ACTIONS(25), 1,
      anon_sym_TCKPort,
    ACTIONS(27), 1,
      anon_sym_ScanOutPort,
    ACTIONS(58), 1,
      anon_sym_RBRACE,
    STATE(2), 12,
      sym_use_namespace_definition,
      sym__module_statement,
      sym__port_definition,
      sym_scan_in_port_definition,
      sym_capture_enable_port_definition,
      sym_shift_enable_port_definition,
      sym_update_enable_port_definition,
      sym_select_enable_port_definition,
      sym_reset_port_definition,
      sym_tck_port_definition,
      sym_scan_out_port_definition,
      aux_sym_module_body_repeat1,
  [135] = 12,
    ACTIONS(60), 1,
      sym_positive_integer,
    ACTIONS(62), 1,
      anon_sym_TILDE,
    ACTIONS(64), 1,
      anon_sym_DOLLAR,
    ACTIONS(66), 1,
      anon_sym_SQUOTE,
    ACTIONS(68), 1,
      anon_sym_DQUOTE,
    STATE(49), 1,
      sym_size,
    STATE(113), 1,
      sym_attribute_value,
    STATE(57), 2,
      sym_string,
      sym_parameter_ref,
    STATE(112), 2,
      sym_concat_number,
      sym_concat_string,
    STATE(52), 3,
      sym__number,
      sym_unsized_number,
      sym_sized_number,
    STATE(71), 3,
      sym_unsized_decimal_number,
      sym_unsized_binary_number,
      sym_unsized_hex_number,
    STATE(72), 3,
      sym_sized_decimal_number,
      sym_sized_binary_number,
      sym_sized_hex_number,
  [180] = 8,
    ACTIONS(60), 1,
      sym_positive_integer,
    ACTIONS(66), 1,
      anon_sym_SQUOTE,
    ACTIONS(70), 1,
      anon_sym_TILDE,
    ACTIONS(72), 1,
      anon_sym_DOLLAR,
    STATE(49), 1,
      sym_size,
    STATE(71), 3,
      sym_unsized_decimal_number,
      sym_unsized_binary_number,
      sym_unsized_hex_number,
    STATE(72), 3,
      sym_sized_decimal_number,
      sym_sized_binary_number,
      sym_sized_hex_number,
    STATE(74), 3,
      sym__number,
      sym_unsized_number,
      sym_sized_number,
  [211] = 7,
    ACTIONS(60), 1,
      sym_positive_integer,
    ACTIONS(66), 1,
      anon_sym_SQUOTE,
    ACTIONS(72), 1,
      anon_sym_DOLLAR,
    STATE(49), 1,
      sym_size,
    STATE(67), 3,
      sym__number,
      sym_unsized_number,
      sym_sized_number,
    STATE(71), 3,
      sym_unsized_decimal_number,
      sym_unsized_binary_number,
      sym_unsized_hex_number,
    STATE(72), 3,
      sym_sized_decimal_number,
      sym_sized_binary_number,
      sym_sized_hex_number,
  [239] = 1,
    ACTIONS(74), 13,
      ts_builtin_sym_end,
      anon_sym_NameSpace,
      anon_sym_UseNameSpace,
      anon_sym_Module,
      anon_sym_RBRACE,
      anon_sym_ScanInPort,
      anon_sym_CaptureEnPort,
      anon_sym_ShiftEnPort,
      anon_sym_UpdateEnPort,
      anon_sym_SelectPort,
      anon_sym_ResetPort,
      anon_sym_TCKPort,
      anon_sym_ScanOutPort,
  [255] = 1,
    ACTIONS(76), 13,
      ts_builtin_sym_end,
      anon_sym_NameSpace,
      anon_sym_UseNameSpace,
      anon_sym_Module,
      anon_sym_RBRACE,
      anon_sym_ScanInPort,
      anon_sym_CaptureEnPort,
      anon_sym_ShiftEnPort,
      anon_sym_UpdateEnPort,
      anon_sym_SelectPort,
      anon_sym_ResetPort,
      anon_sym_TCKPort,
      anon_sym_ScanOutPort,
  [271] = 7,
    ACTIONS(60), 1,
      sym_positive_integer,
    ACTIONS(66), 1,
      anon_sym_SQUOTE,
    ACTIONS(72), 1,
      anon_sym_DOLLAR,
    STATE(49), 1,
      sym_size,
    STATE(58), 3,
      sym__number,
      sym_unsized_number,
      sym_sized_number,
    STATE(71), 3,
      sym_unsized_decimal_number,
      sym_unsized_binary_number,
      sym_unsized_hex_number,
    STATE(72), 3,
      sym_sized_decimal_number,
      sym_sized_binary_number,
      sym_sized_hex_number,
  [299] = 1,
    ACTIONS(78), 10,
      anon_sym_UseNameSpace,
      anon_sym_RBRACE,
      anon_sym_ScanInPort,
      anon_sym_CaptureEnPort,
      anon_sym_ShiftEnPort,
      anon_sym_UpdateEnPort,
      anon_sym_SelectPort,
      anon_sym_ResetPort,
      anon_sym_TCKPort,
      anon_sym_ScanOutPort,
  [312] = 1,
    ACTIONS(80), 10,
      anon_sym_UseNameSpace,
      anon_sym_RBRACE,
      anon_sym_ScanInPort,
      anon_sym_CaptureEnPort,
      anon_sym_ShiftEnPort,
      anon_sym_UpdateEnPort,
      anon_sym_SelectPort,
      anon_sym_ResetPort,
      anon_sym_TCKPort,
      anon_sym_ScanOutPort,
  [325] = 1,
    ACTIONS(82), 10,
      anon_sym_UseNameSpace,
      anon_sym_RBRACE,
      anon_sym_ScanInPort,
      anon_sym_CaptureEnPort,
      anon_sym_ShiftEnPort,
      anon_sym_UpdateEnPort,
      anon_sym_SelectPort,
      anon_sym_ResetPort,
      anon_sym_TCKPort,
      anon_sym_ScanOutPort,
  [338] = 1,
    ACTIONS(84), 10,
      anon_sym_UseNameSpace,
      anon_sym_RBRACE,
      anon_sym_ScanInPort,
      anon_sym_CaptureEnPort,
      anon_sym_ShiftEnPort,
      anon_sym_UpdateEnPort,
      anon_sym_SelectPort,
      anon_sym_ResetPort,
      anon_sym_TCKPort,
      anon_sym_ScanOutPort,
  [351] = 1,
    ACTIONS(86), 10,
      anon_sym_UseNameSpace,
      anon_sym_RBRACE,
      anon_sym_ScanInPort,
      anon_sym_CaptureEnPort,
      anon_sym_ShiftEnPort,
      anon_sym_UpdateEnPort,
      anon_sym_SelectPort,
      anon_sym_ResetPort,
      anon_sym_TCKPort,
      anon_sym_ScanOutPort,
  [364] = 1,
    ACTIONS(88), 10,
      anon_sym_UseNameSpace,
      anon_sym_RBRACE,
      anon_sym_ScanInPort,
      anon_sym_CaptureEnPort,
      anon_sym_ShiftEnPort,
      anon_sym_UpdateEnPort,
      anon_sym_SelectPort,
      anon_sym_ResetPort,
      anon_sym_TCKPort,
      anon_sym_ScanOutPort,
  [377] = 1,
    ACTIONS(90), 10,
      anon_sym_UseNameSpace,
      anon_sym_RBRACE,
      anon_sym_ScanInPort,
      anon_sym_CaptureEnPort,
      anon_sym_ShiftEnPort,
      anon_sym_UpdateEnPort,
      anon_sym_SelectPort,
      anon_sym_ResetPort,
      anon_sym_TCKPort,
      anon_sym_ScanOutPort,
  [390] = 1,
    ACTIONS(92), 10,
      anon_sym_UseNameSpace,
      anon_sym_RBRACE,
      anon_sym_ScanInPort,
      anon_sym_CaptureEnPort,
      anon_sym_ShiftEnPort,
      anon_sym_UpdateEnPort,
      anon_sym_SelectPort,
      anon_sym_ResetPort,
      anon_sym_TCKPort,
      anon_sym_ScanOutPort,
  [403] = 1,
    ACTIONS(94), 10,
      anon_sym_UseNameSpace,
      anon_sym_RBRACE,
      anon_sym_ScanInPort,
      anon_sym_CaptureEnPort,
      anon_sym_ShiftEnPort,
      anon_sym_UpdateEnPort,
      anon_sym_SelectPort,
      anon_sym_ResetPort,
      anon_sym_TCKPort,
      anon_sym_ScanOutPort,
  [416] = 1,
    ACTIONS(96), 10,
      anon_sym_UseNameSpace,
      anon_sym_RBRACE,
      anon_sym_ScanInPort,
      anon_sym_CaptureEnPort,
      anon_sym_ShiftEnPort,
      anon_sym_UpdateEnPort,
      anon_sym_SelectPort,
      anon_sym_ResetPort,
      anon_sym_TCKPort,
      anon_sym_ScanOutPort,
  [429] = 5,
    ACTIONS(98), 1,
      anon_sym_RBRACE,
    ACTIONS(100), 1,
      anon_sym_Source,
    ACTIONS(102), 1,
      anon_sym_Enable,
    ACTIONS(104), 1,
      anon_sym_Attribute,
    STATE(24), 5,
      sym__scan_out_port_item,
      sym_scan_out_port_source,
      sym_scan_out_port_enable,
      sym_attribute_definition,
      aux_sym_scan_out_port_definition_repeat1,
  [449] = 5,
    ACTIONS(106), 1,
      anon_sym_RBRACE,
    ACTIONS(108), 1,
      anon_sym_Source,
    ACTIONS(111), 1,
      anon_sym_Enable,
    ACTIONS(114), 1,
      anon_sym_Attribute,
    STATE(22), 5,
      sym__scan_out_port_item,
      sym_scan_out_port_source,
      sym_scan_out_port_enable,
      sym_attribute_definition,
      aux_sym_scan_out_port_definition_repeat1,
  [469] = 5,
    ACTIONS(5), 1,
      anon_sym_NameSpace,
    ACTIONS(7), 1,
      anon_sym_UseNameSpace,
    ACTIONS(9), 1,
      anon_sym_Module,
    ACTIONS(117), 1,
      ts_builtin_sym_end,
    STATE(25), 5,
      sym__icl_source_items,
      sym_namespace_definition,
      sym_use_namespace_definition,
      sym_module_definition,
      aux_sym_source_file_repeat1,
  [489] = 5,
    ACTIONS(100), 1,
      anon_sym_Source,
    ACTIONS(102), 1,
      anon_sym_Enable,
    ACTIONS(104), 1,
      anon_sym_Attribute,
    ACTIONS(119), 1,
      anon_sym_RBRACE,
    STATE(22), 5,
      sym__scan_out_port_item,
      sym_scan_out_port_source,
      sym_scan_out_port_enable,
      sym_attribute_definition,
      aux_sym_scan_out_port_definition_repeat1,
  [509] = 5,
    ACTIONS(121), 1,
      ts_builtin_sym_end,
    ACTIONS(123), 1,
      anon_sym_NameSpace,
    ACTIONS(126), 1,
      anon_sym_UseNameSpace,
    ACTIONS(129), 1,
      anon_sym_Module,
    STATE(25), 5,
      sym__icl_source_items,
      sym_namespace_definition,
      sym_use_namespace_definition,
      sym_module_definition,
      aux_sym_source_file_repeat1,
  [529] = 4,
    ACTIONS(132), 1,
      anon_sym_DQUOTE,
    ACTIONS(134), 1,
      aux_sym_string_content_token1,
    ACTIONS(136), 1,
      anon_sym_BSLASH,
    STATE(29), 3,
      sym_string_content,
      sym_escape_sequence,
      aux_sym_string_repeat1,
  [544] = 3,
    ACTIONS(138), 2,
      anon_sym_d,
      anon_sym_D,
    ACTIONS(140), 2,
      anon_sym_b,
      anon_sym_B,
    ACTIONS(142), 2,
      anon_sym_h,
      anon_sym_H,
  [557] = 4,
    ACTIONS(134), 1,
      aux_sym_string_content_token1,
    ACTIONS(136), 1,
      anon_sym_BSLASH,
    ACTIONS(144), 1,
      anon_sym_DQUOTE,
    STATE(26), 3,
      sym_string_content,
      sym_escape_sequence,
      aux_sym_string_repeat1,
  [572] = 4,
    ACTIONS(146), 1,
      anon_sym_DQUOTE,
    ACTIONS(148), 1,
      aux_sym_string_content_token1,
    ACTIONS(151), 1,
      anon_sym_BSLASH,
    STATE(29), 3,
      sym_string_content,
      sym_escape_sequence,
      aux_sym_string_repeat1,
  [587] = 3,
    ACTIONS(156), 1,
      aux_sym_unsized_hex_number_token1,
    STATE(32), 1,
      aux_sym_unsized_decimal_number_repeat1,
    ACTIONS(154), 2,
      anon_sym_,
      anon_sym_TAB,
  [598] = 3,
    ACTIONS(68), 1,
      anon_sym_DQUOTE,
    ACTIONS(158), 1,
      anon_sym_DOLLAR,
    STATE(73), 2,
      sym_string,
      sym_parameter_ref,
  [609] = 3,
    ACTIONS(162), 1,
      aux_sym_unsized_hex_number_token1,
    STATE(36), 1,
      aux_sym_unsized_decimal_number_repeat1,
    ACTIONS(160), 2,
      anon_sym_,
      anon_sym_TAB,
  [620] = 3,
    ACTIONS(166), 1,
      aux_sym_unsized_binary_number_token1,
    STATE(41), 1,
      aux_sym_unsized_decimal_number_repeat1,
    ACTIONS(164), 2,
      anon_sym_,
      anon_sym_TAB,
  [631] = 3,
    ACTIONS(168), 1,
      sym_positive_integer,
    STATE(48), 1,
      aux_sym_unsized_decimal_number_repeat1,
    ACTIONS(170), 2,
      anon_sym_,
      anon_sym_TAB,
  [642] = 1,
    ACTIONS(172), 4,
      ts_builtin_sym_end,
      anon_sym_NameSpace,
      anon_sym_UseNameSpace,
      anon_sym_Module,
  [649] = 3,
    ACTIONS(177), 1,
      aux_sym_unsized_hex_number_token1,
    STATE(36), 1,
      aux_sym_unsized_decimal_number_repeat1,
    ACTIONS(174), 2,
      anon_sym_,
      anon_sym_TAB,
  [660] = 3,
    ACTIONS(177), 1,
      aux_sym_unsized_binary_number_token1,
    STATE(37), 1,
      aux_sym_unsized_decimal_number_repeat1,
    ACTIONS(179), 2,
      anon_sym_,
      anon_sym_TAB,
  [671] = 1,
    ACTIONS(182), 4,
      ts_builtin_sym_end,
      anon_sym_NameSpace,
      anon_sym_UseNameSpace,
      anon_sym_Module,
  [678] = 1,
    ACTIONS(184), 4,
      ts_builtin_sym_end,
      anon_sym_NameSpace,
      anon_sym_UseNameSpace,
      anon_sym_Module,
  [685] = 1,
    ACTIONS(186), 4,
      ts_builtin_sym_end,
      anon_sym_NameSpace,
      anon_sym_UseNameSpace,
      anon_sym_Module,
  [692] = 3,
    ACTIONS(190), 1,
      aux_sym_unsized_binary_number_token1,
    STATE(37), 1,
      aux_sym_unsized_decimal_number_repeat1,
    ACTIONS(188), 2,
      anon_sym_,
      anon_sym_TAB,
  [703] = 1,
    ACTIONS(192), 4,
      anon_sym_RBRACE,
      anon_sym_Source,
      anon_sym_Enable,
      anon_sym_Attribute,
  [710] = 3,
    ACTIONS(177), 1,
      sym_positive_integer,
    STATE(43), 1,
      aux_sym_unsized_decimal_number_repeat1,
    ACTIONS(194), 2,
      anon_sym_,
      anon_sym_TAB,
  [721] = 1,
    ACTIONS(197), 4,
      ts_builtin_sym_end,
      anon_sym_NameSpace,
      anon_sym_UseNameSpace,
      anon_sym_Module,
  [728] = 1,
    ACTIONS(199), 4,
      anon_sym_RBRACE,
      anon_sym_Source,
      anon_sym_Enable,
      anon_sym_Attribute,
  [735] = 1,
    ACTIONS(201), 4,
      anon_sym_RBRACE,
      anon_sym_Source,
      anon_sym_Enable,
      anon_sym_Attribute,
  [742] = 1,
    ACTIONS(203), 4,
      anon_sym_RBRACE,
      anon_sym_Source,
      anon_sym_Enable,
      anon_sym_Attribute,
  [749] = 3,
    ACTIONS(205), 1,
      sym_positive_integer,
    STATE(43), 1,
      aux_sym_unsized_decimal_number_repeat1,
    ACTIONS(207), 2,
      anon_sym_,
      anon_sym_TAB,
  [760] = 4,
    ACTIONS(66), 1,
      anon_sym_SQUOTE,
    STATE(62), 1,
      sym_unsized_decimal_number,
    STATE(83), 1,
      sym_unsized_hex_number,
    STATE(84), 1,
      sym_unsized_binary_number,
  [773] = 2,
    ACTIONS(211), 1,
      anon_sym_SQUOTE,
    ACTIONS(209), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [781] = 3,
    ACTIONS(213), 1,
      anon_sym_SEMI,
    ACTIONS(215), 1,
      anon_sym_COMMA,
    STATE(61), 1,
      aux_sym_concat_number_repeat1,
  [791] = 3,
    ACTIONS(215), 1,
      anon_sym_COMMA,
    ACTIONS(217), 1,
      anon_sym_SEMI,
    STATE(51), 1,
      aux_sym_concat_number_repeat1,
  [801] = 3,
    ACTIONS(219), 1,
      anon_sym_SEMI,
    ACTIONS(221), 1,
      anon_sym_COMMA,
    STATE(55), 1,
      aux_sym_concat_string_repeat1,
  [811] = 3,
    ACTIONS(215), 1,
      anon_sym_COMMA,
    ACTIONS(223), 1,
      anon_sym_SEMI,
    STATE(61), 1,
      aux_sym_concat_number_repeat1,
  [821] = 3,
    ACTIONS(225), 1,
      anon_sym_SEMI,
    ACTIONS(227), 1,
      anon_sym_COMMA,
    STATE(55), 1,
      aux_sym_concat_string_repeat1,
  [831] = 2,
    ACTIONS(232), 1,
      aux_sym_string_content_token1,
    ACTIONS(230), 2,
      anon_sym_DQUOTE,
      anon_sym_BSLASH,
  [839] = 3,
    ACTIONS(221), 1,
      anon_sym_COMMA,
    ACTIONS(234), 1,
      anon_sym_SEMI,
    STATE(53), 1,
      aux_sym_concat_string_repeat1,
  [849] = 3,
    ACTIONS(213), 1,
      anon_sym_SEMI,
    ACTIONS(215), 1,
      anon_sym_COMMA,
    STATE(54), 1,
      aux_sym_concat_number_repeat1,
  [859] = 2,
    ACTIONS(238), 1,
      anon_sym_SQUOTE,
    ACTIONS(236), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [867] = 2,
    ACTIONS(242), 1,
      aux_sym_string_content_token1,
    ACTIONS(240), 2,
      anon_sym_DQUOTE,
      anon_sym_BSLASH,
  [875] = 3,
    ACTIONS(244), 1,
      anon_sym_SEMI,
    ACTIONS(246), 1,
      anon_sym_COMMA,
    STATE(61), 1,
      aux_sym_concat_number_repeat1,
  [885] = 1,
    ACTIONS(249), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [890] = 2,
    ACTIONS(251), 1,
      anon_sym_LBRACE,
    STATE(39), 1,
      sym_module_body,
  [897] = 2,
    ACTIONS(253), 1,
      anon_sym_SEMI,
    ACTIONS(255), 1,
      sym_scalar_identifier,
  [904] = 1,
    ACTIONS(236), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [909] = 2,
    ACTIONS(257), 1,
      anon_sym_SEMI,
    ACTIONS(259), 1,
      anon_sym_EQ,
  [916] = 1,
    ACTIONS(261), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [921] = 1,
    ACTIONS(263), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [926] = 1,
    ACTIONS(265), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [931] = 1,
    ACTIONS(267), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [936] = 1,
    ACTIONS(209), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [941] = 1,
    ACTIONS(269), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [946] = 1,
    ACTIONS(225), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [951] = 1,
    ACTIONS(244), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [956] = 2,
    ACTIONS(271), 1,
      anon_sym_SEMI,
    ACTIONS(273), 1,
      sym_scalar_identifier,
  [963] = 1,
    ACTIONS(275), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [968] = 1,
    ACTIONS(277), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [973] = 2,
    ACTIONS(279), 1,
      anon_sym_SEMI,
    ACTIONS(281), 1,
      anon_sym_LBRACE,
  [980] = 1,
    ACTIONS(283), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [985] = 1,
    ACTIONS(285), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [990] = 1,
    ACTIONS(287), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [995] = 1,
    ACTIONS(289), 2,
      anon_sym_DQUOTE,
      anon_sym_BSLASH,
  [1000] = 1,
    ACTIONS(291), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [1005] = 1,
    ACTIONS(293), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [1010] = 1,
    ACTIONS(295), 1,
      anon_sym_SEMI,
  [1014] = 1,
    ACTIONS(297), 1,
      anon_sym_SEMI,
  [1018] = 1,
    ACTIONS(299), 1,
      anon_sym_SEMI,
  [1022] = 1,
    ACTIONS(301), 1,
      anon_sym_SEMI,
  [1026] = 1,
    ACTIONS(303), 1,
      anon_sym_SEMI,
  [1030] = 1,
    ACTIONS(305), 1,
      sym_scalar_identifier,
  [1034] = 1,
    ACTIONS(307), 1,
      sym_scalar_identifier,
  [1038] = 1,
    ACTIONS(238), 1,
      anon_sym_SQUOTE,
  [1042] = 1,
    ACTIONS(309), 1,
      sym_scalar_identifier,
  [1046] = 1,
    ACTIONS(311), 1,
      anon_sym_SEMI,
  [1050] = 1,
    ACTIONS(313), 1,
      sym_scalar_identifier,
  [1054] = 1,
    ACTIONS(315), 1,
      anon_sym_SEMI,
  [1058] = 1,
    ACTIONS(317), 1,
      sym_scalar_identifier,
  [1062] = 1,
    ACTIONS(319), 1,
      anon_sym_SEMI,
  [1066] = 1,
    ACTIONS(321), 1,
      sym_scalar_identifier,
  [1070] = 1,
    ACTIONS(323), 1,
      sym_scalar_identifier,
  [1074] = 1,
    ACTIONS(325), 1,
      sym_scalar_identifier,
  [1078] = 1,
    ACTIONS(327), 1,
      sym_scalar_identifier,
  [1082] = 1,
    ACTIONS(329), 1,
      sym_scalar_identifier,
  [1086] = 1,
    ACTIONS(331), 1,
      sym_scalar_identifier,
  [1090] = 1,
    ACTIONS(333), 1,
      anon_sym_SEMI,
  [1094] = 1,
    ACTIONS(335), 1,
      sym_scalar_identifier,
  [1098] = 1,
    ACTIONS(337), 1,
      sym_scalar_identifier,
  [1102] = 1,
    ACTIONS(339), 1,
      anon_sym_SEMI,
  [1106] = 1,
    ACTIONS(341), 1,
      anon_sym_SEMI,
  [1110] = 1,
    ACTIONS(343), 1,
      ts_builtin_sym_end,
  [1114] = 1,
    ACTIONS(345), 1,
      anon_sym_SEMI,
  [1118] = 1,
    ACTIONS(347), 1,
      anon_sym_SEMI,
  [1122] = 1,
    ACTIONS(349), 1,
      anon_sym_SEMI,
  [1126] = 1,
    ACTIONS(351), 1,
      anon_sym_SEMI,
  [1130] = 1,
    ACTIONS(353), 1,
      sym_scalar_identifier,
  [1134] = 1,
    ACTIONS(355), 1,
      sym_scalar_identifier,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 45,
  [SMALL_STATE(4)] = 90,
  [SMALL_STATE(5)] = 135,
  [SMALL_STATE(6)] = 180,
  [SMALL_STATE(7)] = 211,
  [SMALL_STATE(8)] = 239,
  [SMALL_STATE(9)] = 255,
  [SMALL_STATE(10)] = 271,
  [SMALL_STATE(11)] = 299,
  [SMALL_STATE(12)] = 312,
  [SMALL_STATE(13)] = 325,
  [SMALL_STATE(14)] = 338,
  [SMALL_STATE(15)] = 351,
  [SMALL_STATE(16)] = 364,
  [SMALL_STATE(17)] = 377,
  [SMALL_STATE(18)] = 390,
  [SMALL_STATE(19)] = 403,
  [SMALL_STATE(20)] = 416,
  [SMALL_STATE(21)] = 429,
  [SMALL_STATE(22)] = 449,
  [SMALL_STATE(23)] = 469,
  [SMALL_STATE(24)] = 489,
  [SMALL_STATE(25)] = 509,
  [SMALL_STATE(26)] = 529,
  [SMALL_STATE(27)] = 544,
  [SMALL_STATE(28)] = 557,
  [SMALL_STATE(29)] = 572,
  [SMALL_STATE(30)] = 587,
  [SMALL_STATE(31)] = 598,
  [SMALL_STATE(32)] = 609,
  [SMALL_STATE(33)] = 620,
  [SMALL_STATE(34)] = 631,
  [SMALL_STATE(35)] = 642,
  [SMALL_STATE(36)] = 649,
  [SMALL_STATE(37)] = 660,
  [SMALL_STATE(38)] = 671,
  [SMALL_STATE(39)] = 678,
  [SMALL_STATE(40)] = 685,
  [SMALL_STATE(41)] = 692,
  [SMALL_STATE(42)] = 703,
  [SMALL_STATE(43)] = 710,
  [SMALL_STATE(44)] = 721,
  [SMALL_STATE(45)] = 728,
  [SMALL_STATE(46)] = 735,
  [SMALL_STATE(47)] = 742,
  [SMALL_STATE(48)] = 749,
  [SMALL_STATE(49)] = 760,
  [SMALL_STATE(50)] = 773,
  [SMALL_STATE(51)] = 781,
  [SMALL_STATE(52)] = 791,
  [SMALL_STATE(53)] = 801,
  [SMALL_STATE(54)] = 811,
  [SMALL_STATE(55)] = 821,
  [SMALL_STATE(56)] = 831,
  [SMALL_STATE(57)] = 839,
  [SMALL_STATE(58)] = 849,
  [SMALL_STATE(59)] = 859,
  [SMALL_STATE(60)] = 867,
  [SMALL_STATE(61)] = 875,
  [SMALL_STATE(62)] = 885,
  [SMALL_STATE(63)] = 890,
  [SMALL_STATE(64)] = 897,
  [SMALL_STATE(65)] = 904,
  [SMALL_STATE(66)] = 909,
  [SMALL_STATE(67)] = 916,
  [SMALL_STATE(68)] = 921,
  [SMALL_STATE(69)] = 926,
  [SMALL_STATE(70)] = 931,
  [SMALL_STATE(71)] = 936,
  [SMALL_STATE(72)] = 941,
  [SMALL_STATE(73)] = 946,
  [SMALL_STATE(74)] = 951,
  [SMALL_STATE(75)] = 956,
  [SMALL_STATE(76)] = 963,
  [SMALL_STATE(77)] = 968,
  [SMALL_STATE(78)] = 973,
  [SMALL_STATE(79)] = 980,
  [SMALL_STATE(80)] = 985,
  [SMALL_STATE(81)] = 990,
  [SMALL_STATE(82)] = 995,
  [SMALL_STATE(83)] = 1000,
  [SMALL_STATE(84)] = 1005,
  [SMALL_STATE(85)] = 1010,
  [SMALL_STATE(86)] = 1014,
  [SMALL_STATE(87)] = 1018,
  [SMALL_STATE(88)] = 1022,
  [SMALL_STATE(89)] = 1026,
  [SMALL_STATE(90)] = 1030,
  [SMALL_STATE(91)] = 1034,
  [SMALL_STATE(92)] = 1038,
  [SMALL_STATE(93)] = 1042,
  [SMALL_STATE(94)] = 1046,
  [SMALL_STATE(95)] = 1050,
  [SMALL_STATE(96)] = 1054,
  [SMALL_STATE(97)] = 1058,
  [SMALL_STATE(98)] = 1062,
  [SMALL_STATE(99)] = 1066,
  [SMALL_STATE(100)] = 1070,
  [SMALL_STATE(101)] = 1074,
  [SMALL_STATE(102)] = 1078,
  [SMALL_STATE(103)] = 1082,
  [SMALL_STATE(104)] = 1086,
  [SMALL_STATE(105)] = 1090,
  [SMALL_STATE(106)] = 1094,
  [SMALL_STATE(107)] = 1098,
  [SMALL_STATE(108)] = 1102,
  [SMALL_STATE(109)] = 1106,
  [SMALL_STATE(110)] = 1110,
  [SMALL_STATE(111)] = 1114,
  [SMALL_STATE(112)] = 1118,
  [SMALL_STATE(113)] = 1122,
  [SMALL_STATE(114)] = 1126,
  [SMALL_STATE(115)] = 1130,
  [SMALL_STATE(116)] = 1134,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [29] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_module_body_repeat1, 2), SHIFT_REPEAT(64),
  [32] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_module_body_repeat1, 2),
  [34] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_module_body_repeat1, 2), SHIFT_REPEAT(102),
  [37] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_module_body_repeat1, 2), SHIFT_REPEAT(100),
  [40] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_module_body_repeat1, 2), SHIFT_REPEAT(99),
  [43] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_module_body_repeat1, 2), SHIFT_REPEAT(97),
  [46] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_module_body_repeat1, 2), SHIFT_REPEAT(95),
  [49] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_module_body_repeat1, 2), SHIFT_REPEAT(93),
  [52] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_module_body_repeat1, 2), SHIFT_REPEAT(91),
  [55] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_module_body_repeat1, 2), SHIFT_REPEAT(90),
  [58] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [60] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [62] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [64] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [66] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [68] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [70] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [72] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [74] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_use_namespace_definition, 2),
  [76] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_use_namespace_definition, 3),
  [78] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tck_port_definition, 3),
  [80] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reset_port_definition, 3),
  [82] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_enable_port_definition, 3),
  [84] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_update_enable_port_definition, 3),
  [86] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shift_enable_port_definition, 3),
  [88] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scan_out_port_definition, 6),
  [90] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_capture_enable_port_definition, 3),
  [92] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scan_in_port_definition, 3),
  [94] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scan_out_port_definition, 3),
  [96] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scan_out_port_definition, 5),
  [98] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_scan_out_port_definition_repeat1, 2),
  [108] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_scan_out_port_definition_repeat1, 2), SHIFT_REPEAT(101),
  [111] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_scan_out_port_definition_repeat1, 2), SHIFT_REPEAT(103),
  [114] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_scan_out_port_definition_repeat1, 2), SHIFT_REPEAT(107),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [123] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(75),
  [126] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(64),
  [129] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(115),
  [132] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [136] = {.entry = {.count = 1, .reusable = false}}, SHIFT(82),
  [138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [144] = {.entry = {.count = 1, .reusable = false}}, SHIFT(80),
  [146] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2),
  [148] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(60),
  [151] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(82),
  [154] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [156] = {.entry = {.count = 1, .reusable = false}}, SHIFT(77),
  [158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [160] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [162] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [164] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [166] = {.entry = {.count = 1, .reusable = false}}, SHIFT(79),
  [168] = {.entry = {.count = 1, .reusable = false}}, SHIFT(81),
  [170] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [172] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module_body, 3),
  [174] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_unsized_decimal_number_repeat1, 2), SHIFT_REPEAT(36),
  [177] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_unsized_decimal_number_repeat1, 2),
  [179] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_unsized_decimal_number_repeat1, 2), SHIFT_REPEAT(37),
  [182] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module_body, 2),
  [184] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module_definition, 3),
  [186] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_namespace_definition, 3),
  [188] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [190] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [192] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute_definition, 5),
  [194] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_unsized_decimal_number_repeat1, 2), SHIFT_REPEAT(43),
  [197] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_namespace_definition, 2),
  [199] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute_definition, 3),
  [201] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scan_out_port_enable, 3),
  [203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scan_out_port_source, 3),
  [205] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [207] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [209] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unsized_number, 1),
  [211] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_size, 1),
  [213] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_concat_number, 2),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [217] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_concat_number, 1),
  [219] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_concat_string, 2),
  [221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [223] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_concat_number, 3),
  [225] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_concat_string_repeat1, 2),
  [227] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_concat_string_repeat1, 2), SHIFT_REPEAT(31),
  [230] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_escape_sequence, 2),
  [232] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_escape_sequence, 2),
  [234] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_concat_string, 1),
  [236] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_ref, 2),
  [238] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_size, 2),
  [240] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_content, 1),
  [242] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_content, 1),
  [244] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_concat_number_repeat1, 2),
  [246] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_concat_number_repeat1, 2), SHIFT_REPEAT(6),
  [249] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sized_decimal_number, 2),
  [251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [261] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_concat_number_repeat1, 3),
  [263] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unsized_hex_number, 4),
  [265] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unsized_binary_number, 4),
  [267] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unsized_decimal_number, 4),
  [269] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sized_number, 1),
  [271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [275] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [277] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unsized_hex_number, 3),
  [279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [283] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unsized_binary_number, 3),
  [285] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2),
  [287] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unsized_decimal_number, 3),
  [289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [291] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sized_hex_number, 2),
  [293] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sized_binary_number, 2),
  [295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [313] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [321] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [323] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [325] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [327] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [329] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [331] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [333] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [335] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [337] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [339] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [341] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [343] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [345] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [347] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute_value, 1),
  [349] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [351] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [353] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [355] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_ICL(void) {
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
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
