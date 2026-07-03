/*
 * Windows variants of Finnish keys
 *
 * keys_fi.h in this repo is the macOS flavor of the locale header: its
 * AltGr-family symbols use plain Alt (Option) combos that only work on
 * macOS. This file provides the Windows combos (AltGr = right alt, RA)
 * for the characters that differ between the two layouts. Everything
 * not defined here is identical on both operating systems.
 */

#pragma once

#include <dt-bindings/zmk/hid_usage.h>
#include <dt-bindings/zmk/hid_usage_pages.h>
#include <dt-bindings/zmk/modifiers.h>

/* $ */
#define FI_WIN_DOLLAR (RA(ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_4_AND_DOLLAR)))
#define FI_WIN_DLLR (FI_WIN_DOLLAR)

/* @ */
#define FI_WIN_AT_SIGN (RA(ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_2_AND_AT)))
#define FI_WIN_AT (FI_WIN_AT_SIGN)

/* [ */
#define FI_WIN_LEFT_BRACKET (RA(ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_8_AND_ASTERISK)))
#define FI_WIN_LBKT (FI_WIN_LEFT_BRACKET)

/* ] */
#define FI_WIN_RIGHT_BRACKET (RA(ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_9_AND_LEFT_PARENTHESIS)))
#define FI_WIN_RBKT (FI_WIN_RIGHT_BRACKET)

/* { */
#define FI_WIN_LEFT_BRACE (RA(ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_7_AND_AMPERSAND)))
#define FI_WIN_LBRC (FI_WIN_LEFT_BRACE)

/* } */
#define FI_WIN_RIGHT_BRACE (RA(ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_0_AND_RIGHT_PARENTHESIS)))
#define FI_WIN_RBRC (FI_WIN_RIGHT_BRACE)

/* \ */
#define FI_WIN_BACKSLASH (RA(ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_MINUS_AND_UNDERSCORE)))
#define FI_WIN_BSLH (FI_WIN_BACKSLASH)

/* | */
#define FI_WIN_PIPE (RA(ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_NON_US_BACKSLASH_AND_PIPE)))

/* < */
#define FI_WIN_LESS_THAN (ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_NON_US_BACKSLASH_AND_PIPE))
#define FI_WIN_LT (FI_WIN_LESS_THAN)

/* > */
#define FI_WIN_GREATER_THAN (LS(ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_NON_US_BACKSLASH_AND_PIPE)))
#define FI_WIN_GT (FI_WIN_GREATER_THAN)

/* ~ (dead key, press space after) */
#define FI_WIN_TILDE (RA(ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_RIGHT_BRACKET_AND_RIGHT_BRACE)))

/* € */
#define FI_WIN_EURO (RA(ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_E)))
