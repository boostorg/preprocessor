# /* **************************************************************************
#  *                                                                          *
#  *     (C) Copyright Edward Diener 2019.
#  *     Distributed under the Boost Software License, Version 1.0. (See
#  *     accompanying file LICENSE_1_0.txt or copy at
#  *     http://www.boost.org/LICENSE_1_0.txt)
#  *                                                                          *
#  ************************************************************************** */
#
# /* See http://www.boost.org for most recent version. */
#
# include "test.h"
# include <boost/preprocessor/facilities/check_empty.hpp>

# if BOOST_PP_VARIADIC_HAS_OPT()

# include <boost/preprocessor/facilities/empty.hpp>

#define DATA
#define OBJECT OBJECT2
#define OBJECT2
#define FUNC(x) FUNC2(x)
#define FUNC2(x)
#define FUNC_GEN() ()
#define FUNC_GEN2(x) ()
#define FUNC_GEN3() (&)
#define FUNC_GEN4(x) (y)
#define FUNC_GEN5() (y,z)
#define FUNC_GEN6() anything
#define FUNC_GEN7(x) anything
#define FUNC_GEN8(x,y) (1,2,3)
#define FUNC_GEN9(x,y,z) anything
#define FUNC_GEN10(x) (y) data
#define NAME &name
#define ATUPLE (atuple)
#define ATUPLE_PLUS (atuple) data

static_assert(BOOST_PP_CHECK_EMPTY(FUNC_GEN) == 0, "");
static_assert(BOOST_PP_CHECK_EMPTY(FUNC_GEN2) == 0, "");
static_assert(BOOST_PP_CHECK_EMPTY(FUNC_GEN3) == 0, "");
static_assert(BOOST_PP_CHECK_EMPTY(FUNC_GEN4) == 0, "");
static_assert(BOOST_PP_CHECK_EMPTY(FUNC_GEN5) == 0, "");
static_assert(BOOST_PP_CHECK_EMPTY(FUNC_GEN8) == 0, "");
static_assert(BOOST_PP_CHECK_EMPTY(FUNC_GEN9) == 0, "");
static_assert(BOOST_PP_CHECK_EMPTY(FUNC_GEN10) == 0, "");
static_assert(BOOST_PP_CHECK_EMPTY(BOOST_PP_EMPTY()) == 1, "");
static_assert(BOOST_PP_CHECK_EMPTY(DATA BOOST_PP_EMPTY()) == 1, "");
static_assert(BOOST_PP_CHECK_EMPTY(x BOOST_PP_EMPTY()) == 0, "");
static_assert(BOOST_PP_CHECK_EMPTY(OBJECT BOOST_PP_EMPTY()) == 1, "");
static_assert(BOOST_PP_CHECK_EMPTY(FUNC(z) BOOST_PP_EMPTY()) == 1, "");
static_assert(BOOST_PP_CHECK_EMPTY(FUNC_GEN6) == 0, "");
static_assert(BOOST_PP_CHECK_EMPTY(FUNC_GEN7) == 0, "");
static_assert(BOOST_PP_CHECK_EMPTY(NAME) == 0, "");
static_assert(BOOST_PP_CHECK_EMPTY(ATUPLE) == 0, "");
static_assert(BOOST_PP_CHECK_EMPTY(ATUPLE_PLUS) == 0, "");

# else

static_assert(1 == 1, "");

# endif
