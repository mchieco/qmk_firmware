/*
Copyright 2020 Holten Campbell

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "meridian.h"

//Initialize B12 for in-switch caps lock
void keyboard_pre_init_kb(void){
    setPinOutput(B12);
    keyboard_pre_init_user();
}

// Light the top LED when caps lock is active.
const rgblight_segment_t PROGMEM my_capslock_layer[] = RGBLIGHT_LAYER_SEGMENTS(
    {0, 1, HSV_WHITE}       // Light 1 LEDs, starting with LED 0
);
// Light the middle LED when num lock is active. 
const rgblight_segment_t PROGMEM my_numlock_layer[] = RGBLIGHT_LAYER_SEGMENTS(
    {1, 1, HSV_WHITE}       // Light 1 LEDs, starting with LED 1
);
// Light the bottom LED when scroll lock is active. 
const rgblight_segment_t PROGMEM my_scroll_lock_layer[] = RGBLIGHT_LAYER_SEGMENTS(
    {2, 1, HSV_WHITE}       // Light 1 LEDs, starting with LED 2
);

// Now define the array of layers. Later layers take precedence
const rgblight_segment_t* const PROGMEM my_rgb_layers[] = RGBLIGHT_LAYERS_LIST(
    my_capslock_layer,
    my_numlock_layer,
    my_scroll_lock_layer
);

//Initialize all RGB indicators to 'off'
__attribute__((weak))
void keyboard_post_init_user(void) {
    rgblight_layers = my_rgb_layers; //Enable the LED layers
    rgblight_disable();    //set RGB lights to off by default. 
}

//Indicator light function
bool led_update_kb(led_t led_state) {
    bool res = led_update_user(led_state);
    if(res) {
        writePin(B12, !led_state.caps_lock);
    
    rgblight_set_layer_state(0, led_state.caps_lock);
    rgblight_set_layer_state(1, led_state.num_lock);
    rgblight_set_layer_state(2, led_state.scroll_lock);
    }
    return true;
}

//Below is an exmaple of layer indication using one of the RGB indicatiors. As configured, uses the bottom indicator (2) to light up red when layer 1 is in use. 
/*
layer_state_t layer_state_set_kb(layer_state_t state) {
    if (get_highest_layer(state) == 1) {
        rgblight_setrgb_at(255, 0, 0, 2);
    } else {
        rgblight_setrgb_at(0, 0, 0, 2);
    }
    return state;
}
*/
