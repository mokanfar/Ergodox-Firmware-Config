Customized TMK Firmware Ergodox Keyboard
=======

Keycode Symbol Table
-------
Keycodes are defined in `common/keycode.h`.
Range of 00-A4 and E0-E7 are identical with HID Usage:
<http://www.usb.org/developers/devclass_docs/Hut1_11.pdf>
Virtual keycodes are defined out of above range to support special actions.



Function |Abbreviated|Action
-------- |--------|---------
KC_NO              |                 |00 Reserved (no event indicated)
KC_ROLL_OVER       |                 |01 Keyboard ErrorRollOver
KC_POST_FAIL       |                 |02 Keyboard POSTFail
KC_UNDEFINED       |                 |03 Keyboard ErrorUndefined
KC_A               |                 |04 Keyboard a and A
KC_B               |                 |05 Keyboard b and B
KC_C               |                 |06 Keyboard c and C
KC_D               |                 |07 Keyboard d and D
KC_E               |                 |08 Keyboard e and E
KC_F               |                 |09 Keyboard f and F
KC_G               |                 |0A Keyboard g and G
KC_H               |                 |0B Keyboard h and H
KC_I               |                 |0C Keyboard i and I
KC_J               |                 |0D Keyboard j and J
KC_K               |                 |0E Keyboard k and K
KC_L               |                 |0F Keyboard l and L
KC_M               |                 |10 Keyboard m and M
KC_N               |                 |11 Keyboard n and N
KC_O               |                 |12 Keyboard o and O
KC_P               |                 |13 Keyboard p and P
KC_Q               |                 |14 Keyboard q and Q
KC_R               |                 |15 Keyboard r and R
KC_S               |                 |16 Keyboard s and S
KC_T               |                 |17 Keyboard t and T
KC_U               |                 |18 Keyboard u and U
KC_V               |                 |19 Keyboard v and V
KC_W               |                 |1A Keyboard w and W
KC_X               |                 |1B Keyboard x and X
KC_Y               |                 |1C Keyboard y and Y
KC_Z               |                 |1D Keyboard z and Z
KC_1               |                 |1E Keyboard 1 and !
KC_2               |                 |1F Keyboard 2 and @
KC_3               |                 |20 Keyboard 3 and #
KC_4               |                 |21 Keyboard 4 and $
KC_5               |                 |22 Keyboard 5 and %
KC_6               |                 |23 Keyboard 6 and ^
KC_7               |                 |24 Keyboard 7 and &
KC_8               |                 |25 Keyboard 8 and *
KC_9               |                 |26 Keyboard 9 and (
KC_0               |                 |27 Keyboard 0 and )
KC_ENTER           | KC_ENT          |28 Keyboard Return (ENTER)
KC_ESCAPE          | KC_ESC          |29 Keyboard ESCAPE
KC_BSPACE          | KC_BSPC         |2A Keyboard DELETE (Backspace)
KC_TAB             |                 |2B Keyboard Tab
KC_SPACE           | KC_SPC          |2C Keyboard Spacebar
KC_MINUS           | KC_MINS         |2D Keyboard - and (underscore)
KC_EQUAL           | KC_EQL          |2E Keyboard = and +
KC_LBRACKET        | KC_LBRC         |2F Keyboard [ and {
KC_RBRACKET        | KC_RBRC         |30 Keyboard ] and }
KC_BSLASH          | KC_BSLS         |31 Keyboard \ and |
KC_NONUS_HASH      | KC_NUHS         |32 Keyboard Non-US # and ~
KC_SCOLON          | KC_SCLN         |33 Keyboard ; and :
KC_QUOTE           | KC_QUOT         |34 Keyboard ‘ and “
KC_GRAVE           | KC_GRV          |35 Keyboard Grave Accent and Tilde
KC_COMMA           | KC_COMM         |36 Keyboard, and <
KC_DOT             |                 |37 Keyboard . and >
KC_SLASH           | KC_SLSH         |38 Keyboard / and ?
KC_CAPSLOCK        | KC_CAPS         |39 Keyboard Caps Lock
KC_F1              |                 |3A Keyboard F1
KC_F2              |                 |3B Keyboard F2
KC_F3              |                 |3C Keyboard F3
KC_F4              |                 |3D Keyboard F4
KC_F5              |                 |3E Keyboard F5
KC_F6              |                 |3F Keyboard F6
KC_F7              |                 |40 Keyboard F7
KC_F8              |                 |41 Keyboard F8
KC_F9              |                 |42 Keyboard F9
KC_F10             |                 |43 Keyboard F10
KC_F11             |                 |44 Keyboard F11
KC_F12             |                 |45 Keyboard F12
KC_PSCREEN         | KC_PSCR         |46 Keyboard PrintScreen1
KC_SCKLOCK         | KC_SLCK         |47 Keyboard Scroll Lock11
KC_PAUSE           | KC_PAUS         |48 Keyboard Pause1
KC_INSERT          | KC_INS          |49 Keyboard Insert1
KC_HOME            |                 |4A Keyboard Home1
KC_PGUP            |                 |4B Keyboard PageUp1
KC_DELETE          | KC_DELETE       |4C Keyboard Delete Forward
KC_END             |                 |4D Keyboard End1
KC_PGDOWN          | KC_PGDN         |4E Keyboard PageDown1
KC_RIGHT           | KC_RGHT         |4F Keyboard RightArrow1
KC_LEFT            |                 |50 Keyboard LeftArrow1
KC_DOWN            |                 |51 Keyboard DownArrow1
KC_UP              |                 |52 Keyboard UpArrow1
KC_NUMLOCK         | KC_NLCK         |53 Keypad Num Lock and Clear11
KC_KP_SLASH        | KC_PSLS         |54 Keypad /1
KC_KP_ASTERISK     | KC_PAST         |55 Keypad *
KC_KP_MINUS        | KC_PMNS         |56 Keypad -
KC_KP_PLUS         | KC_PPLS         |57 Keypad +
KC_KP_ENTER        | KC_PENT         |58 Keypad ENTER5
KC_KP_1            | KC_P1           |59 Keypad 1 and End
KC_KP_2            | KC_P2           |5A Keypad 2 and Down Arrow
KC_KP_3            | KC_P3           |5B Keypad 3 and PageDn
KC_KP_4            | KC_P4           |5C Keypad 4 and Left Arrow
KC_KP_5            | KC_P5           |5D Keypad 5
KC_KP_6            | KC_P6           |5E Keypad 6 and Right Arrow
KC_KP_7            | KC_P7           |5F Keypad 7 and Home
KC_KP_8            | KC_P8           |60 Keypad 8 and Up Arrow
KC_KP_9            | KC_P9           |61 Keypad 9 and PageUp
KC_KP_0            | KC_P0           |62 Keypad 0 and Insert
KC_KP_DOT          | KC_PDOT         |63 Keypad . and Delete
KC_NONUS_BSLASH    | KC_NUBS         |64 Keyboard Non-US \ and |
KC_APPLICATION     | KC_APP          |65 Keyboard Application10
KC_POWER           |                 |66 Keyboard Power9
KC_KP_EQUAL        | KC_PEQL         |67 Keypad =
KC_F13             |                 |68 Keyboard F13
KC_F14             |                 |69 Keyboard F14
KC_F15             |                 |6A Keyboard F15
KC_F16             |                 |6B Keyboard F16
KC_F17             |                 |6C Keyboard F17
KC_F18             |                 |6D Keyboard F18
KC_F19             |                 |6E Keyboard F19
KC_F20             |                 |6F Keyboard F20
KC_F21             |                 |70 Keyboard F21
KC_F22             |                 |71 Keyboard F22
KC_F23             |                 |72 Keyboard F23
KC_F24             |                 |73 Keyboard F24
KC_EXECUTE         |                 |74 Keyboard Execute
KC_HELP            |                 |75 Keyboard Help
KC_MENU            |                 |76 Keyboard Menu
KC_SELECT          |                 |77 Keyboard Select
KC_STOP            |                 |78 Keyboard Stop
KC_AGAIN           |                 |79 Keyboard Again
KC_UNDO            |                 |7A Keyboard Undo
KC_CUT             |                 |7B Keyboard Cut
KC_COPY            |                 |7C Keyboard Copy
KC_PASTE           |                 |7D Keyboard Paste
KC_FIND            |                 |7E Keyboard Find
KC__MUTE           |                 |7F Keyboard Mute
KC__VOLUP          |                 |80 Keyboard Volume Up
KC__VOLDOWN        |                 |81 Keyboard Volume Down
KC_LOCKING_CAPS    |                 |82 Keyboard Locking Caps Lock12
KC_LOCKING_NUM     |                 |83 Keyboard Locking Num Lock12
KC_LOCKING_SCROLL  |                 |84 Keyboard Locking Scroll Lock12
KC_KP_COMMA        | KC_PCMM         |85 Keypad Comma27
KC_KP_EQUAL_AS400  |                 |86 Keypad Equal Sign29
KC_INT1            | KC_RO           |87 Keyboard International115,28
KC_INT2            | KC_KANA         |88 Keyboard International216
KC_INT3            | KC_JYEN         |89 Keyboard International317
KC_INT4            | KC_HENK         |8A Keyboard International418
KC_INT5            | KC_MHEN         |8B Keyboard International519
KC_INT6            |                 |8C Keyboard International620
KC_INT7            |                 |8D Keyboard International721
KC_INT8            |                 |8E Keyboard International822
KC_INT9            |                 |8F Keyboard International922
KC_LANG1           |                 |90 Keyboard LANG125
KC_LANG2           |                 |91 Keyboard LANG226
KC_LANG3           |                 |92 Keyboard LANG330
KC_LANG4           |                 |93 Keyboard LANG431
KC_LANG5           |                 |94 Keyboard LANG532
KC_LANG6           |                 |95 Keyboard LANG68
KC_LANG7           |                 |96 Keyboard LANG78
KC_LANG8           |                 |97 Keyboard LANG88
KC_LANG9           |                 |98 Keyboard LANG98
KC_ALT_ERASE       |                 |99 Keyboard Alternate Erase7
KC_SYSREQ          |                 |9A Keyboard SysReq/Attention1
KC_CANCEL          |                 |9B Keyboard Cancel
KC_CLEAR           |                 |9C Keyboard Clear
KC_PRIOR           |                 |9D Keyboard Prior
KC_RETURN          |                 |9E Keyboard Return
KC_SEPARATOR       |                 |9F Keyboard Separator
KC_OUT             |                 |A0 Keyboard Out
KC_OPER            |                 |A1 Keyboard Oper
KC_CLEAR_AGAIN     |                 |A2 Keyboard Clear/Again
KC_CRSEL           |                 |A3 Keyboard CrSel/Props
KC_EXSEL           |                 |A4 Keyboard ExSel

## Modifiers ##
Function |Abbreviated|Action
-------- |--------|---------
KC_LCTRL    |        KC_LCTRL  |      E0 Keyboard LeftControl
KC_LSHIFT   |        KC_LSFT   |      E1 Keyboard LeftShift
KC_LALT     |                  |      E2 Keyboard LeftAlt
KC_LGUI     |                  |      E3 Keyboard Left GUI(Windows/Apple/Meta key)
KC_RCTRL    |        KC_RCTL   |      E4 Keyboard RightControl
KC_RSHIFT   |        KC_RSFT   |      E5 Keyboard RightShift
KC_RALT     |                  |      E6 Keyboard RightAlt
KC_RGUI     |                  |      E7 Keyboard Right GUI(Windows/Apple/Meta key)

## Virtual keycodes##
## System Control ##
Function |Abbreviated|Action
-------- |--------|---------
KC_SYSTEM_POWER  |   KC_PWR     |    System Power Down
KC_SYSTEM_SLEEP  |   KC_SLEP    |    System Sleep
KC_SYSTEM_WAKE   |   KC_WAKE    |    System Wake

## Consumer Page ##
Function |Abbreviated
-------- |--------
KC_AUDIO_MUTE       |KC_MUTE
KC_AUDIO_VOL_UP     |KC_VOLU
KC_AUDIO_VOL_DOWN   |KC_VOLD
KC_MEDIA_NEXT_TRACK |KC_MNXT
KC_MEDIA_PREV_TRACK |KC_MPRV
KC_MEDIA_STOP       |KC_MSTP
KC_MEDIA_PLAY_PAUSE |KC_MPLY
KC_MEDIA_SELECT     |KC_MSEL
KC_MAIL             |KC_MAIL
KC_CALCULATOR       |KC_CALC
KC_MY_COMPUTER      |KC_MYCM
KC_WWW_SEARCH       |KC_WSCH
KC_WWW_HOME         |KC_WHOM
KC_WWW_BACK         |KC_WBAK
KC_WWW_FORWARD      |KC_WFWD
KC_WWW_STOP         |KC_WSTP
KC_WWW_REFRESH      |KC_WREF
KC_WWW_FAVORITES    |KC_WFAV

## Mousekey ##
Function |Abbreviated|Action
-------- |------------|---------
KC_MS_UP            |KC_MS_U         |Mouse Cursor Up
KC_MS_DOWN          |KC_MS_D         |Mouse Cursor Down
KC_MS_LEFT          |KC_MS_L         |Mouse Cursor Left
KC_MS_RIGHT         |KC_MS_R         |Mouse Cursor Right
KC_MS_BTN1          |KC_BTN1         |Mouse Button 1
KC_MS_BTN2          |KC_BTN2         |Mouse Button 2
KC_MS_BTN3          |KC_BTN3         |Mouse Button 3
KC_MS_BTN4          |KC_BTN4         |Mouse Button 4
KC_MS_BTN5          |KC_BTN5         |Mouse Button 5
KC_MS_WH_UP         |KC_WH_U         |Mouse Wheel Up
KC_MS_WH_DOWN       |KC_WH_D         |Mouse Wheel Down
KC_MS_WH_LEFT       |KC_WH_L         |Mouse Wheel Left
KC_MS_WH_RIGHT      |KC_WH_R         |Mouse Wheel Right
KC_MS_ACCEL0        |KC_ACL0         |Mouse Acceleration 0
KC_MS_ACCEL1        |KC_ACL1         |Mouse Acceleration 1
KC_MS_ACCEL2        |KC_ACL2         |Mouse Acceleration 2

## Fn key ##

Function
--------
KC_FN0
KC_FN1
KC_FN2
KC_FN3
KC_FN4
KC_FN5
KC_FN6
KC_FN7
KC_FN8
KC_FN9
KC_FN10
KC_FN11
KC_FN12
KC_FN13
KC_FN14
KC_FN15
KC_FN16
KC_FN17
KC_FN18
KC_FN19
KC_FN20
KC_FN21
KC_FN22
KC_FN23
KC_FN24
KC_FN25
KC_FN26
KC_FN27
KC_FN28
KC_FN29
KC_FN30
KC_FN31
## Snippets ##

Layer Array
---------

```C++
    KEYMAP(  // LayerN: fully transparent
        // left hand
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
        TRNS,TRNS,TRNS,TRNS,TRNS,
                                      TRNS,TRNS,
                                           TRNS,
                                 TRNS,TRNS,TRNS,
        // right hand
             TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
             TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
                  TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
             TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
                       TRNS,TRNS,TRNS,TRNS,TRNS,
        TRNS,TRNS,
        TRNS,
        TRNS,TRNS,TRNS
    ),
```

Keymap framework - how to define your keymap
============================================
***NOTE: This is not final version, may be inconsistent with source code and changed occasionally for a while.***

## 0. Keymap and layers
**Keymap** is comprised of multiple layers of key layout, you can define **32 layers** at most.
**Layer** is an array of **keycodes** to define **actions** for each physical keys.
respective layers can be validated simultaneously. Layers are indexed with 0 to 31 and higher layer has precedence.

    Keymap: 32 Layers                   Layer: Keycode matrix
    -----------------                   ---------------------
    stack of layers                     array_of_keycode[row][column]
           ____________ precedence               _______________________
          /           / | high                  / ESC / F1  / F2  / F3   ....
      31 /___________// |                      /-----/-----/-----/-----
      30 /___________// |                     / TAB /  Q  /  W  /  E   ....
      29 /___________/  |                    /-----/-----/-----/-----
       :   _:_:_:_:_:__ |               :   /LCtrl/  A  /  S  /  D   ....
       :  / : : : : : / |               :  /  :     :     :     :
       2 /___________// |               2 `--------------------------
       1 /___________// |               1 `--------------------------
       0 /___________/  V low           0 `--------------------------



### 0.1 Keymap status
Keymap has its state in two parameters:
**`default_layer`** indicates a base keymap layer(0-31) which is always valid and to be referred, **`keymap_stat`** is 16bit variable which has current on/off status of layers on its each bit.

Keymap layer '0' is usually `default_layer` and which is the only valid layer and other layers is initially off after boot up firmware, though, you can configured them in `config.h`.
To change `default_layer` will be useful when you switch key layout completely, say you want Colmak instead of Qwerty.

    Initial state of Keymap          Change base layout
    -----------------------          ------------------

      31                               31
      30                               30
      29                               29
       :                                :
       :                                :   ____________
       2   ____________                 2  /           /
       1  /           /              ,->1 /___________/
    ,->0 /___________/               |  0
    |                                |
    `--- default_layer = 0           `--- default_layer = 1
         layer_state   = 0x00000001       layer_state   = 0x00000002

On the other hand, you shall change `layer_state` to overlay base layer with some layers for feature such as navigation keys, function key(F1-F12), media keys or special actions.

    Overlay feature layer
    ---------------------      bit|status
           ____________        ---+------
      31  /           /        31 |   0
      30 /___________// -----> 30 |   1
      29 /___________/  -----> 29 |   1
       :                        : |   :
       :   ____________         : |   :
       2  /           /         2 |   0
    ,->1 /___________/  ----->  1 |   1
    |  0                        0 |   0
    |                                 +
    `--- default_layer = 1            |
         layer_state   = 0x60000002 <-'



### 0.2 Layer Precedence and Transparency
Note that ***higher layer has higher priority on stack of layers***, namely firmware falls down from top layer to bottom to look up keycode. Once it spots keycode other than **`KC_TRNS`**(transparent) on a layer it stops searching and lower layers aren't referred.

You can place `KC_TRNS` on overlay layer changes just part of layout to fall back on lower or base layer.
Key with `KC_TRANS` doesn't has its own keycode and refers to lower valid layers for keycode, instead.
See example below.


### 0.3 Keymap Example
Keymap is **`keymaps[]`** C array in fact and you can define layers in it with **`KEYMAP()`** C macro and keycodes. To use complex actions you need to define `Fn` keycode in **`fn_actions[]`** array.

This is a keymap example for [HHKB](http://en.wikipedia.org/wiki/Happy_Hacking_Keyboard) keyboard.
This example has three layers, 'Qwerty' as base layer, 'Cursor' and  'Mousekey'.
In this example,

 `Fn0` is a **momentary layer switching** key, you can use keys on Cursor layer while holding the key.

 `Fn1` is a momentary layer switching key with tapping feature, you can get semicolon **';'** with taping the key and switch layers while holding the key. The word **'tap'** or **'tapping'** mean to press and release a key quickly.

 `Fn2` is a **toggle layer switch** key, you can stay switched layer after releasing the key unlike momentary switching.

You can find other keymap definitions in file `keymap.c` located on project directories.

    static const uint8_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
        /* 0: Qwerty
         * ,-----------------------------------------------------------.
         * |Esc|  1|  2|  3|  4|  5|  6|  7|  8|  9|  0|  -|  =|  \|  `|
         * |-----------------------------------------------------------|
         * |Tab  |  Q|  W|  E|  R|  T|  Y|  U|  I|  O|  P|  [|  ]|Backs|
         * |-----------------------------------------------------------|
         * |Contro|  A|  S|  D|  F|  G|  H|  J|  K|  L|Fn1|  '|Enter   |
         * |-----------------------------------------------------------|
         * |Shift   |  Z|  X|  C|  V|  B|  N|  M|  ,|  .|  /|Shift |Fn0|
         * `-----------------------------------------------------------'
         *       |Gui|Alt  |Space                  |Alt  |Fn2|
         *       `-------------------------------------------'
         */
        KEYMAP(ESC, 1,   2,   3,   4,   5,   6,   7,   8,   9,   0,   MINS,EQL, BSLS,GRV, \
               TAB, Q,   W,   E,   R,   T,   Y,   U,   I,   O,   P,   LBRC,RBRC,BSPC, \
               LCTL,A,   S,   D,   F,   G,   H,   J,   K,   L,   FN1, QUOT,ENT, \
               LSFT,Z,   X,   C,   V,   B,   N,   M,   COMM,DOT, SLSH,RSFT,FN0, \
                    LGUI,LALT,          SPC,                RALT,FN2),
        /* 1: Cursor(HHKB mode)
         * ,-----------------------------------------------------------.
         * |Pwr| F1| F2| F3| F4| F5| F6| F7| F8| F9|F10|F11|F12|Ins|Del|
         * |-----------------------------------------------------------|
         * |Caps |   |   |   |   |   |   |   |Psc|Slk|Pus|Up |   |Backs|
         * |-----------------------------------------------------------|
         * |Contro|VoD|VoU|Mut|   |   |  *|  /|Hom|PgU|Lef|Rig|Enter   |
         * |-----------------------------------------------------------|
         * |Shift   |   |   |   |   |   |  +|  -|End|PgD|Dow|Shift |   |
         * `-----------------------------------------------------------'
         *      |Gui |Alt  |Space                  |Alt  |Gui|
         *      `--------------------------------------------'
         */
        KEYMAP(PWR, F1,  F2,  F3,  F4,  F5,  F6,  F7,  F8,  F9,  F10, F11, F12, INS, DEL, \
               CAPS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,PSCR,SLCK,PAUS,UP,  TRNS,BSPC, \
               LCTL,VOLD,VOLU,MUTE,TRNS,TRNS,PAST,PSLS,HOME,PGUP,LEFT,RGHT,ENT, \
               LSFT,TRNS,TRNS,TRNS,TRNS,TRNS,PPLS,PMNS,END, PGDN,DOWN,RSFT,TRNS, \
                    LGUI,LALT,          SPC,                RALT,RGUI),
        /* 2: Mousekey
         * ,-----------------------------------------------------------.
         * |Esc| F1| F2| F3| F4| F5| F6| F7| F8| F9|F10|F11|F12|Ins|Del|
         * |-----------------------------------------------------------|
         * |Tab  |   |   |   |   |   |MwL|MwD|MwU|MwR|   |   |   |Backs|
         * |-----------------------------------------------------------|
         * |Contro|   |   |   |   |   |McL|McD|McU|McR|   |   |Return  |
         * |-----------------------------------------------------------|
         * |Shift   |   |   |   |   |Mb3|Mb2|Mb1|Mb4|Mb5|   |Shift |   |
         * `-----------------------------------------------------------'
         *      |Gui |Alt  |Mb1                    |Alt  |   |
         *      `--------------------------------------------'
         * Mc: Mouse Cursor / Mb: Mouse Button / Mw: Mouse Wheel
         */
        KEYMAP(ESC, F1,  F2,  F3,  F4,  F5,  F6,  F7,  F8,  F9,  F10, F11, F12, INS, DEL, \
               TAB, TRNS,TRNS,TRNS,TRNS,TRNS,WH_L,WH_D,WH_U,WH_R,TRNS,TRNS,TRNS,BSPC, \
               LCTL,TRNS,ACL0,ACL1,ACL2,TRNS,MS_L,MS_D,MS_U,MS_R,TRNS,QUOT,ENT, \
               LSFT,TRNS,TRNS,TRNS,TRNS,BTN3,BTN2,BTN1,BTN4,BTN5,SLSH,RSFT,TRNS, \
                    LGUI,LALT,          BTN1,               RALT,TRNS),
    };

    static const uint16_t PROGMEM fn_actions[] = {
        ACTION_LAYER_MOMENTARY(1),                  // FN0
        ACTION_LAYER_TAP_KEY(2, KC_SCLN),           // FN1
        ACTION_LAYER_TOGGLE(2),                     // FN2
    };




## 1. Keycode
See [`common/keycode.h`](../common/keycode.h) or keycode table below for the detail. Keycode is internal **8bit code** to indicate action performed on key in keymap. Keycode has `KC_` prefixed symbol respectively. Most of keycodes like `KC_A` have simple action registers key to host on press and unregister on release, while some of other keycodes has some special actions like `Fn` keys, Media control keys, System control keys and Mousekeys.

 ***In `KEYMAP()` macro you should omit prefix part `KC_` of keycode to keep keymap compact.*** For example, just use `A` instead you place `KC_A` in `KEYMAP()`. Some keycodes has 4-letter **short name** in addition to descriptive name, you'll prefer short one in `KEYMAP()`.

### 1.0 Other key
- `KC_NO` for no action
- `KC_TRNS` for layer transparency (See above)

### 1.1 Normal key
- `KC_A` to `KC_Z`, `KC_1` to `KC_0` for alpha numeric key
- `KC_MINS`, `KC_EQL`, `KC_GRV`, `KC_RBRC`, `KC_LBRC`, `KC_COMM`, `KC_DOT`, `KC_BSLS`, `KC_SLSH`, `KC_SCLN`, `KC_QUOT`
- `KC_ESC`, `KC_TAB`, `KC_SPC`, `KC_BSPC`, `KC_ENT`, `KC_DEL`, `KC_INS`
- `KC_UP`, `KC_DOWN`, `KC_RGHT`, `KC_LEFT`, `KC_PGUP`, `KC_PGDN`, `KC_HOME`, `KC_END`
- `KC_CAPS`, `KC_NLCK`, `KC_SLCK`, `KC_PSCR`, `KC_PAUS`, `KC_APP`, `KC_F1` to `KC_F24`
- `KC_P1` to `KC_P0`, `KC_PDOT`, `KC_PCMM`, `KC_PSLS`, `KC_PAST`, `KC_PMNS`, `KC_PPLS`, `KC_PEQL`, `KC_PENT` for keypad.

### 1.2 Modifier
There are 8 modifiers which has discrimination between left and right.

- `KC_LCTL` and `KC_RCTL` for Control
- `KC_LSFT` and `KC_RSFT` for Shift
- `KC_LALT` and `KC_RALT` for Alt
- `KC_LGUI` and `KC_RGUI` for Windows key or Command key in Mac

### 1.3 Mousekey
- `KC_MS_U`, `KC_MS_D`, `KC_MS_L`, `KC_MS_R` for mouse cursor
- `KC_WH_U`, `KC_WH_D`, `KC_WH_L`, `KC_WH_R` for mouse wheel
- `KC_BTN1`, `KC_BTN2`, `KC_BTN3`, `KC_BTN4`, `KC_BTN5` for mouse buttons

### 1.4 System & Media key
- `KC_PWR`, `KC_SLEP`, `KC_WAKE` for Power, Sleep, Wake
- `KC_MUTE`, `KC_VOLU`, `KC_VOLD` for audio volume control
- `KC_MNXT`, `KC_MPRV`, `KC_MSTP`, `KC_MPLY`, `KC_MSEL` for media control
- `KC_MAIL`, `KC_CALC`, `KC_MYCM` for application launch
- `KC_WSCH`, `KC_WHOM`, `KC_WBAK`, `KC_WFWD`, `KC_WSTP`, `KC_WREF`, `KC_WFAV` for web browser operation

### 1.5 Fn key
`KC_FNnn` are keycodes for `Fn` key which not given any actions at the beginning unlike most of keycodes has its own inborn action. To use these keycodes in `KEYMAP()` you need to assign action you want at first. Action of `Fn` key is defined in `fn_actions[]` and its index of the array is identical with number part of `KC_FNnn`. Thus `KC_FN0` keycode indicates the action defined in first element of the array. ***32 `Fn` keys can be defined at most.***

### 1.6 Keycode Table
 See keycode table in [`doc/keycode.txt`](./keycode.txt) for description of keycodes.

 In regard to implementation side most of keycodes are identical with [HID usage][HID_usage](pdf) sent to host for real and some virtual keycodes are defined to support special actions.
[HID_usage]: http://www.usb.org/developers/hidpage/Hut1_12v2.pdf



## 2. Action
See [`common/action_code.h`](../common/action_code.h). Action is a **16bit code** and defines function to perform on events of a key like press, release, holding and tapping.

Most of keys just register 8bit scancode to host, but to support other complex features needs 16bit extended action codes internally. However, using 16bit action codes in keymap results in double size in memory compared to using just keycodes. To avoid this waste 8bit keycodes are used in `KEYMAP()` instead of action codes.

***You can just use keycodes of `Normal key`, `Modifier`, `Mousekey` and `System & Media key` in keymap*** to indicate corresponding actions instead of using action codes. While ***to use other special actions you should use keycode of `Fn` key defined in `fn_actions[]`.***


### 2.1 Key Action
This is a simple action that registers scancodes(HID usage in fact) to host on press event of key and unregister on release.

#### Parameters
+ **mods**: { ` MOD_LCTL`, ` MOD_LSFT`, ` MOD_LALT`, ` MOD_LGUI`,
              ` MOD_RCTL`, ` MOD_RSFT`, ` MOD_RALT`, ` MOD_RGUI` }
+ **key**: keycode


#### 2.1.1 Normal key and Modifier
***This action usually won't be used expressly in keymap*** because you can just use keycodes in `KEYMAP()` instead.

You can define these actions on *'A'* key and *'left shift'* modifier with:

    ACTION_KEY(KC_A)
    ACTION_KEY(KC_LSFT)

#### 2.1.2 Modified key
This action is comprised of strokes of modifiers and a key. `Macro` action is needed if you want more complex key strokes.

Say you want to assign a key to `Shift + 1` to get character *'!'* or `Alt + Tab` to switch application windows.

    ACTION_MODS_KEY(MOD_LSFT, KC_1)
    ACTION_MODS_KEY(MOD_LALT, KC_TAB)

Or `Alt,Shift + Tab` can be defined. `ACTION_MODS_KEY(mods, key)` requires **4-bit modifier state** and a **keycode** as arguments. See `keycode.h` for `MOD_BIT()` macro.

    ACTION_MODS_KEY(MOD_LALT | MOD_LSFT, KC_TAB)

#### 2.1.3 Multiple Modifiers
Registers multiple modifiers with pressing a key. To specify multiple modifiers use `|`.

    ACTION_MODS(MOD_ALT | MOD_LSFT)

#### 2.1.3 Modifier with Tap key([Dual role][dual_role])
Works as a modifier key while holding, but registers a key on tap(press and release quickly).


    ACTION_MODS_TAP_KEY(MOD_RCTL, KC_ENT)



### 2.2 Layer Action
These actions operate layers of keymap.

#### Parameters
You can specify a **target layer** of action and **when the action is executed**. Some actions take a **bit value** for bitwise operation.


+ **layer**: `0`-`31`
+ **on**: { `ON_PRESS` | `ON_RELEASE` | `ON_BOTH` }
+ **bits**: 4-bit value and 1-bit mask bit


#### 2.2.1 Default Layer
Default Layer is a layer which always is valid and referred to when actions is not defined on other overlay layers.

This sets Default Layer to given parameter `layer` and activate it.

    ACTION_DEFAULT_LAYER_SET(layer)


#### 2.2.2 Momentary
Turns on `layer` momentarily while holding, in other words it activates when key is pressed and deactivate when released.

    ACTION_LAYER_MOMENTARY(layer)


#### 2.2.3 Toggle Switch
Turns on `layer` with first type(press and release) and turns off with next.

    ACTION_LAYER_TOGGLE(layer)


#### 2.2.4 Momentary Switch with tap key
Turns on `layer` momentary while holding, but registers key on tap(press and release quickly).

    ACTION_LAYER_TAP_KEY(layer, key)


#### 2.2.5 Momentary Switch with tap toggle
Turns on `layer` momentary while holding and toggles it with serial taps.

    ACTION_LAYER_TAP_TOGGLE(layer)


#### 2.2.6 Invert state of layer
Inverts current state of `layer`. If the layer is on it becomes off with this action.

    ACTION_LAYER_INVERT(layer, on)


#### 2.2.7 Turn On layer
Turns on layer state.

    ACTION_LAYER_ON(layer, on)

Turns on layer state on press and turns off on release.

    ACTION_LAYER_ON_OFF(layer)


#### 2.2.8 Turn Off layer
Turns off layer state.

    ACTION_LAYER_OFF(layer, on)

Turns off layer state on press and activates on release.

    ACTION_LAYER_OFF_ON(layer)


#### 2.2.9 Set layer
Turn on layer only.
`layer_state = (1<<layer) [layer: 0-31]`

    ACTION_LAYER_SET(layer, on)

Turns on layer only and clear all layer on release..

    ACTION_LAYER_SET_CLEAR(layer)


#### 2.2.10 Bitwise operation

**part** indicates which part of 32bit layer state(0-7). **bits** is 5-bit value. **on** indicates when the action is executed.

    ACTION_LAYER_BIT_AND(part, bits, on)
    ACTION_LAYER_BIT_OR(part, bits, on)
    ACTION_LAYER_BIT_XOR(part, bits, on)
    ACTION_LAYER_BIT_SET(part, bits, on)

These actions works with parameters as following code.

    uint8_t shift = part*4;
    uint32_t mask = (bits&0x10) ? ~(0xf<<shift) : 0;
    uint32_t layer_state = layer_state <bitop> ((bits<<shift)|mask);


Default Layer also has bitwise operations, they are executed when key is released.

    ACTION_DEFAULT_LAYER_BIT_AND(part, bits)
    ACTION_DEFAULT_LAYER_BIT_OR(part, bits)
    ACTION_DEFAULT_LAYER_BIT_XOR(part, bits)
    ACTION_DEFAULT_LAYER_BIT_SET(part, bits)



### 2.3 Macro action
***TBD***

`Macro` action indicates complex key strokes.

    MACRO( D(LSHIFT), D(D), END )
    MACRO( U(D), U(LSHIFT), END )
    MACRO( I(255), T(H), T(E), T(L), T(L), W(255), T(O), END )

#### 2.3.1 Macro Commands
- **I()**   change interval of stroke.
- **D()**   press key
- **U()**   release key
- **T()**   type key(press and release)
- **W()**   wait
- **END**   end mark

#### 2.3.2 Examples

***TODO: sample implementation***
See `keyboard/hhkb/keymap.c` for sample.



### 2.4 Function action
***TBD***

There are two type of action, normal `Function` and tappable `Function`.
These actions call user defined function with `id`, `opt`, and key event information as arguments.

#### 2.4.1 Function
To define normal `Function` action in keymap use this.

    ACTION_FUNCTION(id, opt)

#### 2.4.2 Function with tap
To define tappable `Function` action in keymap use this.

    ACTION_FUNCTION_TAP(id, opt)

#### 2.4.3 Implement user function
`Function` actions can be defined freely with C by user in callback function:

    void keymap_call_function(keyrecord_t *event, uint8_t id, uint8_t opt)

This C function is called every time key is operated, argument `id` selects action to be performed and `opt` can be used for option. Function `id` can be 0-255 and `opt` can be 0-15.

 `keyrecord_t` is comprised of key event and tap count. `keyevent_t` indicates which and when key is pressed or released. From `tap_count` you can know tap state, 0 means no tap. These information will be used in user function to decide how action of key is performed.

    typedef struct {
        keyevent_t  event;
        uint8_t     tap_count;
    } keyrecord_t;

    typedef struct {
        key_t    key;
        bool     pressed;
        uint16_t time;
    } keyevent_t;

    typedef struct {
        uint8_t col;
        uint8_t row;
    } key_t;

***TODO: sample implementation***
See `keyboard/hhkb/keymap.c` for sample.



### 2.5 Backlight Action
These actions control the backlight.

#### 2.5.1 Change backlight level
Increase backlight level.

    ACTION_BACKLIGHT_INCREASE()

Decrease backlight level.

    ACTION_BACKLIGHT_DECREASE()

Step through backlight levels.

    ACTION_BACKLIGHT_STEP()

Turn a specific backlight level on or off.

    ACTION_BACKLIGHT_LEVEL(1)

#### 2.5.2 Turn on / off backlight
Turn the backlight on and off without changing level.

    ACTION_BACKLIGHT_TOGGLE()



## 3. Layer switching Example
There are some ways to switch layer with 'Layer' actions.

### 3.1 Momentary switching
Momentary switching changes layer only while holding Fn key.

This action makes 'Layer 1' active(valid) on key press event and inactive on release event. Namely you can overlay a layer on lower layers or default layer temporarily with this action.

    ACTION_LAYER_MOMENTARY(1)


Note that after switching on press the actions on destination layer(Layer 1) are performed.
***Thus you shall need to place an action to go back on destination layer***, or you will be stuck in destination layer without way to get back. Usually you need to place same action or 'KC_TRNS` on destination layer to get back.


### 3.2 Toggle switching
Toggle switching performed after releasing a key. With this action you can keep staying on the destination layer until you type the key again to return.

This performs toggle switching action of 'Layer 2'.

    ACTION_LAYER_TOGGLE(2)



### 3.3 Momentary switching with Tap key
These actions switch a layer only while holding a key but register the key on tap. **Tap** means to press and release a key quickly.

    ACTION_LAYER_TAP_KEY(2, KC_SCLN)

With this you can place a layer switching action on normal key like ';' without losing its original key register function. This action allows you to have layer switching action without necessity of a dedicated key. It means you can have it even on home row of keyboard.



### 3.4 Momentary switching with Tap Toggle
This switches layer only while holding a key but toggle layer with several taps. **Tap** means to press and release key quickly.

    ACTION_LAYER_TAP_TOGGLE(1)

Number of taps can be configured with `TAPPING_TOGGLE` in `config.h`, `5` by default.



### 3.5 Momentary switching with Modifiers
This registers modifier key(s) simultaneously with layer switching.

    ACTION_LAYER_MODS(2, MOD_LSFT | MOD_LALT)



## 4. Tapping
Tapping is to press and release a key quickly. Tapping speed is determined with setting of `TAPPING_TERM`, which can be defined in `config.h`, 200ms by default.

### 4.1 Tap Key
This is a feature to assign normal key action and modifier including layer switching to just same one physical key. This is a kind of [Dual role key][dual_role]. It works as modifier when holding the key but registers normal key when tapping.

Modifier with tap key:

    ACTION_MODS_TAP_KEY(MOD_RSFT, KC_GRV)

Layer switching with tap key:

    ACTION_LAYER_TAP_KEY(2, KC_SCLN)

[dual_role]: http://en.wikipedia.org/wiki/Modifier_key#Dual-role_keys


### 4.2 Tap Toggle
This is a feature to assign both toggle layer and momentary switch layer action to just same one physical key. It works as momentary layer switch when holding a key but toggle switch with several taps.

    ACTION_LAYER_TAP_TOGGLE(1)


### 4.3 Oneshot Modifier
This runs onetime effects which modify only on just one following key. It works as normal modifier key when holding down while oneshot modifier when tapping.

    ACTION_MODS_ONESHOT(MOD_LSFT)

Say you want to type 'The', you have to push and hold Shift key before type 't' then release it before type 'h' and 'e', otherwise you'll get 'THe' or 'the' unintentionally. With Oneshot Modifier you can tap Shift then type 't', 'h' and 'e' normally, you don't need to holding Shift key properly here. This mean you can release Shift before 't' is pressed down.

Oneshot effect is cancel unless following key is pressed down within `ONESHOT_TIMEOUT` of `config.h`. No timeout when it is `0` or not defined.


### 4.4 Tap Toggle Mods
Similar to layer tap toggle, this works as a momentary modifier when holding, but toggles on with several taps. A single tap will 'unstick' the modifier again.

    ACTION_MODS_TAP_TOGGLE(MOD_LSFT)




## 5. Legacy Keymap
This was used in prior version and still works due to legacy support code in `common/keymap.c`. Legacy keymap doesn't support many of features that new keymap offers. ***It is not recommended to use Legacy Keymap for new project.***

To enable Legacy Keymap support define this macro in `config.h`.

    #define USE_LEGACY_KEYMAP

Legacy Keymap uses two arrays `fn_layer[]` and `fn_keycode[]` to define Fn key. The index of arrays corresponds with postfix number of `Fn` key. Array `fn_layer[]` indicates destination layer to switch and `fn_keycode[]` has keycodes to send when tapping `Fn` key.

In following setting example, `Fn0`, `Fn1` and `Fn2` switch layer to 1, 2 and 2 respectively. `Fn2` registers `Space` key when tapping while `Fn0` and `Fn1` doesn't send any key.

    static const uint8_t PROGMEM fn_layer[] = {
        1,              // Fn0
        2,              // Fn1
        2,              // Fn2
    };

    static const uint8_t PROGMEM fn_keycode[] = {
        KC_NO,          // Fn0
        KC_NO,          // Fn1
        KC_SPC,         // Fn2
    };


## 6. Terminology
***TBD***
### keymap
is comprised of multiple layers.
### layer
is matrix of keycodes.
### key
is physical button on keyboard or logical switch on software.
### keycode
is codes used on firmware.
### action
is a function assigned on a key.
### layer transparency
Using transparent keycode one layer can refer key definition on other lower layer.
### layer precedence
Top layer has higher precedence than lower layers.
### tapping
is to press and release a key quickly.
### Fn key
is key which executes a special action like layer switching, mouse key, macro or etc.
### dual role key
<http://en.wikipedia.org/wiki/Modifier_key#Dual-role_keys>