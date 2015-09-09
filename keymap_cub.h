/*
* Ergodox Keyboard layer(s) layout
*/
static const uint8_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    // Layer0: default
    KEYMAP(
        // left hand
        BSPC, 1,   2,   3,   4,   5,   6,
        TAB,  Q,   W,   E,   R,   T,   H,
        PENT, A,   S,   D,  FN9,  G,
        LSFT, Z,   X,   C,   V,   B,   N,
        LBRC,LALT,LGUI,INS,FN11,
                                       ESC,FN3,
                                           FN4,
                                 LCTL, FN8, NO,
        // right hand
        7,  8,  9,  0,  MINS,   EQL,    BSPC,
        PMNS, Y,   U,   I,   O,   P,     BTN4,
              H,   J,   K,   L,   SCLN, ENTER,
        PPLS, N,   M,  COMM,DOT, SLSH, LSHIFT,
                FN11, INS, RGUI, DELETE, RBRC,
        FN5,FN6,
        QUOT,
        ESC, LALT, RCTL
    ),
    // Layer1: Mouse Layer holding down F
    KEYMAP(
    // left hand
    TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
    TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,  TRNS,
    TRNS,TRNS,F14,TRNS,TRNS,TRNS,
    TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,  TRNS,
    TRNS,TRNS,TRNS,TRNS,BTN1,
                                  TRNS,TRNS,
                                       TRNS,
                            BTN1, TRNS,TRNS,
    // right hand
         FN1,FN2,TRNS,TRNS,TRNS,TRNS,TRNS,
         F15,F19,  P7,  P8,  P9,  TRNS,TRNS,
             F23,  P4,  P2,  P6,  TRNS,TRNS,
         F16,F24,  P1,  P2,  P3,  TRNS,TRNS,
                   BTN1,TRNS,TRNS,TRNS,TRNS,
    TRNS,TRNS,
    TRNS,
    TRNS,F17,BTN1
    ),
    // Layer2: Sublime Expert new 08-2015 holding down Spacebar
    KEYMAP(
        // left hand
        GRV,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
        TRNS,FN3,FN4,FN5,FN6,FN7,FN8,
        TRNS,FN9,FN10,FN0,TRNS,FN13,
        TRNS,FN14,FN15,FN16,FN17,FN18,FN19,
        TRNS,TRNS,TRNS,TRNS,TRNS,
                                      TRNS,TRNS,
                                           TRNS,
                                 TRNS,FN0,FN31,
        // right hand
           FN3,FN4,TRNS,TRNS,FN21,FN12,TRNS,
           TRNS,FN20,FN22,UP,FN23,FN30,BSLS,
                HOME,LEFT,DOWN,RIGHT,END,TRNS,
           TRNS,FN27,FN24,FN28,FN29,TRNS,TRNS,
                     TRNS,FN25,FN26,TRNS,TRNS,
        TRNS,TRNS,
        TRNS,
        TRNS,TRNS,TRNS
    ),
};

/*
* Layer Functions
*/

//Default Layer 0
static const uint16_t PROGMEM fn_actions[] = {
    [3]  = ACTION_MODS_KEY(MOD_LSFT, KC_LBRC), // {
    [5]  = ACTION_MODS_KEY(MOD_LSFT, KC_RBRC), //}
    [6]  = ACTION_MODS_KEY(MOD_LSFT, KC_0), //)
    [8]  = ACTION_MODS_KEY(MOD_LCTL, KC_SCLN), //Launchy Ctrl+;
    [9]  = ACTION_LAYER_TAP_KEY(1, KC_F), //Mouse Layer or D
    [11] = ACTION_LAYER_TAP_KEY(2, KC_SPC), //sublime expert layer
};

//Mouse Layer 1
static const uint16_t PROGMEM fn_actions_1[] = {
    [1]  = ACTION_MODS_KEY(MOD_LGUI, KC_LEFT),
    [2]  = ACTION_MODS_KEY(MOD_LGUI, KC_RIGHT),
    [6]  = ACTION_MODS_KEY(MOD_LCTL, KC_HOME),
    [7]  = ACTION_MODS_KEY(MOD_LCTL, KC_END),
};

//Sublime Layer 2
static const uint16_t PROGMEM fn_actions_2[] = {
    [0]  = ACTION_MODS_KEY(MOD_LCTL|MOD_LSFT,KC_K),
    [3]  = ACTION_MODS_KEY(MOD_LGUI,KC_G),
    [4]  = ACTION_MODS_KEY(MOD_LCTL|MOD_LSFT,KC_G),
    [5]  = ACTION_MODS_KEY(MOD_LALT,KC_E),
    [6]  = ACTION_MODS_KEY(MOD_LCTL|MOD_LSFT,KC_SCLN),
    [7]  = ACTION_MODS_KEY(MOD_LCTL,KC_T),
    [8]  = ACTION_MODS_KEY(MOD_LALT,KC_MINS),
    [9]  = ACTION_MODS_KEY(MOD_LCTL,KC_A),
    [12] = ACTION_MODS_KEY(MOD_LCTL|MOD_LSFT,KC_LBRC),
    [13] = ACTION_MODS_KEY(MOD_LCTL,KC_G),
    [14] = ACTION_MODS_KEY(MOD_LCTL,KC_Z),
    [15] = ACTION_MODS_KEY(MOD_LCTL,KC_X),
    [16] = ACTION_MODS_KEY(MOD_LCTL,KC_C),
    [17] = ACTION_MODS_KEY(MOD_LCTL,KC_V),
    [18] = ACTION_MODS_KEY(MOD_LALT,KC_T),
    [19] = ACTION_MODS_KEY(MOD_LALT,KC_EQL),
    [20] = ACTION_MODS_KEY(MOD_LCTL,KC_Y),
    [21] = ACTION_MODS_KEY(MOD_LCTL|MOD_LSFT,KC_RBRC),
    [22] = ACTION_MODS_KEY(MOD_LCTL,KC_LEFT),
    [23] = ACTION_MODS_KEY(MOD_LCTL,KC_RIGHT),
    [24] = ACTION_MODS_KEY(MOD_LALT,KC_M),
    [25] = ACTION_MODS_KEY(MOD_LCTL,KC_COMM),
    [26] = ACTION_MODS_KEY(MOD_LCTL,KC_DOT),
    [27] = ACTION_MODS_KEY(MOD_LSFT|MOD_LALT,KC_M),
    [28] = ACTION_MODS_KEY(MOD_LCTL|MOD_LSFT,KC_COMM),
    [29] = ACTION_MODS_KEY(MOD_LCTL|MOD_LSFT,KC_DOT),
    [30] = ACTION_MODS_KEY(MOD_LCTL|MOD_LSFT,KC_H),
};

#define FN_ACTIONS_SIZE     (sizeof(fn_actions)   / sizeof(fn_actions[0]))
#define FN_ACTIONS_1_SIZE   (sizeof(fn_actions_1) / sizeof(fn_actions_1[0]))
#define FN_ACTIONS_2_SIZE   (sizeof(fn_actions_2) / sizeof(fn_actions_2[0]))

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

    if (action.code == ACTION_NO && FN_INDEX(keycode) < FN_ACTIONS_SIZE) {
        action.code = pgm_read_word(&fn_actions[FN_INDEX(keycode)]);
    }

    return action;
}