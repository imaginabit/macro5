/*
* Copyright (c) 2024 Imaginabit (Fernando Ramirez Perez)
*
* Permission is hereby granted, free of charge, to any person obtaining a copy
* of this software and associated documentation files (the "Software"), to deal
* in the Software without restriction, including the rights to use, copy, modify,
* merge, publish, distribute, sublicense, and/or sell copies of the Software,
* and to permit persons to whom the Software is furnished to do so, subject to
* the following conditions:
*
* The above copyright notice and this permission notice shall be included in
* all copies or substantial portions of the Software.
*
* THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
* IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
* FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
* AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
* LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
* OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
* THE SOFTWARE.
*/

#include QMK_KEYBOARD_H
#define DEFAULT_KEYMAP custom_keymap

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT_linear_5(
        KC_1, KC_2, KC_3, KC_4, KC_E
    )
};


// Single layer
// const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {{
//     [0] = { KC_A, KC_B, KC_C, KC_D, KC_E }
// }};

// // Multiple layers
// const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
//     [0] = { KC_A, KC_B, KC_C, KC_D, KC_E },
//     [1] = { KC_1, KC_2, KC_3, KC_4, KC_5 },
//     // Add more layers as needed
// };