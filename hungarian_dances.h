enum {
    AA,
    EE,
    II,
    OO,
    UU,
    OE,
    UE,
    SHIAA,
    SHIEE,
    SHIII,
    SHIOO,
    SHIUU,
    SHIOE,
    SHIUE,
};

void aa(qk_tap_dance_state_t *state, void *user_data) {
    if (state->count == 1) {
  SEND_STRING(SS_TAP(X_A));
  reset_tap_dance (state); }
    else if (state->count == 3) {
    register_code(KC_RALT);
    tap_code(KC_KP_1);
    tap_code(KC_KP_6);
    tap_code(KC_KP_0);
    unregister_code(KC_RALT);
    }
}

void ee(qk_tap_dance_state_t *state, void *user_data) {
    if (state->count == 1) {
  SEND_STRING(SS_TAP(X_E));
  reset_tap_dance (state); }
    else if (state->count == 3) {
    register_code(KC_RALT);
    tap_code(KC_KP_1);
    tap_code(KC_KP_3);
    tap_code(KC_KP_0);
    unregister_code(KC_RALT);
    }
}

void ii(qk_tap_dance_state_t *state, void *user_data) {
    if (state->count == 1) {
  SEND_STRING(SS_TAP(X_I));
  reset_tap_dance (state); }
    else if (state->count == 3) {
    register_code(KC_RALT);
    tap_code(KC_KP_1);
    tap_code(KC_KP_6);
    tap_code(KC_KP_1);
    unregister_code(KC_RALT);
    }
}

void oo(qk_tap_dance_state_t *state, void *user_data) {
    if (state->count == 1) {
  SEND_STRING(SS_TAP(X_O));
  reset_tap_dance (state); }
    else if (state->count == 3) {
    register_code(KC_RALT);
    tap_code(KC_KP_1);
    tap_code(KC_KP_6);
    tap_code(KC_KP_2);
    unregister_code(KC_RALT);
    }
}

void uu(qk_tap_dance_state_t *state, void *user_data) {
    if (state->count == 1) {
  SEND_STRING(SS_TAP(X_U));
  reset_tap_dance (state); }
    else if (state->count == 3) {
    register_code(KC_RALT);
    tap_code(KC_KP_1);
    tap_code(KC_KP_6);
    tap_code(KC_KP_3);
    unregister_code(KC_RALT);
    }
}

void oe(qk_tap_dance_state_t *state, void *user_data) {
    if (state->count == 1) {
  SEND_STRING(SS_TAP(X_A));
  reset_tap_dance (state); }
    else if (state->count == 3) {
    register_code(KC_RALT);
    tap_code(KC_KP_0);
    tap_code(KC_KP_3);
    tap_code(KC_KP_3);
    tap_code(KC_KP_7);
    unregister_code(KC_RALT);
    }
}

void ue(qk_tap_dance_state_t *state, void *user_data) {
    if (state->count == 1) {
  SEND_STRING(SS_TAP(X_A));
  reset_tap_dance (state); }
    else if (state->count == 3) {
    register_code(KC_RALT);
    tap_code(KC_KP_0);
    tap_code(KC_KP_3);
    tap_code(KC_KP_6);
    tap_code(KC_KP_9);
    unregister_code(KC_RALT);
    }
}

void shiaa(qk_tap_dance_state_t *state, void *user_data) {
    if (state->count == 1) {
  SEND_STRING(SS_LSFT(SS_TAP(X_A)));
  reset_tap_dance (state); }
    else if (state->count == 3) {
    register_code(KC_RALT);
    tap_code(KC_KP_0);
    tap_code(KC_KP_1);
    tap_code(KC_KP_9);
    tap_code(KC_KP_3);
    unregister_code(KC_RALT);
    }
}

void shiee(qk_tap_dance_state_t *state, void *user_data) {
    if (state->count == 1) {
  SEND_STRING(SS_LSFT(SS_TAP(X_E)));
  reset_tap_dance (state); }
    else if (state->count == 3) {
    register_code(KC_RALT);
    tap_code(KC_KP_1);
    tap_code(KC_KP_4);
    tap_code(KC_KP_4);
    unregister_code(KC_RALT);
    }
}

void shiii(qk_tap_dance_state_t *state, void *user_data) {
    if (state->count == 1) {
  SEND_STRING(SS_LSFT(SS_TAP(X_I)));
  reset_tap_dance (state); }
    else if (state->count == 3) {
    register_code(KC_RALT);
    tap_code(KC_KP_0);
    tap_code(KC_KP_2);
    tap_code(KC_KP_0);
    tap_code(KC_KP_5);
    unregister_code(KC_RALT);
    }
}

void shioo(qk_tap_dance_state_t *state, void *user_data) {
    if (state->count == 1) {
  SEND_STRING(SS_LSFT(SS_TAP(X_O)));
  reset_tap_dance (state); }
    else if (state->count == 3) {
    register_code(KC_RALT);
    tap_code(KC_KP_0);
    tap_code(KC_KP_2);
    tap_code(KC_KP_1);
    tap_code(KC_KP_1);
    unregister_code(KC_RALT);
    }
}

void shiuu(qk_tap_dance_state_t *state, void *user_data) {
    if (state->count == 1) {
  SEND_STRING(SS_LSFT(SS_TAP(X_U)));
  reset_tap_dance (state); }
    else if (state->count == 3) {
    register_code(KC_RALT);
    tap_code(KC_KP_0);
    tap_code(KC_KP_2);
    tap_code(KC_KP_1);
    tap_code(KC_KP_8);
    unregister_code(KC_RALT);
    }
}

void shioe(qk_tap_dance_state_t *state, void *user_data) {
    if (state->count == 1) {
  SEND_STRING(SS_LSFT(SS_TAP(X_SCLN)));
  reset_tap_dance (state); }
    else if (state->count == 3) {
    register_code(KC_RALT);
    tap_code(KC_KP_0);
    tap_code(KC_KP_3);
    tap_code(KC_KP_3);
    tap_code(KC_KP_6);
    unregister_code(KC_RALT);
    }
}

void shiue(qk_tap_dance_state_t *state, void *user_data) {
    if (state->count == 1) {
  SEND_STRING(SS_LSFT(SS_TAP(X_LBRC)));
  reset_tap_dance (state); }
    else if (state->count == 3) {
    register_code(KC_RALT);
    tap_code(KC_KP_0);
    tap_code(KC_KP_3);
    tap_code(KC_KP_6);
    tap_code(KC_KP_8);
    unregister_code(KC_RALT);
    }
}

qk_tap_dance_action_t tap_dance_actions[] = {
    [AA] = ACTION_TAP_DANCE_FN(aa),
    [EE] = ACTION_TAP_DANCE_FN(ee),
    [II] = ACTION_TAP_DANCE_FN(ii),
    [OO] = ACTION_TAP_DANCE_FN(oo),
    [UU] = ACTION_TAP_DANCE_FN(uu),
    [OE] = ACTION_TAP_DANCE_FN(oe),
    [UE] = ACTION_TAP_DANCE_FN(ue),
    [SHIAA] = ACTION_TAP_DANCE_FN(shiaa),
    [SHIEE] = ACTION_TAP_DANCE_FN(shiee),
    [SHIII] = ACTION_TAP_DANCE_FN(shiii),
    [SHIOO] = ACTION_TAP_DANCE_FN(shioo),
    [SHIUU] = ACTION_TAP_DANCE_FN(shiuu),
    [SHIOE] = ACTION_TAP_DANCE_FN(shioe),
    [SHIUE] = ACTION_TAP_DANCE_FN(shiue),
};