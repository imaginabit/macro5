// Copyright 2024 Fernando Ramirez (@imaginabit)
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H
#define DEFAULT_KEYMAP custom_keymap 
#include "macro5.h" // Include your macro definition file

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT_linear_5(
        KC_1, KC_2, KC_4, KC_5, KC_6
    )
};



#if defined(ENCODER_MAP_ENABLE)
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][2] = {
    [0] =   { ENCODER_CCW_CW(KC_VOLU, KC_VOLD),   },
    [1] =   { ENCODER_CCW_CW(KC_BRIU, KC_BRID),   },
    [2] =   { ENCODER_CCW_CW(KC_WH_L, KC_WH_R),   },
    [3] =   { ENCODER_CCW_CW(KC_WH_U, KC_WH_D),   },
};
#endif