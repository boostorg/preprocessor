# /* **************************************************************************
#  *                                                                          *
#  *     (C) Copyright Paul Mensonides 2002.
#  *     Distributed under the Boost Software License, Version 1.0. (See
#  *     accompanying file LICENSE_1_0.txt or copy at
#  *     http://www.boost.org/LICENSE_1_0.txt)
#  *                                                                          *
#  ************************************************************************** */
#
# /* Revised by Edward Diener (2020) */
#
# /* See http://www.boost.org for most recent version. */
#
# ifndef BOOST_PREPROCESSOR_SEQ_DETAIL_SPLIT_HPP
# define BOOST_PREPROCESSOR_SEQ_DETAIL_SPLIT_HPP
#
# /* BOOST_PP_SEQ_SPLIT */
#
# include <boost/preprocessor/config/limits.hpp>
#
# if BOOST_PP_LIMIT_SEQ == 256
# include <boost/preprocessor/seq/detail/limits/split_256.hpp>
# elif BOOST_PP_LIMIT_SEQ == 512
# include <boost/preprocessor/seq/detail/limits/split_512.hpp>
# else
# error Incorrect value for the BOOST_PP_LIMIT_SEQ limit
# endif
#
# endif
