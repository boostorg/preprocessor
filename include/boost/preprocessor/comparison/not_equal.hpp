# /* Copyright (C) 2001
#  * Housemarque Oy
#  * http://www.housemarque.com
#  *
#  * Distributed under the Boost Software License, Version 1.0. (See
#  * accompanying file LICENSE_1_0.txt or copy at
#  * http://www.boost.org/LICENSE_1_0.txt)
#  */
#
# /* Revised by Paul Mensonides (2002) */
# /* Revised by Edward Diener (2020) */
#
# /* See http://www.boost.org for most recent version. */
#
# ifndef BOOST_PREPROCESSOR_COMPARISON_NOT_EQUAL_HPP
# define BOOST_PREPROCESSOR_COMPARISON_NOT_EQUAL_HPP
#
# include <boost/preprocessor/cat.hpp>
# include <boost/preprocessor/config/config.hpp>
# include <boost/preprocessor/control/iif.hpp>
#
# /* BOOST_PP_NOT_EQUAL */
#
# if ~BOOST_PP_CONFIG_FLAGS() & BOOST_PP_CONFIG_MWCC()
#    define BOOST_PP_NOT_EQUAL(x, y) BOOST_PP_NOT_EQUAL_I(x, y)
# else
#    define BOOST_PP_NOT_EQUAL(x, y) BOOST_PP_NOT_EQUAL_OO((x, y))
#    define BOOST_PP_NOT_EQUAL_OO(par) BOOST_PP_NOT_EQUAL_I ## par
# endif
#
# define BOOST_PP_NOT_EQUAL_I(x, y) BOOST_PP_CAT(BOOST_PP_NOT_EQUAL_CHECK_, BOOST_PP_NOT_EQUAL_ ## x(0, BOOST_PP_NOT_EQUAL_ ## y))
#
# /* BOOST_PP_NOT_EQUAL_D */
#
# define BOOST_PP_NOT_EQUAL_D(d, x, y) BOOST_PP_NOT_EQUAL(x, y)
#
# define BOOST_PP_NOT_EQUAL_CHECK_BOOST_PP_NIL 1
#
# include <boost/preprocessor/config/limits.hpp>
#
# if BOOST_PP_LIMIT_MAG == 256
# include <boost/preprocessor/comparison/limits/not_equal_256.hpp>
# elif BOOST_PP_LIMIT_MAG == 512
# include <boost/preprocessor/comparison/limits/not_equal_256.hpp>
# include <boost/preprocessor/comparison/limits/not_equal_512.hpp>
# else
# error Incorrect value for the BOOST_PP_LIMIT_MAG limit
# endif
#
# endif
