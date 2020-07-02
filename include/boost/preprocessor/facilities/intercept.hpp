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
# ifndef BOOST_PREPROCESSOR_FACILITIES_INTERCEPT_HPP
# define BOOST_PREPROCESSOR_FACILITIES_INTERCEPT_HPP
#
# /* BOOST_PP_INTERCEPT */
#
# define BOOST_PP_INTERCEPT BOOST_PP_INTERCEPT_
#
# include <boost/preprocessor/config/limits.hpp>
#
# if BOOST_PP_LIMIT_MAG == 256
# include <boost/preprocessor/facilities/limits/intercept_256.hpp>
# elif BOOST_PP_LIMIT_MAG == 512
# include <boost/preprocessor/facilities/limits/intercept_256.hpp>
# include <boost/preprocessor/facilities/limits/intercept_512.hpp>
# else
# error Incorrect value for the BOOST_PP_LIMIT_MAG limit
# endif
#
# endif
