static const uint8_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    KEYMAP(  // layer 0 : default
        // left hand
        EQL, 1,   2,   3,   4,   5,   FN22,
        TAB, Q,   W,   F,   P,   G,   ESC,
        LCTL,A,   R,   S,   T,   D,
        LSFT,Z,   X,   C,   V,   B,   NO,
        LGUI,GRV, BSLS,LALT,FN27,
                                      LCTL,LALT,
                                           HOME,
                                 SPC, ENT, END,
        // right hand
             FN24,6,   7,   8,   9,   0,   MINS,
             ESC, J,   L,   U,   Y,   SCLN,BSLS,
                  H,   N,   E,   I,   O,   QUOT,
             FN26,K,   M,   COMM,DOT, SLSH,RSFT,
                       FN27,LEFT,DOWN,UP,  RGHT,
        RALT,RCTL,
        PGUP,
        PGDN,DEL, BSPC
    ),

    KEYMAP(  // layer 1 : QWERTY
        // left hand
        EQL, 1,   2,   3,   4,   5,   FN23,
        TAB, Q,   W,   E,   R,   T,   ESC,
        LCTL,A,   S,   D,   F,   G,
        LSFT,Z,   X,   C,   V,   B,   NO,
        LGUI,GRV, BSLS,LALT,FN27,
                                      LCTL,LALT,
                                           HOME,
                                 SPC, ENT, END,
        // right hand
             NO,  6,   7,   8,   9,   0,   MINS,
             ESC, Y,   U,   I,   O,   P,   BSLS,
                  H,   J,   K,   L,   SCLN,QUOT,
             FN26,  N,   M,   COMM,DOT, SLSH,RSFT,
                       FN27,LEFT,DOWN,UP,  RGHT,
        RALT,RCTL,
        PGUP,
        PGDN,DEL, BSPC
    ),

    KEYMAP(  // layer 2 : Gaming
        // left hand
        F7,  1,   2,   3,   4,   5,   6,
        TRNS,Q,   W,   E,   R,   T,   7,
        LALT,A,   S,   D,   F,   G,
        TRNS,Z,   X,   C,   V,   B,   ESC,
        F5,  F6,  0,   9,   8,
                                      F1,  F2,
                                           F3,
                                 SPC, LCTL,F4,
        // right hand
             FN25,6,   7,   8,   9,   0,   TRNS,
             EQL, Y,   U,   I,   O,   P,   TRNS,
                  H,   J,   K,   L,   SCLN,TRNS,
             TRNS,N,   M,   COMM,DOT, SLSH,TRNS,
                       RGUI,TRNS,TRNS,TRNS,TRNS,
        HOME,END,
        PGUP,
        PGDN,ENTER,BSPC
    ),

    KEYMAP(  // layer 3 : function and symbol keys
        // left hand
        TRNS,F1,  F2,  F3,  F4,  F5,  TRNS,
        TRNS,BSLS,SLSH,LBRC,RBRC,FN13,TRNS,
        TRNS,FN11,FN12,FN9, FN10, GRV,
        TRNS,FN1, FN2, FN3, FN4, FN5, TRNS,
        TRNS,TRNS,TRNS,TRNS,TRNS,
                                      TRNS,TRNS,
                                           TRNS,
                                 TRNS,TRNS,TRNS,
        // right hand
             F12, F6,  F7,  F8,  F9,  F10, TRNS,
             TRNS,NO,  EQL, FN14,MINS,FN15,F11,
                  NO,  NO,  NO,  NO,  NO,  F12,
             TRNS,FN6, FN7, FN8, FN9, FN10,TRNS,
                       TRNS,TRNS,TRNS,TRNS,TRNS,
        TRNS,TRNS,
        TRNS,
        TRNS,TRNS,TRNS
    ),


    KEYMAP(  // layer 4: Numpad
        // left hand
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,FN0,
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
        TRNS,TRNS,TRNS,TRNS,TRNS,
                                      TRNS,TRNS,
                                           TRNS,
                                 TRNS,TRNS,TRNS,
        // right hand
             TRNS,NLCK,PSLS,PAST,PAST,PMNS,BSPC,
             TRNS,NO,  P7,  P8,  P9,  PMNS,BSPC,
                  NO,  P4,  P5,  P6,  PPLS,PENT,
             TRNS,NO,  P1,  P2,  P3,  PPLS,PENT,
                       P0,  PDOT,SLSH,PENT,PENT,
        TRNS,TRNS,
        TRNS,
        TRNS,TRNS,TRNS
    ),

};  

enum function_id {
    TEENSY_KEY,
};

static const uint16_t PROGMEM fn_actions[] = {
    [0]  =   ACTION_FUNCTION(TEENSY_KEY),                 // FN0  = Teensy key

    [20]  =   ACTION_LAYER_ON(0, ON_RELEASE),                        // FN2  = set Colemak
    [21]  =   ACTION_LAYER_OFF(0, ON_RELEASE),                        // FN2  = set Colemak
    [22]  =   ACTION_LAYER_ON(1, ON_RELEASE),                        // FN2  = set QWERTY layer
    [23]  =   ACTION_LAYER_OFF(1, ON_RELEASE),                        // FN2  = set Colemak
    [24]  =   ACTION_LAYER_ON(2, ON_RELEASE),                        // FN3  = set Gaming layer
    [25]  =   ACTION_LAYER_OFF(2, ON_RELEASE),                        // FN2  = set Colemak
    [26]  =   ACTION_LAYER_TOGGLE(4),                     // FN4  = toggle Numpad layer

    [27] =   ACTION_LAYER_MOMENTARY(3),                  // FN30  = Symbols layer

};

static const uint16_t PROGMEM fn_actions_3[] = {
    [1]  =   ACTION_MODS_KEY(MOD_LSFT,   KC_1),
    [2]  =   ACTION_MODS_KEY(MOD_LSFT,   KC_2),
    [3]  =   ACTION_MODS_KEY(MOD_LSFT,   KC_3),
    [4]  =   ACTION_MODS_KEY(MOD_LSFT,   KC_4),
    [5]  =   ACTION_MODS_KEY(MOD_LSFT,   KC_5),
    [6]  =   ACTION_MODS_KEY(MOD_LSFT,   KC_6),
    [7]  =   ACTION_MODS_KEY(MOD_LSFT,   KC_7),
    [8]  =   ACTION_MODS_KEY(MOD_LSFT,   KC_8),
    [9]  =   ACTION_MODS_KEY(MOD_LSFT,   KC_9),
    [10] =   ACTION_MODS_KEY(MOD_LSFT,   KC_0),
    [11] =   ACTION_MODS_KEY(MOD_LSFT,   KC_LBRACKET),
    [12] =   ACTION_MODS_KEY(MOD_LSFT,   KC_RBRACKET),
    [13] =   ACTION_MODS_KEY(MOD_LSFT,   KC_GRAVE),
    [14] =   ACTION_MODS_KEY(MOD_LSFT,   KC_EQUAL),
    [15] =   ACTION_MODS_KEY(MOD_LSFT,   KC_MINUS),
    
};

void action_function(keyrecord_t *record, uint8_t id, uint8_t opt)
{
    if (id == TEENSY_KEY) {
        clear_keyboard();
        print("\n\nJump to bootloader...");
        _delay_ms(50);
        bootloader_jump();
        print("not supported.\n");
    }
};

#define FN_ACTIONS_SIZE       (sizeof(fn_actions)   / sizeof(fn_actions[0]))
#define FN_ACTIONS_3_SIZE     (sizeof(fn_actions_3) / sizeof(fn_actions_3[0]))

action_t keymap_fn_to_action(uint8_t keycode)
{
    uint8_t layer = biton32(layer_state);

    action_t action;
    action.code = ACTION_NO;

    if (layer = 3 && FN_INDEX(keycode) < FN_ACTIONS_3_SIZE) {
        action.code = pgm_read_word(&fn_actions_3[FN_INDEX(keycode)]);
    }

    // by default, use fn_actions from default layer 0
    // this is needed to get mapping for same key, that was used switch to some layer,
    // to have possiblity to switch layers back
    if (action.code == ACTION_NO && FN_INDEX(keycode) < FN_ACTIONS_SIZE) {
        action.code = pgm_read_word(&fn_actions[FN_INDEX(keycode)]);
    }

    return action;
};