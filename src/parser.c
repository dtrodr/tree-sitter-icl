#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 18
#define LARGE_STATE_COUNT 4
#define SYMBOL_COUNT 15
#define ALIAS_COUNT 0
#define TOKEN_COUNT 8
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 3
#define PRODUCTION_ID_COUNT 1

enum {
  anon_sym_NameSpace = 1,
  anon_sym_SEMI = 2,
  anon_sym_UseNameSpace = 3,
  anon_sym_Module = 4,
  anon_sym_LBRACE = 5,
  anon_sym_RBRACE = 6,
  sym_identifier = 7,
  sym_source_file = 8,
  sym__icl_source_items = 9,
  sym_namespace_definition = 10,
  sym_use_namespace_definition = 11,
  sym_module_definition = 12,
  sym_module_body = 13,
  aux_sym_source_file_repeat1 = 14,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_NameSpace] = "NameSpace",
  [anon_sym_SEMI] = ";",
  [anon_sym_UseNameSpace] = "UseNameSpace",
  [anon_sym_Module] = "Module",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [sym_identifier] = "identifier",
  [sym_source_file] = "source_file",
  [sym__icl_source_items] = "_icl_source_items",
  [sym_namespace_definition] = "namespace_definition",
  [sym_use_namespace_definition] = "use_namespace_definition",
  [sym_module_definition] = "module_definition",
  [sym_module_body] = "module_body",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_NameSpace] = anon_sym_NameSpace,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_UseNameSpace] = anon_sym_UseNameSpace,
  [anon_sym_Module] = anon_sym_Module,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [sym_identifier] = sym_identifier,
  [sym_source_file] = sym_source_file,
  [sym__icl_source_items] = sym__icl_source_items,
  [sym_namespace_definition] = sym_namespace_definition,
  [sym_use_namespace_definition] = sym_use_namespace_definition,
  [sym_module_definition] = sym_module_definition,
  [sym_module_body] = sym_module_body,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
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
  [sym_identifier] = {
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
  [aux_sym_source_file_repeat1] = {
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(26);
      if (lookahead == ';') ADVANCE(28);
      if (lookahead == 'M') ADVANCE(21);
      if (lookahead == 'N') ADVANCE(5);
      if (lookahead == 'U') ADVANCE(24);
      if (lookahead == '{') ADVANCE(31);
      if (lookahead == '}') ADVANCE(32);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == ';') ADVANCE(28);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(33);
      END_STATE();
    case 2:
      if (lookahead == 'N') ADVANCE(8);
      END_STATE();
    case 3:
      if (lookahead == 'S') ADVANCE(22);
      END_STATE();
    case 4:
      if (lookahead == 'S') ADVANCE(23);
      END_STATE();
    case 5:
      if (lookahead == 'a') ADVANCE(19);
      END_STATE();
    case 6:
      if (lookahead == 'a') ADVANCE(9);
      END_STATE();
    case 7:
      if (lookahead == 'a') ADVANCE(10);
      END_STATE();
    case 8:
      if (lookahead == 'a') ADVANCE(20);
      END_STATE();
    case 9:
      if (lookahead == 'c') ADVANCE(15);
      END_STATE();
    case 10:
      if (lookahead == 'c') ADVANCE(16);
      END_STATE();
    case 11:
      if (lookahead == 'd') ADVANCE(25);
      END_STATE();
    case 12:
      if (lookahead == 'e') ADVANCE(2);
      END_STATE();
    case 13:
      if (lookahead == 'e') ADVANCE(3);
      END_STATE();
    case 14:
      if (lookahead == 'e') ADVANCE(30);
      END_STATE();
    case 15:
      if (lookahead == 'e') ADVANCE(27);
      END_STATE();
    case 16:
      if (lookahead == 'e') ADVANCE(29);
      END_STATE();
    case 17:
      if (lookahead == 'e') ADVANCE(4);
      END_STATE();
    case 18:
      if (lookahead == 'l') ADVANCE(14);
      END_STATE();
    case 19:
      if (lookahead == 'm') ADVANCE(13);
      END_STATE();
    case 20:
      if (lookahead == 'm') ADVANCE(17);
      END_STATE();
    case 21:
      if (lookahead == 'o') ADVANCE(11);
      END_STATE();
    case 22:
      if (lookahead == 'p') ADVANCE(6);
      END_STATE();
    case 23:
      if (lookahead == 'p') ADVANCE(7);
      END_STATE();
    case 24:
      if (lookahead == 's') ADVANCE(12);
      END_STATE();
    case 25:
      if (lookahead == 'u') ADVANCE(18);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_NameSpace);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_UseNameSpace);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_Module);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(33);
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
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 1},
  [11] = {.lex_state = 1},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 1},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 0},
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
  },
  [1] = {
    [sym_source_file] = STATE(14),
    [sym__icl_source_items] = STATE(2),
    [sym_namespace_definition] = STATE(2),
    [sym_use_namespace_definition] = STATE(2),
    [sym_module_definition] = STATE(2),
    [aux_sym_source_file_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_NameSpace] = ACTIONS(5),
    [anon_sym_UseNameSpace] = ACTIONS(7),
    [anon_sym_Module] = ACTIONS(9),
  },
  [2] = {
    [sym__icl_source_items] = STATE(3),
    [sym_namespace_definition] = STATE(3),
    [sym_use_namespace_definition] = STATE(3),
    [sym_module_definition] = STATE(3),
    [aux_sym_source_file_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(11),
    [anon_sym_NameSpace] = ACTIONS(5),
    [anon_sym_UseNameSpace] = ACTIONS(7),
    [anon_sym_Module] = ACTIONS(9),
  },
  [3] = {
    [sym__icl_source_items] = STATE(3),
    [sym_namespace_definition] = STATE(3),
    [sym_use_namespace_definition] = STATE(3),
    [sym_module_definition] = STATE(3),
    [aux_sym_source_file_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(13),
    [anon_sym_NameSpace] = ACTIONS(15),
    [anon_sym_UseNameSpace] = ACTIONS(18),
    [anon_sym_Module] = ACTIONS(21),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 1,
    ACTIONS(24), 4,
      ts_builtin_sym_end,
      anon_sym_NameSpace,
      anon_sym_UseNameSpace,
      anon_sym_Module,
  [7] = 1,
    ACTIONS(26), 4,
      ts_builtin_sym_end,
      anon_sym_NameSpace,
      anon_sym_UseNameSpace,
      anon_sym_Module,
  [14] = 1,
    ACTIONS(28), 4,
      ts_builtin_sym_end,
      anon_sym_NameSpace,
      anon_sym_UseNameSpace,
      anon_sym_Module,
  [21] = 1,
    ACTIONS(30), 4,
      ts_builtin_sym_end,
      anon_sym_NameSpace,
      anon_sym_UseNameSpace,
      anon_sym_Module,
  [28] = 1,
    ACTIONS(32), 4,
      ts_builtin_sym_end,
      anon_sym_NameSpace,
      anon_sym_UseNameSpace,
      anon_sym_Module,
  [35] = 1,
    ACTIONS(34), 4,
      ts_builtin_sym_end,
      anon_sym_NameSpace,
      anon_sym_UseNameSpace,
      anon_sym_Module,
  [42] = 2,
    ACTIONS(36), 1,
      anon_sym_SEMI,
    ACTIONS(38), 1,
      sym_identifier,
  [49] = 2,
    ACTIONS(40), 1,
      anon_sym_SEMI,
    ACTIONS(42), 1,
      sym_identifier,
  [56] = 2,
    ACTIONS(44), 1,
      anon_sym_LBRACE,
    STATE(8), 1,
      sym_module_body,
  [63] = 1,
    ACTIONS(46), 1,
      sym_identifier,
  [67] = 1,
    ACTIONS(48), 1,
      ts_builtin_sym_end,
  [71] = 1,
    ACTIONS(50), 1,
      anon_sym_SEMI,
  [75] = 1,
    ACTIONS(52), 1,
      anon_sym_SEMI,
  [79] = 1,
    ACTIONS(54), 1,
      anon_sym_RBRACE,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(4)] = 0,
  [SMALL_STATE(5)] = 7,
  [SMALL_STATE(6)] = 14,
  [SMALL_STATE(7)] = 21,
  [SMALL_STATE(8)] = 28,
  [SMALL_STATE(9)] = 35,
  [SMALL_STATE(10)] = 42,
  [SMALL_STATE(11)] = 49,
  [SMALL_STATE(12)] = 56,
  [SMALL_STATE(13)] = 63,
  [SMALL_STATE(14)] = 67,
  [SMALL_STATE(15)] = 71,
  [SMALL_STATE(16)] = 75,
  [SMALL_STATE(17)] = 79,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [11] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [13] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [15] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(10),
  [18] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(11),
  [21] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(13),
  [24] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_namespace_definition, 2),
  [26] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_use_namespace_definition, 2),
  [28] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_namespace_definition, 3),
  [30] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_use_namespace_definition, 3),
  [32] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module_definition, 3),
  [34] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module_body, 2),
  [36] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [38] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [40] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [42] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [44] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [46] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [48] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [50] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [52] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [54] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
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
