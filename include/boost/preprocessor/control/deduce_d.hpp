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
# ifndef BOOST_PREPROCESSOR_CONTROL_DEDUCE_D_HPP
# define BOOST_PREPROCESSOR_CONTROL_DEDUCE_D_HPP
#
# /* BOOST_PP_DEDUCE_D */
#
# include <boost/preprocessor/config/limits.hpp>
#
# if BOOST_PP_LIMIT_WHILE == 256
# include <boost/preprocessor/control/deduce_d_256.hpp>
# elif BOOST_PP_LIMIT_WHILE == 512
# include <boost/preprocessor/control/deduce_d_512.hpp>
# else
# error Incorrect value for the BOOST_PP_LIMIT_WHILE limit
# endif
#
# endif
