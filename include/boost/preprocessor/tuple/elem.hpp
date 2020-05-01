# /* Copyright (C) 2001
#  * Housemarque Oy
#  * http://www.housemarque.com
#  *
#  * Distributed under the Boost Software License, Version 1.0. (See
#  * accompanying file LICENSE_1_0.txt or copy at
#  * http://www.boost.org/LICENSE_1_0.txt)
#  */
#
# /* Revised by Paul Mensonides (2002-2011) */
# /* Revised by Edward Diener (2011,2014,2020) */
#
# /* See http://www.boost.org for most recent version. */
#
# ifndef BOOST_PREPROCESSOR_TUPLE_ELEM_HPP
# define BOOST_PREPROCESSOR_TUPLE_ELEM_HPP
#
# include <boost/preprocessor/config/limits.hpp>
#
# if BOOST_PP_LIMIT_TUPLE == 64
# include <boost/preprocessor/tuple/limits/elem_64.hpp>
# elif BOOST_PP_LIMIT_TUPLE == 128
# include <boost/preprocessor/tuple/limits/elem_128.hpp>
# elif BOOST_PP_LIMIT_TUPLE == 256
# include <boost/preprocessor/tuple/limits/elem_256.hpp>
# else
# error Incorrect value for the BOOST_PP_LIMIT_TUPLE limit
# endif
#
# endif
