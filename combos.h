enum combos {
  NAVSTRG,
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
  SLA2,
  BSLA,
  QUIT,
  MINUS,
  ALTTAB,
  ALTBTAB,
  WINGUI,
  ESCAPING,
  DELETING,
  BOOT,
  TAB,
  BTAB,
  TAB2,
  BTAB2,
  CTAB,
  SELLINEB,
  SELLINEF,
  SELLINE,
  NUMCOMBO,
  SWAP,
  FTWO,
  APO,
  NEIN,
  APP,
  COMBO_LENGTH
};
uint16_t COMBO_LEN = COMBO_LENGTH; // remove the COMBO_COUNT define and use this instead!

const uint16_t PROGMEM navstrg[] = {KC_A, KC_B, COMBO_END};
const uint16_t PROGMEM bro[] = {KC_H, LT(0,KC_L), COMBO_END};
const uint16_t PROGMEM bro2[] = {KC_7, KC_8, COMBO_END};
const uint16_t PROGMEM brc[] = {LT(0,KC_L), KC_M, COMBO_END};
const uint16_t PROGMEM brc2[] = {KC_8, KC_9, COMBO_END};
const uint16_t PROGMEM sbro[] = {S(KC_H), S(KC_L), COMBO_END};
const uint16_t PROGMEM sbrc[] = {S(KC_L), S(KC_M), COMBO_END};
const uint16_t PROGMEM cbro[] = {FN_NO, FN_LCKSCRN, COMBO_END};
const uint16_t PROGMEM cbrc[] = {FN_LCKSCRN, FN_ROTATE, COMBO_END};
const uint16_t PROGMEM tro[] = {FN_PRINT, FN_NO, COMBO_END};
const uint16_t PROGMEM trc[] = {FN_ROTATE, FN_TXTSHT, COMBO_END};
const uint16_t PROGMEM sla[] = {KC_B, LT(0,KC_N), COMBO_END};
const uint16_t PROGMEM sla2[] = {TD(STARPIPEPM), KC_4, COMBO_END};
const uint16_t PROGMEM bsla[] = {S(KC_B), S(KC_N), COMBO_END};
const uint16_t PROGMEM quit[] = {KC_H, LT(0,KC_L), KC_M, KC_W, COMBO_END};
const uint16_t PROGMEM minus[] = {TD(YMINS), DE_Z, COMBO_END};
const uint16_t PROGMEM alttab[] = {LT(0,KC_R), TD(ESZET), COMBO_END};
const uint16_t PROGMEM altbtab[] = {LT(0,KC_R), LT(0,KC_N), COMBO_END};
const uint16_t PROGMEM wingui[] = {LT(NUM,KC_T), LT(0,KC_I),   LT(0,KC_E), COMBO_END};
const uint16_t PROGMEM escaping[] = {KC_J, KC_D, COMBO_END};
const uint16_t PROGMEM nein[] = {KC_D,        LT(0,KC_U), COMBO_END};
const uint16_t PROGMEM deleting[] = {KC_M, KC_W, COMBO_END};
const uint16_t PROGMEM boot[] = {KC_F, KC_J, COMBO_END};
const uint16_t PROGMEM tab[] = {LT(0,KC_R), TD(ESZET), KC_G, COMBO_END};
const uint16_t PROGMEM btab[] = {KC_B, LT(0,KC_N), LT(0,KC_R), COMBO_END};
const uint16_t PROGMEM tab2[] = {KC_5, KC_6, KC_0, COMBO_END};
const uint16_t PROGMEM btab2[] = {TD(STARPIPEPM), KC_4, KC_5, COMBO_END};
const uint16_t PROGMEM ctab[] = {KC_LEFT, KC_DOWN, KC_RGHT, KC_F5, COMBO_END};
const uint16_t PROGMEM sellineb[] = {KC_LEFT, KC_DOWN, COMBO_END};
const uint16_t PROGMEM sellinef[] = {KC_DOWN, KC_RGHT, COMBO_END};
const uint16_t PROGMEM numcombo[] = {LT(STRG,KC_C), MO(SHIF), COMBO_END};
const uint16_t PROGMEM swap[] = {LT(0,KC_N),   LT(0,KC_R),  TD(ESZET), COMBO_END};
const uint16_t PROGMEM ftwo[] = {KC_LSFT,      KC_LGUI, COMBO_END};
const uint16_t PROGMEM apo[] = {LT(0,KC_A),     KC_X, COMBO_END};
const uint16_t PROGMEM app[] = {KC_DOT, KC_BSPC, COMBO_END};
const uint16_t PROGMEM selline[] = {KC_LEFT,      KC_DOWN,      KC_RGHT, COMBO_END};

combo_t key_combos[] = {
    [NAVSTRG] = COMBO(navstrg, KC_LCTL),
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
    [SLA2] = COMBO(sla2, LSFT(KC_7)),
    [BSLA] = COMBO(bsla, RALT(KC_MINS)),
    [QUIT] = COMBO(quit, LALT(KC_F4)),
    [MINUS] = COMBO(minus, KC_SLSH),
    [ALTTAB] = COMBO(alttab, ALT_TAB),
    [ALTBTAB] = COMBO(altbtab, ALT_BTAB),
    [ESCAPING] = COMBO(escaping, KC_ESC),
    [WINGUI] = COMBO(wingui, KC_LGUI),
    [DELETING] = COMBO(deleting, KC_DEL),
    [BOOT] = COMBO(boot, QK_MAKE),
    [TAB] = COMBO(tab, KC_TAB),
    [BTAB] = COMBO(btab, S(KC_TAB)),
    [TAB2] = COMBO(tab2, KC_TAB),
    [BTAB2] = COMBO(btab2, S(KC_TAB)),
    [CTAB] = COMBO(ctab, C(KC_F4)),
    [SELLINEB] = COMBO(sellineb, S(KC_HOME)), //funktioniert nicht
    [SELLINEF] = COMBO(sellinef, S(KC_END)), //funktioniert nicht
    [SELLINE] = COMBO(selline, SEL_LINE),
    [NUMCOMBO] = COMBO(numcombo, MO(NUM)),
    [SWAP] = COMBO(swap, SW_AP),
    [FTWO] = COMBO(ftwo, KC_F2),
    [APO] = COMBO(apo, S(KC_NUHS)),
    [NEIN] = COMBO(nein, A(KC_N)),
    [APP] = COMBO(app, KC_APP),
};