# /* **************************************************************************
#  *                                                                          *
#  *     (C) Copyright Edward Diener 2019.                                    *
#  *     Distributed under the Boost Software License, Version 1.0. (See      *
#  *     accompanying file LICENSE_1_0.txt or copy at                         *
#  *     http://www.boost.org/LICENSE_1_0.txt)                                *
#  *                                                                          *
#  ************************************************************************** */
#
# /* See http://www.boost.org for most recent version. */
#
# ifndef BOOST_PREPROCESSOR_VARIADIC_DETAIL_OPT_HPP
# define BOOST_PREPROCESSOR_VARIADIC_DETAIL_OPT_HPP
#
# include <boost/preprocessor/config/config.hpp>
#
# if BOOST_PP_VARIADICS && defined(__cplusplus) && __cplusplus > 201703L
#
# define BOOST_PP_VARIADIC_OPT_FUNCTION(...) \
    __VA_OPT__(,) , 1, 0 \
/**/
#
# define BOOST_PP_VARIADIC_OPT_ELEM0(e0, ...) BOOST_PP_VARIADIC_OPT_ELEM_0(e0,__VA_ARGS__)
# define BOOST_PP_VARIADIC_OPT_ELEM2(e0, ...) BOOST_PP_VARIADIC_OPT_ELEM_2(e0,__VA_ARGS__)
# define BOOST_PP_VARIADIC_OPT_ELEM_0(e0, ...) e0
# define BOOST_PP_VARIADIC_OPT_ELEM_2(e0, e1, e2, ...) e2
#
# endif
#
# endif
