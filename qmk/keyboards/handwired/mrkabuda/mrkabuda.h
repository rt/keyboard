#ifndef MRKABUDA_H
#define MRKABUDA_H

#include "quantum.h"
#define XXX KC_NO

// The first section contains all of the arguements
// The second converts the arguments into a two-dimensional array
#define LAYOUT( \
  k00, k01, k02, k03, k04, k05, k06, k07, k08, k09, \
  k10, k11, k12, k13, k14, k15, k16, k17, k18, k19, \
  k20, k21, k22, k23, k24, k25, k26, k27, k28, k29, \
  k30, k31, k32, k33, k34, k35 \
) \
{ \
  { k00, k01, k02, k03, k04, k05, k06, k07, k08, k09 }, \
  { k10, k11, k12, k13, k14, k15, k16, k17, k18, k19 }, \
  { k20, k21, k22, k23, k24, k25, k26, k27, k28, k29 }, \
  { XXX, XXX, k30, k31, k32, k33, k34, k35, XXX, XXX } \
}



#define KC_ KC_TRNS

#endif
