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
# ifndef BOOST_PREPROCESSOR_DETAIL_AUTO_REC_HPP
# define BOOST_PREPROCESSOR_DETAIL_AUTO_REC_HPP
#
# include <boost/preprocessor/config/config.hpp>
#
# if BOOST_PP_CONFIG_FLAGS() & BOOST_PP_CONFIG_DMC()
#     include <boost/preprocessor/detail/dmc/auto_rec.hpp>
# else
#
# /* BOOST_PP_AUTO_REC */
#
# include <boost/preprocessor/control/iif.hpp>
#
# define BOOST_PP_AUTO_REC(pred, n) BOOST_PP_NODE_ENTRY_ ## n(pred)
#
# include <boost/preprocessor/config/limits.hpp>
#
# if BOOST_PP_LIMIT_MAG == 256
# include <boost/preprocessor/detail/limits/auto_rec_256.hpp>
# elif BOOST_PP_LIMIT_MAG == 512
# include <boost/preprocessor/detail/limits/auto_rec_256.hpp>
# include <boost/preprocessor/detail/limits/auto_rec_512.hpp>
# else
# error Incorrect value for the BOOST_PP_LIMIT_MAG limit
# endif
#
# endif
# endif
