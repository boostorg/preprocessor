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
# /* BOOST_PP_NOT_EQUAL */
#
# include <boost/preprocessor/config/limits.hpp>
#
# if BOOST_PP_LIMIT_MAG == 256
# include <boost/preprocessor/comparison/not_equal_256.hpp>
# elif BOOST_PP_LIMIT_MAG == 512
# include <boost/preprocessor/comparison/not_equal_512.hpp>
# else
# error Incorrect value for the BOOST_PP_LIMIT_MAG limit
# endif
#
# endif
