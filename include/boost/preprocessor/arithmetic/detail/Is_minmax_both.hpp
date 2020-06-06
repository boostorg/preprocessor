# /* **************************************************************************
#  *                                                                          *
#  *     (C) Copyright Edward Diener 2020.                                    *
#  *     Distributed under the Boost Software License, Version 1.0. (See      *
#  *     accompanying file LICENSE_1_0.txt or copy at                         *
#  *     http://www.boost.org/LICENSE_1_0.txt)                                *
#  *                                                                          *
#  ************************************************************************** */
#
# /* See http://www.boost.org for most recent version. */
#
# ifndef BOOST_PREPROCESSOR_ARITHMETIC_DETAIL_IS_MINMAX_BOTH_NUMBER_HPP
# define BOOST_PREPROCESSOR_ARITHMETIC_DETAIL_IS_MINMAX_BOTH_NUMBER_HPP
#
# /* BOOST_PP_DETAIL_IS_MINMAX_BOTH_NUMBER */
#
# include <boost/preprocessor/arithmetic/detail/is_minmax.hpp>
#
# define BOOST_PP_DETAIL_IS_MINMAX_BOTH_NUMBER(x,y) (BOOST_PP_DETAIL_IS_MINMAX_NUMBER(x),BOOST_PP_DETAIL_IS_MINMAX_NUMBER(y))
#
# endif
