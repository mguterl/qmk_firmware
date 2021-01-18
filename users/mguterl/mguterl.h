#pragma once
#include "quantum.h"

#define LOWER MO(_LOWER)
#define RAISE MO(_RAISE)
#define KC_GRVF LT(_FKEYS, KC_GRV)

/* Tap for Tab, hold for Hyper (Super+Ctrl+Shift+Alt) */
#define HPR_TAB ALL_T(KC_TAB)

/* Shift when held, Enter when tapped */
#define SFT_ENT MT(MOD_RSFT, KC_ENT)

/* Activate util layer while holding space */
#define SPC_UTL LT(_UTIL, KC_SPC)
#define SPC_NAV LT(_NAV, KC_SPC)

/* Control when held, Escape when tapped */
#define ESC_CTL MT(MOD_LCTL, KC_ESC)

/* Toggle peristent layers */
#define TG_GAME TG(_GAMING)
#define TG_WIN  TG(_WINDOWS)

// Back to default layer
// Useful when switching from Windows + Gaming to Mac
#define TO_DFLT TO(_QWERTY)

/* Navigate back and forward in Chrome */
#define GO_BACK LGUI(KC_LBRC)
#define GO_FWD  LGUI(KC_RBRC)

/* Keybindings for Moom window movements */
#define KC_SPLT HYPR(KC_J)
#define KC_MAX  HYPR(KC_K)
#define KC_SPRT HYPR(KC_L)

/* Launch 1password mini in browser */
#define KC_1PAS LGUI(KC_BSLS)

/*
 * When using a 40% layout, these keycodes make it easy to change tabs in apps
 * like Chrome and VSCode.
 */
#define GUI_1 LGUI(KC_1)
#define GUI_2 LGUI(KC_2)
#define GUI_3 LGUI(KC_3)
#define GUI_4 LGUI(KC_4)
#define GUI_5 LGUI(KC_5)
#define GUI_6 LGUI(KC_6)
#define GUI_7 LGUI(KC_7)
#define GUI_8 LGUI(KC_8)
#define GUI_9 LGUI(KC_9)
#define GUI_0 LGUI(KC_0)

/*
 * Common layers and keycodes that are shared between Planck and Preonic
 */
enum ortho_layers {
  _QWERTY,
  _WINDOWS,
  _GAMING,
  _NAV,
  _UTIL,
  _LOWER,
  _RAISE,
  _FKEYS,
  _ADJUST
};

enum ortho_keycodes {
  QWERTY = SAFE_RANGE,
  WINDOWS,
  GAMING,
  NAV,
  UTIL,
  BACKLIT,
};
