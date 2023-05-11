#include QMK_KEYBOARD_H
#include "keymap_german.h"
#include "functions.h"

enum layer_names {
    DEF,
    SHIF,
    NAV,
    NUM,
    NUMSHIF,
    STRG,
    FFOX,
    BLANKO
};

enum custom_keycodes {
    UNNAV = SAFE_RANGE,
    UNNUM,
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) { 
    case UNNAV: if (record->event.pressed) {layer_off(NAV);} break;

    case UNNUM: if (record->event.pressed) {layer_off(NUM);} break;
  }
  return true;
};

#include "tapdances.h"

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [DEF] = LAYOUT(
    KC_J,             KC_D,        KC_U,         TD(AA),         KC_X,                                   KC_P,        KC_H,         KC_L,        KC_M,        KC_W,
    LT(STRG,KC_C),    KC_T,        KC_I,         TD(EE),         KC_O,                                   KC_B,        KC_N,         KC_R,        TD(ESZET),   KC_G,
    KC_F,             TD(VEXCL),   DE_UDIA,      TD(ADIAAT),     TD(OE),      _______,     _______,     TD(YMINS),   DE_Z,         MO(SHIF),    TD(COMMQ),   TD(KQ),
    _______,          _______,     _______,      TD(NAVNUM),     MO(SHIF),     KC_DOT,      KC_BSPC,     KC_SPC,      KC_ENT,       _______,     _______,     _______ ),


  [SHIF] = LAYOUT( 
    S(KC_J),         S(KC_D),      S(KC_U),      TD(SHIAA),      S(KC_X),                               S(KC_P),      S(KC_H),      S(KC_L),      S(KC_M),      S(KC_W),
    S(KC_C),         S(KC_T),      S(KC_I),      TD(SHIEE),      S(KC_O),                               S(KC_B),      S(KC_N),      S(KC_R),      S(KC_S),      S(KC_G),
    S(KC_F),         S(KC_V),      S(DE_UDIA),   S(DE_ADIA),     TD(SHIOE),    _______,     _______,    S(DE_Y),      S(DE_Z),      DE_UNDS,      DE_SEMI,      TD(SHIKQ),
    _______,         _______,      _______,      TG(NUM),        DE_DQUO,      DE_COLN,     KC_DEL,     KC_SPC,       S(KC_ENT),    _______,      _______,      _______ ),

  [NAV] = LAYOUT( 
    KC_BRID,         KC_BRIU,      KC_VOLD,      KC_VOLU,        KC_MUTE,                               KC_PGUP,      KC_BSPC,      KC_UP,        KC_DEL,       KC_INS,
    KC_LCTL,         KC_LSFT,      KC_LGUI,      KC_LALT,        MO(FFOX),                              KC_PGDN,      KC_LEFT,      KC_DOWN,      KC_RGHT,      KC_F5,
    _______,         _______,      _______,      FN_ZOOMOUT,     FN_ZOOMIN,    _______,     _______,    _______,      _______,      _______,      _______,      _______,
    _______,         _______,      _______,      UNNAV,          _______,      _______,     _______,    _______,      _______,      _______,      _______,      _______ ),

  [NUM] = LAYOUT( 
    _______,         _______,      _______,      _______,        _______,                               _______,      KC_7,         KC_8,         KC_9,         _______,
    _______,         _______,      _______,      _______,        _______,                             TD(STARPIPEPM), KC_4,         KC_5,         KC_6,         KC_0,
    _______,         _______,      _______,      _______,        _______,      _______,     _______,    DE_MINS,      KC_1,         KC_2,         KC_3,         _______,
    _______,         _______,      _______,      UNNUM,          _______,      KC_DOT,      KC_BSPC,    KC_SPC,       KC_ENT,       _______,      _______,      _______ ),

  [NUMSHIF] = LAYOUT( 
    _______,         _______,      _______,      _______,        _______,                               _______,      _______,      _______,      _______,      _______,
    _______,         _______,      _______,      _______,        _______,                               _______,      _______,      _______,      _______,      _______,
    _______,         _______,      _______,      _______,        _______,      _______,     _______,    _______,      _______,      _______,      _______,      _______,
    _______,         _______,      _______,      _______,        _______,      _______,     _______,    _______,      _______,      _______,      _______,      _______ ),

  [STRG] = LAYOUT( 
    _______,         FN_DESKTOP,   _______,      FN_SEALL,       FN_CUT,                                FN_PRINT,     _______,      FN_LCKSCRN,   FN_ROTATE,    FN_TXTSHT,
    _______,         C(KC_T),      FN_TXTSHT,    FN_EXPL,        _______,                               FN_BULLET,    FN_NEW,       FN_RUN,       FN_SAVE,      FN_SCRNSHT,
    FN_SEARCH,       _______,      _______,      _______,        _______,      _______,     _______,    FN_REDO,      FN_UNDO,      _______,      FN_STREAM,    FN_PROJECT,
    _______,         _______,      _______,      _______,        _______,      _______,     C(KC_BSPC), _______,      C(KC_ENTER),  _______,      _______,     _______ ),

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
