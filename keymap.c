#include QMK_KEYBOARD_H
#include "keymap_german.h"
#include "functions.h"

bool is_alt_tab_active = false; // ADD this near the beginning of keymap.c
uint16_t alt_tab_timer = 0;     // we will be using them soon.

enum layer_names {
    DEF,
    SHIF,
    NAV,
    NUM,
    STRG,
    FFOX,
    BLANKO
};

enum custom_keycodes {
    UNNAV = SAFE_RANGE,
    UNNUM,
    ALT_TAB,
    ALT_BTAB,
    SW_AP,
    SEL_LINE,
};

#include "macros.h"
#include "tapdances.h"
#include "combos.h"

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [DEF] = LAYOUT(
    KC_J,             KC_D,        LT(0,KC_U),   LT(0,KC_A),     KC_X,                                   KC_P,        KC_H,         KC_L,        KC_M,        KC_W,
    LT(STRG,KC_C),    KC_T,        LT(0,KC_I),   LT(0,KC_E),     LT(0,KC_O),                             KC_B,        KC_N,         KC_R,        TD(ESZET),   KC_G,
    KC_F,             TD(VEXCL),   LT(0,DE_UDIA), TD(ADIAAT),    LT(0,DE_ODIA), _______,    _______,     TD(YMINS),   DE_Z,         MO(SHIF),    TD(COMMQ),   TD(KQ),
    _______,          _______,     _______,      TD(NAVNUM),     MO(SHIF),     KC_DOT,      KC_BSPC,     KC_SPC,      KC_ENT,       _______,     _______,     _______ ),
//IDEE: Hold c to copy, hold p to paste (statt combo) https://github.com/qmk/qmk_firmware/blob/master/docs/mod_tap.md

  [SHIF] = LAYOUT( 
    S(KC_J),         S(KC_D),      LT(1,S(KC_U)), LT(1,S(KC_A)), S(KC_X),                                   S(KC_P),      S(KC_H),      S(KC_L),      S(KC_M),      S(KC_W),
    S(KC_C),         S(KC_T),      LT(1,S(KC_I)), LT(1,S(KC_E)), LT(1,S(KC_O)),                             S(KC_B),      S(KC_N),      S(KC_R),      S(KC_S),      S(KC_G),
    S(KC_F),         S(KC_V),      LT(1,S(DE_UDIA)), S(DE_ADIA), LT(1,S(DE_ODIA)), _______,     _______,    S(DE_Y),      S(DE_Z),      DE_UNDS,      DE_SEMI,      TD(SHIKQ),
    _______,         _______,      _______,      TG(NUM),        DE_DQUO,         DE_COLN,     KC_BSPC,     KC_SPC,       S(KC_ENT),    _______,      _______,      _______ ),
//vielleicht del wieder in BSPC ändern?
  [NAV] = LAYOUT( 
    KC_BRID,         KC_BRIU,      KC_VOLD,      KC_VOLU,        KC_MUTE,                               KC_PGUP,      KC_BSPC,      KC_UP,        KC_DEL,       KC_INS,
    KC_LCTL,         KC_LSFT,      KC_LGUI,      KC_LALT,        MO(FFOX),                              KC_PGDN,      KC_LEFT,      KC_DOWN,      KC_RGHT,      KC_F5,
    _______,         _______,      _______,      FN_ZOOMOUT,     FN_ZOOMIN,    _______,     _______,    _______,      _______,      _______,      _______,      _______,
    _______,         _______,      _______,      UNNAV,          UNNAV,      _______,     _______,    _______,      _______,      _______,      _______,      _______ ),

  [NUM] = LAYOUT( 
    _______,         _______,      _______,      _______,        _______,                               TD(PLUSIST),   KC_7,         KC_8,         KC_9,         TD(EURDOLLPARA),
    _______,         KC_1,         KC_2,         KC_3,           _______,                             TD(STARPIPEPM), KC_4,         KC_5,         KC_6,         KC_0,
    _______,         _______,      _______,      _______,        _______,      _______,     _______,    DE_MINS,      KC_1,         KC_2,         KC_3,         TD(PERDEGTILD),
    _______,         _______,      _______,      UNNUM,          UNNUM,        KC_DOT,      KC_BSPC,    KC_SPC,       TD(ENTIST),   _______,      _______,      _______ ),
//Zahlen überarbeiten. Erstens will ich besser ran kommen und zweitens will ich da noch mehr machen, als nur Zahlen. Dot und Klammern müssen verfügbar sein, aber auch Arrows eigentlich
  [STRG] = LAYOUT( 
    LWIN(DE_Y),      FN_DESKTOP,   _______,      FN_SEALL,       FN_CUT,                                FN_PRINT,     FN_NO,      FN_LCKSCRN,   FN_ROTATE,    FN_TXTSHT,
    _______,         C(KC_T),      FN_TXTSHT,    FN_EXPL,        _______,                               FN_BULLET,    FN_NEW,       FN_RUN,       TD(SAVEAS),      FN_SCRNSHT,
    FN_SEARCH,       _______,      _______,      _______,        _______,      _______,     _______,    FN_REDO,      FN_UNDO,      _______,      FN_STREAM,    FN_PROJECT,
    _______,         _______,      _______,      _______,        _______,      _______,     C(KC_BSPC), _______,      C(KC_ENTER),  _______,      _______,     _______ ),
//word kursiv etc fehlen noch
  [FFOX] = LAYOUT( 
    _______,         _______,      _______,      _______,        _______,                               _______,      FN_FFGOBACK,  FN_FFNTAB,    FN_FFGOFORTH, _______,
    _______,         _______,      _______,      _______,        _______,                               _______,      FN_FFLEFT,    FN_FFXTAB,    FN_FFRIGHT,   _______,
    _______,         _______,      _______,      _______,        _______,      _______,     _______,    _______,      _______,      FN_FFRECOV,   _______,      _______,
    _______,         _______,      _______,      _______,        _______,      _______,     _______,    _______,      _______,      _______,      _______,      _______ ),

  [BLANKO] = LAYOUT( 
    _______,         _______,      _______,      _______,        _______,                               _______,      _______,      _______,      _______,      _______,
    _______,         _______,      _______,      _______,        _______,                               _______,      _______,      _______,      _______,      _______,
    _______,         _______,      _______,      _______,        _______,      _______,     _______,    _______,      _______,      _______,      _______,      _______,
    _______,         _______,      _______,      _______,        _______,      _______,     _______,    _______,      _______,      _______,      _______,      _______ ),
};


//copypaste: über Combo? über hold? über tapdance? Und es gibt ja noch das INS auf der Nav ebene...