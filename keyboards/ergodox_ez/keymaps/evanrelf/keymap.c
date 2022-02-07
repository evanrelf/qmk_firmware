#include QMK_KEYBOARD_H
#include "version.h"

enum layers {
    BASE,
    ALT,
};

enum {
    TD_MUSIC,
};

// clang-format off
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
/* Keymap 0: Base
 *
 * ,--------------------------------------------------.           ,--------------------------------------------------.
 * |   `    |   1  |   2  |   3  |   4  |   5  |      |           |      |   6  |   7  |   8  |   9  |   0  |        |
 * |--------+------+------+------+------+-------------|           |------+------+------+------+------+------+--------|
 * | Tab    |   Q  |   W  |   E  |   R  |   T  |  -   |           |   =  |   Y  |   U  |   I  |   O  |   P  |   \    |
 * |--------+------+------+------+------+------|      |           |      |------+------+------+------+------+--------|
 * | Esc    |   A  |   S  |   D  |   F  |   G  |------|           |------|   H  |   J  |   K  |   L  |   ;  |   '    |
 * |--------+------+------+------+------+------|  [   |           |   ]  |------+------+------+------+------+--------|
 * | LShift |   Z  |   X  |   C  |   V  |   B  |      |           |      |   N  |   M  |   ,  |   .  |   /  | RShift |
 * `--------+------+------+------+------+-------------'           `-------------+------+------+------+------+--------'
 *   |  WM  |LCtrl | LAlt | LCmd |Space |                                       | BkSp | RCmd | RAlt | RCtrl|  WM  |
 *   `----------------------------------'                                       `----------------------------------'
 *                                        ,-------------.       ,-------------.
 *                                        |      |Reset |       |      |      |
 *                                 ,------|------|------|       |------+------+------.
 *                                 |      |      |      |       |      |      |      |
 *                                 |Music |Layer1|------|       |------|Layer1| Enter|
 *                                 |      |      |      |       |      |      |      |
 *                                 `--------------------'       `--------------------'
 */
[BASE] = LAYOUT_ergodox_pretty(
  KC_GRAVE              , KC_1                  , KC_2                  , KC_3                  , KC_4                  , KC_5                  , XXXXXXX               , /**/ XXXXXXX               , KC_6                  , KC_7                  , KC_8                  , KC_9                  , KC_0                  , XXXXXXX               ,
  KC_TAB                , KC_Q                  , KC_W                  , KC_E                  , KC_R                  , KC_T                  , KC_MINUS              , /**/ KC_EQUAL              , KC_Y                  , KC_U                  , KC_I                  , KC_O                  , KC_P                  , KC_BACKSLASH          ,
  KC_ESCAPE             , KC_A                  , KC_S                  , KC_D                  , KC_F                  , KC_G                  ,                         /**/                         KC_H                  , KC_J                  , KC_K                  , KC_L                  , KC_SEMICOLON          , KC_QUOTE              ,
  KC_LEFT_SHIFT         , KC_Z                  , KC_X                  , KC_C                  , KC_V                  , KC_B                  , KC_LEFT_BRACKET       , /**/ KC_RIGHT_BRACKET      , KC_N                  , KC_M                  , KC_COMMA              , KC_DOT                , KC_SLASH              , KC_RIGHT_SHIFT        ,
  LCAG_T(XXXXXXX)       , KC_LEFT_CTRL          , KC_LEFT_ALT           , KC_LEFT_GUI           , KC_SPACE              ,                                                 /**/                                                 KC_BACKSPACE          , KC_RIGHT_GUI          , KC_RIGHT_ALT          , KC_RIGHT_CTRL         , LCAG_T(XXXXXXX)       ,
                                                                                                                          XXXXXXX               , RESET                 , /**/ XXXXXXX               , XXXXXXX               ,
                                                                                                                                                  XXXXXXX               , /**/ XXXXXXX               ,
                                                                                                  TD(TD_MUSIC)          , LT(ALT, XXXXXXX)      , XXXXXXX               , /**/ XXXXXXX               , LT(ALT, XXXXXXX)      , KC_ENTER
),
/* Keymap 1: Alt
 *
 * ,---------------------------------------------------.           ,--------------------------------------------------.
 * |         |  F1  |  F2  |  F3  |  F4  |  F5  |  F6  |           |  F7  |  F8  |  F9  |  F10 |  F11 |  F12 |        |
 * |---------+------+------+------+------+------+------|           |------+------+------+------+------+------+--------|
 * |         |      |      |      |      |      |      |           |      |      |      |      |      |  Up  |        |
 * |---------+------+------+------+------+------|      |           |      |------+------+------+------+------+--------|
 * |         |      |      |      |      |      |------|           |------| Left | Down |  Up  | Right|      |        |
 * |---------+------+------+------+------+------|      |           |      |------+------+------+------+------+--------|
 * |         |      |      |      |      |      |      |           |      | Down |      |      |      |      |        |
 * `---------+------+------+------+------+-------------'           `-------------+------+------+------+------+--------'
 *   |       |      |      |      |      |                                       |      |      |      |      |      |
 *   `-----------------------------------'                                       `----------------------------------'
 *                                        ,-------------.       ,-------------.
 *                                        |      |      |       |      |      |
 *                                 ,------|------|------|       |------+------+------.
 *                                 |      |      |      |       |      |      |      |
 *                                        |      |------|       |------|      |      |
 *                                 |      |      |      |       |      |      |      |
 *                                 `--------------------'       `--------------------'
 */
[ALT] = LAYOUT_ergodox_pretty(
  _______               , KC_F1                 , KC_F2                 , KC_F3                 , KC_F4                 , KC_F5                 , KC_F6                 , /**/ KC_F7                 , KC_F8                 , KC_F9                 , KC_F10                , KC_F11                , KC_F12                , _______               ,
  _______               , _______               , _______               , _______               , _______               , _______               , _______               , /**/ _______               , _______               , _______               , _______               , KC_UP                 , _______               , _______               ,
  _______               , _______               , _______               , _______               , _______               , _______               ,                         /**/                         KC_LEFT               , KC_DOWN               , KC_UP                 , KC_RIGHT              , _______               , _______               ,
  _______               , _______               , _______               , _______               , _______               , _______               , _______               , /**/ _______               , KC_DOWN               , _______               , _______               , _______               , _______               , _______               ,
  _______               , _______               , _______               , _______               , _______               ,                                                 /**/                                                 _______               , _______               , _______               , _______               , _______               ,
                                                                                                                          _______               , _______               , /**/ _______               , _______               ,
                                                                                                                                                  _______               , /**/ _______               ,
                                                                                                  _______               , _______               , _______               , /**/ _______               , _______               , _______
),
};
// clang-format on

void tap_dance_music_finished(qk_tap_dance_state_t* state, void* user_data) {
  switch (state->count) {
    case 1:
      register_code(KC_MEDIA_PLAY_PAUSE);
      break;
    case 2:
      register_code(KC_MEDIA_NEXT_TRACK);
      break;
    case 3:
      register_code(KC_MEDIA_PREV_TRACK);
      break;
  }
}

void tap_dance_music_reset(qk_tap_dance_state_t* state, void* user_data) {
  switch (state->count) {
    case 1:
      unregister_code(KC_MEDIA_PLAY_PAUSE);
      break;
    case 2:
      unregister_code(KC_MEDIA_NEXT_TRACK);
      break;
    case 3:
      unregister_code(KC_MEDIA_PREV_TRACK);
      break;
  }
}

qk_tap_dance_action_t tap_dance_actions[] = {
    [TD_MUSIC] = ACTION_TAP_DANCE_FN_ADVANCED(NULL, tap_dance_music_finished, tap_dance_music_reset),
};

// Runs just one time when the keyboard initializes.
void keyboard_post_init_user(void) {
#ifdef RGBLIGHT_COLOR_LAYER_0
    rgblight_setrgb(RGBLIGHT_COLOR_LAYER_0);
#endif
};

// Runs whenever there is a layer state change.
layer_state_t layer_state_set_user(layer_state_t state) {
    ergodox_board_led_off();
    ergodox_right_led_1_off();
    ergodox_right_led_2_off();
    ergodox_right_led_3_off();

    uint8_t layer = get_highest_layer(state);
    switch (layer) {
        case 0:
#ifdef RGBLIGHT_COLOR_LAYER_0
            rgblight_setrgb(RGBLIGHT_COLOR_LAYER_0);
#endif
            break;
        case 1:
            ergodox_right_led_1_on();
#ifdef RGBLIGHT_COLOR_LAYER_1
            rgblight_setrgb(RGBLIGHT_COLOR_LAYER_1);
#endif
            break;
        case 2:
            ergodox_right_led_2_on();
#ifdef RGBLIGHT_COLOR_LAYER_2
            rgblight_setrgb(RGBLIGHT_COLOR_LAYER_2);
#endif
            break;
        case 3:
            ergodox_right_led_3_on();
#ifdef RGBLIGHT_COLOR_LAYER_3
            rgblight_setrgb(RGBLIGHT_COLOR_LAYER_3);
#endif
            break;
        case 4:
            ergodox_right_led_1_on();
            ergodox_right_led_2_on();
#ifdef RGBLIGHT_COLOR_LAYER_4
            rgblight_setrgb(RGBLIGHT_COLOR_LAYER_4);
#endif
            break;
        case 5:
            ergodox_right_led_1_on();
            ergodox_right_led_3_on();
#ifdef RGBLIGHT_COLOR_LAYER_5
            rgblight_setrgb(RGBLIGHT_COLOR_LAYER_5);
#endif
            break;
        case 6:
            ergodox_right_led_2_on();
            ergodox_right_led_3_on();
#ifdef RGBLIGHT_COLOR_LAYER_6
            rgblight_setrgb(RGBLIGHT_COLOR_LAYER_6);
#endif
            break;
        case 7:
            ergodox_right_led_1_on();
            ergodox_right_led_2_on();
            ergodox_right_led_3_on();
#ifdef RGBLIGHT_COLOR_LAYER_7
            rgblight_setrgb(RGBLIGHT_COLOR_LAYER_7);
#endif
            break;
        default:
            break;
    }

    return state;
};
