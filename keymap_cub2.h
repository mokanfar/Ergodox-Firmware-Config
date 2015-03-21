static const uint8_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    KEYMAP(  // Layer0: default
        // left hand
        BSPC, 1,   2,   3,   4,   5,   6,
        TAB, Q,   W,   E,   R,   T,   FN0,
        KC_PENT,A,S,D,F,G,
        LSFT,Z,X,C,V,B,   FN1,
        ESC,LALT,LGUI,INS,SPC,
                                      FN2,FN3,
                                           FN4,
                                 LCTRL, LALT, SLSH,
        // right hand
             7, 8,   9,   0,   9,   0,   BSPC,
             HOME,Y,   U,   I,   O,   P,   LBRC,
                  H,   J,   K,   L,   SCLN,ENTER,
             END, N,   M,   COMM,DOT, SLSH,LSHIFT,
                       SPC, INS,  LGUI, DELETE,   ENTER,
        FN5,FN6,
        FN7,
        NUBS, FN8, FN9
    ),

    KEYMAP(  // Layer1: Sublime
        // left hand
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
        TRNS,FN0,   FN1,   E,   R,   FN3,   UNDO,
        TRNS,FN4,   FN5,   FN6,   FN7,   FN8,
        TRNS,Z,   X,   C,   V,   FN0,   AGAIN,
        TRNS,TRNS,FN9,FN10,FN11,
                                      FN12,FN13,
                                           FN14,
                                 TRNS,TRNS,FN15,
        // right hand
             TRNS,TRNS,TRNS,TRNS,FN16,FN17,TRNS,
             TRNS,FN18,   FN19,   UP,   FN20,   FN21,   FN22,
                  FN23,   LEFT,   DOWN,   RIGHT,  FN24,   TRNS,
             TRNS,FN25,   FN26,   FN27,FN28,FN29,TRNS,
                       FN11,FN30,FN9,TRNS, RCTRL,
        PGUP,PGDOWN,
        TRNS,
        INS,FN31,FN2
    ),

    KEYMAP(  // Layer2: Photoshop
        // left hand
        TRNS,FN0,  FN1,  FN2,  FN3,  FN4,FN5,
        FN6,FN7,  FN8,  FN9,  FN10,  FN11,  TRNS,
        TRNS,A,  FN12,  FN13,  FN14,FN15,
        TRNS,Z,  X,  C,  V,FN16,  TRNS,
        TRNS,LBRC,FN17,RBRC,SPC,
                                      M,K,
                                        Q,
                            LCTRL, LALT,E,
        // right hand
             NO,NO,NO,NO,NO,NO,TRNS,
             FN18,NO,  NO,  NO,  NO,  NO,   TRNS,
                  NO,  NO,  NO,  NO,  NO,   TRNS,
             FN19,NO,  NO,  NO,  NO,  NO, TRNS,
                       NO,  NO,NO,NO, TRNS,
        NO,NO,
        TRNS,
        NO,NO,NO
    ),



};

/*
 * Fn action definition
 */
static const uint16_t PROGMEM fn_actions[] = {
     [0] =   ACTION_FUNCTION(TEENSY_KEY),      

    [1] =   ACTION_MODS_KEY(),
    [2] =   ACTION_MODS_KEY(),
    [3] =   ACTION_MODS_KEY(),
    [4] =   ACTION_MODS_KEY(),

    [5] =   ACTION_MODS_TAP_KEY(),
    [6] =   ACTION_MODS_TAP_KEY(),
    [7] =   ACTION_MODS_TAP_KEY(),
    [8] =   ACTION_MODS_TAP_KEY(),
    [9] =   ACTION_MODS_TAP_KEY(),
    [10] =  ACTION_MODS_TAP_KEY(),

    [11] =  ACTION_MODS_TAP_KEY(),
    [12] =  ACTION_MODS_TAP_KEY(),
    [13] =  ACTION_MODS_TAP_KEY(),
    [14] =  ACTION_MODS_TAP_KEY(),
    [15] =  ACTION_MODS_TAP_KEY(),
    [16] =  ACTION_MODS_TAP_KEY(),

    [17] =  ACTION_LAYER_SET(), 
    [18] =  ACTION_LAYER_SET(),
    [19] =  ACTION_LAYER_SET(),  
    [20] =  ACTION_LAYER_MOMENTARY(), 
    [21] =  ACTION_FUNCTION_TAP(), 
    [22] =  ACTION_FUNCTION_TAP(), 
    [23] =  ACTION_LAYER_TAP_KEY(), 
    [24] =  ACTION_LAYER_TAP_KEY(),
    
    [25] =  ACTION_LAYER_TAP_KEY(), 
    [26] =  ACTION_LAYER_TAP_KEY(), 
    [27] =  ACTION_LAYER_TAP_KEY(), 
    [28] =  ACTION_LAYER_TAP_KEY(),
    [29] =  ACTION_LAYER_TAP_KEY(), 
    [30] =  ACTION_LAYER_TAP_KEY(), 
    [31] =  ACTION_LAYER_TAP_KEY(),                 

};

static const uint16_t PROGMEM fn_actions_1[] ={} ;

static const uint16_t PROGMEM fn_actions_2[] = {

    [0] =   ACTION_FUNCTION(TEENSY_KEY),      

    [1] =   ACTION_MODS_KEY(),
    [2] =   ACTION_MODS_KEY(),
    [3] =   ACTION_MODS_KEY(),
    [4] =   ACTION_MODS_KEY(),

    [5] =   ACTION_MODS_TAP_KEY(),
    [6] =   ACTION_MODS_TAP_KEY(),
    [7] =   ACTION_MODS_TAP_KEY(),
    [8] =   ACTION_MODS_TAP_KEY(),
    [9] =   ACTION_MODS_TAP_KEY(),
    [10] =  ACTION_MODS_TAP_KEY(),

    [11] =  ACTION_MODS_TAP_KEY(),
    [12] =  ACTION_MODS_TAP_KEY(),
    [13] =  ACTION_MODS_TAP_KEY(),
    [14] =  ACTION_MODS_TAP_KEY(),
    [15] =  ACTION_MODS_TAP_KEY(),
    [16] =  ACTION_MODS_TAP_KEY(),

    [17] =  ACTION_LAYER_SET(), 
    [18] =  ACTION_LAYER_SET(),
    [19] =  ACTION_LAYER_SET(),  
    [20] =  ACTION_LAYER_MOMENTARY(), 
    [21] =  ACTION_FUNCTION_TAP(), 
    [22] =  ACTION_FUNCTION_TAP(), 
    [23] =  ACTION_LAYER_TAP_KEY(), 
    [24] =  ACTION_LAYER_TAP_KEY(),
    
    [25] =  ACTION_LAYER_TAP_KEY(), 
    [26] =  ACTION_LAYER_TAP_KEY(), 
    [27] =  ACTION_LAYER_TAP_KEY(), 
    [28] =  ACTION_LAYER_TAP_KEY(),
    [29] =  ACTION_LAYER_TAP_KEY(), 
    [30] =  ACTION_LAYER_TAP_KEY(), 
    [31] =  ACTION_LAYER_TAP_KEY(),

};


#define FN_ACTIONS_SIZE     (sizeof(fn_actions)   / sizeof(fn_actions[0]))
#define FN_ACTIONS_1_SIZE   (sizeof(fn_actions_1) / sizeof(fn_actions_1[0]))
#define FN_ACTIONS_2_SIZE   (sizeof(fn_actions_2) / sizeof(fn_actions_2[0]))

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



    // by default, use fn_actions from default layer 0
    // this is needed to get mapping for same key, that was used switch to some layer,
    // to have possibility to switch layers back
    if (action.code == ACTION_NO && FN_INDEX(keycode) < FN_ACTIONS_SIZE) {
        action.code = pgm_read_word(&fn_actions[FN_INDEX(keycode)]);
    }

    return action;
}

