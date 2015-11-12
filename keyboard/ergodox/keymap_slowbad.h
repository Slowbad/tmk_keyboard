static const uint8_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    KEYMAP(  // layer 0 : default
        // left hand
        EQL, 1,   2,   3,   4,   5,   FN22,
        TAB, Q,   W,   F,   P,   B,   ESC,
        FN28,A,   R,   S,   T,   G,
        LSFT,Z,   X,   C,   D,   V,   LBRC,
        LGUI,LEFT,RGHT,LALT,FN27,
                                      LCTL,HOME,
                                           END,
                                 SPC, FN28,LGUI,
        // right hand
             FN26,6,   7,   8,   9,   0,   MINS,
             ESC, J,   L,   U,   Y,   SCLN,BSLS,
                  M,   N,   E,   I,   O,   QUOT,
             RBRC,K,   H,   COMM,DOT, SLSH,RSFT,
                       FN27,RALT,DOWN,UP,  RGUI,
        PGUP,RCTL,
        PGDN,
        DEL, ENT, BSPC
    ),

    KEYMAP(  // layer 1 : QWERTY
        // left hand
        EQL, 1,   2,   3,   4,   5,   FN24,
        TAB, Q,   W,   E,   R,   T,   ESC,
        FN28,A,   S,   D,   F,   G,
        LSFT,Z,   X,   C,   V,   B,   LBRC,
        LGUI,GRV, BSLS,LALT,FN27,
                                      LCTL,LALT,
                                           HOME,
                                 SPC, FN28,END,
        // right hand
             FN23,6,   7,   8,   9,   0,   MINS,
             ESC, Y,   U,   I,   O,   P,   BSLS,
                  H,   J,   K,   L,   SCLN,QUOT,
             RBRC,N,   M,   COMM,DOT, SLSH,RSFT,
                       FN27,RALT,DOWN,UP,  RGUI,
        PGUP,RCTL,
        PGDN,
        DEL, ENT, BSPC
    ),

    KEYMAP(  // layer 2 : Gaming
        // left hand
        F7,  1,   2,   3,   4,   5,   6,
        TAB, Q,   W,   E,   R,   T,   7,
        LALT,A,   S,   D,   F,   G,
        LSFT,Z,   X,   C,   V,   B,   ESC,
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
        PGDN,ENT, BSPC
    ),

    KEYMAP(  // layer 3 : function and symbol keys
        // left hand
        NO,  F1,  F2,  F3,  F4,  F5,  NO,  
        NO,  BSLS,SLSH,LBRC,RBRC,FN13,NO,  
        NO,  FN3, FN4, FN9, FN10,GRV,
        NO,  FN1, FN2, FN11,FN12,FN5, NO,  
        NO,  NO,  NO,  TRNS,TRNS,
                                      NO,  NO,  
                                           NO,  
                                 NO,  TRNS,NO,  
        // right hand
             F12, F6,  F7,  F8,  F9,  F10, NO,  
             NO,  FN17,EQL, FN15,MINS,FN14,F11,
                  LEFT,RGHT,DOWN,UP,  FN16,F12,
             NO,  FN6, FN7, FN8, FN9, FN10,NO,  
                       TRNS,MPRV,VOLD,VOLU,MNXT,  
        NO,NO,
        NO,  
        NO,MUTE,MPLY
    ),


    KEYMAP(  // layer 4: Numpad
        // left hand
        FN0, NO,  NO,  NO,  NO,  NO,  NO,  
        NO,  NO,  NO,  NO,  NO,  NO,  NO,  
        NO,  NO,  NO,  NO,  NO,  NO,  
        NO,  NO,  NO,  NO,  NO,  NO,  NO,  
        NO,  NO,  NO,  NO,  NO,  
                                      NO,  NO,  
                                           TRNS,  
                                 TRNS,NO,  TRNS,  
        // right hand
             FN26,NLCK,PSLS,PAST,PAST,PMNS,BSPC,
             NO,  NO,  P7,  P8,  P9,  PMNS,BSPC,
                  NO,  P4,  P5,  P6,  PPLS,PENT,
             NO,  NO,  P1,  P2,  P3,  PPLS,PENT,
                       P0,  PDOT,SLSH,PENT,PENT,
        NO,  NO,  
        TRNS,  
        TRNS,TRNS,  TRNS
    ),

};  

enum function_id {
    TEENSY_KEY,
};

enum macro_id {
    HASH_ROCKET,
}; 

static const uint16_t PROGMEM fn_actions[] = {
    [0]  =   ACTION_FUNCTION(TEENSY_KEY),                 // FN0  = Teensy key

    [20]  =   ACTION_LAYER_ON(0, ON_RELEASE),             // FN20 = push Colemak
    [21]  =   ACTION_LAYER_OFF(0, ON_RELEASE),            // FN21 = pop Colemak
    [22]  =   ACTION_LAYER_ON(1, ON_RELEASE),             // FN22 = push QWERTY 
    [23]  =   ACTION_LAYER_OFF(1, ON_RELEASE),            // FN23 = pop Colemak
    [24]  =   ACTION_LAYER_ON(2, ON_RELEASE),             // FN24 = push Gaming
    [25]  =   ACTION_LAYER_OFF(2, ON_RELEASE),            // FN25 = pop Gaming
    [26]  =   ACTION_LAYER_TOGGLE(4),                     // FN26 = toggle Numpad layer

    [27]  =   ACTION_LAYER_MOMENTARY(3),                  // FN27  = Symbols layer
    [28]  =   ACTION_MODS_TAP_KEY(MOD_LCTL, KC_ESC),

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
    [16] =   ACTION_MODS_KEY(MOD_LSFT,   KC_SCOLON),
    [17] =   ACTION_MACRO(HASH_ROCKET),
    
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

const macro_t *action_get_macro(keyrecord_t *record, uint8_t id, uint8_t opt) {
    if (record->event.pressed) {
        switch (id) {
            case HASH_ROCKET: return MACRO( T(EQUAL), D(LSHIFT), T(DOT), U(LSHIFT), END );
        }
    }
    return MACRO_NONE;
}

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