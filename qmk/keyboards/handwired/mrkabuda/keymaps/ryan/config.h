/*
This is the c configuration file for the keymap

Copyright 2012 Jun Wako <wakojun@gmail.com>
Copyright 2015 Jack Humbert

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


#ifndef CONFIG_USER_H
#define CONFIG_USER_H

// per adding rules.mk EXTRAFLAGS += -flto  >>> saves space with link time optimization  Macro and Function are incompatible
#define NO_ACTION_MACRO
#define NO_ACTION_FUNCTION

/* Use I2C or Serial, not both */

#define USE_SERIAL
// #define USE_I2C

/* Select hand configuration */

// #define MASTER_LEFT
#define MASTER_RIGHT
// #define EE_HANDS


//#define TAPPING_TERM 150
#define IGNORE_MOD_TAP_INTERRUPT
//#define TAPPING_FORCE_HOLD  if this is defined it'll break OSM
#define PERMISSIVE_HOLD            // This gets mods and hold layers to work faster (but will also trigger them unwantingly)
#define PREVENT_STUCK_MODIFIERS


#endif
