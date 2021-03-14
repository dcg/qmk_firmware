#pragma once

#include "config_common.h"

/* USB Device descriptor parameter */
#define VENDOR_ID       0xFEED
#define PRODUCT_ID      0x2020
#define DEVICE_VER      0x0001
#define MANUFACTURER    Dominik Gaetjens
#define PRODUCT         4x4macro
#define DESCRIPTION     4x4macropad

/* key matrix size */
#define MATRIX_ROWS 4
#define MATRIX_COLS 4

/* key matrix pins */
#define MATRIX_ROW_PINS { B6, B2, B3, B1 }
#define MATRIX_COL_PINS { B5, B4, E6, D7 }
#define UNUSED_PINS

/* COL2ROW or ROW2COL */
#define DIODE_DIRECTION COL2ROW


/* Set 0 if debouncing isn't needed */
#define DEBOUNCE 5

/* Mechanical locking support. Use KC_LCAP, KC_LNUM or KC_LSCR instead in keymap
#define LOCKING_SUPPORT_ENABLE
*/
/* Locking resynchronize hack
#define LOCKING_RESYNC_ENABLE
*/
/* Tap dancing params */
#define TAPPING_TERM 200

#define QMK_ESC_OUTPUT B5 // usually COL
#define QMK_ESC_INPUT B6 // usually ROW
#define QMK_LED B0
#define QMK_SPEAKER C6
#define C6_AUDIO
#define BOOTMAGIC_LITE_ROW 1
#define BOOTMAGIC_LITE_COLUMN 1
#define AUDIO_CLICKY
