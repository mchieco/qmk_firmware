#include QMK_KEYBOARD_H

/* this keymap is to provide a basic keyboard layout for testing the matrix
 * for more practical and complicated keymap refer to other keymaps in the same folder
 */

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

/* Qwerty
 *
 * ,---------+------+------+------+------+------+------+------+------+------+------+------+------.
 * |   Tab   |   Q  |   W  |   E  |   R  |   T  |   Y  |   U  |   I  |   O  |   P  | Bksp |  Del |
 * |---------`------`------`------`------`------`------`------`------`------`------`------`------|
 * |Layer 3/Esc|   A  |   S  |  D   |   F  |   G  |   H  |   J  |   K  |   L  | : ; |    ' "     |
 * |----------`------`------`------`------`------`------`------`------`------`------`------------|
 * |   Shift   |   Z   |   X  |  C   |   V  |   B  |   N  |   M  | < ,  | > .  | / ?  |  Shift   |
 * |-----------`------`------`------`------`-----'-------`------`------`------`------`-----------|
 * |        | Control | GUI  | Alt | Layer 1/Space | Layer 2/Space | Alt | GUI | Control |       |
 *  `-------+-------+-------+-------+---^^^----+---^^^----+---------+--------+--------+----------'
 */
  [0] = LAYOUT(
    KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_BSPC, KC_DEL,
    LT(3, KC_ESC),  KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN,  KC_QUOTE,
    KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH,  RSFT_T(KC_ENT),
    _______, KC_LCTL, KC_LGUI, KC_LALT,   LT(1, KC_SPC),  LT(2, KC_SPC), KC_RALT, KC_RGUI,   KC_RCTL, _______
  ),
  [1] = LAYOUT(
    _______, KC_TILD, KC_PIPE, _______, _______, _______, _______, KC_LCBR, KC_RCBR, KC_LBRC, KC_RBRC, _______, _______,
    _______, KC_EXLM,    KC_AT, KC_HASH, KC_DLR, KC_PERC, KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN, _______,
    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, KC_BSLS, _______,
    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______
  ),
  [2] = LAYOUT(
    _______, KC_GRV,  _______, _______, _______, _______, _______, KC_MINS, KC_UNDS, KC_EQL,  KC_PLUS, _______, _______,
    _______, KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    _______,
    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______
  ),
  [3] = LAYOUT(
    RESET,   KC_F9,   KC_F10,  KC_F11,   KC_F12, _______, KC_PGUP, KC_PGDN, KC_HOME, KC_END,  _______, _______, KC_INS,
    _______, KC_F5,   KC_F6,   KC_F7,    KC_F8,  _______, KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT, _______, _______,
    _______, KC_F1,   KC_F2,   KC_F3,    KC_F4,  _______, _______, _______, _______, _______, _______, _______,
    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______
  )
};
