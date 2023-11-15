#include "keycodes.h"
#include QMK_KEYBOARD_H


/* THIS FILE WAS GENERATED!
 *
 * This file was generated by qmk json2c. You may or may not want to
 * edit it directly.
 */


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	[0] = LAYOUT(KC_ESC, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, KC_MINS,
                 KC_TAB, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_LBRC,
                 KC_LCTL, KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, KC_SCLN, KC_QUOT,
                 KC_LSFT, KC_Z, KC_X, KC_C, KC_V, KC_B, LCTL(KC_INS), LSFT(KC_INS), KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, KC_RBRC,
                 KC_LGUI, KC_LALT, MO(1), KC_SPC, KC_ENT, MO(2), KC_RGUI, KC_RALT),
	[1] = LAYOUT(KC_TRNS, KC_PERC, KC_NUBS, LSFT(KC_NUBS), KC_PLUS, KC_RBRC, KC_NUM, KC_P7, KC_P8, KC_P9, KC_PMNS, KC_NO,
                 KC_TRNS, KC_CIRC, RALT(KC_7), RALT(KC_0), KC_NO, KC_HASH, KC_NO, KC_P4, KC_P5, KC_P6, KC_PPLS, KC_NO,
                 KC_TRNS, KC_EXLM, KC_ASTR, KC_LPRN, KC_AMPR, RALT(KC_MINS), KC_PSLS, KC_P1, KC_P2, KC_P3, KC_PCMM, KC_NO,
                 KC_TRNS, RALT(KC_2), RALT(KC_8), RALT(KC_9), RALT(KC_NUBS), RALT(KC_RBRC), KC_TRNS, KC_TRNS, KC_PAST, KC_P0, KC_PDOT, KC_PEQL, KC_NO, KC_NO,
                 KC_TRNS, KC_TRNS, KC_TRNS, KC_BSPC, KC_BSPC, MO(3), KC_TRNS, KC_TRNS),
	[2] = LAYOUT(KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
                 KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6, KC_F7, KC_F8, KC_F9, KC_F10, KC_F11, KC_F12,
                 KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_RBRC, KC_BSLS, KC_UP, KC_NO,
                 KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_UNDS, KC_TRNS, KC_TRNS, KC_PLUS, KC_MINS, KC_EQL, KC_LEFT, KC_DOWN, KC_RGHT,
                 KC_TRNS, KC_TRNS, MO(3), KC_DEL, KC_DEL, KC_TRNS, KC_TRNS, KC_TRNS),
	[3] = LAYOUT(KC_NO, RGB_M_P, RGB_M_B, RGB_M_R, RGB_M_SW, RGB_M_SN, RGB_M_K, RGB_M_X, RGB_M_G, RGB_M_T, KC_NO, KC_NO,
                 KC_NO, AS_TOGG, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
                 KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, RGB_TOG, RGB_MOD, RGB_HUI, RGB_SAI, RGB_VAI, RGB_SPI,
                 KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, RGB_RMOD, RGB_HUD, RGB_SAD, RGB_VAD, RGB_SPD,
                 KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS)
};

#if defined(ENCODER_ENABLE) && defined(ENCODER_MAP_ENABLE)
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][NUM_DIRECTIONS] = {

};
#endif // defined(ENCODER_ENABLE) && defined(ENCODER_MAP_ENABLE)




