
#include "rishka.h"
enum layers {
  BASE, // default layer
  WIN, // Switch keys that are needed in windows
  SYMB, // symbols
  MDIA, // media keys
  GAME, // Gamepad setup
  FIRMWARE // Layer to trigger reset/refresh
};
enum custom_keycodes {
  EPRM = SAFE_RANGE,
  VRSN,
  RGB_SLD
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

[BASE] = LAYOUT_ergodox_pretty_wrapper(
  // left hand
  KC_EQL,  ________________NUMBERS_L__________________, TG(WIN),
  KC_DELT, _________________QWERTY_L1_________________, TG(SYMB),
  KC_BSPC, _____________MOD_QWERTY_L2_________________,
  OS_LSFT, _________________QWERTY_L3_________________, ALL_T(KC_NO),
  LT(SYMB,KC_GRV), KC_QUOT, LALT(KC_LSFT), KC_LEFT, KC_RGHT,
                                           ALT_T(KC_APP), TG(GAME),
                                            LT(FIRMWARE, KC_HOME),
                            KC_SPC, GUI_T(KC_BSPC), ALT_T(KC_END),
  // right hand
  _______,  ________________NUMBERS_R__________________, KC_MINS,
  TG(SYMB), _________________QWERTY_R1_________________, KC_BSLS,
            _____________MOD_QWERTY_R2_________________, GUI_T(KC_QUOT),
  TG(MDIA), _________________QWERTY_R3_________________, OS_RSFT,
             KC_UP,   KC_DOWN, KC_LBRC,  KC_RBRC,        OSL(SYMB),
  KC_LALT,         CTL_T(KC_ESC),
  KC_PGUP,
  GUI_T(KC_PGDN),  CTL_T(KC_TAB), ALT_T(KC_ENT)
),

[WIN] = LAYOUT_ergodox_pretty_wrapper(
  // left hand
  _______, _______, _______, _______, _______, _______, _______,
  KC_F1,   _______, _______, _______, _______, _______, _______,
  KC_TAB,  _________________QWERTY_L2_________________,
  _______, _______,    _______, _______, _______, _______, KC_LGUI,
  KC_LCTL, _______, KC_LALT, _______, _______,
                                               _______, KC_ESC,
                                                        _______,
                                      _______, KC_BSPC, KC_LALT,
  // right hand
  _______, _______, _______, _______, _______, _______, _______,
  _______, _______, _______, _______, _______, _______, _______,
           _______, _______, _______, _______, _______, _______,
  _______, _______, _______, _______, _______, _______, _______,
                    _______, _______, _______, _______, _______,
  _______, _______,
  _______,
  KC_PGDN, CTL_T(KC_TAB), _______
),

[SYMB] = LAYOUT_ergodox(
  // left hand
  VRSN,    KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   _______,
  _______, KC_EXLM, KC_AT,   KC_LCBR, KC_RCBR, KC_PIPE, _______,
  _______, KC_HASH, KC_DLR,  KC_LPRN, KC_RPRN, KC_GRV,
  _______, KC_PERC, KC_CIRC, KC_LBRC, KC_RBRC, KC_TILD, _______,
  EPRM,    _______, _______, _______, _______,
                                               RGB_MOD, RGB_VAI,
                                                        RGB_VAD,
                                      _______, _______, _______,
  // right hand
  _______, KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,
  _______, KC_UP,   KC_7,    KC_8,    KC_9,    KC_ASTR, KC_F12,
  KC_DOWN, KC_4,    KC_5,    KC_6,    KC_PLUS, _______,
  _______, KC_AMPR, KC_1,    KC_2,    KC_3,    KC_BSLS, _______,
  _______, KC_DOT,  KC_0,    KC_EQL,  _______,
  RGB_HUI, RGB_SLD,
  RGB_HUD,
  RGB_TOG, _______, _______
),

[MDIA] = LAYOUT_ergodox(
  // left hand
  _______, _______, _______, _______, _______, _______, _______,
  _______, _______, _______, KC_MS_U, _______, _______, _______,
  _______, _______, KC_MS_L, KC_MS_D, KC_MS_R, _______,
  _______, _______, _______, _______, _______, _______, _______,
  _______, _______, _______, KC_BTN1, KC_BTN2,
                                               _______, KC_BTN5,
                                                        KC_BTN4,
                                      KC_BTN1, KC_BTN2, KC_BTN3,
  // right hand
  _______, _______, _______, _______, _______, _______, _______,
  _______, _______, _______, KC_WH_U, _______, _______, _______,
           _______, KC_WH_L, KC_WH_D, KC_WH_R, _______, KC_MPLY,
  _______, _______, _______, KC_MPRV, KC_MNXT, _______, _______,
                    KC_VOLU, KC_VOLD, KC_MUTE, _______, _______,
  _______, _______,
  _______,
  KC_ACL2, KC_ACL1, KC_ACL0
),

[GAME] = LAYOUT_ergodox(
  // left hand
  KC_ESCAPE, KC_GRAVE, KC_1, KC_2, KC_3, KC_4, KC_5,
  KC_F1, KC_Y, KC_Q, KC_W, KC_E, KC_R, KC_T,
  KC_TAB, KC_LSHIFT, KC_A, KC_S, KC_D, KC_F,
  KC_LCTRL, KC_B, KC_Z, KC_X, KC_C, KC_V, KC_G,
  LT(BASE, KC_L), KC_J, KC_I, KC_O, KC_M,
                                               KC_ESCAPE, _______,
                                                        KC_ENTER,
                                      KC_SPACE, KC_LCTRL, KC_LALT,
 // right hand
  KC_RGHT,      KC_6,    KC_7,    KC_8,    KC_9,              KC_0,           KC_MINS,
  TG(SYMB),     KC_Y,    KC_U,    KC_I,    KC_O,              KC_P,           KC_BSLS,
  KC_H,         KC_J,    KC_K,    KC_L,    LT(MDIA, KC_SCLN), GUI_T(KC_QUOT),
  MEH_T(KC_NO), KC_N,    KC_M,    KC_COMM, KC_DOT,            CTL_T(KC_SLSH), KC_RSFT,
  KC_UP,        KC_DOWN, KC_LBRC, KC_RBRC, TT(SYMB),
  KC_LALT, CTL_T(KC_ESC),
  KC_PGUP,
  KC_PGDN, KC_TAB, KC_ENT
),

[FIRMWARE] = LAYOUT_ergodox(
  // left hand
  _______, _______, _______, _______, _______, _______, _______,
  _______, _______, _______, _______, _______, _______, _______,
  _______, _______, _______, _______, _______, _______,
  _______, _______, _______, _______, _______, _______, _______,
  _______, _______, _______, _______, _______,
                                               _______, _______,
                                                        _______,
                                      RESET, _______, _______,
  // right hand
  _______, _______, _______, _______, _______, _______, _______,
  _______, _______, _______, _______, _______, _______, _______,
           _______, _______, _______, _______, _______, _______,
  _______, _______, _______, _______, _______, _______, _______,
                    _______, _______, _______, _______, _______,
  _______, _______,
  _______,
  _______, _______, EEP_RST
),
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  if (record->event.pressed) {
    switch (keycode) {
      case EPRM:
        eeconfig_init();
        return false;
      case VRSN:
        SEND_STRING (QMK_KEYBOARD "/" QMK_KEYMAP " @ " QMK_VERSION);
        return false;
      #ifdef RGBLIGHT_ENABLE
      case RGB_SLD:
        rgblight_mode(1);
        return false;
      #endif
    }
  }
  return true;
}

// Runs just one time when the keyboard initializes.
void matrix_init_user(void) {
#ifdef RGBLIGHT_COLOR_LAYER_0
  rgblight_setrgb(RGBLIGHT_COLOR_LAYER_0);
#endif
};

// Runs whenever there is a layer state change.
uint32_t layer_state_set_user(uint32_t state) {
  ergodox_board_led_off();
  ergodox_right_led_1_off();
  ergodox_right_led_2_off();
  ergodox_right_led_3_off();

  uint8_t layer = biton32(state);
  switch (layer) {
      case 0:
        #ifdef RGBLIGHT_COLOR_LAYER_0
          rgblight_setrgb(RGBLIGHT_COLOR_LAYER_0);
        #else
        #ifdef RGBLIGHT_ENABLE
          rgblight_init();
        #endif
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
