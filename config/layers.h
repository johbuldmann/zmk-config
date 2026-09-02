#pragma once

// Ebenen -- Reihenfolge entspricht der Node-Reihenfolge im keymap-Block.
// Wird von sofle.keymap und sofle_right.overlay eingebunden.
// Praefix L_, damit nichts mit ZMK-Keycodes kollidiert (z.B. CAPS = CAPSLOCK).

#define L_BASE     0   // QWERTZ_Layer
#define L_CAPS     1   // capsword_layer
#define L_SIGG     2   // Siggboy_Layer
#define L_SIGG2    3   // Siggboy_2nd_alpha
#define L_NUM      4   // Number_layer
#define L_LNUM     5   // lefthand_number_layer
#define L_MSE      6   // MOUSE
#define L_GAME     7   // Game_Layer
#define L_SYMB     8   // symbol_layer
#define L_NUMPAD   9   // Numpad_Layer
#define L_NAV     10   // Navigation_Layer
#define L_ADJ     11   // Adjust_Layer
#define L_NUM2    12   // number_layer_duplicate

// Ebenengruppen fuer Combos -- hier pflegen, nicht in den 37 Combos einzeln
#define LAYERS_ALL   L_BASE L_CAPS L_SIGG L_SIGG2 L_NUM L_LNUM L_MSE L_GAME L_SYMB L_NUMPAD L_NAV L_ADJ L_NUM2
#define LAYERS_MOST  L_BASE L_CAPS L_SIGG L_SIGG2 L_NUM L_LNUM L_MSE L_SYMB L_NUMPAD L_NAV L_ADJ L_NUM2
#define LAYERS_WRITE L_BASE L_CAPS L_SIGG L_SIGG2
