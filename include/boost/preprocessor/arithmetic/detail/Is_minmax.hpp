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
# ifndef BOOST_PREPROCESSOR_ARITHMETIC_DETAIL_IS_MINMAX_NUMBER_HPP
# define BOOST_PREPROCESSOR_ARITHMETIC_DETAIL_IS_MINMAX_NUMBER_HPP
#
# /* BOOST_PP_DETAIL_IS_MINMAX_NUMBER */
#
# include <boost/preprocessor/arithmetic/detail/is_minimum_number.hpp>
# include <boost/preprocessor/arithmetic/detail/is_maximum_number.hpp>
#
# define BOOST_PP_DETAIL_IS_MINMAX_NUMBER(x) (BOOST_PP_DETAIL_IS_MINIMUM_NUMBER(x),BOOST_PP_DETAIL_IS_MAXIMUM_NUMBER(x))
#
# endif
