#include QMK_KEYBOARD_H
#include "common.c"
//KC_BSLASH
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [_QWERTY] = LAYOUT_ortho_12x5(
    KC_GESC, KC_1,    KC_2,    KC_3,    KC_4,    KC_5,       KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MUTE,
    KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,       KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_MINS,
    KC_ESC,  KC_A,    KC_S,    KC_D,    KC_F,    KC_G,       KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT,
    KC_LCTL, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,       KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_UP, KC_SLASH,
    KC_LSFT, KC_LGUI, KC_LALT, KC_BSLASH,  LOWER,   KC_SPC,     KC_ENT,  RAISE,   KC_BSPC,  KC_LEFT, KC_DOWN,   KC_RGHT
  ),
   [_LOWER] = LAYOUT_ortho_12x5(
    KC_F12,    KC_F1,      KC_F2,      KC_F3,      KC_F4,      KC_F5,         KC_F6,      KC_F7,      KC_F8,     KC_F9,      KC_F10,      KC_F11,
    _______,  XXXXXXX,    XXXXXXX,    XXXXXXX,    XXXXXXX,    XXXXXXX,       XXXXXXX,    XXXXXXX,    XXXXXXX,    XXXXXXX,    KC_PSCREEN,  KC_BSPC,
    _______,  KC_EXLM,    KC_AT,      KC_HASH,     KC_DLR,    KC_PERC,        KC_CIRC,    KC_AMPR,    KC_ASTR,    KC_PLUS,    KC_MINS,   XXXXXXX,
    _______,  XXXXXXX,    XXXXXXX,    XXXXXXX,    XXXXXXX,    XXXXXXX,       XXXXXXX,    XXXXXXX,    XXXXXXX,    KC_HOME,    KC_PGUP,    KC_END,
    _______, _______,   _______,     _______,     _______,    _______,      _______,    _______,    _______,    KC_HOME,    KC_PGDOWN,  KC_END
  ),
  [_RAISE] = LAYOUT_ortho_12x5(
    KC_F12,    KC_F1,      KC_F2,      KC_F3,      KC_F4,      KC_F5,         KC_F6,      KC_F7,      KC_F8,     KC_F9,      KC_F10,      KC_F11,
    _______,  XXXXXXX,    XXXXXXX,    XXXXXXX,    XXXXXXX,    XXXXXXX,       XXXXXXX,    XXXXXXX,    XXXXXXX,    XXXXXXX,    ALGR(KC_S),      ALGR(KC_U),
    _______,  XXXXXXX,    XXXXXXX,    XXXXXXX,     XXXXXXX,   XXXXXXX,       XXXXXXX,    XXXXXXX,    XXXXXXX,    XXXXXXX,    ALGR(KC_O),      ALGR(KC_A),
    _______,  KC_LBRC,    KC_RBRC,    KC_LPRN,    KC_RPRN,    XXXXXXX,       KC_EQL,    KC_LCBR,    KC_RCBR,    S(KC_COMM), S(KC_DOT),   XXXXXXX,
    _______,  _______,    _______,       _______,  _______,   _______,       _______,     _______,   KC_DEL,       _______, _______,   _______
  ),
[_ADJUST] = LAYOUT_ortho_12x5(
    XXXXXXX,  XXXXXXX,   XXXXXXX,    XXXXXXX,    XXXXXXX,      XXXXXXX,       XXXXXXX,    XXXXXXX,    XXXXXXX,   XXXXXXX,    XXXXXXX,   OSL(_RESET),
    _______,  XXXXXXX,    XXXXXXX,    XXXXXXX,    XXXXXXX,    XXXXXXX,       XXXXXXX,    XXXXXXX,    XXXXXXX,    XXXXXXX,    XXXXXXX,   XXXXXXX,
    _______,  XXXXXXX,    XXXXXXX,    XXXXXXX,     XXXXXXX,    XXXXXXX,        XXXXXXX,    XXXXXXX,    XXXXXXX,    XXXXXXX,  XXXXXXX,   XXXXXXX,
    _______,  XXXXXXX,    XXXXXXX,    XXXXXXX,    XXXXXXX,    XXXXXXX,       XXXXXXX,    XXXXXXX,    XXXXXXX,    XXXXXXX,    XXXXXXX,   XXXXXXX,
    _______, _______, _______, _______,  _______,   _______,     _______,  _______,   _______, _______, _______,   _______
  ),
  [_RESET] = LAYOUT_ortho_12x5(
    RESET,    RESET,      RESET,      RESET,      RESET,      RESET,         RESET,      RESET,      RESET,     RESET,      RESET,      RESET,
    _______,  XXXXXXX,    XXXXXXX,    XXXXXXX,    XXXXXXX,    KC_HOME,       XXXXXXX,    XXXXXXX,    XXXXXXX,    XXXXXXX,    XXXXXXX,  XXXXXXX,
    _______,  XXXXXXX,    XXXXXXX,    XXXXXXX,     XXXXXXX,    XXXXXXX,        XXXXXXX,    XXXXXXX,    XXXXXXX,    XXXXXXX,       XXXXXXX, XXXXXXX,
    _______,  XXXXXXX,    XXXXXXX,    XXXXXXX,    XXXXXXX,    XXXXXXX,       XXXXXXX,    XXXXXXX,    XXXXXXX,    XXXXXXX,       XXXXXXX, XXXXXXX,
    _______, _______, _______, _______,  _______,   _______,     _______,  _______,   _______, _______, _______,   _______
  )
};



bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  if (record->event.pressed) {

  }

  switch (keycode) {
    case LOWER:
      if (record->event.pressed) {
        layer_on(_LOWER);
        update_tri_layer(_LOWER, _RAISE, _ADJUST);
      } else {
        layer_off(_LOWER);
        update_tri_layer(_LOWER, _RAISE, _ADJUST);
      }
      return false;
      break;
    case RAISE:
      if (record->event.pressed) {
        layer_on(_RAISE);
        update_tri_layer(_LOWER, _RAISE, _ADJUST);
      } else {
        layer_off(_RAISE);
        update_tri_layer(_LOWER, _RAISE, _ADJUST);
      }
      return false;
      break;
  }
  return true;
}

#ifdef OLED_DRIVER_ENABLE
void oled_task_user(void) {
    // Host Keyboard Layer Status
    oled_write_P(PSTR("Layer: "), false);

    switch (get_highest_layer(layer_state)) {
        case _QWERTY:
            oled_write_P(PSTR("Default\n"), false);
            break;
        case _LOWER:
            oled_write_P(PSTR("LOWER\n"), false);
            break;
        case _ADJUST:
            oled_write_P(PSTR("ADJUST\n"), false);
            break;
        case _RAISE:
            oled_write_P(PSTR("RAISE\n"), false);
            break;
        case _RESET:
            oled_write_P(PSTR("RESET"), false);
            break;
        default:
            // Or use the write_ln shortcut over adding '\n' to the end of your string
            oled_write_ln_P(PSTR("Undefined"), false);
    }

    // Host Keyboard LED Status
    led_t led_state = host_keyboard_led_state();
    oled_write_P(led_state.num_lock ? PSTR("NUM ") : PSTR("    "), false);
    oled_write_P(led_state.caps_lock ? PSTR("CAP ") : PSTR("    "), false);
    oled_write_P(led_state.scroll_lock ? PSTR("SCR ") : PSTR("    "), false);
}
#endif


oled_rotation_t oled_init_user(oled_rotation_t rotation) {
    return OLED_ROTATION_180;  // rotates the display 90 degrees
}

/*
   LAYOUT_ortho_1x1(KC_A, KC_B, KC_C, KC_D, KC_E, KC_F, KC_G, KC_H,KC_1,KC_2,KC_3,KC_4,
           KC_J, KC_K, KC_L, KC_M, KC_N, KC_O, KC_P, KC_Q,KC_1,KC_2,KC_3,KC_4,
           KC_R, KC_S, KC_T, KC_U, KC_V, KC_W, KC_X, KC_Y,KC_1,KC_2,KC_3,KC_4,
           KC_7, KC_6, KC_5, KC_4, KC_3, KC_2, KC_1, KC_Z,KC_1,KC_2,KC_3,KC_4,
           KC_7, KC_6, KC_5, KC_4, KC_3, KC_2, KC_1, KC_Z,KC_1,KC_2,KC_3,KC_4


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
   [0] = LAYOUT_DG(KC_A, KC_B, KC_C, KC_D, KC_E, KC_F, KC_G, KC_H,
           KC_J, KC_K, KC_L, KC_M, KC_N, KC_O, KC_P, KC_Q,
           KC_R, KC_S, KC_T, KC_U, KC_V, KC_W, KC_X, KC_Y,
           KC_7, KC_6, KC_5, KC_4, KC_3, KC_2, KC_1, KC_Z,
           KC_7, KC_6, KC_5, KC_4, KC_3, KC_2, KC_1, KC_Z )
};
*/

void encoder_update_user(uint8_t index, bool clockwise) {
    if (index == 0) { /* First encoder */
        if (clockwise) {
            tap_code(KC_VOLU);
        } else {
            tap_code(KC_VOLD);
        }
    }
}
