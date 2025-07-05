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
# include <boost/preprocessor/selection.hpp>
# include "test.h"

static_assert(BOOST_PP_MAX(2, 2) == 2, "");
static_assert(BOOST_PP_MAX(2, 1) == 2, "");
static_assert(BOOST_PP_MAX(1, 2) == 2, "");

static_assert(BOOST_PP_MIN(2, 2) == 2, "");
static_assert(BOOST_PP_MIN(2, 1) == 1, "");
static_assert(BOOST_PP_MIN(1, 2) == 1, "");

# if BOOST_PP_LIMIT_MAG == 512

static_assert(BOOST_PP_MAX(438, 438) == 438, "");
static_assert(BOOST_PP_MAX(371, 289) == 371, "");
static_assert(BOOST_PP_MAX(390, 468) == 468, "");

static_assert(BOOST_PP_MIN(391, 391) == 391, "");
static_assert(BOOST_PP_MIN(425, 274) == 274, "");
static_assert(BOOST_PP_MIN(410, 503) == 410, "");

# endif

# if BOOST_PP_LIMIT_MAG == 1024

static_assert(BOOST_PP_MAX(892, 892) == 892, "");
static_assert(BOOST_PP_MAX(967, 640) == 967, "");
static_assert(BOOST_PP_MAX(583, 745) == 745, "");

static_assert(BOOST_PP_MIN(837, 837) == 837, "");
static_assert(BOOST_PP_MIN(646, 583) == 583, "");
static_assert(BOOST_PP_MIN(782, 826) == 782, "");

# endif
