/* Copyright 2019 joaofbmaia
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
 */
#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

  /* LAYER 0
  * ,-----------------------.
  * |  F13  |  F14  | F15/FN|  Hold for FN
  * |-------+-------+-------|
  * |  F16  |  F17  |  F18  |
  * `-------+-------+-------'
    [0] = LAYOUT(
    KC_NLCK, KC_PSLS, KC_PAST, KC_PMNS,\
    KC_P7, KC_P8, KC_P9, KC_PPLS,\
    KC_P4, KC_P5, KC_P6, KC_PPLS,\
    KC_P1, KC_P2, KC_P3, KC_0\
00000321
  ),
  */


   [0] = LAYOUT(
    KC_P7, KC_P8, KC_P9, KC_PSLS,\
    KC_P4, KC_P5, KC_P6, KC_PAST,\
    KC_P1, KC_P2, KC_P3, KC_PMNS,\
    KC_P0, KC_PDOT, KC_PENT, LT(1,KC_PPLS)\
  ),

   [1] = LAYOUT(
    KC_NLCK, TG(3), TG(4), TG(2),\
    _______, KC_UP, _______, TG(3),\
    KC_LEFT, KC_DOWN, KC_RIGHT, _______,\
    KC_DEL, KC_BSPC, _______, _______\
  ),
  [2] = LAYOUT(
    XXXXXXX, XXXXXXX, XXXXXXX, TG(2),\
    CK_TOGG, XXXXXXX, XXXXXXX, XXXXXXX,\
    CK_UP  , XXXXXXX, XXXXXXX, XXXXXXX,\
    CK_DOWN, XXXXXXX, XXXXXXX, XXXXXXX\
  ),
   [3] = LAYOUT(
    LCTL(KC_C), LCTL(KC_V), KC_F5, TG(3),\
    KC_HOME,   KC_UP,   KC_END,      KC_PGUP,\
    KC_LEFT  , KC_DOWN, KC_RIGHT, KC_PGDOWN,\
    KC_LSFT, KC_BSPC, KC_PENT, MO(5)\
  ),
     [5] = LAYOUT(
    _______, _______, _______, TG(3),\
    _______,   _______,   _______,      _______,\
    _______  , _______, _______, _______,\
    _______, KC_DEL, KC_DEL, MO(5)\
  ),
    [4] = LAYOUT(
    KC_MUTE, XXXXXXX, TG(2), TG(4),\
    KC_MPRV, KC_MNXT, KC_BRIU, XXXXXXX,\
    KC_VOLU  , KC_MPLY, KC_BRID, XXXXXXX,\
    KC_VOLD, XXXXXXX, XXXXXXX, XXXXXXX\
  ),

};
