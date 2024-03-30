/*
This is the c configuration file for the keymap

Copyright 2024 Josh Wang

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

#pragma once  

// Tapping
#define PERMISSIVE_HOLD
#undef RETRO_TAPPING
#undef TAPPING_FORCE_HOLD
#undef TAPPING_TERM
#define TAPPING_TERM 200

// Auto Shift
#define NO_AUTO_SHIFT_ALPHA
#define AUTO_SHIFT_TIMEOUT 150
#define AUTO_SHIFT_REPEAT
#define AUTO_SHIFT_TIMEOUT_PER_KEY