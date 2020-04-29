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
#
# /* See http://www.boost.org for most recent version. */
#
# ifndef BOOST_PREPROCESSOR_CONTROL_WHILE_HPP
# define BOOST_PREPROCESSOR_CONTROL_WHILE_HPP
#
# /* BOOST_PP_WHILE */
#
# include <boost/preprocessor/config/limits.hpp>
#
# if BOOST_PP_LIMIT_WHILE == 256
# include <boost/preprocessor/control/while_256.hpp>
# elif BOOST_PP_LIMIT_MAG == 512
# include <boost/preprocessor/control/while_512.hpp>
# else
# error Incorrect value for the BOOST_PP_LIMIT_WHILE limit
# endif
#
# endif
