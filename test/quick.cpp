// Copyright 2002 Paul Mensonides
// Copyright 2019 Peter Dimov
// Distributed under the Boost Software License, Version 1.0.
// https://www.boost.org/LICENSE_1_0.txt

#include <boost/preprocessor/comparison.hpp>

/* equality */

static_assert(BOOST_PP_EQUAL(2, 0) == 0, "");
static_assert(BOOST_PP_EQUAL(2, 2) == 1, "");

/* inequality */

static_assert(BOOST_PP_NOT_EQUAL(2, 0) == 1, "");
static_assert(BOOST_PP_NOT_EQUAL(2, 2) == 0, "");

/* less */

static_assert(BOOST_PP_LESS(2, 1) == 0, "");
static_assert(BOOST_PP_LESS(1, 2) == 1, "");

/* less_equal */

static_assert(BOOST_PP_LESS_EQUAL(2, 1) == 0, "");
static_assert(BOOST_PP_LESS_EQUAL(1, 2) == 1, "");
static_assert(BOOST_PP_LESS_EQUAL(2, 2) == 1, "");

/* greater */

static_assert(BOOST_PP_GREATER(2, 1) == 1, "");
static_assert(BOOST_PP_GREATER(1, 2) == 0, "");

/* greater_equal */

static_assert(BOOST_PP_GREATER_EQUAL(2, 1) == 1, "");
static_assert(BOOST_PP_GREATER_EQUAL(1, 2) == 0, "");
static_assert(BOOST_PP_GREATER_EQUAL(2, 2) == 1, "");

int main()
{
}
