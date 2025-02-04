/*
Copyright 2020 Holten Campbell

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

#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT_split_bs_rshift(
		KC_GRAVE,      KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS, KC_EQL,  KC_BSPC, KC_BSPC,
		KC_TAB,        KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_LBRC, KC_RBRC,          KC_BSLS,
		LT(3, KC_ESC), KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT,                   KC_ENT,
		KC_LSPO, KC_Z, KC_X,    KC_C,    KC_V,    KC_B,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_RSPC,                   KC_DEL,
		LCTL_T(KC_LBRC), LGUI_T(KC_LCBR), LALT_T(KC_LEFT_ANGLE_BRACKET), LT(1, KC_SPC),   LT(2, KC_SPC),  RALT_T(KC_RIGHT_ANGLE_BRACKET), RGUI_T(KC_RCBR), RCTL_T(KC_RBRC), _______
    ),
    [1] = LAYOUT_split_bs_rshift(
        RESET,   _______, _______, _______,  _______,   _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
        _______, KC_F1,   KC_F2,   KC_F3,    KC_F4,     KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  _______, _______,          _______,
        _______, KC_1,    KC_2,    KC_3,     KC_4,      KC_5,    KC_6,    KC_7,    KC_8,    KC_9,     KC_0,    _______,                   _______,
        _______, KC_MINS, KC_EQL,  KC_GRAVE, KC_BSLASH, _______, _______, _______, _______, _______, _______, _______,          _______, _______,
        _______, _______, _______,           _______,            _______,          _______,                   _______, _______, _______
    ),
    [2] = LAYOUT_split_bs_rshift(
        _______, _______,    _______, _______,  _______,   _______,    _______,       _______,      _______,     _______,  _______,         _______, _______, _______, _______,
        _______, KC_F11,     KC_F12,  KC_F13,   KC_F14,    KC_F15,     KC_F16,        KC_F17,       KC_F18,      KC_F19,   KC_F20,          _______, _______,          _______,
        _______, KC_EXCLAIM, KC_AT,   KC_HASH,  KC_DOLLAR, KC_PERCENT, KC_CIRCUMFLEX, KC_AMPERSAND, KC_ASTERISK, KC_QUOTE, KC_DOUBLE_QUOTE, _______, _______,
        _______, KC_UNDS,    KC_PLUS, KC_TILDE, KC_PIPE,   _______,    _______,       _______,      _______,     _______,  _______,         _______,          _______, _______,
        _______, _______,    _______,           _______,               _______,                     _______,                                         _______, _______, _______
    ),
    [3] = LAYOUT_split_bs_rshift(
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,          _______,
        _______, _______, KC_HOME, KC_PGUP, KC_PGDN, KC_END,  KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT, _______, _______,                   _______,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,          _______, _______,
        _______, _______, _______,          _______,          _______,          _______,                   _______, _______, _______
    )
};
