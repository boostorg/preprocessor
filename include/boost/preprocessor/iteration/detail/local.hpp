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
# if !defined(BOOST_PP_LOCAL_LIMITS)
#    error BOOST_PP_ERROR:  local iteration boundaries are not defined
# elif !defined(BOOST_PP_LOCAL_MACRO)
#    error BOOST_PP_ERROR:  local iteration target macro is not defined
# else
#    if ~BOOST_PP_CONFIG_FLAGS() & BOOST_PP_CONFIG_EDG()
#        define BOOST_PP_LOCAL_S BOOST_PP_TUPLE_ELEM(2, 0, BOOST_PP_LOCAL_LIMITS)
#        define BOOST_PP_LOCAL_F BOOST_PP_TUPLE_ELEM(2, 1, BOOST_PP_LOCAL_LIMITS)
#    else
#        define BOOST_PP_VALUE BOOST_PP_TUPLE_ELEM(2, 0, BOOST_PP_LOCAL_LIMITS)
#        include <boost/preprocessor/iteration/detail/start.hpp>
#        define BOOST_PP_VALUE BOOST_PP_TUPLE_ELEM(2, 1, BOOST_PP_LOCAL_LIMITS)
#        include <boost/preprocessor/iteration/detail/finish.hpp>
#        define BOOST_PP_LOCAL_S BOOST_PP_LOCAL_SE()
#        define BOOST_PP_LOCAL_F BOOST_PP_LOCAL_FE()
#    endif
# endif
#
# if (BOOST_PP_LOCAL_S) > (BOOST_PP_LOCAL_F)
#    include <boost/preprocessor/iteration/detail/rlocal.hpp>
# else
#
#    include <boost/preprocessor/config/limits.hpp>
#    
#    if BOOST_PP_LIMIT_ITERATION == 256
#    include <boost/preprocessor/iteration/detail/limits/local_256.hpp>
#    elif BOOST_PP_LIMIT_ITERATION == 512
#    include <boost/preprocessor/iteration/detail/limits/local_256.hpp>
#    include <boost/preprocessor/iteration/detail/limits/local_512.hpp>
#    else
#    error Incorrect value for the BOOST_PP_LIMIT_ITERATION limit
#    endif
#
# endif
#
# undef BOOST_PP_LOCAL_LIMITS
#
# undef BOOST_PP_LOCAL_S
# undef BOOST_PP_LOCAL_F
#
# undef BOOST_PP_LOCAL_MACRO
