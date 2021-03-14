#include QMK_KEYBOARD_H
#include "common.c"
#include "tapdance.c"
#include "encoder.c"
const uint8_t RGBLED_KNIGHT_INTERVALS[] PROGMEM = {120, 60, 30};


extern uint8_t is_master;


enum unicode_names {
    POOP,
    A,
    O,
    U,
    AA,
    OO,
    UU,
    S,
    SS,
    WINK,
    LUV,
    APE,
    ROFL,
    WARN,
    PARTY,
    POP,
    LOOK,
};


const uint32_t PROGMEM unicode_map[] = {
    [POOP]   =    0x1F4A9, //💩
    [A]   =    0x00E4,//ä'
    [O]   =    0x00F6,//ö
    [U]   =   0x00FC, //ü
    [AA]   =    0x00C4, //Ä
    [OO]   =   0x00D6, //Ö
    [UU]   =    0x00DC,//Ü
    [S]   =    0x00DF,//ẞ
    [SS]   =    0x1e9e,//ẞ
    [WINK]   =    0x1F609,                // 😉
    [LUV]   =    0x1F60D,                // 😍
    [APE]   =    0x1F648,                // 🙈
    [ROFL]   =    0x1F923,                // 🤣
    [WARN]   =    0x26A0,                // ⚠
    [PARTY]   =    0x1F389,                // 🎉
    [POP]   =    0x1F37E               // 🍾
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

/* QWERTY
 * ,-----------------------------------------.                    ,-----------------------------------------.
 * | ESC  |   1  |   2  |   3  |   4  |   5  |                    |   6  |   7  |   8  |   9  |   0  |  `   |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * | Tab  |   Q  |   W  |   E  |   R  |   T  |                    |   Y  |   U  |   I  |   O  |   P  |  -   |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * |LCTRL |   A  |   S  |   D  |   F  |   G  |-------.    ,-------|   H  |   J  |   K  |   L  |   ;  |  '   |
 * |------+------+------+------+------+------|   [   |    |    ]  |------+------+------+------+------+------|
 * |LShift|   Z  |   X  |   C  |   V  |   B  |-------|    |-------|   N  |   M  |   ,  |   .  |   /  |RShift|
 * `-----------------------------------------/       /     \      \-----------------------------------------'
 *                   | LAlt | LGUI |LOWER | /Space  /       \Enter \  |RAISE |BackSP| RGUI |
 *                   |      |      |      |/       /         \      \ |      |      |      |
 *                   `----------------------------'           '------''--------------------'
 */

 [_QWERTY_DEFAULT] = LAYOUT(
  KC_GESC,   KC_1,   KC_2,    KC_3,    KC_4,    KC_5,                     KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_BSPC,
  KC_TAB,   KC_Q,   KC_W,    KC_E,    KC_R,    KC_T,                     KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_MINS,
  KC_LCTRL,  KC_A,   KC_S,    KC_D,    KC_F,    KC_G,                     KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT,
  TD(TD_RSFT_LBRC), KC_Z,   KC_X,    KC_C,    KC_V,    KC_B, KC_MUTE,  KC_LEAD,  KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH,  TD(TD_RSFT_SPEC),
                             TD(TD_LALT_RBRC), KC_LGUI,LOWER, KC_SPC,   KC_ENT,   RAISE,   KC_BSPC, KC_RGUI
),
 [_QWERTY_NEW] = LAYOUT(
  KC_GESC,   KC_1,   KC_2,    KC_3,    KC_4,    KC_5,                       KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_BSLASH,
  KC_TAB,    KC_Q,   KC_W,    KC_E,    KC_R,    KC_T,                       KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_MINS,
  KC_LCTRL,  KC_A,   KC_S,    KC_D,    KC_F,    KC_G,                       KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT,
  KC_LSHIFT, KC_Z,   KC_X,    KC_C,    KC_V,    KC_B, KC_MUTE,    KC_LEAD,  KC_N,    KC_M,  KC_COMM,   KC_DOT,  KC_SLSH, KC_RSHIFT,
                             KC_LALT, KC_LGUI,LOWER, KC_SPC,      KC_ENT,   RAISE,  SUPER , KC_BSPC
),


[_GAMING] = LAYOUT(
  KC_ESC,  _______, _______, _______, _______, _______,                       KC_BSPC, KC_F1, KC_F2,KC_F3, KC_F9, TG(_GAMING),
  KC_TAB,   _______, _______, _______, _______, _______,                       _______, KC_F4, KC_F5, KC_F6,_______,_______,
  KC_LSFT,  _______, _______, _______, _______, _______,                       _______, _______, _______, _______, _______, _______,
  KC_LCTRL, _______, _______, _______, _______, _______, _______,    KC_F5,  _______, _______, _______, _______, _______, KC_P,
                             KC_CAPS, KC_LALT, KC_LSFT, KC_SPC,    KC_ENT,  KC_LGUI, LOWER, RAISE
),
[_NUMBLOCK] = LAYOUT(
  _______, _______, _______, _______, _______, _______,                     KC_PEQL, KC_PSLS, KC_PAST,KC_PMNS, KC_NLCK, TG(_NUMBLOCK),
  _______, _______, _______, _______, _______,  _______,                    KC_KP_7, KC_KP_8, KC_KP_9, KC_PPLS,_______,_______,
  _______, _______, _______, _______, _______,  _______,                    KC_KP_4, KC_KP_5, KC_KP_6, KC_PPLS, _______, _______,
  _______, _______, _______, _______, _______, _______, _______, _______,   KC_KP_1, KC_KP_2, KC_KP_3, KC_KP_ENTER, _______, _______,
                             _______, _______, _______, _______, _______,   KC_KP_0, KC_KP_DOT, KC_PCMM
),

[_LOWER] = LAYOUT(
  KC_F12,  KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,                            KC_F6, KC_F7, KC_F8,KC_F9, KC_F10, KC_F11,
  _______, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_HOME,                          KC_PGUP,  XXXXXXX, KC_UP,  XXXXXXX,UML_U,UML_S,
  _______, XXXXXXX, XXXXXXX, KC_DEL, KC_BSPC,  KC_END,                           KC_PGDOWN, KC_LEFT, KC_DOWN, KC_RGHT, UML_O, UML_A,
  _______, XXXXXXX, XXXXXXX,XXXXXXX, XXXXXXX, KC_PSCREEN, _______,     _______,  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
                             _______, _______, _______, KC_DEL,        KC_BSPC,_______, _______, _______
),

[_RAISE] = LAYOUT(
  _______,  KC_GRV,   XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                             XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  _______,  KC_1,     KC_2,    KC_3,    KC_4,    KC_5,                                KC_6,    KC_7,    KC_8,    KC_9,    KC_0,  XXXXXXX,
  _______,  KC_EXLM,  KC_AT,   KC_HASH, KC_DLR,   KC_PERC,                            KC_CIRC, KC_AMPR, KC_ASTR, KC_PLUS , KC_MINS, KC_PIPE,
  KC_LSFT,  KC_TILD,  KC_LBRC, KC_RBRC, KC_LPRN,  KC_RPRN,    _______,       _______, KC_LCBR, KC_RCBR,  KC_EQL, S(KC_COMM), S(KC_DOT), KC_GRV,
                                  _______, _______, _______,  _______,       _______, _______, _______, _______
),

  [_ADJUST] = LAYOUT(
  TG(_GAMING), XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                            XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, TG(_SETTINGS),
  XXXXXXX,     XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                           XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  XXXXXXX,     XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                           XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,  XXXXXXX,
  XXXXXXX,     XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,    TG(_NUMBLOCK), XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
                             _______, _______, _______, _______,          _______,    _______, _______, _______
  ),

[_SETTINGS] = LAYOUT(
  XXXXXXX, XXXXXXX, XXXXXXX,              XXXXXXX,   XXXXXXX, XXXXXXX,                         XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, TG(_SETTINGS),
  XXXXXXX, XXXXXXX, XXXXXXX,              XXXXXXX  , XXXXXXX, XXXXXXX,                         XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  KC_ASON, XXXXXXX, DF(_QWERTY_NEW),      XXXXXXX,   XXXXXXX, XXXXXXX,                         RGB_M_R, RGB_M_T, RGB_TOG, RGB_HUI, RGB_SAI, RGB_VAI,
  KC_ASOFF, UC_MOD, DF(_QWERTY_DEFAULT), XXXXXXX,    XXXXXXX, XXXXXXX, XXXXXXX,      XXXXXXX,  RGB_M_SW, RGB_M_P, RGB_MOD, RGB_HUD, RGB_SAD, RGB_VAD,
                             _______, _______, _______, _______,                  _______,  _______, _______, _______
  )
};

int RGB_current_mode;

// Setting ADJUST layer RGB back to default
void update_tri_layer_RGB(uint8_t layer1, uint8_t layer2, uint8_t layer3) {
  if (IS_LAYER_ON(layer1) && IS_LAYER_ON(layer2)) {
    layer_on(layer3);
  } else {
    layer_off(layer3);
  }
}

void keyboard_post_init_user(void) {
    RGB_current_mode = rgblight_get_mode();
}



oled_rotation_t oled_init_user(oled_rotation_t rotation) {
  if (is_keyboard_master())
    return OLED_ROTATION_180;  // flips the display 180 degrees if offhand
  return rotation;
}

const char* input_modes[] = {
    "",
    "LNX",
    "WIN",
    "BSD",
    "WINC"
};

const char *read_layer_state(void);

void oled_task_user(void) {
  if (is_keyboard_master()) {
      oled_write_ln(input_modes[get_unicode_input_mode()],false);
      oled_write_ln(read_layer_state(), false);

  } else {
         // render_logo();

  }
}
LEADER_EXTERNS();

void matrix_scan_user(void) {
 LEADER_DICTIONARY() {
    leading = false;
    leader_end();


    SEQ_TWO_KEYS(KC_J, KC_F) {
      SEND_STRING("() => {}");
    }
    SEQ_ONE_KEY(KC_E) {
      SEND_STRING("dominik.gaetjens@gmail.com");
    }
    SEQ_ONE_KEY(KC_N) {
      SEND_STRING("Dominik G");
      send_unicode_string("ä");
      SEND_STRING("tjens");

    }
  }
}


bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  if (record->event.pressed) {

  }

  switch (keycode) {
    case LOWER:
      if (record->event.pressed) {
        layer_on(_LOWER);
        update_tri_layer_RGB(_LOWER, _RAISE, _ADJUST);
      } else {
        layer_off(_LOWER);
        update_tri_layer_RGB(_LOWER, _RAISE, _ADJUST);
      }
      return false;
      break;
    case RAISE:
      if (record->event.pressed) {
        layer_on(_RAISE);
        update_tri_layer_RGB(_LOWER, _RAISE, _ADJUST);
      } else {
        layer_off(_RAISE);
        update_tri_layer_RGB(_LOWER, _RAISE, _ADJUST);
      }
      return false;
      break;
    case ADJUST:
      if (record->event.pressed) {
        layer_on(_ADJUST);
      } else {
        layer_off(_ADJUST);
      }
      return false;
      break;
    case EMOJI:
      if (!record->event.pressed) {
      }
      break;
    case UML_A:
      if (record->event.pressed) {
        if (get_mods() & MOD_MASK_SHIFT) {
            send_unicode_string("Ä");
        } else {send_unicode_string("ä"); }
      }
      break;
    case UML_O:
      if (record->event.pressed) {
        if (get_mods() & MOD_MASK_SHIFT) {
            send_unicode_string("Ö");
        } else {send_unicode_string("ö"); }
      }
      break;
    case UML_U:
      if (record->event.pressed) {
        if (get_mods() & MOD_MASK_SHIFT) {
            send_unicode_string("Ü");
        } else {send_unicode_string("ü"); }
      }
      break;
    case UML_S:
      if (record->event.pressed) {
        if (get_mods() & MOD_MASK_SHIFT) {
            send_unicode_string("ẞ");
        } else {send_unicode_string("ß"); }
      }
      break;
  }
  return true;
}
