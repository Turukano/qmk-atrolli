typedef enum {
    TD_NONE,
    TD_UNKNOWN,
    TD_SINGLE_TAP,
    TD_SINGLE_HOLD,
    TD_DOUBLE_TAP,
    TD_DOUBLE_HOLD,
    TD_DOUBLE_SINGLE_TAP, // Send two single taps
    TD_TRIPLE_TAP,
    TD_TRIPLE_HOLD
} td_state_t;

typedef struct {
    bool is_press_action;
    td_state_t state;
} td_tap_t;

enum {
    KQ,
    NAVNUM,
};

td_state_t cur_dance(qk_tap_dance_state_t *state) {
    if (state->count == 1) {
        if (state->interrupted || !state->pressed) return TD_SINGLE_TAP;
        else return TD_SINGLE_HOLD;
    } else if (state->count == 2) {
        if (state->interrupted) return TD_DOUBLE_SINGLE_TAP;
        else if (state->pressed) return TD_DOUBLE_HOLD;
        else return TD_DOUBLE_TAP;
    }
    if (state->count == 3) {
        if (state->interrupted || !state->pressed) return TD_TRIPLE_TAP;
        else return TD_TRIPLE_HOLD;
    } else return TD_UNKNOWN;
}

static td_tap_t xtap_state = {
    .is_press_action = true,
    .state = TD_NONE
};

void navnum(qk_tap_dance_state_t *state, void *user_data) {
    xtap_state.state = cur_dance(state);
    switch (xtap_state.state) {
        case TD_SINGLE_TAP: register_code(KC_NO); break;
        case TD_SINGLE_HOLD: layer_on(NAV); break;
        case TD_DOUBLE_TAP: register_code(KC_NO); break;
        case TD_DOUBLE_HOLD: layer_on(NUM); break;
        case TD_DOUBLE_SINGLE_TAP: tap_code(KC_NO); register_code(KC_NO); break;
        default: break;
    }
}

void navnum_res(qk_tap_dance_state_t *state, void *user_data) {
    switch (xtap_state.state) {
        case TD_SINGLE_TAP: unregister_code(KC_NO); break;
        case TD_SINGLE_HOLD: layer_off(NAV); break;
        case TD_DOUBLE_TAP: unregister_code(KC_NO); break;
        case TD_DOUBLE_HOLD: layer_off(NUM); break;
        case TD_DOUBLE_SINGLE_TAP: unregister_code(KC_NO); break;
        default: break;
    }
    xtap_state.state = TD_NONE;
}

qk_tap_dance_action_t tap_dance_actions[] = {
    [NAVNUM] = ACTION_TAP_DANCE_FN_ADVANCED(NULL, navnum, navnum_res),
    [KQ] = ACTION_TAP_DANCE_DOUBLE(KC_K, KC_Q),
};