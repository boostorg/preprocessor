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
# /* Revised by Edward Diener (2011,2020) */
#
# /* See http://www.boost.org for most recent version. */
#
# ifndef BOOST_PREPROCESSOR_TUPLE_REVERSE_HPP
# define BOOST_PREPROCESSOR_TUPLE_REVERSE_HPP
#
# include <boost/preprocessor/cat.hpp>
# include <boost/preprocessor/config/config.hpp>
# include <boost/preprocessor/facilities/overload.hpp>
# include <boost/preprocessor/tuple/size.hpp>
# include <boost/preprocessor/variadic/size.hpp>
#
# /* BOOST_PP_TUPLE_REVERSE */
#
# if BOOST_PP_VARIADICS
#    if BOOST_PP_VARIADICS_MSVC
#        define BOOST_PP_TUPLE_REVERSE(...) BOOST_PP_TUPLE_REVERSE_I(BOOST_PP_OVERLOAD(BOOST_PP_TUPLE_REVERSE_O_, __VA_ARGS__), (__VA_ARGS__))
#        define BOOST_PP_TUPLE_REVERSE_I(m, args) BOOST_PP_TUPLE_REVERSE_II(m, args)
#        define BOOST_PP_TUPLE_REVERSE_II(m, args) BOOST_PP_CAT(m ## args,)
#        define BOOST_PP_TUPLE_REVERSE_O_1(tuple) BOOST_PP_CAT(BOOST_PP_TUPLE_REVERSE_, BOOST_PP_TUPLE_SIZE(tuple)) tuple
#    else
#        define BOOST_PP_TUPLE_REVERSE(...) BOOST_PP_OVERLOAD(BOOST_PP_TUPLE_REVERSE_O_, __VA_ARGS__)(__VA_ARGS__)
#        define BOOST_PP_TUPLE_REVERSE_O_1(tuple) BOOST_PP_CAT(BOOST_PP_TUPLE_REVERSE_, BOOST_PP_VARIADIC_SIZE tuple) tuple
#    endif
#    define BOOST_PP_TUPLE_REVERSE_O_2(size, tuple) BOOST_PP_TUPLE_REVERSE_O_1(tuple)
# else
#    if ~BOOST_PP_CONFIG_FLAGS() & BOOST_PP_CONFIG_MWCC()
#        define BOOST_PP_TUPLE_REVERSE(size, tuple) BOOST_PP_TUPLE_REVERSE_I(size, tuple)
#        if ~BOOST_PP_CONFIG_FLAGS() & BOOST_PP_CONFIG_MSVC()
#            define BOOST_PP_TUPLE_REVERSE_I(s, t) BOOST_PP_TUPLE_REVERSE_ ## s t
#        else
#            define BOOST_PP_TUPLE_REVERSE_I(s, t) BOOST_PP_TUPLE_REVERSE_II(BOOST_PP_TUPLE_REVERSE_ ## s t)
#            define BOOST_PP_TUPLE_REVERSE_II(res) res
#        endif
#    else
#        define BOOST_PP_TUPLE_REVERSE(size, tuple) BOOST_PP_TUPLE_REVERSE_OO((size, tuple))
#        define BOOST_PP_TUPLE_REVERSE_OO(par) BOOST_PP_TUPLE_REVERSE_I ## par
#        define BOOST_PP_TUPLE_REVERSE_I(s, t) BOOST_PP_TUPLE_REVERSE_ ## s ## t
#    endif
# endif
#
# include <boost/preprocessor/config/limits.hpp>
#
# if BOOST_PP_LIMIT_TUPLE == 64
# include <boost/preprocessor/tuple/limits/reverse_64.hpp>
# elif BOOST_PP_LIMIT_TUPLE == 128
# include <boost/preprocessor/tuple/limits/reverse_64.hpp>
# include <boost/preprocessor/tuple/limits/reverse_128.hpp>
# elif BOOST_PP_LIMIT_TUPLE == 256
# include <boost/preprocessor/tuple/limits/reverse_64.hpp>
# include <boost/preprocessor/tuple/limits/reverse_128.hpp>
# include <boost/preprocessor/tuple/limits/reverse_256.hpp>
# else
# error Incorrect value for the BOOST_PP_LIMIT_TUPLE limit
# endif
#
# endif
