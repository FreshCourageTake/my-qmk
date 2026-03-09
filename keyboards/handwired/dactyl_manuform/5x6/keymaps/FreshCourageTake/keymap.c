/* A standard layout for the Dactyl Manuform 5x6 Keyboard */ 

#include QMK_KEYBOARD_H


#define _QWERTY 0
#define _ARROWS 1
#define _SYMBOLS 2
#define _NUMPAD 3
#define _FUNPAD 4

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

  [_QWERTY] = LAYOUT_5x6(
     KC_ESC , KC_1, KC_2, KC_0, DM_PLY1, DM_PLY2,                               DM_REC1, DM_REC2, DM_RSTP, DM_PLY1, DM_PLY2, TG(_NUMPAD),
     KC_TAB , KC_Q, KC_W, KC_E, KC_R, KC_T,                                     KC_Y, KC_U, KC_I, KC_O, KC_P,KC_MINS,
     OSM(MOD_LSFT), KC_A, KC_S, LT(_FUNPAD, KC_D), LT(_NUMPAD, KC_F), KC_G,     KC_H, LT(_FUNPAD, KC_J), KC_K, KC_L, KC_SCLN,OSM(MOD_RSFT),
     KC_LALT, KC_Z, KC_X, LGUI_T(KC_C), KC_V, KC_B,                             KC_N, KC_M,RGUI_T(KC_COMM),KC_DOT ,KC_SLSH,KC_BSLASH,
                      KC_LBRC,KC_RBRC,                                                       _______, _______,
                                      LCTL_T(KC_TAB),LT(_ARROWS, KC_ENT),                  LT(_SYMBOLS, KC_SPC), RCTL_T(KC_BSPC),
                                                        KC_TAB, KC_QUOT,                    LT(_FUNPAD, KC_QUOT),  KC_QUOT,
                                                        LSFT(KC_TAB), KC_DEL,             KC_BTN2, _______
  ),

  [_ARROWS] = LAYOUT_5x6(

     _______,_______, _______,_______,_______,_______,                        _______,_______,_______,_______,_______,_______,
     _______,_______,_______,_______,_______,_______,                        KC_LABK,    	   KC_HOME,       KC_UP,            KC_END,           KC_LCBR,_______,
     _______,KC_LCTL,   KC_LSFT,   KC_LALT,   KC_LGUI,_______,               KC_RABK,    	KC_LEFT,          KC_DOWN,          KC_RIGHT,         KC_RCBR,_______,
     _______,_______,_______,_______,_______,_______,                        _______, KC_LEFT_PAREN,    KC_RIGHT_PAREN,   KC_LBRACKET,      KC_RBRACKET,_______,
                                             _______,_______,            _______, _______,
                                             _______,_______,            _______,_______,
                                             _______,_______,            _______,_______,
                                             _______,_______,            _______,_______

  ),

  [_SYMBOLS] = LAYOUT_5x6(
       _______, _______, _______, _______, _______, _______,                        _______, _______, _______, _______,_______,_______,
       KC_TILDE,  KC_GRAVE,  KC_PERCENT, KC_PIPE, KC_AMPR,  KC_EQUAL,                        _______,_______,_______,_______,_______,_______,
       KC_CAPSLOCK, KC_EXCLAIM, KC_AT, KC_HASH, KC_DOLLAR, KC_RABK,                        _______,_______,_______,_______,_______,_______,
       _______,KC_CIRC, KC_ASTR, KC_UNDERSCORE, KC_PLUS, KC_MINUS,                        _______,_______,_______,_______,_______,_______,
                                               _______,_______,            _______ ,_______,
                                               _______,_______,            _______,_______,
                                               _______,_______,            _______,_______,
                                               _______,_______,            _______,_______
  ),

  [_NUMPAD] = LAYOUT_5x6(
       _______, _______, _______, _______, _______, _______,                        _______, _______, _______, _______,_______,TG(_NUMPAD),
       _______,_______,_______,_______,_______,_______,                        _______,KC_7,KC_8,KC_9,SGUI(KC_S),_______,
       _______,_______,_______,_______,_______,_______,                        _______,KC_4,KC_5,KC_6,_______,_______,
       _______,_______,_______,_______,_______,_______,                        _______,KC_1,KC_2,KC_3,_______,_______,
                                      _______,_______,                         _______ ,_______,
                                               _______,_______,            KC_MINUS,KC_0,
                                               _______,_______,            _______,_______,
                                               _______,_______,            _______,_______
  ),

  [_FUNPAD] = LAYOUT_5x6(
       RESET, _______, _______, _______, _______, _______,                        _______, KC_F10, KC_F11, KC_F12,_______,_______,
       _______,_______,_______,_______,_______,_______,                        _______,KC_F7,KC_F8,KC_F9,_______,_______,
       _______,_______,KC_MPRV,KC_MPLY,KC_MNXT,_______,                        _______,KC_F4,KC_F5,KC_F6,_______,_______,
       _______,_______,_______,KC_VOLD,KC_VOLU,_______,                        _______,KC_F1,KC_F2,KC_F3,_______,_______,
                                               _______,_______,            _______ ,_______,
                                               _______,_______,            _______,_______,
                                               _______,_______,            _______,_______,
                                               _______,_______,            _______,_______
  ),
};
