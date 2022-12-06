#pragma once

#include "quantum.h"

/* readability */
#define XXX KC_NO

/* This is a shortcut to help you visually see your layout.
 *
 * The first section contains all of the arguments representing the physical
 * layout of the board and position of the keys.
 *
 * The second converts the arguments into a two-dimensional array which
 * represents the switch matrix.
 */

// clang-format off



//          0,       1,       2,       3,       4,       5,       6,       7,       8,       9,      10,       11,      12,      13,      14,      15,      16,      17,      18,      19,      20,      21,      22,      23  
// clang-format on


// 22    ,21    ,20    ,19    ,18    ,17    ,    ,    ,16    ,15    ,14    ,13    ,12    ,11    ,10    ,9   ,8   ,7   ,6   ,5   ,4   ,3   ,2   ,1   ,0
    // ,    ,    ,num_/   ,num_clear   ,    ,    ,    ,KC_PAUS   ,KC_SCRL   ,KC_PSCR   ,KC_F12    ,KC_F11    ,KC_F10    ,KC_F9   ,KC_F8   ,KC_F7   ,KC_F6   ,KC_F5   ,KC_F4   ,KC_F3   ,KC_F2   ,KC_F1   ,    ,KC_ESC
    // ,    ,    ,num_8   ,num_7   ,media   ,    ,    ,KC_PGUP   ,KC_HOME   ,KC_INS    ,KC_BSPC   ,(=)   ,(-)   ,KC_0    ,KC_9    ,KC_8    ,KC_7    ,KC_6    ,KC_5    ,KC_4    ,KC_3    ,KC_2    ,KC_1    ,물결
    // ,    ,    ,num_5   ,num_4   ,mail    ,    ,    ,KC_PGDN   ,KC_END    ,KC_DEL    ,(\)   ,(]})    ,([{)    ,KC_P    ,KC_O    ,KC_I    ,KC_U    ,KC_Y    ,KC_T    ,KC_R    ,KC_E    ,KC_W    ,KC_Q    ,KC_TAB
// num_1   ,num_3   ,num_2   ,num_9   ,num_6   ,Cal   ,    ,    ,    ,    ,    ,KC_UP   ,KC_ENT    ,('")    ,(;:)    ,KC_L    ,KC_K    ,KC_J    ,KC_H    ,KC_G    ,KC_F    ,KC_D    ,KC_S    ,KC_A    ,KC_CAPS
    // ,num_+   ,num_enter   ,num_-   ,num_*   ,Com   ,    ,    ,    ,    ,KC_RSFT   ,    ,    ,(/)   ,(.)   ,(,)   ,KC_M    ,KC_N    ,KC_B    ,KC_V    ,KC_C    ,KC_X    ,KC_Z    ,비어있음    ,KC_LSFT
    // ,    ,    ,num.    ,num_0   ,    ,    ,    ,KC_RGH"   ,KC_DOWN   ,KC_LEFT   ,R_CTRL    ,    ,R_OPT   ,    ,FN    ,R_COM   ,    ,    ,space   ,    ,    ,L_COM   ,L_OPT   ,L_CTR