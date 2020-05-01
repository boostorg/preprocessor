# /* **************************************************************************
#  *                                                                          *
#  *     (C) Copyright Paul Mensonides 2002-2011.                             *
#  *     (C) Copyright Edward Diener 2011,2013.                               *
#  *     Distributed under the Boost Software License, Version 1.0. (See      *
#  *     accompanying file LICENSE_1_0.txt or copy at                         *
#  *     http://www.boost.org/LICENSE_1_0.txt)                                *
#  *                                                                          *
#  ************************************************************************** */
#
# /* Revised by Edward Diener (2020) */
#
# /* See http://www.boost.org for most recent version. */
#
# ifndef BOOST_PREPROCESSOR_TUPLE_REM_HPP
# define BOOST_PREPROCESSOR_TUPLE_REM_HPP
#
# include <boost/preprocessor/config/limits.hpp>
#
# if BOOST_PP_LIMIT_TUPLE == 64
# include <boost/preprocessor/tuple/limits/rem_64.hpp>
# elif BOOST_PP_LIMIT_TUPLE == 128
# include <boost/preprocessor/tuple/limits/rem_128.hpp>
# elif BOOST_PP_LIMIT_TUPLE == 256
# include <boost/preprocessor/tuple/limits/rem_256.hpp>
# else
# error Incorrect value for the BOOST_PP_LIMIT_TUPLE limit
# endif
#
# endif
