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
# if defined(BOOST_PP_ITERATION_LIMITS)
#    if !defined(BOOST_PP_FILENAME_2)
#        error BOOST_PP_ERROR:  depth #2 filename is not defined
#    endif
#    define BOOST_PP_VALUE BOOST_PP_TUPLE_ELEM(2, 0, BOOST_PP_ITERATION_LIMITS)
#    include <boost/preprocessor/iteration/detail/bounds/lower2.hpp>
#    define BOOST_PP_VALUE BOOST_PP_TUPLE_ELEM(2, 1, BOOST_PP_ITERATION_LIMITS)
#    include <boost/preprocessor/iteration/detail/bounds/upper2.hpp>
#    define BOOST_PP_ITERATION_FLAGS_2() 0
#    undef BOOST_PP_ITERATION_LIMITS
# elif defined(BOOST_PP_ITERATION_PARAMS_2)
#    define BOOST_PP_VALUE BOOST_PP_ARRAY_ELEM(0, BOOST_PP_ITERATION_PARAMS_2)
#    include <boost/preprocessor/iteration/detail/bounds/lower2.hpp>
#    define BOOST_PP_VALUE BOOST_PP_ARRAY_ELEM(1, BOOST_PP_ITERATION_PARAMS_2)
#    include <boost/preprocessor/iteration/detail/bounds/upper2.hpp>
#    define BOOST_PP_FILENAME_2 BOOST_PP_ARRAY_ELEM(2, BOOST_PP_ITERATION_PARAMS_2)
#    if BOOST_PP_ARRAY_SIZE(BOOST_PP_ITERATION_PARAMS_2) >= 4
#        define BOOST_PP_ITERATION_FLAGS_2() BOOST_PP_ARRAY_ELEM(3, BOOST_PP_ITERATION_PARAMS_2)
#    else
#        define BOOST_PP_ITERATION_FLAGS_2() 0
#    endif
# else
#    error BOOST_PP_ERROR:  depth #2 iteration boundaries or filename not defined
# endif
#
# undef BOOST_PP_ITERATION_DEPTH
# define BOOST_PP_ITERATION_DEPTH() 2
#
# if (BOOST_PP_ITERATION_START_2) > (BOOST_PP_ITERATION_FINISH_2)
#    include <boost/preprocessor/iteration/detail/iter/reverse2.hpp>
# else
#
#    include <boost/preprocessor/config/limits.hpp>
#   
#    if BOOST_PP_LIMIT_ITERATION == 256
#    include <boost/preprocessor/iteration/detail/iter/limits/forward2_256.hpp>
#    elif BOOST_PP_LIMIT_ITERATION == 512
#    include <boost/preprocessor/iteration/detail/iter/limits/forward2_256.hpp>
#    include <boost/preprocessor/iteration/detail/iter/limits/forward2_512.hpp>
#    else
#    error Incorrect value for the BOOST_PP_LIMIT_ITERATION limit
#    endif
#
# endif
#
# undef BOOST_PP_ITERATION_DEPTH
# define BOOST_PP_ITERATION_DEPTH() 1
#
# undef BOOST_PP_ITERATION_START_2
# undef BOOST_PP_ITERATION_FINISH_2
# undef BOOST_PP_FILENAME_2
#
# undef BOOST_PP_ITERATION_FLAGS_2
# undef BOOST_PP_ITERATION_PARAMS_2
