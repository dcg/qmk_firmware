enum {
  TD_RSFT_LBRC = 0,
  TD_LALT_RBRC = 1,
  TD_RSFT_SPEC = 2,
};

void tap_char(qk_tap_dance_state_t *state, void *user_data, uint16_t default_key, uint16_t key1, uint16_t key2, uint16_t key3) {
    if (state->count == 1) {
      if (!state->pressed) {
        register_code16(key1);
      } else {
        register_code(default_key);
      }
    } else if (state->count == 2) {
        register_code16(key2);
    } else if (state->count == 3) {
        register_code16(key3);
    }
}

void tap_char_reset(qk_tap_dance_state_t *state, void *user_data, uint16_t default_key, uint16_t key1, uint16_t key2, uint16_t key3) {
    if (state->count == 1) {
        unregister_code16(key1);
    } else if (state->count == 2) {
        unregister_code16(key2);
    } else if (state->count == 3) {
        unregister_code16(key3);
    }

    unregister_code(default_key);
}


void left_brackets(qk_tap_dance_state_t *state, void *user_data) {
    tap_char(state, user_data, KC_LSFT, KC_LPRN, KC_LCBR, KC_LBRC);

}

void left_brackets_reset(qk_tap_dance_state_t *state, void *user_data) {
    tap_char_reset(state, user_data, KC_LSFT, KC_LPRN, KC_LCBR, KC_LBRC);
}

void right_brackets(qk_tap_dance_state_t *state, void *user_data) {
    tap_char(state, user_data, KC_LALT, KC_RPRN, KC_RCBR, KC_RBRC);
}

void right_brackets_reset(qk_tap_dance_state_t *state, void *user_data) {
    tap_char_reset(state, user_data, KC_LALT, KC_RPRN, KC_RCBR, KC_RBRC);
}

void special_chars(qk_tap_dance_state_t *state, void *user_data) {

    tap_char(state, user_data, KC_RSFT, KC_EQUAL, KC_PLUS, KC_DOLLAR);
}

void special_chars_reset(qk_tap_dance_state_t *state, void *user_data) {
        tap_char_reset(state, user_data, KC_RSFT, KC_EQUAL, KC_PLUS, KC_DOLLAR);
}



qk_tap_dance_action_t tap_dance_actions[] = {
  // Single tap = ( | Double tap = [ | Triple tap = { | Single hold = KC_LSFT
  [TD_RSFT_LBRC] = ACTION_TAP_DANCE_FN_ADVANCED(NULL, left_brackets, left_brackets_reset),
  [TD_LALT_RBRC] = ACTION_TAP_DANCE_FN_ADVANCED(NULL, right_brackets, right_brackets_reset),
  [TD_RSFT_SPEC] = ACTION_TAP_DANCE_FN_ADVANCED(NULL, special_chars, special_chars_reset),

};
