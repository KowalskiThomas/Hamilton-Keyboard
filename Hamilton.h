#ifndef HAMILTON_H
#define HAMILTON_H

#include "quantum.h"

// This a shortcut to help you visually see your layout.
// The following is an example using the Planck MIT layout
// The first section contains all of the arguements
// The second converts the arguments into a two-dimensional array

#define KNO KC_NO
/* K0F, */
#define KEYMAP(\
    K00, K01, K02, K03, K04, K05, K06, K07, K08, K09, K0A, K0B, K0C,    K0D  , K0E, \
    K10, K11, K12, K13, K14, K15, K16, K17, K18, K19, K1A, K1B, K1C,    K1D  , K1E, \
    K20,  K21, K22, K23, K24, K25, K26, K27, K28, K29, K2A, K2B, K2C,   K2D  , K2E, \
    K30,   K31, K32, K33, K34, K35, K36, K37, K38, K39, K3A, K3B, K3C        , K3D, \
    K40,  K41, K42, K43, K44, K45, K46, K47, K48, K49, K4A,  K4B,   K4C,  K4D, K4E, \
    K50, K51, K52,               K53,                K54, K55, K56, K57,  K58, K59  \
) \
{ \
    { K00, K01, K02, K03, K04, K05, K06, K07, K08, K09, K0A, K0B, K0C, K0D, K0E }, \
    { K10, K11, K12, K13, K14, K15, K16, K17, K18, K19, K1A, K1B, K1C, K1D, K1E }, \
    { K20, K21, K22, K23, K24, K25, K26, K27, K28, K29, K2A, K2B, K2C, K2D, K2E }, \
    { K30, K31, K32, K33, K34, K35, K36, K37, K38, K39, K3A, K3B, K3C, KNO, K3D }, \
    { K40, K41, K42, K43, K44, K45, K46, K47, K48, K49, K4A, K4B, K4C, K4D, K4E }, \
    { K50, K51, K52, KNO, KNO, K53, KNO, KNO, KNO, K54, K55, K56, K57, K58, K59 }  \
}

#endif
