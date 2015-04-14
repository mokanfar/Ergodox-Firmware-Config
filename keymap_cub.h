/*
TODO:
Undo/Redo
Better/efficient layer switching
Teensy Function Copy for Image Overlay for layer cheat sheet
    and assign asdf

*/
static const uint8_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    KEYMAP(  // Layer0: default
        // left hand
        BSPC, 1,   2,   3,   4,   5,   6,
        TAB, Q,   W,   E,   R,   T,   H,
        PENT,A,FN10,D,FN9,G,
        LSFT,Z,X,C,V,B,N,
        LBRC,LALT,LGUI,INS,SPC,
                                      FN2,FN3,
                                           FN4,
                                 LCTL, FN8, FN0,
        // right hand
             7, 8,   9,   0,   MINS,   EQL,   BSPC,
             PMNS,Y,   U,   I,   O,   P,   BTN4,
                  FN11,   J,   K,   L,   SCLN,ENTER,
             PPLS, N,   M,   COMM,DOT, SLSH,LSHIFT,
                       SPC, INS,  RGUI, DELETE,RBRC, FN5,FN6,
        QUOT,
        NO, LALT, RCTL
    ),
        KEYMAP(  // Layer1: Mouse Layer
        // left hand
        TRNS,F1,  F2,  F3,  F4,  F5,F6,
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,PMNS,
        TRNS,3,  F14,  3,  TRNS,3,
        TRNS,TRNS,  TRNS,  TRNS,  TRNS,TRNS,  PPLS,
        ESC,TRNS,TRNS,TRNS,TRNS,
                                      GRV,TRNS,
                                        TRNS,
                            TRNS, TRNS,TRNS,
        // right hand
             F7,F8,F9,F10,F11,F12,TRNS,
             PMNS,TRNS,  P7,  P8,  P9,  TRNS,   FN1,
                  BTN1,  P4,  P2,  P6,  TRNS,   BTN1,
             PPLS,TRNS,  P1,  P2,  P3,  TRNS, TRNS,
                       TRNS,  TRNS,TRNS,TRNS, SLCK,
        TRNS,TRNS,
        TRNS,
        TRNS,F17,BTN1
    ),
    KEYMAP(  // Layer2: Sublime
        // left hand
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
        TRNS,TRNS,   TRNS,   TRNS,   TRNS,   TRNS,   TRNS,
        TRNS,LALT,   TRNS,   LCTL,   TRNS,   TRNS,
        TRNS,TRNS,   TRNS,   TRNS,   TRNS,   TRNS,   TRNS,
        TRNS,TRNS,TRNS,TRNS,TRNS,
                                      TRNS,TRNS,
                                           TRNS,
                                 TRNS,TRNS,TRNS,
        // right hand
             TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
             F15,TRNS,   TRNS,   UP,   TRNS,   TRNS,   BSLS,
                  HOME,   LEFT,   DOWN,   RIGHT,  END,   TRNS,
             F16,TRNS, TRNS,   TRNS,TRNS,TRNS,TRNS,
                       TRNS,TRNS,TRNS,TRNS, TRNS,
        TRNS,TRNS,
        TRNS,
        TRNS,TRNS,TRNS
    ),
        KEYMAP(  // Layer3: Launchy/Miscellaneous Layer
        // left hand
        ESC,F1,TRNS,BTN2,TRNS,BTN1,TRNS,
        TRNS,FN13,FN12,FN18,TRNS,FN16,F15,
        TRNS,FN20,TRNS,TRNS,TRNS,TRNS,
        TRNS,TRNS,TRNS,TRNS,FN22,FN14,F16,
        TRNS,TRNS,TRNS,TRNS,FN17,
                                      TRNS,TRNS,
                                           TRNS,
                                 TRNS,TRNS,TRNS,
        // right hand
             TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
             FN19,TRNS,TRNS,TRNS,TRNS,TRNS,FN21,
                  TRNS,TRNS,TRNS,FN15,TRNS,TRNS,
             BTN4,TRNS,FN16,TRNS,TRNS,TRNS,TRNS,
                       FN17,TRNS,TRNS,TRNS,TRNS,
        TRNS,TRNS,
        TRNS,
        TRNS,TRNS,TRNS
    ),
    KEYMAP(  // Layer4: Photoshop
        // left hand
        TRNS,FN0,  FN1,  FN2,  FN3,  FN4,FN5,
        FN6,FN7,  FN8,  FN9,  FN10,  FN11,  TRNS,
        TRNS,A,  FN12,  FN13,  FN14,FN15,
        TRNS,Z,  X,  C,  V,FN16,  TRNS,
        TRNS,LBRC,LGUI,RBRC,SPC,
                                      M,K,
                                        Q,
                            LCTL, LALT,E,
        // right hand[6]
             NO,NO,NO,NO,NO,NO,TRNS,
             FN18,NO,  NO,  NO,  NO,  NO,   FN29,
                  NO,  NO,  NO,  NO,  NO,   TRNS,
             FN19,NO,  NO,  NO,  NO,  NO, TRNS,
                       NO,  NO,NO,NO, TRNS,
        NO,NO,
        TRNS,
        NO,NO,NO
    ),

};

enum function_id {
    CUSTOM_KEY,
    COPY_KEY,
    PASTE_KEY,
    TAP_OUT
};

/*
 * Fn action definition
 */
 //Default
static const uint16_t PROGMEM fn_actions[] = {
    [0]  = ACTION_LAYER_TOGGLE(4),
    [1]  = ACTION_LAYER_TOGGLE(1),
    [2]  = ACTION_MODS_KEY(MOD_LSFT, KC_9), // (
    [3]  = ACTION_MODS_KEY(MOD_LSFT, KC_LBRC), // {
    [4]  = ACTION_LAYER_TOGGLE(2), // L[2]
    [5]  = ACTION_MODS_KEY(MOD_LSFT, KC_RBRC), //}
    [6]  = ACTION_MODS_KEY(MOD_LSFT, KC_0), //)
    [8]  = ACTION_MODS_KEY(MOD_LCTL, KC_SCLN), //Launchy Ctrl+;
    [9]  = ACTION_LAYER_TAP_KEY(1, KC_F), //Mouse Layer or D
    [10] = ACTION_LAYER_TAP_KEY(2, KC_S), //Sublime Layer or S
    [11] = ACTION_LAYER_TAP_KEY(3, KC_H), //Launchy Miscellaneous Layer
};

//Mouse Layer
static const uint16_t PROGMEM fn_actions_1[] = {
// [0] = ACTION_LAYER_OFF(3, ON_BOTH), //Layer 0
// [1] = ACTION_LAYER_SET(0, ON_PRESS), //Layer 0
// [2] = ACTION_LAYER_INVERT(3, ON_BOTH), //Layer 0
//qwerty substitutions for testing purposes
//[3]  = ACTION_MODS_ONESHOT(MOD_LSFT), //q (press once, holds shift, enter next key, shift releases after next key release)
// [3] = ACTION_LAYER_MOMENTARY(1),//q
//[4]  = ACTION_FUNCTION_TAP(CUSTOM_KEY), //w (gets stuck on/buggy maybe because it was on TAP instead of regular)
//[4]  = ACTION_FUNCTION(CUSTOM_KEY),//w
//[5]  = ACTION_LAYER_TAP_KEY(0, KC_4), //e (doesnt work)
// [5] = ACTION_FUNCTION_TAP(TAP_OUT), //e works
//[6]  = ACTION_MODS_TAP_KEY(MOD_RSFT, KC_MINS), //r (sends shift + sends minus. if hold down, acts like shift key. if just press does minus key)
//[6]  = ACTION_LAYER_MODS(0, MOD_LSFT), //r
[6]    = ACTION_MODS_KEY(MOD_LCTL, KC_HOME), //r
//[7]  = ACTION_MODS_TAP_TOGGLE(MOD_LSFT), //t holds shift down when hold key down, release shift when release, just like normal key.
//[7]  = ACTION_FUNCTION(COPY_KEY), //t works
[7]    = ACTION_MODS_KEY(MOD_LCTL, KC_END), //t works
};

//Sublime
static const uint16_t PROGMEM fn_actions_2[] ={
    [22] = ACTION_LAYER_SET_CLEAR(0), //layer 0
};
//Photoshop
static const uint16_t PROGMEM fn_actions_4[] = {

    [0]  = ACTION_MODS_KEY(MOD_LCTL, KC_P0), //ctrl+0

    [1]  = ACTION_MODS_KEY(MOD_LALT, KC_F7), //alt+f7
    [2]  = ACTION_MODS_KEY(MOD_LCTL|MOD_LSFT, KC_N), //ctrl+shift+n
    [3]  = ACTION_MODS_KEY(MOD_LALT, KC_F6), //alt+f6
    [4]  = ACTION_MODS_KEY(MOD_LCTL|MOD_LSFT, KC_F12), //ctrl+shift+f12

    [5]  = ACTION_LAYER_SET_CLEAR(0), //Layer[0]
    [6]  = ACTION_MODS_KEY(MOD_LCTL|MOD_LALT, KC_F7), //ctrl+alt+f7
    [7]  = ACTION_MODS_KEY(MOD_LCTL|MOD_LALT, KC_F8), //ctrl+alt+f8
    [8]  = ACTION_MODS_KEY(MOD_LCTL|MOD_LALT, KC_F1), //ctrl+alt+f1
    [9]  = ACTION_MODS_KEY(MOD_LCTL|MOD_LALT, KC_F2), //ctrl+alt+f2
    [10] = ACTION_MODS_KEY(MOD_LCTL|MOD_LALT, KC_F3), //ctrl+alt+f3

    [11] = ACTION_MODS_KEY(MOD_LCTL, KC_T), //ctrl+t
    [12] = ACTION_MODS_KEY(MOD_LCTL|MOD_LALT, KC_F4), //ctrl+alt+f4
    [13] = ACTION_MODS_KEY(MOD_LCTL|MOD_LALT, KC_F5), //ctrl+alt+f5
    [14] = ACTION_MODS_KEY(MOD_LCTL|MOD_LALT, KC_F6), //ctrl+alt+f6
    [15] = ACTION_MODS_KEY(MOD_LCTL|MOD_LSFT, KC_F10), //ctrl+shift+f10
    [16] = ACTION_MODS_KEY(MOD_LCTL|MOD_LSFT, KC_F9), //ctrl+shift+f9
    [18] = ACTION_MODS_KEY(MOD_LCTL|MOD_LSFT, KC_F12), //ctrl+shift+f12
    [19] = ACTION_MODS_KEY(MOD_LCTL|MOD_LSFT, KC_F11), //ctrl+shift+f11
    [29] = ACTION_LAYER_SET_CLEAR(0), //ctrl+shift+f11

};
//miscellaneous layer 
static const uint16_t PROGMEM fn_actions_3[] = {

[12]=ACTION_MODS_KEY(MOD_LALT,KC_W),//expand to word
[13]=ACTION_MODS_KEY(MOD_LCTL,KC_Q),//expand to quote
[14]=ACTION_MODS_KEY(MOD_LALT,KC_B),//expand to bracket
[15]=ACTION_MODS_KEY(MOD_LCTL,KC_L),//expand to line
[16]=ACTION_MODS_KEY(MOD_LCTL,KC_M),//jump to matching bracket
[17]=ACTION_MODS_KEY(MOD_LCTL|MOD_LSFT,KC_SPACE),//expand selection
[18]=ACTION_MODS_KEY(MOD_LALT,KC_E),//Expand Region
// [19]=ACTION_MODS_KEY(MOD_LCTL,KC_SCLN),//LaunchyCtrl+;
[20]=ACTION_MODS_KEY(MOD_LALT|MOD_LSFT,KC_A),//Align Tab;
[21]=ACTION_LAYER_SET_CLEAR(0), //Launchy Ctrl+;
[22]=ACTION_MODS_KEY(MOD_LCTL|MOD_LSFT,KC_V),


};

void action_function(keyrecord_t *record, uint8_t id, uint8_t opt)
{

if (id == TAP_OUT) {
    uint8_t layer;
 if (record->tap.count == 2) {
           layer = 0;
           layer_on(layer);

        }
        else {
            add_key(KC_X);
            del_key(KC_X);
            send_keyboard_report();
        }
    }

    if (id == CUSTOM_KEY) {
       uint8_t weak_mods;
            uint8_t layer;

                weak_mods = MOD_BIT(KC_LSFT);
                layer     = 0;

            if (record->event.pressed) {
                layer_on(layer);
                add_weak_mods(weak_mods);
                add_key(KC_X);
                send_keyboard_report();
            } else {
                del_weak_mods(weak_mods);
                del_key(KC_X);
                send_keyboard_report();
            }

    }

     if (id == COPY_KEY || id == PASTE_KEY) {
        if (record->tap.count == 0 || record->tap.interrupted) {
            uint8_t weak_mods;
            uint8_t keycode;

                weak_mods = MOD_LCTL;

        if (id == COPY_KEY) {
              keycode = KC_C;
            } else {
              keycode = KC_V;
            }

            if (record->event.pressed) {
                add_weak_mods(weak_mods);
                add_key(keycode);
                send_keyboard_report();
            } else {
                del_weak_mods(weak_mods);
                del_key(keycode);
                send_keyboard_report();
            }
        } 
    }
}

#define FN_ACTIONS_SIZE     (sizeof(fn_actions)   / sizeof(fn_actions[0]))
#define FN_ACTIONS_1_SIZE   (sizeof(fn_actions_1) / sizeof(fn_actions_1[0]))
#define FN_ACTIONS_2_SIZE   (sizeof(fn_actions_2) / sizeof(fn_actions_2[0]))
#define FN_ACTIONS_3_SIZE   (sizeof(fn_actions_3) / sizeof(fn_actions_3[0]))
#define FN_ACTIONS_4_SIZE   (sizeof(fn_actions_4) / sizeof(fn_actions_4[0]))

/*
 * translates Fn keycode to action
 * for some layers, use different translation table
 */
action_t keymap_fn_to_action(uint8_t keycode)
{
    uint8_t layer = biton32(layer_state);

    action_t action;
    action.code = ACTION_NO;

    if (layer == 1 && FN_INDEX(keycode) < FN_ACTIONS_1_SIZE) {
        action.code = pgm_read_word(&fn_actions_1[FN_INDEX(keycode)]);
    }

    if (layer == 2 && FN_INDEX(keycode) < FN_ACTIONS_2_SIZE) {
        action.code = pgm_read_word(&fn_actions_2[FN_INDEX(keycode)]);
    }

     if (layer == 3 && FN_INDEX(keycode) < FN_ACTIONS_3_SIZE) {
        action.code = pgm_read_word(&fn_actions_3[FN_INDEX(keycode)]);
    }

    // by default, use fn_actions from default layer 0
    // this is needed to get mapping for same key, that was used switch to some layer,
    // to have possibility to switch layers back
    if (action.code == ACTION_NO && FN_INDEX(keycode) < FN_ACTIONS_SIZE) {
        action.code = pgm_read_word(&fn_actions[FN_INDEX(keycode)]);
    }

    return action;
}

