/*
 * Evan Pratten's keymaps for the Vortex Core keyboard.
 *
 * All contents of this file are custom, and subject to wild change. Good luck.
 */

#include "vortex.h"

enum custom_keycodes {
    BASE_MACRO_KEY = SAFE_RANGE,
    CK_COPY_TO_NEW_TAB,
    CK_BUILD,
    CK_VSCODE_MENU,
    CK_MACRO_MUTE,
    CK_PASTE_RICKROLL
};

const uint16_t keymaps_default[][MATRIX_ROWS][MATRIX_COLS] = {
#if defined(KEYMAP_60_ANSI)
    [0] = LAYOUT_60_ansi(
        KC_ESC,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS, KC_EQL,  KC_BSPC,
        KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_LBRC, KC_RBRC, KC_BSLS,
        KC_CAPS, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT, KC_ENT,
        KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT,
        KC_LCTL, KC_LGUI, KC_LALT, KC_SPC,  KC_RALT, MO(1),   KC_RGUI, KC_RCTL
    ),
    [1] = LAYOUT_60_ansi(
        KC_GRV,  KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,  KC_DEL,
        _______, _______, _______, _______, _______, _______, _______, KC_PGUP, KC_UP,   KC_PGDN, KC_PSCR, KC_SLCK, KC_PAUS, _______,
        _______, _______, _______, _______, _______, _______, KC_HOME, KC_LEFT, KC_DOWN, KC_RIGHT,KC_INS,  _______, _______,
        _______, KC_MPRV, KC_MPLY, KC_MNXT, KC_VOLD, KC_VOLU, KC_END,  KC_MUTE, BL_DEC,  BL_TOGG, BL_INC,  _______,
        _______, _______, _______, _______, _______, _______, _______, _______
    ),
#elif defined(KEYMAP_VORTEX_CORE)

    // No modifiers
    [0] = LAYOUT_core(
        KC_ESC,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_DEL,  KC_BSPC,
        KC_TAB,  KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_ENT,
        KC_LSPO, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_RSPC, MO(2),
        KC_LCTL, KC_LALT, KC_LGUI, MO(3),   KC_SPC,  KC_SPC,  MO(1),   KC_RALT, MO(4),  KC_RCTL
    ),

    // Super button on the right of the space bars
    [1] = LAYOUT_core(
        _______, KC__VOLDOWN, KC__VOLUP, KC__MUTE, _______, _______, _______, KC_PGUP, _______,   KC_PGDN, KC_PSCR, KC_SLCK, KC_PAUS,
        KC_CAPS, KC_MPRV, KC_MPLY, KC_MNXT, _______, _______, KC_LEFT, KC_DOWN, KC_UP, KC_RIGHT,KC_INS,  _______,
        _______, _______, _______, _______, _______, KC_HOME, KC_END,  _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______
    ),

    // FN1 button
    [2] = LAYOUT_core(
        KC_GRV,  KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11, KC_F12,
        KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS, KC_EQL,
        _______, _______, _______, _______, _______, KC_QUOTE, KC_SLSH, KC_LBRC, KC_RBRC, KC_BSLS, _______, _______,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______
    ),
    // FN button
    //
    // Note: KC_5 and KC_6 hang out on my macro layer to make be a better R6 player. Don't ask questions
    [3] = LAYOUT_core(
        _______,  _______,_______, _______, CK_PASTE_RICKROLL, CK_COPY_TO_NEW_TAB, _______, _______, _______, _______, CK_VSCODE_MENU, _______, _______,
        _______, _______, _______, _______, KC_5, KC_6, _______, _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______, CK_BUILD, _______, CK_MACRO_MUTE, _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______
    ),
    // PN button
    [4] = LAYOUT_core(
        _______,  _______,_______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______
    ),
#else
    #error "No Keymap!"
#endif
};
const uint16_t keymaps_default_size = sizeof(keymaps_default);
uint16_t keymaps[MAX_LAYERS][MATRIX_ROWS][MATRIX_COLS];

const uint16_t PROGMEM fn_actions[] = {

};

const macro_t *action_get_macro(keyrecord_t *record, uint8_t id, uint8_t opt) {
    return MACRO_NONE;
};


void matrix_init_user(void) {

}

void matrix_scan_user(void) {

}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case CK_COPY_TO_NEW_TAB:
            if (record->event.pressed) {
                SEND_STRING(SS_DOWN(X_LCTRL)"ctv"SS_UP(X_LCTRL));
            }
            break;
        case CK_BUILD:
            if (record->event.pressed) {
                SEND_STRING(SS_DOWN(X_LCTRL)SS_DOWN(X_LSHIFT)"b"SS_UP(X_LCTRL)SS_UP(X_LSHIFT));
            }
            break;
        case CK_VSCODE_MENU:
            if (record->event.pressed) {
                SEND_STRING(SS_DOWN(X_LCTRL)SS_DOWN(X_LSHIFT)"p"SS_UP(X_LCTRL)SS_UP(X_LSHIFT));
            }
            break;
        case CK_MACRO_MUTE:
            if (record->event.pressed) {
                SEND_STRING(SS_DOWN(X_LCTRL)SS_DOWN(X_LSHIFT)SS_DOWN(X_F24)SS_UP(X_F24)SS_UP(X_LCTRL)SS_UP(X_LSHIFT));
            }
            break;
        case CK_PASTE_RICKROLL:
            if (record->event.pressed) {
                SEND_STRING("https://www.youtube.com/watch?v=dQw4w9WgXcQ");
            }
            break;
    }
    return true;
}

void led_set_user(uint8_t usb_led) {

}
