// Rotary encoder related code
void encoder_update_user(uint8_t index, bool clockwise) {
  if (index == 0) { // Encoder on master side
    if(IS_LAYER_ON(_RAISE)) { // on Raise layer
      // Cursor control
      if (get_mods() & MOD_MASK_SHIFT){
        if (clockwise) {
          tap_code(KC_MNXT);
        } else {
          tap_code(KC_MNXT);
        }
      } else {
        if (clockwise) {
            tap_code(KC_VOLU);
        } else {
            tap_code(KC_VOLD);
        }
      }
    }
    else if(IS_LAYER_ON(_LOWER)) { // on Raise layer
       if (clockwise) {
            tap_code(KC_RGHT);
        } else {
            tap_code(KC_LEFT);
        }
    } else {
        if (clockwise) {
          tap_code(KC_DOWN);
      } else {
          tap_code(KC_UP);
      }
    }
  }
}
