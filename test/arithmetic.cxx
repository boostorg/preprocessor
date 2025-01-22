# /* **************************************************************************
#  *                                                                          *
#  *     (C) Copyright Paul Mensonides 2002.
#  *     Distributed under the Boost Software License, Version 1.0. (See
#  *     accompanying file LICENSE_1_0.txt or copy at
#  *     http://www.boost.org/LICENSE_1_0.txt)
#  *                                                                          *
#  ************************************************************************** */
#
# /* See http://www.boost.org for most recent version. */
#
# include <boost/preprocessor/config/limits.hpp>
# include <boost/preprocessor/arithmetic.hpp>
# include "test.h"

/* addition */

static_assert(BOOST_PP_ADD(2, 3) == 5, "");

static_assert(BOOST_PP_ADD(BOOST_PP_ADD(2, 2), 2) == 6, "");
static_assert(BOOST_PP_ADD(2, BOOST_PP_ADD(1, 4)) == 7, "");
static_assert(BOOST_PP_ADD(BOOST_PP_ADD(2, 2), BOOST_PP_ADD(2, 2)) == 8, "");

#if BOOST_PP_LIMIT_MAG == 256 && BOOST_PP_CONFIG_FLAGS() & BOOST_PP_CONFIG_STRICT()

static_assert(BOOST_PP_ADD(1, 256) == 256, "");
static_assert(BOOST_PP_ADD(256, 1) == 256, "");
static_assert(BOOST_PP_ADD(2, 255) == 256, "");
static_assert(BOOST_PP_ADD(255, 2) == 256, "");
static_assert(BOOST_PP_ADD(1, 255) == 256, "");
static_assert(BOOST_PP_ADD(255, 1) == 256, "");

#endif

#if BOOST_PP_LIMIT_MAG == 512

static_assert(BOOST_PP_ADD(374, 129) == 503, "");

static_assert(BOOST_PP_ADD(1, 512) == 512, "");
static_assert(BOOST_PP_ADD(512, 1) == 512, "");
static_assert(BOOST_PP_ADD(2, 511) == 512, "");
static_assert(BOOST_PP_ADD(511, 2) == 512, "");

static_assert(BOOST_PP_ADD(BOOST_PP_ADD(134, 187), 95) == 416, "");
static_assert(BOOST_PP_ADD(BOOST_PP_ADD(83, 120), BOOST_PP_ADD(204, 51)) == 458, "");
static_assert(BOOST_PP_ADD(149, BOOST_PP_ADD(102, 137)) == 388, "");
static_assert(BOOST_PP_ADD(357, BOOST_PP_ADD(102, 137)) == 512, "");

#endif

#if BOOST_PP_LIMIT_MAG == 1024

static_assert(BOOST_PP_ADD(732, 188) == 920, "");

static_assert(BOOST_PP_ADD(1, 1024) == 1024, "");
static_assert(BOOST_PP_ADD(1024, 1) == 1024, "");
static_assert(BOOST_PP_ADD(2, 1023) == 1024, "");
static_assert(BOOST_PP_ADD(1023, 2) == 1024, "");

static_assert(BOOST_PP_ADD(BOOST_PP_ADD(254, 525), 149) == 928, "");
static_assert(BOOST_PP_ADD(BOOST_PP_ADD(241, 96), BOOST_PP_ADD(373, 175)) == 885, "");
static_assert(BOOST_PP_ADD(792, BOOST_PP_ADD(356, 410)) == 1024, "");

#endif

/* subtraction */

static_assert(BOOST_PP_SUB(11, 0) == 11, "");
static_assert(BOOST_PP_SUB(12, 1) == 11, "");
static_assert(BOOST_PP_SUB(3, 4) == 0, "");

static_assert(BOOST_PP_SUB(5, BOOST_PP_SUB(3, 2)) == 4, "");
static_assert(BOOST_PP_SUB(BOOST_PP_SUB(10, 5), 2) == 3, "");
static_assert(BOOST_PP_SUB(BOOST_PP_SUB(7, 3), BOOST_PP_SUB(10, 8)) == 2, "");

#if BOOST_PP_LIMIT_MAG == 256 && BOOST_PP_CONFIG_FLAGS() & BOOST_PP_CONFIG_STRICT()

static_assert(BOOST_PP_SUB(1, 256) == 0, "");
static_assert(BOOST_PP_SUB(256, 255) == 1, "");

#endif

#if BOOST_PP_LIMIT_MAG == 512

static_assert(BOOST_PP_SUB(315, 412) == 0, "");
static_assert(BOOST_PP_SUB(511, 510) == 1, "");
static_assert(BOOST_PP_SUB(463, 317) == 146, "");
static_assert(BOOST_PP_SUB(272, 195) == 77, "");

static_assert(BOOST_PP_SUB(1, 512) == 0, "");
static_assert(BOOST_PP_SUB(512, 511) == 1, "");

static_assert(BOOST_PP_SUB(371, BOOST_PP_SUB(3, 2)) == 370, "");
static_assert(BOOST_PP_SUB(BOOST_PP_SUB(478, 211), 58) == 209, "");
static_assert(BOOST_PP_SUB(BOOST_PP_SUB(395, 277), BOOST_PP_SUB(10, 7)) == 115, "");
static_assert(BOOST_PP_SUB(BOOST_PP_SUB(412, 383), BOOST_PP_SUB(512, 506)) == 23, "");

#endif

#if BOOST_PP_LIMIT_MAG == 1024

static_assert(BOOST_PP_SUB(782, 849) == 0, "");
static_assert(BOOST_PP_SUB(1023, 1022) == 1, "");
static_assert(BOOST_PP_SUB(654, 538) == 116, "");

static_assert(BOOST_PP_SUB(1, 1024) == 0, "");
static_assert(BOOST_PP_SUB(1024, 1023) == 1, "");

static_assert(BOOST_PP_SUB(829, BOOST_PP_SUB(3, 2)) == 828, "");
static_assert(BOOST_PP_SUB(BOOST_PP_SUB(616, 439), 92) == 85, "");
static_assert(BOOST_PP_SUB(BOOST_PP_SUB(822, 547), BOOST_PP_SUB(1024, 1011)) == 262, "");

#endif

/* multiplication */

static_assert(BOOST_PP_MUL(0, 1) == 0, "");
static_assert(BOOST_PP_MUL(1, 0) == 0, "");
static_assert(BOOST_PP_MUL(1, 1) == 1, "");
static_assert(BOOST_PP_MUL(4, 3) == 12, "");

static_assert(BOOST_PP_MUL(BOOST_PP_MUL(2, 2), 2) == 8, "");
static_assert(BOOST_PP_MUL(2, BOOST_PP_MUL(2, 2)) == 8, "");
static_assert(BOOST_PP_MUL(BOOST_PP_MUL(2, 2), BOOST_PP_MUL(2, 2)) == 16, "");

#if BOOST_PP_CONFIG_FLAGS() & BOOST_PP_CONFIG_STRICT()

static_assert(BOOST_PP_MUL(0, BOOST_PP_LIMIT_MAG) == 0, "");
static_assert(BOOST_PP_MUL(1, BOOST_PP_LIMIT_MAG) == BOOST_PP_LIMIT_MAG, "");
static_assert(BOOST_PP_MUL(2, BOOST_PP_LIMIT_MAG) == BOOST_PP_LIMIT_MAG, "");
static_assert(BOOST_PP_MUL(BOOST_PP_LIMIT_MAG, 0) == 0, "");
static_assert(BOOST_PP_MUL(BOOST_PP_LIMIT_MAG, 1) == BOOST_PP_LIMIT_MAG, "");
static_assert(BOOST_PP_MUL(BOOST_PP_LIMIT_MAG, 2) == BOOST_PP_LIMIT_MAG, "");

#endif

#if BOOST_PP_LIMIT_MAG == 256 && BOOST_PP_CONFIG_FLAGS() & BOOST_PP_CONFIG_STRICT()

static_assert(BOOST_PP_MUL(17, 17) == 256, "");
static_assert(BOOST_PP_MUL(0, 255) == 0, "");
static_assert(BOOST_PP_MUL(1, 255) == 255, "");
static_assert(BOOST_PP_MUL(2, 255) == 256, "");
static_assert(BOOST_PP_MUL(255, 0) == 0, "");
static_assert(BOOST_PP_MUL(255, 1) == 255, "");
static_assert(BOOST_PP_MUL(255, 2) == 256, "");

#endif

#if BOOST_PP_LIMIT_MAG == 512

static_assert(BOOST_PP_MUL(0, 351) == 0, "");
static_assert(BOOST_PP_MUL(489, 0) == 0, "");
static_assert(BOOST_PP_MUL(1, 272) == 272, "");
static_assert(BOOST_PP_MUL(34, 11) == 374, "");

static_assert(BOOST_PP_MUL(BOOST_PP_MUL(7, 7), 7) == 343, "");
static_assert(BOOST_PP_MUL(7, BOOST_PP_MUL(7, 7)) == 343, "");
static_assert(BOOST_PP_MUL(BOOST_PP_MUL(5, 5), BOOST_PP_MUL(4, 4)) == 400, "");

static_assert(BOOST_PP_MUL(24, 24) == 512, "");
static_assert(BOOST_PP_MUL(0, 511) == 0, "");
static_assert(BOOST_PP_MUL(1, 511) == 511, "");
static_assert(BOOST_PP_MUL(2, 511) == 512, "");
static_assert(BOOST_PP_MUL(511, 0) == 0, "");
static_assert(BOOST_PP_MUL(511, 1) == 511, "");
static_assert(BOOST_PP_MUL(511, 2) == 512, "");

#endif

#if BOOST_PP_LIMIT_MAG == 1024

static_assert(BOOST_PP_MUL(0, 653) == 0, "");
static_assert(BOOST_PP_MUL(926, 0) == 0, "");
static_assert(BOOST_PP_MUL(1, 849) == 849, "");
static_assert(BOOST_PP_MUL(42, 17) == 714, "");

static_assert(BOOST_PP_MUL(BOOST_PP_MUL(9, 9), 9) == 729, "");
static_assert(BOOST_PP_MUL(9, BOOST_PP_MUL(9, 9)) == 729, "");
static_assert(BOOST_PP_MUL(BOOST_PP_MUL(6, 6), BOOST_PP_MUL(5, 5)) == 900, "");

static_assert(BOOST_PP_MUL(35, 35) == 1024, "");
static_assert(BOOST_PP_MUL(0, 1024) == 0, "");
static_assert(BOOST_PP_MUL(1, 1024) == 1024, "");
static_assert(BOOST_PP_MUL(2, 1024) == 1024, "");
static_assert(BOOST_PP_MUL(1023, 0) == 0, "");
static_assert(BOOST_PP_MUL(1023, 1) == 1023, "");
static_assert(BOOST_PP_MUL(1023, 2) == 1024, "");

#endif

/* division */

static_assert(BOOST_PP_DIV(2, 1) == 2, "");
static_assert(BOOST_PP_DIV(0, 5) == 0, "");
static_assert(BOOST_PP_DIV(7, 3) == 2, "");

static_assert(BOOST_PP_DIV(BOOST_PP_DIV(4, 2), 2) == 1, "");
static_assert(BOOST_PP_DIV(10, BOOST_PP_DIV(10, 2)) == 2, "");
static_assert(BOOST_PP_DIV(BOOST_PP_DIV(10, 2), BOOST_PP_DIV(4, 2)) == 2, "");

#if BOOST_PP_LIMIT_MAG == 512

static_assert(BOOST_PP_DIV(468, 3) == 156, "");
static_assert(BOOST_PP_DIV(0, 272) == 0, "");
static_assert(BOOST_PP_DIV(335, 6) == 55, "");

static_assert(BOOST_PP_DIV(BOOST_PP_DIV(498, 2), 2) == 124, "");
static_assert(BOOST_PP_DIV(375, BOOST_PP_DIV(279, 3)) == 4, "");
static_assert(BOOST_PP_DIV(BOOST_PP_DIV(486, 2), BOOST_PP_DIV(17, 4)) == 60, "");

#endif

#if BOOST_PP_LIMIT_MAG == 1024

static_assert(BOOST_PP_DIV(849, 36) == 23, "");
static_assert(BOOST_PP_DIV(0, 638) == 0, "");
static_assert(BOOST_PP_DIV(467, 17) == 27, "");

static_assert(BOOST_PP_DIV(BOOST_PP_DIV(1004, 10), 5) == 20, "");
static_assert(BOOST_PP_DIV(593, BOOST_PP_DIV(925, 25)) == 16, "");
static_assert(BOOST_PP_DIV(BOOST_PP_DIV(746, 12), BOOST_PP_DIV(848, 424)) == 31, "");

#endif

/* modulus */

static_assert(BOOST_PP_MOD(5, 5) == 0, "");
static_assert(BOOST_PP_MOD(9, 5) == 4, "");
static_assert(BOOST_PP_MOD(7, 4) == 3, "");

static_assert(BOOST_PP_MOD(BOOST_PP_MOD(5, 3), 3) == 2, "");
static_assert(BOOST_PP_MOD(5, BOOST_PP_MOD(4, 3)) == 0, "");

#if BOOST_PP_LIMIT_MAG == 512

static_assert(BOOST_PP_MOD(473, 473) == 0, "");
static_assert(BOOST_PP_MOD(381, 126) == 3, "");
static_assert(BOOST_PP_MOD(262, 27) == 19, "");

static_assert(BOOST_PP_MOD(BOOST_PP_MOD(368, 65), 7) == 1, "");
static_assert(BOOST_PP_MOD(194, BOOST_PP_MOD(411, 205)) == 0, "");

#endif

#if BOOST_PP_LIMIT_MAG == 1024

static_assert(BOOST_PP_MOD(831, 831) == 0, "");
static_assert(BOOST_PP_MOD(935, 73) == 59, "");
static_assert(BOOST_PP_MOD(610, 84) == 22, "");

static_assert(BOOST_PP_MOD(BOOST_PP_MOD(732, 27), 2) == 1, "");
static_assert(BOOST_PP_MOD(1023, BOOST_PP_MOD(544, 29)) == 11, "");

#endif

/* increment */

static_assert(BOOST_PP_INC(0) == 1, "");
static_assert(BOOST_PP_INC(22) == 23, "");
static_assert(BOOST_PP_INC(BOOST_PP_INC(0)) == 2, "");
static_assert(BOOST_PP_INC(BOOST_PP_INC(17)) == 19, "");

#if BOOST_PP_LIMIT_MAG == 256

static_assert(BOOST_PP_INC(256) == 256, "");
static_assert(BOOST_PP_INC(BOOST_PP_INC(255)) == 256, "");

#endif

#if BOOST_PP_LIMIT_MAG == 512

static_assert(BOOST_PP_INC(349) == 350, "");
static_assert(BOOST_PP_INC(426) == 427, "");
static_assert(BOOST_PP_INC(256) == 257, "");
static_assert(BOOST_PP_INC(BOOST_PP_INC(505)) == 507, "");
static_assert(BOOST_PP_INC(BOOST_PP_INC(272)) == 274, "");
static_assert(BOOST_PP_INC(BOOST_PP_INC(255)) == 257, "");

#endif

#if BOOST_PP_LIMIT_MAG == 1024

static_assert(BOOST_PP_INC(593) == 594, "");
static_assert(BOOST_PP_INC(821) == 822, "");
static_assert(BOOST_PP_INC(512) == 513, "");
static_assert(BOOST_PP_INC(BOOST_PP_INC(924)) == 926, "");
static_assert(BOOST_PP_INC(BOOST_PP_INC(732)) == 734, "");
static_assert(BOOST_PP_INC(BOOST_PP_INC(511)) == 513, "");

#endif

/* decrement */

static_assert(BOOST_PP_DEC(256) == 255, "");
static_assert(BOOST_PP_DEC(47) == 46, "");
static_assert(BOOST_PP_DEC(0) == 0, "");

static_assert(BOOST_PP_DEC(BOOST_PP_DEC(256)) == 254, "");
static_assert(BOOST_PP_DEC(BOOST_PP_DEC(85)) == 83, "");
static_assert(BOOST_PP_DEC(BOOST_PP_DEC(1)) == 0, "");

#if BOOST_PP_LIMIT_MAG == 512

static_assert(BOOST_PP_DEC(257) == 256, "");
static_assert(BOOST_PP_DEC(473) == 472, "");
static_assert(BOOST_PP_DEC(512) == 511, "");

static_assert(BOOST_PP_DEC(BOOST_PP_DEC(257)) == 255, "");
static_assert(BOOST_PP_DEC(BOOST_PP_DEC(329)) == 327, "");
static_assert(BOOST_PP_DEC(BOOST_PP_DEC(512)) == 510, "");

#endif

#if BOOST_PP_LIMIT_MAG == 1024

static_assert(BOOST_PP_DEC(1025) == 1024, "");
static_assert(BOOST_PP_DEC(770) == 769, "");
static_assert(BOOST_PP_DEC(1024) == 1023, "");

static_assert(BOOST_PP_DEC(BOOST_PP_DEC(1025)) == 1023, "");
static_assert(BOOST_PP_DEC(BOOST_PP_DEC(959)) == 957, "");
static_assert(BOOST_PP_DEC(BOOST_PP_DEC(1024)) == 1022, "");

#endif
