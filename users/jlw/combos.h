const uint16_t PROGMEM combo_esc[] = {KC_Q, KC_W,    COMBO_END};
const uint16_t PROGMEM combo_del[] = {KC_Y, KC_QUOT, COMBO_END};
const uint16_t PROGMEM combo_boot[] = {KC_Q, KC_Z, KC_QUOT, KC_SLSH, COMBO_END};

combo_t key_combos[] = {
    COMBO(combo_esc, KC_ESC),
    COMBO(combo_del, KC_DEL),
    COMBO(combo_boot, QK_BOOT)
};