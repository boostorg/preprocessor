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
# include <boost/preprocessor/slot.hpp>
# include "test.h"
# include <boost/preprocessor/slot/counter.hpp>

# define X() 4

# define BOOST_PP_VALUE 1 + 2 + 3 + X()
# include BOOST_PP_ASSIGN_SLOT(1)

# undef X

static_assert(BOOST_PP_SLOT(1) == 10, "");

# define BOOST_PP_VALUE BOOST_PP_SLOT(1) * BOOST_PP_SLOT(1)
# include BOOST_PP_ASSIGN_SLOT(1)

static_assert(BOOST_PP_SLOT(1) == 100, "");

static_assert(BOOST_PP_COUNTER == 0, "");

#include BOOST_PP_UPDATE_COUNTER()

static_assert(BOOST_PP_COUNTER == 1, "");

#include BOOST_PP_UPDATE_COUNTER()
#include BOOST_PP_UPDATE_COUNTER()

static_assert(BOOST_PP_COUNTER == 3, "");

#include BOOST_PP_UPDATE_COUNTER()
#include BOOST_PP_UPDATE_COUNTER()
#include BOOST_PP_UPDATE_COUNTER()

static_assert(BOOST_PP_COUNTER == 6, "");

#include BOOST_PP_UPDATE_COUNTER()
#include BOOST_PP_UPDATE_COUNTER()
#include BOOST_PP_UPDATE_COUNTER()
#include BOOST_PP_UPDATE_COUNTER()
#include BOOST_PP_UPDATE_COUNTER()

static_assert(BOOST_PP_COUNTER == 11, "");
