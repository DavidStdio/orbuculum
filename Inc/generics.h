/*
 * Generic Routines
 * ================
 *
 * Copyright (C) 2017  Dave Marples  <dave@marples.net>
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef _GENERICS_
#define _GENERICS_
#include <stdint.h>
#include <limits.h>

#ifndef BOOL
    #define BOOL  int
    #ifndef FALSE
        #define FALSE (0)
        #define TRUE  (!FALSE)
    #endif
#endif

// ====================================================================================================
char *GenericsEscape( char *str );
char *GenericsUnescape( char *str );
// ====================================================================================================
#endif
