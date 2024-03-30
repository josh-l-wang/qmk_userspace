/*
Copyright 2024 Josh Wang <@josh-l-wang>

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

#ifndef USERSPACE
#define USERSPACE

#include "quantum.h"

enum layer_names {
    _BASE,
    _NUM,
    _FUN,
    _NAV
};

enum custom_keycodes {
    SHOTMAC,            // macOS take screenshot to clipboard
    SHOTWIN             // windows take screenshot to clipboard
};

/* Aliases */
/** Layer Keys **/
#define SPC_NUM LT(_NUM, KC_SPC)
#define ENT_FUN LT(_FUN, KC_ENT)
#define TAB_NAV LT(_NAV, KC_TAB)

/** Mod Tap Aliases **/
/*** Home Row Mods ***/
#define A_GUI   LGUI_T(KC_A)
#define R_ALT   LALT_T(KC_R)
#define S_CTL   LCTL_T(KC_S)
#define E_CTL   RCTL_T(KC_E)
#define I_ALT   LALT_T(KC_I)
#define O_GUI   LGUI_T(KC_O)

/*** Others ***/
#define BSPC_SFT    LSFT_T(KC_BSPC)


/* portable keymaps */
/** 10u **/
/*** base ***/

                        /* ╭────────┬────────┬────────┬────────┬────────╮ */
                        /* │  Q     │  W     │  F     │  P     │  B     │ */
#define ___5BASE_1_L___     KC_Q,    KC_W,    KC_F,    KC_P,    KC_B
                        /* ├────────┼────────┼────────┼────────┼────────┤ */
                        /* │  A/GUI │  R/Alt │  S/Ctl │  T     │  G     │ */
#define ___5BASE_2_L___     A_GUI,   R_ALT,   S_CTL,   KC_T,    KC_G
                        /* ├────────┼────────┼────────┼────────┼────────┤ */
                        /* │ Z      │  X     │  C     │  D     │  V     │ */
#define ___5BASE_3_L___     KC_Z,    KC_X,    KC_C,    KC_D,    KC_V
                        /* ╰────────┴────────┼────────┼────────┼────────┤ */
                        /*                            │ Tab/NAV│ BS/SFT │ */
#define ___BASE_THUMB_L___                             TAB_NAV, BSPC_SFT  
                        /*                            ╰────────┴────────╯ */
                        
                        /* ╭────────┬────────┬────────┬────────┬────────╮ */
                        /* │  J     │  L     │  U     │  Y     │  ' "   │ */
#define ___5BASE_1_R___     KC_J,    KC_L,    KC_U,    KC_Y,    KC_QUOT
                        /* ├────────┼────────┼────────┼────────┼────────┤ */
                        /* │  M     │  N     │  E/Ctl │  I/Alt │ O/GUI  │ */
#define ___5BASE_2_R___     KC_M,    KC_N,    E_CTL,   I_ALT,   O_GUI
                        /* ├────────┼────────┼────────┼────────┼────────┤ */
                        /* │  K     │  H     │  , <   │  . >   │/ ?     │ */
#define ___5BASE_3_R___     KC_K,    KC_H,    KC_COMM, KC_DOT,  KC_SLSH
                        /* ├────────┼────────┼────────┼────────┴────────╯ */
                        /* │ Spc/NUM│ Ent/FUN│ */
#define ___BASE_THUMB_R___  SPC_NUM, ENT_FUN
                        /* ╰────────┴────────╯ */