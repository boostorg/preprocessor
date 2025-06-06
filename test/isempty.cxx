# /* **************************************************************************
#  *                                                                          *
#  *     (C) Copyright Edward Diener 2014.
#  *     Distributed under the Boost Software License, Version 1.0. (See
#  *     accompanying file LICENSE_1_0.txt or copy at
#  *     http://www.boost.org/LICENSE_1_0.txt)
#  *                                                                          *
#  ************************************************************************** */
#
# /* See http://www.boost.org for most recent version. */
#
# include <boost/preprocessor/config/config.hpp>
#
#if (BOOST_PP_CONFIG_FLAGS() & BOOST_PP_CONFIG_STRICT()) || (BOOST_PP_CONFIG_FLAGS() & BOOST_PP_CONFIG_MSVC())

# include <boost/preprocessor/facilities/empty.hpp>
# include <boost/preprocessor/facilities/is_empty.hpp>
# include "test.h"

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

# include <boost/preprocessor/variadic/has_opt.hpp>

#if defined(__cplusplus) && __cplusplus > 201703L && BOOST_PP_VARIADIC_HAS_OPT()

static_assert(BOOST_PP_IS_EMPTY(FUNC_GEN) == 0, "");
static_assert(BOOST_PP_IS_EMPTY(FUNC_GEN2) == 0, "");
static_assert(BOOST_PP_IS_EMPTY(FUNC_GEN3) == 0, "");
static_assert(BOOST_PP_IS_EMPTY(FUNC_GEN4) == 0, "");
static_assert(BOOST_PP_IS_EMPTY(FUNC_GEN5) == 0, "");
static_assert(BOOST_PP_IS_EMPTY(FUNC_GEN8) == 0, "");
static_assert(BOOST_PP_IS_EMPTY(FUNC_GEN9) == 0, "");
static_assert(BOOST_PP_IS_EMPTY(FUNC_GEN10) == 0, "");

#elif BOOST_PP_VARIADICS_MSVC /* Testing the VC++ variadic version */

/* INCORRECT */

static_assert(BOOST_PP_IS_EMPTY(FUNC_GEN) == 1, "");
static_assert(BOOST_PP_IS_EMPTY(FUNC_GEN2) == 1, "");
static_assert(BOOST_PP_IS_EMPTY(FUNC_GEN3) == 1, "");
static_assert(BOOST_PP_IS_EMPTY(FUNC_GEN4) == 1, "");
static_assert(BOOST_PP_IS_EMPTY(FUNC_GEN5) == 1, "");
static_assert(BOOST_PP_IS_EMPTY(FUNC_GEN8) == 1, "");
static_assert(BOOST_PP_IS_EMPTY(FUNC_GEN10) == 1, "");

/* CORRECT */

static_assert(BOOST_PP_IS_EMPTY(FUNC_GEN9) == 0, "");

#else /* Testing the non-VC++ variadic version */

/* CORRECT */

static_assert(BOOST_PP_IS_EMPTY(FUNC_GEN) == 0, "");
static_assert(BOOST_PP_IS_EMPTY(FUNC_GEN2) == 0, "");
static_assert(BOOST_PP_IS_EMPTY(FUNC_GEN3) == 0, "");
static_assert(BOOST_PP_IS_EMPTY(FUNC_GEN4) == 0, "");
static_assert(BOOST_PP_IS_EMPTY(FUNC_GEN5) == 0, "");
static_assert(BOOST_PP_IS_EMPTY(FUNC_GEN10) == 0, "");

/* COMPILER ERROR */

// static_assert(BOOST_PP_IS_EMPTY(FUNC_GEN8) == 0, "");
// static_assert(BOOST_PP_IS_EMPTY(FUNC_GEN9) == 0, "");

#endif

/* Testing the variadic version */

/* CORRECT */

static_assert(BOOST_PP_IS_EMPTY(BOOST_PP_EMPTY()) == 1, "");
static_assert(BOOST_PP_IS_EMPTY(DATA BOOST_PP_EMPTY()) == 1, "");
static_assert(BOOST_PP_IS_EMPTY(x BOOST_PP_EMPTY()) == 0, "");
static_assert(BOOST_PP_IS_EMPTY(OBJECT BOOST_PP_EMPTY()) == 1, "");
static_assert(BOOST_PP_IS_EMPTY(FUNC(z) BOOST_PP_EMPTY()) == 1, "");
static_assert(BOOST_PP_IS_EMPTY(FUNC_GEN6) == 0, "");
static_assert(BOOST_PP_IS_EMPTY(FUNC_GEN7) == 0, "");
static_assert(BOOST_PP_IS_EMPTY(NAME) == 0, "");
static_assert(BOOST_PP_IS_EMPTY(ATUPLE) == 0, "");
static_assert(BOOST_PP_IS_EMPTY(ATUPLE_PLUS) == 0, "");

#endif
