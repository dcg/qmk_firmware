#pragma once

#include "quantum.h"

#define LAYOUT( \
	K00, K01, K02, K03, \
	K10, K11, K12, K13,  \
    K14, K15, K16, K17,  \
    K18, K19, K20, K21  \
) { \
	{ K18, K19, K20, K21},  \
    {  K14, K15, K16, K17}, \
	{ K10,   K11,   K12,   K13 },  \
	{ K00,   K01,   K02,   K03 }, \
}





/*

#define LAYOUT( \
	K00, K01, K02, K03, \
	K10, K11, K12, K13,  \
    K14, K15, K16, K17,  \
    K18, K19, K20, K21  \
) { \
	{ K18, K19, K20, K21},  \
    {  K14, K15, K16, K17}, \
	{ K10,   K11,   K12,   K13 },  \
	{ K00,   K01,   K02,   K03 }, \
}

*/
