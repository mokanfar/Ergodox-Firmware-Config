/*
* Ergodox Keyboard layer(s) layout
*/
static const uint8_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    // Layer0 default
    KEYMAP(
        // left hand
        BSPC, 1,   2,   3,   4,   5,   6,
        TAB,  Q,   W,   E,   R,   T,   H,
        PENT, A,   S,   D,  FN9,  G,
        LSFT, Z,   X,   C,   V,   B,   N,
        BTN4,FN4,LGUI,INS,FN11,
                                       ESC,LBRC,
                                           FN4,
                                 LCTL, FN8, FN1,
        // right hand
        7,  8,  9,  0,  MINS,   EQL,    BSPC,
        WH_U, Y,   U,   I,   O,   P,     F18,
              H,   J,   K,   L,   SCLN, ENTER,
        WH_D, N,   M,  COMM,DOT, SLSH, LSHIFT,
                FN11, INS, RGUI, DELETE, RBRC,
        RBRC,FN5,
        QUOT,
        TRNS, RALT, RCTL
    ),

    // Layer1: Mouse Layer hold down F key
    KEYMAP(
        // left hand
        F1,F2,F3,F4,F5,F6,F7,
        F14,F15,F16,F17,F18,F19,  TRNS,
        F20,F21,F14,F23,TRNS,TRNS,
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,  TRNS,
        TRNS,TRNS,TRNS,TRNS,F14,
                                      TRNS,TRNS,
                                           TRNS,
                                BTN1, FN17,TRNS,
        // right hand
        F8,F9,F10,F11,F12,F13,TRNS,
        FN1, F19,  P7,  P8,  P9,  TRNS,FN10,
             F23,  P4,  P2,  P6,  TRNS,TRNS,
        FN2, F24,  P1,  P2,  P3,  TRNS,TRNS,
               BTN1,TRNS,ACL0,NLCK,SLCK,
        TRNS,TRNS,
        TRNS,
        TRNS,BTN2,BTN1
    ),

    // Layer2: Sublime layer hold down space key
    KEYMAP(
        // left hand
        GRV,FN1,FN2,F22,F23,TRNS,TRNS,
        MUTE,FN3,FN4,FN5,FN6,FN7,FN8,
        TRNS,FN9,FN10,FN0,TRNS, FN31,
        TRNS,FN14,FN15,FN16,FN17,FN18,FN19,
        TRNS,TRNS,TRNS,TRNS,TRNS,
                                      TRNS,TRNS,
                                           TRNS,
                                  TRNS,FN0,FN31,
        // right hand
        FN28,FN29,FN25,FN26,FN21,FN12,TRNS,
        TRNS,FN20,FN22,UP,FN23,FN30,BSLS,
            HOME,LEFT,DOWN,RIGHT,END,TRNS,
        TRNS,FN27,M,FN28,FN29,TRNS,TRNS,
                 TRNS,FN25,FN26,TRNS,TRNS,
        TRNS,DELETE,
        TRNS,
        TRNS,TRNS,TRNS
    ),

    // Layer3: InDesign toggled
    KEYMAP(
        // left hand
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
        FN0,TRNS,TRNS,TRNS,TRNS,TRNS,FN12,
        TRNS,TRNS,FN8,FN6,FN7,TRNS,
        TRNS,FN15,TRNS,TRNS,TRNS, FN5, M,
        FN3,FN4,FN10,FN9,SPC,
                                      TRNS,FN13,
                                           FN14,
                                  TRNS,LALT,FN1,
        // right hand
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
        TRNS,TRNS,TRNS,UP,TRNS,TRNS,FN0,
            TRNS,LEFT,DOWN,RIGHT,TRNS,TRNS,
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
               TRNS,TRNS,TRNS,TRNS,TRNS,
        TRNS,TRNS,
        TRNS,
        FN16,TRNS,TRNS
    )
};

/*
* Layer Functions
*/

// Default Layer 0
static const uint16_t PROGMEM fn_actions[] = {
    [1]  = ACTION_LAYER_TOGGLE(3), //indesign layer
    [2]  = ACTION_LAYER_TOGGLE(4), //photoshop layer
    [3]  = ACTION_MODS_KEY(MOD_LSFT, KC_LBRC), // {
    [4]  = ACTION_MODS_KEY(MOD_LCTL|MOD_LALT, KC_L), //launchy
    [5]  = ACTION_MODS_KEY(MOD_LGUI, KC_S), //}
    [6]  = ACTION_MODS_KEY(MOD_LSFT, KC_0), //)
    [8]  = ACTION_MODS_KEY(MOD_LCTL, KC_SCLN), //Launchy Ctrl+;
    [9]  = ACTION_LAYER_TAP_KEY(1, KC_F), //Mouse Layer or F
    [11] = ACTION_LAYER_TAP_KEY(2, KC_SPC), //sublime expert layer
    [16] = ACTION_LAYER_MOMENTARY(0)
};

// Mouse Layer 1 hold down F key
static const uint16_t PROGMEM fn_actions_1[] = {
    [17] = ACTION_MODS_KEY(MOD_LGUI, KC_S),
    [10] = ACTION_LAYER_SET_CLEAR(0),
    [2]  = ACTION_MODS_KEY(MOD_LCTL,KC_F23),//maximize restore
    [1]  = ACTION_MODS_KEY(MOD_LCTL|MOD_LSFT,KC_F23),//minimize
};

// Sublime Layer 2 hold down space key
static const uint16_t PROGMEM fn_actions_2[] = {
    [0]  = ACTION_MODS_KEY(MOD_LCTL|MOD_LSFT,KC_K),
    [1]  = ACTION_MODS_KEY(MOD_LCTL|MOD_LSFT,KC_TAB),
    [2]  = ACTION_MODS_KEY(MOD_LCTL,KC_TAB),
    [3]  = ACTION_MODS_KEY(MOD_LGUI,KC_G),
    [4]  = ACTION_MODS_KEY(MOD_LCTL|MOD_LSFT,KC_G),
    [5]  = ACTION_MODS_KEY(MOD_LALT,KC_E),
    [6]  = ACTION_MODS_KEY(MOD_LCTL|MOD_LSFT,KC_SCLN),
    [7]  = ACTION_MODS_KEY(MOD_LCTL,KC_T),
    [8]  = ACTION_MODS_KEY(MOD_LALT,KC_MINS),
    [9]  = ACTION_MODS_KEY(MOD_LCTL,KC_A),
    [12] = ACTION_MODS_KEY(MOD_LCTL,KC_TAB),
    [13] = ACTION_MODS_KEY(MOD_LCTL,KC_G),
    [14] = ACTION_MODS_KEY(MOD_LCTL,KC_Z),
    [15] = ACTION_MODS_KEY(MOD_LCTL,KC_X),
    [16] = ACTION_MODS_KEY(MOD_LCTL,KC_C),
    [17] = ACTION_MODS_KEY(MOD_LCTL,KC_V),
    [18] = ACTION_MODS_KEY(MOD_LALT,KC_T),
    [19] = ACTION_MODS_KEY(MOD_LALT,KC_EQL),
    [20] = ACTION_MODS_KEY(MOD_LCTL,KC_Y),
    [21] = ACTION_MODS_KEY(MOD_LCTL|MOD_LSFT,KC_TAB),
    [22] = ACTION_MODS_KEY(MOD_LCTL,KC_LEFT),
    [23] = ACTION_MODS_KEY(MOD_LCTL,KC_RIGHT),
    [24] = ACTION_MODS_KEY(MOD_LALT,KC_M),
    [25] = ACTION_MODS_KEY(MOD_LCTL,KC_COMM),
    [26] = ACTION_MODS_KEY(MOD_LCTL,KC_DOT),
    [27] = ACTION_MODS_KEY(MOD_LSFT|MOD_LALT,KC_M),
    [28] = ACTION_MODS_KEY(MOD_LCTL|MOD_LSFT,KC_COMM),
    [29] = ACTION_MODS_KEY(MOD_LCTL|MOD_LSFT,KC_DOT),

    [30] = ACTION_MODS_KEY(MOD_LCTL|MOD_LSFT,KC_H),
    [31] = ACTION_MODS_KEY(MOD_LCTL|MOD_LSFT,KC_F14)
};

// InDesign Layer 3 toggled
static const uint16_t PROGMEM fn_actions_3[] = {
    [0]  = ACTION_LAYER_SET_CLEAR(0),
    [1]  = ACTION_LAYER_SET_CLEAR(0),
    [3]  = ACTION_MODS_KEY(MOD_LGUI,KC_F16),//windows+F16 windows explorer
    [4]  = ACTION_MODS_KEY(MOD_LGUI,KC_F14),//win+f14
    [5]  = ACTION_MODS_KEY(MOD_LCTL,KC_U),//ctrl+u
    [6]  = ACTION_MODS_KEY(MOD_LCTL|MOD_LALT,KC_F5),// ctrl+alt+f5 / shfit+ctrl+alt+f5 horiz/vert middle
    [7]  = ACTION_MODS_KEY(MOD_LCTL|MOD_LALT,KC_F1),// ctrl+alt+f6 / shfit+ctrl+alt+f6 top/right align
    [8]  = ACTION_MODS_KEY(MOD_LCTL|MOD_LALT,KC_F3),//ctrl+alt+f4 / shift+ctrl+alt++f4 bottom/left align
    [9]  = ACTION_MODS_KEY(MOD_LCTL|MOD_LALT,KC_F8),//distribute evenly vert
    [10] = ACTION_MODS_KEY(MOD_LCTL|MOD_LALT,KC_F7),//distribute evenly horiz
    [12] = ACTION_MODS_KEY(MOD_LCTL,KC_J),//go to page
    [13] = ACTION_MODS_KEY(MOD_LCTL|MOD_LSFT,KC_F10),//zoom in
    [14] = ACTION_MODS_KEY(MOD_LCTL|MOD_LSFT,KC_F9),//zoom out
    [15] = ACTION_MODS_KEY(MOD_LCTL,KC_Z),//undo
    [16] = ACTION_LAYER_MOMENTARY(0),
};



#define FN_ACTIONS_SIZE     (sizeof(fn_actions)   / sizeof(fn_actions[0]))
#define FN_ACTIONS_1_SIZE   (sizeof(fn_actions_1) / sizeof(fn_actions_1[0]))
#define FN_ACTIONS_2_SIZE   (sizeof(fn_actions_2) / sizeof(fn_actions_2[0]))
#define FN_ACTIONS_3_SIZE   (sizeof(fn_actions_3) / sizeof(fn_actions_3[0]))

/*
 * translates Fn keycode to action
 * for some layers, use different translation table
 */

action_t keymap_fn_to_action(uint8_t keycode) {

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

    if (action.code == ACTION_NO && FN_INDEX(keycode) < FN_ACTIONS_SIZE) {
        action.code = pgm_read_word(&fn_actions[FN_INDEX(keycode)]);
    }

    return action;
}