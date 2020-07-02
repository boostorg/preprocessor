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
# include <boost/preprocessor/cat.hpp>
# include <boost/preprocessor/config/config.hpp>
# include <boost/preprocessor/facilities/expand.hpp>
# include <boost/preprocessor/facilities/overload.hpp>
# include <boost/preprocessor/tuple/rem.hpp>
# include <boost/preprocessor/variadic/elem.hpp>
# include <boost/preprocessor/tuple/detail/is_single_return.hpp>
#
# if BOOST_PP_VARIADICS
#    if BOOST_PP_VARIADICS_MSVC
#        define BOOST_PP_TUPLE_ELEM(...) BOOST_PP_TUPLE_ELEM_I(BOOST_PP_OVERLOAD(BOOST_PP_TUPLE_ELEM_O_, __VA_ARGS__), (__VA_ARGS__))
#        define BOOST_PP_TUPLE_ELEM_I(m, args) BOOST_PP_TUPLE_ELEM_II(m, args)
#        define BOOST_PP_TUPLE_ELEM_II(m, args) BOOST_PP_CAT(m ## args,)
/*
  Use BOOST_PP_REM_CAT if it is a single element tuple ( which might be empty )
  else use BOOST_PP_REM. This fixes a VC++ problem with an empty tuple and BOOST_PP_TUPLE_ELEM
  functionality. See tuple_elem_bug_test.cxx.
*/
#        define BOOST_PP_TUPLE_ELEM_O_2(n, tuple) \
            BOOST_PP_VARIADIC_ELEM(n, BOOST_PP_EXPAND(BOOST_PP_TUPLE_IS_SINGLE_RETURN(BOOST_PP_REM_CAT,BOOST_PP_REM,tuple) tuple)) \
            /**/
#    else
#        define BOOST_PP_TUPLE_ELEM(...) BOOST_PP_OVERLOAD(BOOST_PP_TUPLE_ELEM_O_, __VA_ARGS__)(__VA_ARGS__)
#        define BOOST_PP_TUPLE_ELEM_O_2(n, tuple) BOOST_PP_VARIADIC_ELEM(n, BOOST_PP_REM tuple)
#    endif
#    define BOOST_PP_TUPLE_ELEM_O_3(size, n, tuple) BOOST_PP_TUPLE_ELEM_O_2(n, tuple)
# else
#    if BOOST_PP_CONFIG_FLAGS() & BOOST_PP_CONFIG_MSVC()
#        define BOOST_PP_TUPLE_ELEM(size, n, tuple) BOOST_PP_TUPLE_ELEM_I(BOOST_PP_CAT(BOOST_PP_TUPLE_ELEM_, n), BOOST_PP_CAT(BOOST_PP_CAT(BOOST_PP_TUPLE_ELEM_E_, size), tuple))
#        define BOOST_PP_TUPLE_ELEM_I(m, args) BOOST_PP_TUPLE_ELEM_II(m, args)
#        define BOOST_PP_TUPLE_ELEM_II(m, args) BOOST_PP_CAT(m ## args,)
#    elif BOOST_PP_CONFIG_FLAGS() & BOOST_PP_CONFIG_MWCC()
#        define BOOST_PP_TUPLE_ELEM(size, n, tuple) BOOST_PP_TUPLE_ELEM_I_OO((size, n, tuple))
#        define BOOST_PP_TUPLE_ELEM_I_OO(par) BOOST_PP_TUPLE_ELEM_I ## par
#        define BOOST_PP_TUPLE_ELEM_I(size, n, tuple) BOOST_PP_TUPLE_ELEM_II((n, BOOST_PP_TUPLE_ELEM_E_ ## size ## tuple))
#        define BOOST_PP_TUPLE_ELEM_II(par) BOOST_PP_TUPLE_ELEM_III_OO(par)
#        define BOOST_PP_TUPLE_ELEM_III_OO(par) BOOST_PP_TUPLE_ELEM_III ## par
#        define BOOST_PP_TUPLE_ELEM_III(n, etuple) BOOST_PP_TUPLE_ELEM_ ## n ## etuple
#    else
#        define BOOST_PP_TUPLE_ELEM(size, n, tuple) BOOST_PP_TUPLE_ELEM_I(BOOST_PP_CAT(BOOST_PP_TUPLE_ELEM_, n) BOOST_PP_CAT(BOOST_PP_TUPLE_ELEM_E_, size) tuple)
#        define BOOST_PP_TUPLE_ELEM_I(x) x
#    endif
#
#    include <boost/preprocessor/config/limits.hpp>
#    
#    if BOOST_PP_LIMIT_TUPLE == 64
#    include <boost/preprocessor/tuple/limits/elem_64.hpp>
#    elif BOOST_PP_LIMIT_TUPLE == 128
#    include <boost/preprocessor/tuple/limits/elem_64.hpp>
#    include <boost/preprocessor/tuple/limits/elem_128.hpp>
#    elif BOOST_PP_LIMIT_TUPLE == 256
#    include <boost/preprocessor/tuple/limits/elem_64.hpp>
#    include <boost/preprocessor/tuple/limits/elem_128.hpp>
#    include <boost/preprocessor/tuple/limits/elem_256.hpp>
#    else
#    error Incorrect value for the BOOST_PP_LIMIT_TUPLE limit
#    endif
#
# endif
#
# /* directly used elsewhere in Boost... */
#
# define BOOST_PP_TUPLE_ELEM_1_0(a) a
#
# define BOOST_PP_TUPLE_ELEM_2_0(a, b) a
# define BOOST_PP_TUPLE_ELEM_2_1(a, b) b
#
# define BOOST_PP_TUPLE_ELEM_3_0(a, b, c) a
# define BOOST_PP_TUPLE_ELEM_3_1(a, b, c) b
# define BOOST_PP_TUPLE_ELEM_3_2(a, b, c) c
#
# endif
