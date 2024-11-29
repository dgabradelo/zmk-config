#define MIRYOKU_LAYER_BASE \
U_NA   &kp Q         &kp W           &kp F            &kp P              &kp G                                                    &kp J             &kp L             &kp U           &kp Y             &kp SQT          U_NA \
U_NA   U_MT(LGUI, A) U_MT(LALT, R)   U_MT(LCTRL, S)   U_MT(LSHFT, T)     &kp D                                                    &kp H             U_MT(LSHFT, N)    U_MT(LCTRL, E)  U_MT(LALT, I)     U_MT(LGUI, O)  U_NA \
U_NA   &kp Z         U_MT(RALT, X)   &kp C            &kp V              &kp B                                                    &kp K             &kp M             &kp COMMA       U_MT(RALT, DOT)   &kp SLASH        U_NA \
U_NA   U_NA          U_NA            U_NA             U_LT(U_MEDIA, ESC) U_LT(U_NAV, SPACE) U_LT(U_GAME, TAB)   U_LT(U_SYM, RET)  U_LT(U_NUM, BSPC) U_LT(U_FUN, DEL)  U_NA            U_NA              U_NA             U_NA

#define MIRYOKU_LAYER_TAP MIRYOKU_LAYER_BASE

#define MIRYOKU_LAYER_NAV \
U_NA   &bootloader   &u_to_U_TAP     &u_to_U_GAME     &u_to_U_BASE       U_NA                                                     U_RDO             U_PST             U_CPY           U_CUT             U_UND            U_NA \
U_NA   &kp LGUI      &kp LALT        &kp LCTRL        &kp LSHFT          U_NA                                                     &kp LEFT          &kp DOWN          &kp UP          &kp RIGHT         &kp INS          U_NA \
U_NA   U_NA          &kp RALT        &studio_unlock   &u_to_U_NAV        U_NA                                                     &kp HOME          &kp PG_DN         &kp PG_UP       &kp END           &u_caps_word     U_NA \
U_NA   U_NA          U_NA            U_NA             U_NA               U_NA               U_NA                &kp RET           &kp BSPC          &kp DEL           U_NA            U_NA              U_NA             U_NA

#define MIRYOKU_LAYER_MEDIA \
U_NA   &bootloader   &u_to_U_TAP     &u_to_U_GAME     &u_to_U_BASE       U_NA                                                     U_RGB_TOG         &u_eff            &u_hue          &u_bri            &u_sat           U_NA \
U_NA   &kp LGUI      &kp LALT        &kp LCTRL        &kp LSHFT          U_NA                                                     U_EP_TOG          &kp C_PREV        &kp C_VOL_UP    &kp C_VOL_DN      &kp C_NEXT       U_NA \
U_NA   U_NA          &kp RALT        U_NA             &u_to_U_MEDIA      U_NA                                                     &u_out_tog        &u_bt_sel_0       &u_bt_sel_1     &u_bt_sel_2       &u_bt_sel_3      U_NA \
U_NA   U_NA          U_NA            U_NA             U_NA               U_NA               U_NA                &kp C_STOP        &kp C_PP          &kp C_MUTE        U_NA            U_NA              U_NA             U_NA

#define MIRYOKU_LAYER_NUM \
U_NA   &kp LBKT      &kp N7          &kp N8           &kp N9             &kp RBKT                                                 U_NA              &u_to_U_BASE      &u_to_U_GAME    &u_to_U_TAP       &bootloader      U_NA \
U_NA   &kp SEMI      &kp N4          &kp N5           &kp N6             &kp EQUAL                                                U_NA              &kp LSHFT         &kp LCTRL       &kp LALT          &kp LGUI         U_NA \
U_NA   &kp GRAVE     &kp N1          &kp N2           &kp N3             &kp BSLH                                                 U_NA              &u_to_U_NUM       U_NA            &kp RALT          U_NA             U_NA \
U_NA   U_NA          U_NA            U_NA             &kp DOT            &kp N0             &kp MINUS           &kp RET           U_NA              U_NA              U_NA            U_NA              U_NA             U_NA

#define MIRYOKU_LAYER_SYM \
U_NA   &kp LBRC      &kp AMPS        &kp ASTRK        &kp LPAR           &kp RBRC                                                 U_NA              &u_to_U_BASE      &u_to_U_GAME    &u_to_U_TAP       &bootloader      U_NA \
U_NA   &kp COLON     &kp DLLR        &kp PRCNT        &kp CARET          &kp PLUS                                                 U_NA              &kp LSHFT         &kp LCTRL       &kp LALT          &kp LGUI         U_NA \
U_NA   &kp TILDE     &kp EXCL        &kp AT           &kp HASH           &kp PIPE                                                 U_NA              &u_to_U_SYM       U_NA            &kp RALT          U_NA             U_NA \
U_NA   U_NA          U_NA            U_NA             &kp LPAR           &kp RPAR           &kp UNDER            U_NA             U_NA              U_NA              U_NA            U_NA              U_NA             U_NA

#define MIRYOKU_LAYER_FUN \
U_NA   &kp F12       &kp F7          &kp F8           &kp F9             &kp PSCRN                                                U_NA              &u_to_U_BASE      &u_to_U_GAME    &u_to_U_TAP       &bootloader      U_NA \
U_NA   &kp F11       &kp F4          &kp F5           &kp F6             &kp SLCK                                                 U_NA              &kp LSHFT         &kp LCTRL       &kp LALT          &kp LGUI         U_NA \
U_NA   &kp F10       &kp F1          &kp F2           &kp F3             U_NA                                                     U_NA              &u_to_U_FUN       U_NA            &kp RALT          U_NA             U_NA \
U_NA   U_NA          U_NA            U_NA             &kp K_APP          &kp SPACE          &kp TAB              U_NA             U_NA              U_NA              U_NA            U_NA              U_NA             U_NA

#define MIRYOKU_LAYER_GAME \
U_NA   &kp N1        &kp N2          &kp N3           &kp N4             &kp N5                                                   U_NA              &u_to_U_BASE      U_NA            U_NA              U_NA             U_NA \
U_NA   &kp LSHFT     &kp A           &kp W            &kp D              &kp F                                                    U_NA              U_NA              U_NA            U_NA              U_NA             U_NA \
U_NA   &kp LCTRL     &kp E           &kp S            &kp Q              &kp T                                                    U_NA              U_NA              &kp C_VOL_UP    &kp C_VOL_DN      U_NA             U_NA \
U_NA   &kp RET       U_NA            U_NA             &kp ESC            &kp SPACE          &kp R                U_NA             U_NA              U_NA              U_NA            U_NA              U_NA             U_NA 
