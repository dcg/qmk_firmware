
#include QMK_KEYBOARD_H
#include <stdio.h>
#include "lily58.h"

#define L_BASE 0
#define L_LOWER (1 << 2)
#define L_RAISE (1 << 3)
#define L_NUMPAD (1 << 4)
#define L_GAMING (1 << 5)
#define L_ADJUST (1 << 6)
#define L_ADJUST_A (L_ADJUST | L_RAISE | L_LOWER | L_NUMPAD)
#define L_ADJUST_B (L_ADJUST | L_RAISE | L_LOWER)
#define L_ADJUST_C (L_ADJUST | L_RAISE | L_LOWER | L_GAMING)

#define L_SETTINGS (1 << 7)

char layer_state_str[24];

const char *read_layer_state(void) {
  switch (layer_state)
  {
  case L_BASE:
    snprintf(layer_state_str, sizeof(layer_state_str), "Default");
    break;
  case L_RAISE:
    snprintf(layer_state_str, sizeof(layer_state_str), "Raise");
    break;
  case L_LOWER:
    snprintf(layer_state_str, sizeof(layer_state_str), "Lower");
    break;
  case L_NUMPAD:
    snprintf(layer_state_str, sizeof(layer_state_str), "Numpad");
    break;
  case L_ADJUST:
  case L_ADJUST_A:
  case L_ADJUST_B:
  case L_ADJUST_C:
    snprintf(layer_state_str, sizeof(layer_state_str), "Adjust");
    break;
  case L_GAMING:
    snprintf(layer_state_str, sizeof(layer_state_str), "Gaming");
    break;
  case L_SETTINGS:
    snprintf(layer_state_str, sizeof(layer_state_str), "Settings");
    break;
  default:
    snprintf(layer_state_str, sizeof(layer_state_str), "Layer: Undef-%ld", layer_state);
  }

  return layer_state_str;
}
