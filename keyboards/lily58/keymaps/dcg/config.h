/*
This is the c configuration file for the keymap

Copyright 2012 Jun Wako <wakojun@gmail.com>
Copyright 2015 Jack Humbert
Copyright 2020 Ben Roesner (keycapsss.com)

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#pragma once

/* Select hand configuration */
//#define MASTER_LEFT
#define MASTER_RIGHT
// #define EE_HANDS
#ifdef RGBLIGHT_ENABLE
//  #define RGBLIGHT_ANIMATIONS
  //#define RGBLIGHT_EFFECT_BREATHING
  #define RGBLIGHT_EFFECT_RAINBOW_MOOD
  //#define RGBLIGHT_EFFECT_STATIC_GRADIENT
  #define RGBLIGHT_EFFECT_RAINBOW_SWIRL
  //#define RGBLIGHT_EFFECT_KNIGHT
  #define RGBLIGHT_EFFECT_SNAKE
  #define RGBLIGHT_MODE_RGB_TEST
  #define RGBLIGHT_MODE_ALTERNATING
  #define RGBLIGHT_EFFECT_BREATHING
  //#define RGBLIGHT_EFFECT_DCG
  //#define RGBLIGHT_EFFECT_KNIGHT_LENGTH 6
  #define RGBLIGHT_LAYERS

 // #define RGBLIGHT_HUE_STEP 32 // number of steps to cycle through the hue by
  //#define RGBLIGHT_SAT_STEP 16 // number of steps to increment the saturation by
 // #define RGBLIGHT_VAL_STEP 6 // number of steps to increment the brightness by
  #define RGBLIGHT_SLEEP //  the RGB lighting will be switched off when the host goes to sleep
  #define RGBLIGHT_LAYERS_OVERRIDE_RGB_OFF
#endif

// If you are using an Elite C rev3 on the slave side, uncomment the lines below:
// #define SPLIT_USB_DETECT
// #define NO_USB_STARTUP_CHECK

#define TAPPING_TERM 250
#define UNICODE_SELECTED_MODES UC_LNX, UC_WINC, UC_WIN
#define AUTO_SHIFT_TIMEOUT 190
#define LEADER_PER_KEY_TIMING
#define LEADER_TIMEOUT 350
/*
#define RGBLIGHT_LED_MAP { \
0,1,2,3,4,5,   6,7,8,9,10,11,   12,13,14,15,16,17,   18,19,20,21,22,23,  24,25,26,27,28,29,    30,31,32,33,34,     35,36,37,38,39,40,\
       41,42,43,44,45,46,\
    47,48,49,50,51,52,\
   53,54,55,56,57,58,\
  59,60,61,62,63,64,\
       65,66,67,68,69}
       */
#undef RGBLED_SPLIT
//#undef RGBLED_NUM
//#define RGBLED_NUM 35
//#define RGBLIGHT_RAINBOW_SWIRL_RANGE 1950
//#define RGBLIGHT_RAINBOW_SWIRL_RANGE 200
//#define RGBLIGHT_SPLIT_NO_ANIMATION_SYNC
  #define RGBLIGHT_HUE_STEP 4 // number of steps to cycle through the hue by
  #define RGBLIGHT_SAT_STEP 8 // number of steps to increment the saturation by
  #define RGBLIGHT_VAL_STEP 8 // number of steps to increment the brightness by
  //#undef RGBLIGHT_LIMIT_VAL
  //#define RGBLIGHT_LIMIT_VAL 90
