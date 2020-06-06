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
# ifndef BOOST_PREPROCESSOR_ARITHMETIC_DETAIL_IS_MAXIMUM_NUMBER_256_HPP
# define BOOST_PREPROCESSOR_ARITHMETIC_DETAIL_IS_MAXIMUM_NUMBER_256_HPP
#
# include <boost/preprocessor/cat.hpp>
# include <boost/preprocessor/facilities/is_empty.hpp>
#
# define BOOST_PP_DETAIL_IS_MAXIMUM_NUMBER(x) BOOST_PP_IS_EMPTY(BOOST_PP_CAT(BOOST_PP_IS_256_HELPER_, x))
# define BOOST_PP_IS_256_HELPER_256
#
# endif
