#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    LAYOUT_ortho_1x1(KC_A, KC_B, KC_C, KC_D, KC_E, KC_F, KC_G, KC_H,KC_1,KC_2,KC_3,KC_4,
                    KC_J, KC_K, KC_L, KC_M, KC_N, KC_O, KC_P, KC_Q,KC_1,KC_2,KC_3,KC_4,
                    KC_R, KC_S, KC_T, KC_U, KC_V, KC_W, KC_X, KC_Y,KC_1,KC_2,KC_3,KC_4,
                    KC_7, KC_6, KC_5, KC_4, KC_3, KC_2, KC_1, KC_Z,KC_1,KC_2,KC_3,KC_4,
                    KC_7, KC_6, KC_5, KC_4, KC_3, KC_2, KC_1, KC_Z,KC_1,KC_2,KC_3,KC_4
)
};
#ifdef OLED_DRIVER_ENABLE
void oled_task_user(void) {
    // Host Keyboard Layer Status
    oled_write_P(PSTR("Layer: "), false);
}
#endif
#ifdef AUDIO_ENABLE
  #define STARTUP_SONG SONG(STARTUP_SOUND)
#endif
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
            tap_code(KC_B);
        } else {
            tap_code(KC_C);
        }
    } else if (index == 1) { /* Second encoder */
        if (clockwise) {
            tap_code(KC_D);
        } else {
            tap_code(KC_B);
        }
    }
}
