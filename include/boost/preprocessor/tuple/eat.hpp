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
# /* Revised by Edward Diener (2011,2015,2020) */
#
# /* See http://www.boost.org for most recent version. */
#
# ifndef BOOST_PREPROCESSOR_TUPLE_EAT_HPP
# define BOOST_PREPROCESSOR_TUPLE_EAT_HPP
#
# include <boost/preprocessor/config/config.hpp>
#
# /* BOOST_PP_EAT */
#
# if BOOST_PP_VARIADICS
#    define BOOST_PP_EAT(...)
# else
#    define BOOST_PP_EAT(x)
# endif
#
# /* BOOST_PP_TUPLE_EAT */
#
# if BOOST_PP_VARIADICS
#    define BOOST_PP_TUPLE_EAT(size) BOOST_PP_EAT
# else
#    if ~BOOST_PP_CONFIG_FLAGS() & BOOST_PP_CONFIG_MWCC()
#        define BOOST_PP_TUPLE_EAT(size) BOOST_PP_TUPLE_EAT_I(size)
#    else
#        define BOOST_PP_TUPLE_EAT(size) BOOST_PP_TUPLE_EAT_OO((size))
#        define BOOST_PP_TUPLE_EAT_OO(par) BOOST_PP_TUPLE_EAT_I ## par
#    endif
#    define BOOST_PP_TUPLE_EAT_I(size) BOOST_PP_TUPLE_EAT_ ## size
# endif
#
# if ~BOOST_PP_CONFIG_FLAGS() & BOOST_PP_CONFIG_MWCC()
#     define BOOST_PP_TUPLE_EAT_N(size) BOOST_PP_TUPLE_EAT_N_I(size)
# else
#     define BOOST_PP_TUPLE_EAT_N(size) BOOST_PP_TUPLE_EAT_N_OO((size))
#     define BOOST_PP_TUPLE_EAT_N_OO(par) BOOST_PP_TUPLE_EAT_N_I ## par
# endif
# define BOOST_PP_TUPLE_EAT_N_I(size) BOOST_PP_TUPLE_EAT_ ## size
#
# include <boost/preprocessor/config/limits.hpp>
#
# if BOOST_PP_LIMIT_TUPLE == 64
# include <boost/preprocessor/tuple/limits/eat_64.hpp>
# elif BOOST_PP_LIMIT_TUPLE == 128
# include <boost/preprocessor/tuple/limits/eat_64.hpp>
# include <boost/preprocessor/tuple/limits/eat_128.hpp>
# elif BOOST_PP_LIMIT_TUPLE == 256
# include <boost/preprocessor/tuple/limits/eat_64.hpp>
# include <boost/preprocessor/tuple/limits/eat_128.hpp>
# include <boost/preprocessor/tuple/limits/eat_256.hpp>
# else
# error Incorrect value for the BOOST_PP_LIMIT_TUPLE limit
# endif
#
# endif
