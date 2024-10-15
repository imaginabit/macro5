#include QMK_KEYBOARD_H
#define DEFAULT_KEYMAP custom_keymap

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT(
        KC_1, KC_2, KC_3, KC_4, KC_5
    )
};

#ifdef ENCODER_ENABLE
bool encoder_update_user(uint8_t index, bool clockwise) {
    if (index == 0) { // Assuming you have one encoder
        if (clockwise) {
            tap_code(KC_VOLU);  // Rotate clockwise action
        } else {
            tap_code(KC_VOLD);  // Rotate counterclockwise action
        }
    }
}
#endif

