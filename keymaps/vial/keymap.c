// Copyright 2024 Fernando Ramirez (@imaginabit)
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H
#include "macro5.h" // Include your macro definition file


#define CUSTOM_LAYOUT( \
    k01, k02, k03,  \
    k05, k06, k07  \
) \
{ \
    {   k01,   k02,   k03 ,  k05,   k06,   k07 }, \
}

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = {
        { KC_1, KC_2, KC_3,  KC_4, KC_5, KC_6 } 
    },
};

const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][2] = {
    [0] =   { ENCODER_CCW_CW(KC_VOLU, KC_VOLD),   }
};
