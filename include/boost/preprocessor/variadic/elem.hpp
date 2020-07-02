# /* **************************************************************************
#  *                                                                          *
#  *     (C) Copyright Edward Diener 2011.                                    *
#  *     (C) Copyright Paul Mensonides 2011.                                  *
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
# ifndef BOOST_PREPROCESSOR_VARIADIC_ELEM_HPP
# define BOOST_PREPROCESSOR_VARIADIC_ELEM_HPP
#
# include <boost/preprocessor/cat.hpp>
# include <boost/preprocessor/config/config.hpp>
#
# /* BOOST_PP_VARIADIC_ELEM */
#
# if BOOST_PP_VARIADICS
#    if BOOST_PP_VARIADICS_MSVC
#        define BOOST_PP_VARIADIC_ELEM(n, ...) BOOST_PP_VARIADIC_ELEM_I(n,__VA_ARGS__)
#        define BOOST_PP_VARIADIC_ELEM_I(n, ...) BOOST_PP_CAT(BOOST_PP_CAT(BOOST_PP_VARIADIC_ELEM_, n)(__VA_ARGS__,),)
#    else
#        define BOOST_PP_VARIADIC_ELEM(n, ...) BOOST_PP_CAT(BOOST_PP_VARIADIC_ELEM_, n)(__VA_ARGS__,)
#    endif
#
#    include <boost/preprocessor/config/limits.hpp>
#   
#    if BOOST_PP_LIMIT_VARIADIC == 64
#    include <boost/preprocessor/variadic/limits/elem_64.hpp>
#    elif BOOST_PP_LIMIT_VARIADIC == 128
#    include <boost/preprocessor/variadic/limits/elem_64.hpp>
#    include <boost/preprocessor/variadic/limits/elem_128.hpp>
#    elif BOOST_PP_LIMIT_VARIADIC == 256
#    include <boost/preprocessor/variadic/limits/elem_64.hpp>
#    include <boost/preprocessor/variadic/limits/elem_128.hpp>
#    include <boost/preprocessor/variadic/limits/elem_256.hpp>
#    else
#    error Incorrect value for the BOOST_PP_LIMIT_TUPLE limit
#    endif
#
# endif
#
# endif
