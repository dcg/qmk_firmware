/* Copyright 2019
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

#define LAYOUT_ortho_12x5(         \
     k00, k01, k02, k03, k04 , k05, k06, k07, k08, k09, k010, k011,  \
      k10, k11, k12, k13, k14 , k15, k16, k17, k18, k19, k110, k111, \
      k20, k21, k22, k23, k24 , k25, k26, k27,k28, k29, k210, k211,  \
      k30,k31,k32,k33,k34 ,k35,k36,k37,k38, k39, k310, k311,  \
      k40,k41,k42,k43,k44 ,k45,k46,k47,k48, k49, k410, k411 \
) {                      \
    { k011, k010, k09, k08, k07, k06, k05, k04, k03, k02, k01, k00 }, \
    { k111, k110, k19, k18, k17, k16, k15, k14, k13, k12, k11, k10 }, \
    { k211, k210, k29, k28, k27, k26, k25, k24, k23, k22, k21, k20 }, \
    { k311, k310, k39, k38, k37, k36, k35, k34, k33, k32, k31, k30 }, \
    { k411, k410, k49, k48, k47, k46, k45, k44, k43, k42, k41, k40} \
}
/*

      k00, k01, k02, k03, k04 , k05, k06, k07, k08, k09, k010, k011,  \
      k10, k11, k12, k13, k14 , k15, k16, k17, k18, k19, k110, k111, \
      k20, k21, k22, k23, k24 , k25, k26, k27,k28, k29, k210, k211,  \
      k30,k31,k32,k33,k34 ,k35,k36,k37,k38, k39, k310, k311,  \
      k40,k41,k42,k43,k44 ,k45,k46,k47,k48, k49, k410, k411 \
) {                      \
    { k00, k01, k02, k03, k04 , k05, k06, k07, k08, k09, k010, k011}, \
    { k10, k11, k12, k13, k14 , k15, k16, k17, k18, k19, k110, k111 }, \
    { k20, k21, k22, k23, k24 , k25, k26, k27, k28, k29, k210, k211 }, \
    { k30, k31, k32, k33, k34 , k35, k36, k37, k38, k39, k310, k311 }, \
    { k40, k41, k42, k43, k44 , k45, k46, k47, k48, k49, k410, k411 } \




#define LAYOUT_DG(          \
      k00, k01, k02, k03, k04 , k05, k06, k07,  \
      k10, k11, k12, k13, k14 , k15, k16, k17,  \
      k20, k21, k22, k23, k24 , k25, k26, k27,  \
      k30,k31,k32,k33,k34 ,k35,k36,k37,  \
      k40,k41,k42,k43,k44 ,k45,k46,k47 \
) {                      \
    { k00, k01, k02, k03, k04 , k05, k06, k07}, \
    { k10, k11, k12, k13, k14 , k15, k16, k17 }, \
    { k20, k21, k22, k23, k24 , k25, k26, k27 }, \
    { k30, k31, k32, k33, k34 , k35, k36, k37 }, \
    { k40, k41, k42, k43, k44 , k45, k46, k47 } \
}
*/
