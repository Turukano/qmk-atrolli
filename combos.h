enum combos {
  NAVSTRG,
  ACCENT,
  BRO,
  BRO2,
  BRC,
  BRC2,
  SBRO,
  SBRC,
  CBRO,
  CBRC,
  TRO,
  TRC,
  SLA,
  BSLA,
  QUIT,
  COMBO_LENGTH
};
uint16_t COMBO_LEN = COMBO_LENGTH; // remove the COMBO_COUNT define and use this instead!

const uint16_t PROGMEM navstrg[] = {KC_A, KC_B, COMBO_END};
const uint16_t PROGMEM accent[] = {KC_A, KC_X, COMBO_END};
const uint16_t PROGMEM bro[] = {KC_N, KC_R, COMBO_END};
const uint16_t PROGMEM bro2[] = {KC_4, KC_5, COMBO_END};
const uint16_t PROGMEM brc[] = {KC_R, TD(ESZET), COMBO_END};
const uint16_t PROGMEM brc2[] = {KC_5, KC_6, COMBO_END};
const uint16_t PROGMEM sbro[] = {S(KC_N), S(KC_R), COMBO_END};
const uint16_t PROGMEM sbrc[] = {S(KC_R), S(KC_S), COMBO_END};
const uint16_t PROGMEM cbro[] = {FN_NEW, FN_RUN, COMBO_END};
const uint16_t PROGMEM cbrc[] = {FN_RUN, FN_SAVE, COMBO_END};
const uint16_t PROGMEM tro[] = {FN_BULLET, FN_NEW, COMBO_END};
const uint16_t PROGMEM trc[] = {FN_SAVE, FN_SCRNSHT, COMBO_END};
const uint16_t PROGMEM sla[] = {KC_DOT, KC_BSPC, COMBO_END};
const uint16_t PROGMEM bsla[] = {DE_COLN, KC_DEL, COMBO_END};
const uint16_t PROGMEM quit[] = {KC_N, KC_R, TD(ESZET), KC_G, COMBO_END};

combo_t key_combos[] = {
    [NAVSTRG] = COMBO(navstrg, KC_LCTL),
    [ACCENT] = COMBO(accent, KC_EQL),
    [BRO] = COMBO(bro, LSFT(KC_8)),
    [BRO2] = COMBO(bro2, LSFT(KC_8)),
    [BRC] = COMBO(brc, LSFT(KC_9)),
    [BRC2] = COMBO(brc2, LSFT(KC_9)),
    [SBRO] = COMBO(sbro, RALT(KC_8)),
    [SBRC] = COMBO(sbrc, RALT(KC_9)),
    [CBRO] = COMBO(cbro, RALT(KC_7)),
    [CBRC] = COMBO(cbrc, RALT(KC_0)),
    [TRO] = COMBO(tro, KC_NUBS),
    [TRC] = COMBO(trc, LSFT(KC_NUBS)),
    [SLA] = COMBO(sla, LSFT(KC_7)),
    [BSLA] = COMBO(bsla, RALT(KC_MINS)),
    [QUIT] = COMBO(quit, LALT(KC_F4)),
};