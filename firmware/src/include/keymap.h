/* Copyright 2020 Jack Humbert
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
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

#pragma once

#include <stdint.h>
#include "revised.h"
#include "keycodes.h"

#define NK 0x0000
#define R(n) ((KC_ ## n) | 0x0100)  
#define M(n) ((n) | 0x0200)
#define F() (0x00 | 0x0400)
#define FN_C(n) (n | 0x0600)

#define REG_FN(reg, fn) (reg | ((uint16_t)fn) << 8)

#define LCTL 0x01
#define LSFT 0x02
#define LALT 0x04
#define LGUI 0x08
#define RCTL 0x10
#define RSFT 0x20
#define RALT 0x40
#define RGUI 0x80

#define KEYMAP_ANSI( \
    esc, f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11, f12,          \
    grv,  n1, n2, n3, n4, n5, n6, n7, n8, n9, n0, min, eql, bkp,     \
    tab,   q,  w,  e,  r,  t,  y,  o,  u,  i,  p,  lbr, rbr, bsl,    \
    cap,    a,  s,  d,  f,  g,  h,  j,  k,  l,  sem, quo, ent,       \
    lsf,     z,  x,  c,  v,  b,  n,  m, com, dot, sls, rsf, up,      \
    lct, fn, pi, lal,         spc,           ral, rct, lef, dn, rht) \
    { \
        NK,  NK,  NK,  NK,  NK,  NK,  NK,  pi,  \
        ral, NK,  NK,  NK,  NK,  NK,  NK,  lal, \
        NK,  NK,  z,   cap, a,   s,   fn,  NK,  \
        NK,  c,   x,   d,   q,   tab, n1,  grv, \
        NK,  f,   e,   w,   n2,  n3,  f1,  esc, \
        v,   g,   t,   r,   n4,  n5,  f3,  f2,  \
        NK,  h,   u,   y,   n6,  n7,  f5,  f4,  \
        NK,  k,   j,   i,   n8,  n9,  f7,  f6,  \
        NK,  l,   p,   o,   n0,  NK,  f9,  f8,  \
        m,   sem, lbr, NK,  min, NK,  f11, f10, \
        b,   com, quo, NK,  NK,  eql, NK,  f12, \
        NK,  NK,  n,   dot, NK,  NK,  NK,  NK,  \
        spc, sls, NK,  NK,  rbr, NK,  lef, NK,  \
        lsf, NK,  NK,  NK,  NK,  NK,  NK,  rsf, \
        rht, dn,  NK,  up,  ent, bsl, bkp, NK,  \
        lct, NK,  NK,  NK,  NK,  NK,  NK,  rct, \
        NK,  NK,  NK,  NK,  NK,  NK,  NK,  NK,  \
        NK,  NK,  NK,  NK,  NK,  NK,  NK,  NK   \
    }