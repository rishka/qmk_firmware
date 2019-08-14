/* Copyright 2019 Adam Perlman
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

#include "quantum.h"

/* This a shortcut to help you visually see your layout.
 *
 * The first section contains all of the arguments representing the physical
 * layout of the board and position of the keys.
 *
 * The second converts the arguments into a two-dimensional array which
 * represents the switchD matrix.
 */
#define LAYOUT( \
    k00,k01,k02,k03,k04,k05,k06,                                \
    k10,k11,k12,k13,k14,k15,k16,                                \
    k20,k21,k22,k23,k24,k25,k26,                                    \
    k30,k31,k32,k33,k34,k35,k36,                                \
    k40,k41,k42,k43,k44,k45,k46                                  \
) \
{ \
    { k00, k10, k20, k30, k40 },   \
    { k01, k11, k21, k31, k41 },   \
    { k02, k12, k22, k32, k42 },   \
    { k03, k13, k23, k33, k43 },   \
    { k04, k14, k24, k34, k44 },   \
    { k05, k15, k25, k35, k45 },   \
    { k06, k16, k26, k36, k46 },   \
    { k07, k17, k27, k37, k47 },   \
}

