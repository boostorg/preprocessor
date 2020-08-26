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
# ifndef BOOST_PREPROCESSOR_VARIADIC_SIZE_HPP
# define BOOST_PREPROCESSOR_VARIADIC_SIZE_HPP
#
# include <boost/preprocessor/cat.hpp>
# include <boost/preprocessor/config/config.hpp>
# include <boost/preprocessor/control/iif.hpp>
# include <boost/preprocessor/facilities/check_empty.hpp>
#
# /* BOOST_PP_VARIADIC_SIZE */
#
# if BOOST_PP_VARIADICS
#
#    if BOOST_PP_VARIADIC_HAS_OPT()
#       define BOOST_PP_VARIADIC_SIZE_EMPTY(...) 0
#       define BOOST_PP_VARIADIC_SIZE(...) BOOST_PP_IIF(BOOST_PP_CHECK_EMPTY(__VA_ARGS__),BOOST_PP_VARIADIC_SIZE_EMPTY,BOOST_PP_VARIADIC_DO_SIZE)(__VA_ARGS__)
#    else
#       define BOOST_PP_VARIADIC_SIZE(...) BOOST_PP_VARIADIC_DO_SIZE(__VA_ARGS__)
#    endif
#
# include <boost/preprocessor/config/limits.hpp>
#
# if BOOST_PP_LIMIT_VARIADIC == 64
# include <boost/preprocessor/variadic/limits/size_64.hpp>
# elif BOOST_PP_LIMIT_VARIADIC == 128
# include <boost/preprocessor/variadic/limits/size_128.hpp>
# elif BOOST_PP_LIMIT_VARIADIC == 256
# include <boost/preprocessor/variadic/limits/size_256.hpp>
# else
# error Incorrect value for the BOOST_PP_LIMIT_TUPLE limit
# endif
#
# endif
#
# endif
