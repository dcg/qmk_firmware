#include "common.c"

// Light LEDs 9 & 10 in cyan when keyboard layer 1 is active
//const rgblight_segment_t PROGMEM my_layer0_layer[] = RGBLIGHT_LAYER_SEGMENTS(
   /*
    {0, 6, HSV_WHITE},
    {6, 5, HSV_ORANGE}, // 1-5
    {11, 1, HSV_CORAL}, // ESC
    {12, 1, HSV_CORAL}, // TAB

    {13, 5, HSV_YELLOW}, // letters 1

    {18, 5, HSV_YELLOW}, // letters 2
    {23, 1, HSV_CORAL}, // CTRL

    {24, 1, HSV_CORAL}, // SHIFT

    {25, 5, HSV_YELLOW}, // letters 3
    {31, 4, HSV_CORAL}, // functions
// right side
    {35, 6, HSV_WHITE},
    {41, 5, HSV_ORANGE}, // 1-5
    {46, 1, HSV_CORAL}, // ESC
    {47, 1, HSV_CORAL}, // TAB

    {48, 5, HSV_YELLOW}, // letters 1

    {53, 5, HSV_YELLOW}, // letters 2
    {58, 1, HSV_CORAL}, // CTRL

    {59, 1, HSV_CORAL}, // SHIFT

    {60, 5, HSV_YELLOW}, // letters 3
    {65, 5, HSV_CORAL} // functions

*/

//);
const rgblight_segment_t PROGMEM my_layer1_layer[] = RGBLIGHT_LAYER_SEGMENTS(
    {0, 6, HSV_RED},
        {12, 18, HSV_CYAN}

);
const rgblight_segment_t PROGMEM my_layer2_layer[] = RGBLIGHT_LAYER_SEGMENTS(
    {35, 10, HSV_CYAN}
);



// Now define the array of layers. Later layers take precedence
const rgblight_segment_t* const PROGMEM my_rgb_layers[] = RGBLIGHT_LAYERS_LIST(
    my_layer1_layer,    // Overrides caps lock layer
    my_layer2_layer     // Overrides other layers
);


layer_state_t layer_state_set_user(layer_state_t state) {
    // Both layers will light up if both kb layers are active
    //rgblight_set_layer_state(0, layer_state_cmp(state, _QWERTY));
    rgblight_set_layer_state(1, layer_state_cmp(state, _LOWER));
    rgblight_set_layer_state(2, layer_state_cmp(state, _RAISE));
    return state;
}
