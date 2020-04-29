# /* **************************************************************************
#  *                                                                          *
#  *     (C) Copyright Paul Mensonides 2002.
#  *     Distributed under the Boost Software License, Version 1.0. (See
#  *     accompanying file LICENSE_1_0.txt or copy at
#  *     http://www.boost.org/LICENSE_1_0.txt)
#  *                                                                          *
#  ************************************************************************** */
#
# /* See http://www.boost.org for most recent version. */
#
# ifndef BOOST_PREPROCESSOR_DETAIL_DMC_AUTO_REC_HPP
# define BOOST_PREPROCESSOR_DETAIL_DMC_AUTO_REC_HPP
#
# /* BOOST_PP_AUTO_REC */
#
# include <boost/preprocessor/config/limits.hpp>
#
# if BOOST_PP_LIMIT_WHILE == 256
# include <boost/preprocessor/control/detail/dmc/auto_rec_256.hpp>
# elif BOOST_PP_LIMIT_WHILE == 512
# include <boost/preprocessor/control/detail/dmc/auto_rec_512.hpp>
# else
# error Incorrect value for the BOOST_PP_LIMIT_WHILE limit
# endif
#
# endif
