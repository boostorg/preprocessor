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
# include <boost/preprocessor/config/limits.hpp>
#
# if BOOST_PP_LIMIT_ITERATION == 256
# include <boost/preprocessor/iteration/detail/iter/limits/reverse2_256.hpp>
# elif BOOST_PP_LIMIT_ITERATION == 512
# include <boost/preprocessor/iteration/detail/iter/limits/reverse2_512.hpp>
# else
# error Incorrect value for the BOOST_PP_LIMIT_ITERATION limit
# endif
