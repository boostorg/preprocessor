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
# include <boost/preprocessor/cat.hpp>
# include <boost/preprocessor/config/config.hpp>
# include <boost/preprocessor/facilities/expand.hpp>
# include <boost/preprocessor/facilities/overload.hpp>
# include <boost/preprocessor/tuple/detail/is_single_return.hpp>
#
# /* BOOST_PP_REM */
#
# if BOOST_PP_VARIADICS
#    if BOOST_PP_VARIADICS_MSVC
        /* To be used internally when __VA_ARGS__ could be empty ( or is a single element ) */
#       define BOOST_PP_REM_CAT(...) BOOST_PP_CAT(__VA_ARGS__,)
#    endif
#    define BOOST_PP_REM(...) __VA_ARGS__
# else
#    define BOOST_PP_REM(x) x
# endif
#
# /* BOOST_PP_TUPLE_REM */
#
/*
  VC++8.0 cannot handle the variadic version of BOOST_PP_TUPLE_REM(size)
*/
# if BOOST_PP_VARIADICS && !(BOOST_PP_VARIADICS_MSVC && _MSC_VER <= 1400)
#    if BOOST_PP_VARIADICS_MSVC
        /* To be used internally when the size could be 0 ( or 1 ) */
#       define BOOST_PP_TUPLE_REM_CAT(size) BOOST_PP_REM_CAT
#    endif
#    define BOOST_PP_TUPLE_REM(size) BOOST_PP_REM
# else
#    if ~BOOST_PP_CONFIG_FLAGS() & BOOST_PP_CONFIG_MWCC()
#        define BOOST_PP_TUPLE_REM(size) BOOST_PP_TUPLE_REM_I(size)
#    else
#        define BOOST_PP_TUPLE_REM(size) BOOST_PP_TUPLE_REM_OO((size))
#        define BOOST_PP_TUPLE_REM_OO(par) BOOST_PP_TUPLE_REM_I ## par
#    endif
#    define BOOST_PP_TUPLE_REM_I(size) BOOST_PP_TUPLE_REM_ ## size
# endif
#
# include <boost/preprocessor/config/limits.hpp>
#
# if BOOST_PP_LIMIT_TUPLE == 64
# include <boost/preprocessor/tuple/limits/rem_64.hpp>
# elif BOOST_PP_LIMIT_TUPLE == 128
# include <boost/preprocessor/tuple/limits/rem_64.hpp>
# include <boost/preprocessor/tuple/limits/rem_128.hpp>
# elif BOOST_PP_LIMIT_TUPLE == 256
# include <boost/preprocessor/tuple/limits/rem_64.hpp>
# include <boost/preprocessor/tuple/limits/rem_128.hpp>
# include <boost/preprocessor/tuple/limits/rem_256.hpp>
# else
# error Incorrect value for the BOOST_PP_LIMIT_TUPLE limit
# endif
#
# /* BOOST_PP_TUPLE_REM_CTOR */
#
# if BOOST_PP_VARIADICS
#    if BOOST_PP_VARIADICS_MSVC
#        define BOOST_PP_TUPLE_REM_CTOR(...) BOOST_PP_TUPLE_REM_CTOR_I(BOOST_PP_OVERLOAD(BOOST_PP_TUPLE_REM_CTOR_O_, __VA_ARGS__), (__VA_ARGS__))
#        define BOOST_PP_TUPLE_REM_CTOR_I(m, args) BOOST_PP_TUPLE_REM_CTOR_II(m, args)
#        define BOOST_PP_TUPLE_REM_CTOR_II(m, args) BOOST_PP_CAT(m ## args,)
#        define BOOST_PP_TUPLE_REM_CTOR_O_1(tuple) BOOST_PP_EXPAND(BOOST_PP_TUPLE_IS_SINGLE_RETURN(BOOST_PP_REM_CAT,BOOST_PP_REM,tuple) tuple)
#    else
#        define BOOST_PP_TUPLE_REM_CTOR(...) BOOST_PP_OVERLOAD(BOOST_PP_TUPLE_REM_CTOR_O_, __VA_ARGS__)(__VA_ARGS__)
#        define BOOST_PP_TUPLE_REM_CTOR_O_1(tuple) BOOST_PP_REM tuple
#    endif
#    define BOOST_PP_TUPLE_REM_CTOR_O_2(size, tuple) BOOST_PP_TUPLE_REM_CTOR_O_1(tuple)
# else
#    if ~BOOST_PP_CONFIG_FLAGS() & BOOST_PP_CONFIG_EDG()
#        define BOOST_PP_TUPLE_REM_CTOR(size, tuple) BOOST_PP_TUPLE_REM_CTOR_I(BOOST_PP_TUPLE_REM(size), tuple)
#    else
#        define BOOST_PP_TUPLE_REM_CTOR(size, tuple) BOOST_PP_TUPLE_REM_CTOR_D(size, tuple)
#        define BOOST_PP_TUPLE_REM_CTOR_D(size, tuple) BOOST_PP_TUPLE_REM_CTOR_I(BOOST_PP_TUPLE_REM(size), tuple)
#    endif
#    if ~BOOST_PP_CONFIG_FLAGS() & BOOST_PP_CONFIG_MWCC()
#        define BOOST_PP_TUPLE_REM_CTOR_I(ext, tuple) ext tuple
#    else
#        define BOOST_PP_TUPLE_REM_CTOR_I(ext, tuple) BOOST_PP_TUPLE_REM_CTOR_OO((ext, tuple))
#        define BOOST_PP_TUPLE_REM_CTOR_OO(par) BOOST_PP_TUPLE_REM_CTOR_II ## par
#        define BOOST_PP_TUPLE_REM_CTOR_II(ext, tuple) ext ## tuple
#    endif
# endif
#
# endif
