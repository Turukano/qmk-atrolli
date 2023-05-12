enum combos {
  NAVSTRG,
  ACCENT,
  BRO,
  BRC,
  SBRO,
  SBRC,
  CBRO,
  CBRC,
  TRO,
  TRC,
  SLA,
  BSLA,
  COMBO_LENGTH
};
uint16_t COMBO_LEN = COMBO_LENGTH; // remove the COMBO_COUNT define and use this instead!

const uint16_t PROGMEM navstrg[] = {KC_A, KC_B, COMBO_END};
const uint16_t PROGMEM accent[] = {TD(AA), KC_X, COMBO_END};
const uint16_t PROGMEM bro[] = {KC_N, KC_R, COMBO_END};
const uint16_t PROGMEM brc[] = {KC_R, TD(ESZET), COMBO_END};
const uint16_t PROGMEM sbro[] = {S(KC_N), S(KC_R), COMBO_END};
const uint16_t PROGMEM sbrc[] = {S(KC_R), S(KC_S), COMBO_END};
const uint16_t PROGMEM cbro[] = {KC_S, KC_D, COMBO_END};
const uint16_t PROGMEM cbrc[] = {KC_S, KC_D, COMBO_END};
const uint16_t PROGMEM tro[] = {KC_S, KC_D, COMBO_END};
const uint16_t PROGMEM trc[] = {KC_S, KC_D, COMBO_END};
const uint16_t PROGMEM sla[] = {KC_S, KC_D, COMBO_END};
const uint16_t PROGMEM blsa[] = {KC_S, KC_D, COMBO_END};

combo_t key_combos[] = {
    [NAVSTRG] = COMBO(navstrg, KC_LCTL),
    [ACCENT] = COMBO(accent, KC_EQL),
    [BRO] = COMBO(bro, LSFT(KC_8)),
    [BRC] = COMBO(brc, LSFT(KC_9)),
    [SBRO] = COMBO(sbro, RALT(KC_8)),
    [SBRC] = COMBO(sbrc, RALT(KC_9)),
    [CBRO] = COMBO(cbro, RALT(KC_7)),
    [CBRC] = COMBO(cbrc, RALT(KC_0)),
    [TRO] = COMBO(tro, KC_NUBS),
    [TRC] = COMBO(trc, LSFT(KC_NUBS)),
    [SLA] = COMBO(sla, LSFT(KC_7)),
    [BSLA] = COMBO(bsla, RALT(KC_MINS)),
};