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
#define LAYOUT_fullsize_ansi( \
    K00,      K02, K03, K04, K05,    K07, K08, K09, K0A, K0B, K0C, K0D, K0E,   K0F, K0G, K0H,                       \
    K10, K11, K12, K13, K14, K15, K16, K17, K18, K19, K1A, K1B, K1C, K1E,      K1F, K1G, K1H,   K1I, K1J, K1K, K1L, \
    K20,  K22, K23, K24, K25, K26, K27, K28, K29, K2A, K2B, K2C, K2D, K2E,     K2F, K2G, K2H,   K2I, K2J, K2K, K2L, \
    K30,   K32, K33, K34, K35, K36, K37, K38, K39, K3A, K3B, K3C, K3D,                          K3I, K3J, K3K,      \
    K41,     K42, K43, K44, K45, K46, K47, K48, K49, K4A, K4B, K4D,                 K4G,        K4I, K4J, K4K, K4L, \
    K50,  K51,  K53,                 K56,             K5A,  K5B,  K5D,  K5E,   K5F, K5G, K5H,      K5I,   K5K       \
) { \
    {     K00, _______,     K02,     K03,     K04,     K05, _______,     K07,     K08,     K09,     K0A,      K0B,     K0C,     K0D,     K0E,     K0F,     K0G,     K0H, _______, _______, _______, _______, _______, _______}, \
    {     K10,     K11,     K12,     K13,     K14,     K15,     K16,     K17,     K18,     K19,     K1A,      K1B,     K1C, _______,     K1E,     K1F,     K1G,     K1H,     K1I,     K1J,     K1K,     K1L, _______, _______}, \
    {     K20, _______,     K22,     K23,     K24,     K25,     K26,     K27,     K28,     K29,     K2A,      K2B,     K2C,     K2D,     K2E,     K2F,     K2G,     K2H,     K2I,     K2J,     K2K,     K2L, _______, _______}, \
    {     K30, _______,     K32,     K33,     K34,     K35,     K36,     K37,     K38,     K39,     K3A,      K3B,     K3C,     K3D, _______, _______, _______, _______,     K3I,     K3J,     K3K, _______, _______, _______}, \
    { _______,     K41,     K42,     K43,     K44,     K45,     K46,     K47,     K48,     K49,     K4A,      K4B, _______,     K4D, _______, _______,     K4G, _______,     K4I,     K4J,     K4K,     K4L, _______, _______}, \
    {     K50,     K51, _______,     K53, _______, _______,     K56, _______, _______, _______,     K5A,      K5B, _______,     K5D,     K5E,     K5F,     K5G,     K5H,     K5I, _______,     K5K, _______, _______, _______}, \
}
//          0,       1,       2,       3,       4,       5,       6,       7,       8,       9,      10,       11,      12,      13,      14,      15,      16,      17,      18,      19,      20,      21,      22,      23  
// clang-format on


22    ,21    ,20    ,19    ,18    ,17    ,    ,    ,16    ,15    ,14    ,13    ,12    ,11    ,10    ,9   ,8   ,7   ,6   ,5   ,4   ,3   ,2   ,1   ,0
    ,    ,    ,num_/   ,num_clear   ,    ,    ,    ,KC_PAUS   ,KC_SCRL   ,KC_PSCR   ,KC_F12    ,KC_F11    ,KC_F10    ,KC_F9   ,KC_F8   ,KC_F7   ,KC_F6   ,KC_F5   ,KC_F4   ,KC_F3   ,KC_F2   ,KC_F1   ,    ,KC_ESC
    ,    ,    ,num_8   ,num_7   ,media   ,    ,    ,KC_PGUP   ,KC_HOME   ,KC_INS    ,KC_BSPC   ,(=)   ,(-)   ,KC_0    ,KC_9    ,KC_8    ,KC_7    ,KC_6    ,KC_5    ,KC_4    ,KC_3    ,KC_2    ,KC_1    ,물결
    ,    ,    ,num_5   ,num_4   ,mail    ,    ,    ,KC_PGDN   ,KC_END    ,KC_DEL    ,(\)   ,(]})    ,([{)    ,KC_P    ,KC_O    ,KC_I    ,KC_U    ,KC_Y    ,KC_T    ,KC_R    ,KC_E    ,KC_W    ,KC_Q    ,KC_TAB
num_1   ,num_3   ,num_2   ,num_9   ,num_6   ,Cal   ,    ,    ,    ,    ,    ,KC_UP   ,KC_ENT    ,('")    ,(;:)    ,KC_L    ,KC_K    ,KC_J    ,KC_H    ,KC_G    ,KC_F    ,KC_D    ,KC_S    ,KC_A    ,KC_CAPS
    ,num_+   ,num_enter   ,num_-   ,num_*   ,Com   ,    ,    ,    ,    ,KC_RSFT   ,    ,    ,(/)   ,(.)   ,(,)   ,KC_M    ,KC_N    ,KC_B    ,KC_V    ,KC_C    ,KC_X    ,KC_Z    ,비어있음    ,KC_LSFT
    ,    ,    ,num.    ,num_0   ,    ,    ,    ,KC_RGH"   ,KC_DOWN   ,KC_LEFT   ,R_CTRL    ,    ,R_OPT   ,    ,FN    ,R_COM   ,    ,    ,space   ,    ,    ,L_COM   ,L_OPT   ,L_CTR