#include "varmilo.h"

void matrix_init_kb(void) {
    setPinOutput(NUM_LOCK_LED_PIN);
    setPinOutput(CAPS_LOCK_LED_PIN);
    setPinOutput(SCROLL_LOCK_LED_PIN);

    writePinLow(NUM_LOCK_LED_PIN);
    writePinLow(CAPS_LOCK_LED_PIN);
    writePinLow(SCROLL_LOCK_LED_PIN);

    matrix_init_user();
}

bool led_update_kb(led_t led_state) {
    bool res = led_update_user(led_state);
    if(res) {
        writePin(NUM_LOCK_LED_PIN, !led_state.num_lock);
        writePin(CAPS_LOCK_LED_PIN, !led_state.caps_lock);
        writePin(SCROLL_LOCK_LED_PIN, !led_state.scroll_lock);
    }
    return res;
}