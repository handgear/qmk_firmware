#include <hal.h>
// #include "varmilo.h"
#include "quantum.h"

#define I2C_ADDRESS_READ (0x43 << 1)
#define I2C_ADDRESS_WRITE (0x42 << 1)

// void keyboard_pre_init_user(void) {
    
// }


void matrix_init_pins(void){
    setPinOutputOpenDrain(NUM_LOCK_LED_PIN);
    setPinOutputOpenDrain(CAPS_LOCK_LED_PIN);
    setPinOutputOpenDrain(SCROLL_LOCK_LED_PIN);
    setPinOutput(ROW_PIN_0);
    setPinOutput(ROW_PIN_1);
    setPinOutput(ROW_PIN_2);
    setPinOutput(ROW_PIN_3);
    setPinOutput(ROW_PIN_4);
    setPinOutput(ROW_PIN_5);
    setPinInput(COL_PIN_16);
    setPinInput(COL_PIN_17);
    setPinInput(COL_PIN_18);
    setPinInput(COL_PIN_19);
    setPinInput(COL_PIN_20);
    setPinInput(COL_PIN_21);
    setPinInput(COL_PIN_22);


    writePinLow(NUM_LOCK_LED_PIN);
    writePinLow(CAPS_LOCK_LED_PIN);
    writePinLow(SCROLL_LOCK_LED_PIN);
    writePinLow(ROW_PIN_0);
    writePinLow(ROW_PIN_1);
    writePinLow(ROW_PIN_2);
    writePinLow(ROW_PIN_3);
    writePinLow(ROW_PIN_4);
    writePinLow(ROW_PIN_5);

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

// keyboards\bpiphany\kitten_paw\matrix.c

void matrix_scan_user(void) {
    writePin(ROW_PIN_0, 1);
    i2c_start(I2C_ADDRESS_READ, 10); // timeot in ms 
    i2c_receive(I2C_ADDRESS_READ, uint8_t* data, 2, 10); // read 2byte, timeout 10ms


    i2c_stop(void);
}

void keyboard_post_init_user(void) {
  // Customise these values to desired behaviour
  debug_enable=true;
  debug_matrix=true;
  //debug_keyboard=true;
  //debug_mouse=true;

  i2c_init(void);

}

