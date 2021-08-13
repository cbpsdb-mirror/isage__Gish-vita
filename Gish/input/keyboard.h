#ifndef GISH_INPUT_KEYBOARD_H
#define GISH_INPUT_KEYBOARD_H
/*
Copyright (C) 2005, 2010 - Cryptic Sea

This file is part of Gish.

Gish is free software; you can redistribute it and/or
modify it under the terms of the GNU General Public License
as published by the Free Software Foundation; either version 2
of the License, or (at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.

See the GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program; if not, write to the Free Software
Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA  02111-1307, USA.
*/

void checkkeyboard(void);

#include "../sdl/sdl.h"

extern unsigned char keyboard[SDL_NUM_SCANCODES];
extern unsigned char prevkeyboard[SDL_NUM_SCANCODES];

typedef enum
{
  SCAN_ESC          = SDL_SCANCODE_ESCAPE,
  SCAN_0            = SDL_SCANCODE_0,
  SCAN_1            = SDL_SCANCODE_1,
  SCAN_2            = SDL_SCANCODE_2,
  SCAN_3            = SDL_SCANCODE_3,
  SCAN_4            = SDL_SCANCODE_4,
  SCAN_5            = SDL_SCANCODE_5,
  SCAN_6            = SDL_SCANCODE_6,
  SCAN_7            = SDL_SCANCODE_7,
  SCAN_8            = SDL_SCANCODE_8,
  SCAN_9            = SDL_SCANCODE_9,
  SCAN_MINUS        = SDL_SCANCODE_MINUS,
  SCAN_EQUALS       = SDL_SCANCODE_EQUALS,
  SCAN_BKSP         = SDL_SCANCODE_BACKSPACE,
  SCAN_TAB          = SDL_SCANCODE_TAB,
  SCAN_LFT_BRACKET  = SDL_SCANCODE_LEFTBRACKET,
  SCAN_RGT_BRACKET  = SDL_SCANCODE_RIGHTBRACKET,
  SCAN_ENTER        = SDL_SCANCODE_RETURN,
  SCAN_CTRL         = SDL_SCANCODE_LCTRL,
  SCAN_RCTRL        = SDL_SCANCODE_RCTRL,
  SCAN_SEMI         = SDL_SCANCODE_SEMICOLON,
  SCAN_APOS         = SDL_SCANCODE_APOSTROPHE,
  SCAN_TILDE        = SDL_SCANCODE_GRAVE,
  SCAN_SHIFT        = SDL_SCANCODE_LSHIFT,
  SCAN_BACK_SLASH   = SDL_SCANCODE_BACKSLASH,
  SCAN_COMMA        = SDL_SCANCODE_COMMA,
  SCAN_PERIOD       = SDL_SCANCODE_PERIOD,
  SCAN_FOWARD_SLASH = SDL_SCANCODE_SLASH,
  SCAN_RSHIFT       = SDL_SCANCODE_RSHIFT,
  SCAN_PRT_SCRN     = SDL_SCANCODE_PRINTSCREEN,
  SCAN_ALT          = SDL_SCANCODE_LALT,
  SCAN_SPACE        = SDL_SCANCODE_SPACE,
  SCAN_CAPS_LOCK    = SDL_SCANCODE_CAPSLOCK,
  SCAN_F1           = SDL_SCANCODE_F1,
  SCAN_F2           = SDL_SCANCODE_F2,
  SCAN_F3           = SDL_SCANCODE_F3,
  SCAN_F4           = SDL_SCANCODE_F4,
  SCAN_F5           = SDL_SCANCODE_F5,
  SCAN_F6           = SDL_SCANCODE_F6,
  SCAN_F7           = SDL_SCANCODE_F7,
  SCAN_F8           = SDL_SCANCODE_F8,
  SCAN_F9           = SDL_SCANCODE_F9,
  SCAN_F10          = SDL_SCANCODE_F10,
  SCAN_F11          = SDL_SCANCODE_F11,
  SCAN_F12          = SDL_SCANCODE_F12,
  SCAN_NUM_LOCK     = SDL_SCANCODE_NUMLOCKCLEAR,
  SCAN_SCROLL_LOCK  = SDL_SCANCODE_SCROLLLOCK,
  SCAN_NUMHOME      = SDL_SCANCODE_KP_7,
  SCAN_UP           = SDL_SCANCODE_UP,
  SCAN_NUMPGUP      = SDL_SCANCODE_KP_9,
  SCAN_NUMMINUS     = SDL_SCANCODE_KP_MINUS,
  SCAN_LEFT         = SDL_SCANCODE_LEFT,
  SCAN_CENTER       = SDL_SCANCODE_KP_5,
  SCAN_RIGHT        = SDL_SCANCODE_RIGHT,
  SCAN_NUMPLUS      = SDL_SCANCODE_KP_PLUS,
  SCAN_NUMEND       = SDL_SCANCODE_KP_1,
  SCAN_DOWN         = SDL_SCANCODE_DOWN,
  SCAN_NUMPGDWN     = SDL_SCANCODE_KP_3,
  SCAN_NUMINS       = SDL_SCANCODE_KP_0,
  SCAN_NUMDEL       = SDL_SCANCODE_KP_PERIOD,
  SCAN_LWIN         = SDL_SCANCODE_LGUI,
  SCAN_RWIN         = SDL_SCANCODE_RGUI,
  SCAN_APPS         = SDL_SCANCODE_MODE,
  SCAN_NUMENTER     = SDL_SCANCODE_KP_ENTER,
  SCAN_NUMLEFT      = SDL_SCANCODE_KP_4,
  SCAN_NUMRIGHT     = SDL_SCANCODE_KP_6,
  SCAN_NUMUP        = SDL_SCANCODE_KP_8,
  SCAN_NUMDOWN      = SDL_SCANCODE_KP_2,
  SCAN_LEFTARROW    = SDL_SCANCODE_LEFT,
  SCAN_RIGHTARROW   = SDL_SCANCODE_RIGHT,
  SCAN_UPARROW      = SDL_SCANCODE_UP,
  SCAN_DOWNARROW    = SDL_SCANCODE_DOWN,
  SCAN_INSERT       = SDL_SCANCODE_INSERT,
  SCAN_DELETE       = SDL_SCANCODE_DELETE,
  SCAN_HOME         = SDL_SCANCODE_HOME,
  SCAN_END          = SDL_SCANCODE_END,
  SCAN_PAGEUP       = SDL_SCANCODE_PAGEUP,
  SCAN_PAGEDOWN     = SDL_SCANCODE_PAGEDOWN,
  SCAN_A            = SDL_SCANCODE_A,
  SCAN_B            = SDL_SCANCODE_B,
  SCAN_C            = SDL_SCANCODE_C,
  SCAN_D            = SDL_SCANCODE_D,
  SCAN_E            = SDL_SCANCODE_E,
  SCAN_F            = SDL_SCANCODE_F,
  SCAN_G            = SDL_SCANCODE_G,
  SCAN_H            = SDL_SCANCODE_H,
  SCAN_I            = SDL_SCANCODE_I,
  SCAN_J            = SDL_SCANCODE_J,
  SCAN_K            = SDL_SCANCODE_K,
  SCAN_L            = SDL_SCANCODE_L,
  SCAN_M            = SDL_SCANCODE_M,
  SCAN_N            = SDL_SCANCODE_N,
  SCAN_O            = SDL_SCANCODE_O,
  SCAN_P            = SDL_SCANCODE_P,
  SCAN_Q            = SDL_SCANCODE_Q,
  SCAN_R            = SDL_SCANCODE_R,
  SCAN_S            = SDL_SCANCODE_S,
  SCAN_T            = SDL_SCANCODE_T,
  SCAN_U            = SDL_SCANCODE_U,
  SCAN_V            = SDL_SCANCODE_V,
  SCAN_W            = SDL_SCANCODE_W,
  SCAN_X            = SDL_SCANCODE_X,
  SCAN_Y            = SDL_SCANCODE_Y,
  SCAN_Z            = SDL_SCANCODE_Z
} keyboardkey;

#endif /* GISH_INPUT_KEYBOARD_H */
