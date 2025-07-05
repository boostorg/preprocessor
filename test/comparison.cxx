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
# include <boost/preprocessor/comparison.hpp>
# include "test.h"

/* equality */

static_assert(BOOST_PP_EQUAL(2, 0) == 0, "");
static_assert(BOOST_PP_EQUAL(2, 2) == 1, "");

#if BOOST_PP_LIMIT_MAG == 512

static_assert(BOOST_PP_EQUAL(135, 487) == 0, "");
static_assert(BOOST_PP_EQUAL(367, 367) == 1, "");

#endif

#if BOOST_PP_LIMIT_MAG == 1024

static_assert(BOOST_PP_EQUAL(749, 832) == 0, "");
static_assert(BOOST_PP_EQUAL(955, 955) == 1, "");

#endif

/* inequality */

static_assert(BOOST_PP_NOT_EQUAL(2, 0) == 1, "");
static_assert(BOOST_PP_NOT_EQUAL(2, 2) == 0, "");

#if BOOST_PP_LIMIT_MAG == 512

static_assert(BOOST_PP_NOT_EQUAL(375, 126) == 1, "");
static_assert(BOOST_PP_NOT_EQUAL(439, 439) == 0, "");

#endif

#if BOOST_PP_LIMIT_MAG == 1024

static_assert(BOOST_PP_NOT_EQUAL(684, 674) == 1, "");
static_assert(BOOST_PP_NOT_EQUAL(1011, 1011) == 0, "");

#endif

/* less */

static_assert(BOOST_PP_LESS(2, 1) == 0, "");
static_assert(BOOST_PP_LESS(1, 2) == 1, "");

#if BOOST_PP_LIMIT_MAG == 512

static_assert(BOOST_PP_LESS(265, 241) == 0, "");
static_assert(BOOST_PP_LESS(510, 511) == 1, "");

#endif

#if BOOST_PP_LIMIT_MAG == 1024

static_assert(BOOST_PP_LESS(753, 629) == 0, "");
static_assert(BOOST_PP_LESS(1022, 1024) == 1, "");

#endif

/* less_equal */

static_assert(BOOST_PP_LESS_EQUAL(2, 1) == 0, "");
static_assert(BOOST_PP_LESS_EQUAL(1, 2) == 1, "");
static_assert(BOOST_PP_LESS_EQUAL(2, 2) == 1, "");

#if BOOST_PP_LIMIT_MAG == 512

static_assert(BOOST_PP_LESS_EQUAL(327, 211) == 0, "");
static_assert(BOOST_PP_LESS_EQUAL(489, 502) == 1, "");
static_assert(BOOST_PP_LESS_EQUAL(327, 327) == 1, "");

#endif

#if BOOST_PP_LIMIT_MAG == 1024

static_assert(BOOST_PP_LESS_EQUAL(951, 632) == 0, "");
static_assert(BOOST_PP_LESS_EQUAL(875, 1002) == 1, "");
static_assert(BOOST_PP_LESS_EQUAL(727, 727) == 1, "");

#endif

/* greater */

static_assert(BOOST_PP_GREATER(2, 1) == 1, "");
static_assert(BOOST_PP_GREATER(1, 2) == 0, "");

#if BOOST_PP_LIMIT_MAG == 512

static_assert(BOOST_PP_GREATER(348, 259) == 1, "");
static_assert(BOOST_PP_GREATER(411, 411) == 0, "");
static_assert(BOOST_PP_GREATER(327, 373) == 0, "");

#endif

#if BOOST_PP_LIMIT_MAG == 1024

static_assert(BOOST_PP_GREATER(846, 523) == 1, "");
static_assert(BOOST_PP_GREATER(574, 574) == 0, "");
static_assert(BOOST_PP_GREATER(749, 811) == 0, "");

#endif

/* greater_equal */

static_assert(BOOST_PP_GREATER_EQUAL(2, 1) == 1, "");
static_assert(BOOST_PP_GREATER_EQUAL(1, 2) == 0, "");
static_assert(BOOST_PP_GREATER_EQUAL(2, 2) == 1, "");

#if BOOST_PP_LIMIT_MAG == 512

static_assert(BOOST_PP_GREATER_EQUAL(341, 27) == 1, "");
static_assert(BOOST_PP_GREATER_EQUAL(289, 470) == 0, "");
static_assert(BOOST_PP_GREATER_EQUAL(296, 296) == 1, "");

#endif

#if BOOST_PP_LIMIT_MAG == 1024

static_assert(BOOST_PP_GREATER_EQUAL(946, 852) == 1, "");
static_assert(BOOST_PP_GREATER_EQUAL(685, 717) == 0, "");
static_assert(BOOST_PP_GREATER_EQUAL(1001, 1001) == 1, "");

#endif
