#pragma once

#define U_TAPPING_TERM 200
#define U_MT(MOD, TAP) &u_mt MOD TAP
#define U_LT(LAYER, TAP) &u_lt LAYER TAP

#define U_NP &none 
#define U_NA &none 
#define U_NU &none 

#define U_RDO &kp LC(Y)
#define U_PST &kp LC(V)
#define U_CPY &kp LC(C)
#define U_CUT &kp LC(X)
#define U_UND &kp LC(Z)

#define C_BRIGHTNESS_INC (ZMK_HID_USAGE(HID_USAGE_CONSUMER, HID_USAGE_CONSUMER_DISPLAY_BRIGHTNESS_INCREMENT))
#define C_BRI_INC (C_BRIGHTNESS_INC)

#if !defined (MIRYOKU_LAYER_LIST)

#define MIRYOKU_LAYER_LIST \
MIRYOKU_X(BASE,   "Base") \
MIRYOKU_X(TAP,    "Tap")  \
MIRYOKU_X(NAV,    "Nav")  \
MIRYOKU_X(MEDIA,  "Media")  \
MIRYOKU_X(NUM,    "Num")  \
MIRYOKU_X(SYM,    "Sym")  \
MIRYOKU_X(FUN,    "Fun")  \
MIRYOKU_X(GAME,   "Game") 

#define U_BASE   0
#define U_TAP    1
#define U_NAV    2
#define U_MEDIA  3
#define U_NUM    4
#define U_SYM    5
#define U_FUN    6
#define U_GAME   7
#endif

#define U_MACRO(name,...) \
/ { \
  macros { \
    name: name { \
      compatible = "zmk,behavior-macro"; \
      #binding-cells = <0>; \
      __VA_ARGS__ \
    }; \
  }; \
};

#include "layers.h"
#include "shift_functions.h"
