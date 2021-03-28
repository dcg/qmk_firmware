/* Copyright 2019
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *  * #define MATRIX_COL_PINS { B5, A10, C14, A8, B15, B14, B13, B12 }
#define MATRIX_COL_PINS {B5, A10,C14, A8, B15, B14, B13, B12, B0, B1, B10 }
 */

#pragma once

#include "config_common.h"

#define MATRIX_COL_PINS {C15, C14,A8, B14, B15, B13, B12,B5,B10, B1, B0, A15 }
#define MATRIX_ROW_PINS { B4, B3,  A1, A2, A3}
#define UNUSED_PINS
#define LED_SCROLL_LOCK_PIN A6
#define LED_NUM_LOCK_PIN A7

//#define BACKLIGHT_PIN           A0
//#define BACKLIGHT_PWM_DRIVER    PWMD5
//#define BACKLIGHT_PWM_CHANNEL   1

//#define RGB_DI_PIN A7

//#define ADC_PIN A0
#define AUDIO_STATE_TIMER GPTD4
#define AUDIO_PIN A4
#define AUDIO_PIN_ALT A5
#define AUDIO_PIN_ALT_AS_NEGATIVE
#ifdef AUDIO_ENABLE
  #define STARTUP_SONG SONG(STARTUP_SOUND)
#endif
/*
Copyright 2015 Jun Wako <wakojun@gmail.com>

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

/* USB Device descriptor parameter */
#define VENDOR_ID       0xFEED
#define PRODUCT_ID      0xBAC0
#define DEVICE_VER      0x0001
#define MANUFACTURER    dgtjns
#define PRODUCT         dortho
#define DESCRIPTION     my custom ortho

/* key matrix size */
#define MATRIX_ROWS 5
#define MATRIX_COLS 12


#define BOOTMAGIC_LITE_ROW 0
#define BOOTMAGIC_LITE_COLUMN 0

#define DIODE_DIRECTION COL2ROW
#define ENCODERS_PAD_A { B9 }
#define ENCODERS_PAD_B { B8 }
/* define if matrix has ghost */
//#define MATRIX_HAS_GHOST

/* Set 0 if debouncing isn't needed */
#define DEBOUNCE    5

#define TAPPING_TERM 500

/* Mechanical locking support. Use KC_LCAP, KC_LNUM or KC_LSCR instead in keymap */
#define LOCKING_SUPPORT_ENABLE
/* Locking resynchronize hack */
#define LOCKING_RESYNC_ENABLE

/*
 * Feature disable options
 *  These options are also useful to firmware size reduction.
 */

/* disable debug print */
//#define NO_DEBUG

/* disable print */
//#define NO_PRINT

/* disable action features */
//#define NO_ACTION_LAYER
//#define NO_ACTION_TAPPING
//#define NO_ACTION_ONESHOT
//#define NO_ACTION_MACRO
//#define NO_ACTION_FUNCTION
