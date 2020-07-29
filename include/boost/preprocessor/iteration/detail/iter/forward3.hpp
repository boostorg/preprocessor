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
# if defined(BOOST_PP_ITERATION_LIMITS)
#    if !defined(BOOST_PP_FILENAME_3)
#        error BOOST_PP_ERROR:  depth #3 filename is not defined
#    endif
#    define BOOST_PP_VALUE BOOST_PP_TUPLE_ELEM(2, 0, BOOST_PP_ITERATION_LIMITS)
#    include <boost/preprocessor/iteration/detail/bounds/lower3.hpp>
#    define BOOST_PP_VALUE BOOST_PP_TUPLE_ELEM(2, 1, BOOST_PP_ITERATION_LIMITS)
#    include <boost/preprocessor/iteration/detail/bounds/upper3.hpp>
#    define BOOST_PP_ITERATION_FLAGS_3() 0
#    undef BOOST_PP_ITERATION_LIMITS
# elif defined(BOOST_PP_ITERATION_PARAMS_3)
#    define BOOST_PP_VALUE BOOST_PP_ARRAY_ELEM(0, BOOST_PP_ITERATION_PARAMS_3)
#    include <boost/preprocessor/iteration/detail/bounds/lower3.hpp>
#    define BOOST_PP_VALUE BOOST_PP_ARRAY_ELEM(1, BOOST_PP_ITERATION_PARAMS_3)
#    include <boost/preprocessor/iteration/detail/bounds/upper3.hpp>
#    define BOOST_PP_FILENAME_3 BOOST_PP_ARRAY_ELEM(2, BOOST_PP_ITERATION_PARAMS_3)
#    if BOOST_PP_ARRAY_SIZE(BOOST_PP_ITERATION_PARAMS_3) >= 4
#        define BOOST_PP_ITERATION_FLAGS_3() BOOST_PP_ARRAY_ELEM(3, BOOST_PP_ITERATION_PARAMS_3)
#    else
#        define BOOST_PP_ITERATION_FLAGS_3() 0
#    endif
# else
#    error BOOST_PP_ERROR:  depth #3 iteration boundaries or filename not defined
# endif
#
# undef BOOST_PP_ITERATION_DEPTH
# define BOOST_PP_ITERATION_DEPTH() 3
#
# if (BOOST_PP_ITERATION_START_3) > (BOOST_PP_ITERATION_FINISH_3)
#    include <boost/preprocessor/iteration/detail/iter/reverse3.hpp>
# else
#
#    if BOOST_PP_LIMIT_ITERATION == 256
#    include <boost/preprocessor/iteration/detail/iter/limits/forward3_256.hpp>
#    elif BOOST_PP_LIMIT_ITERATION == 512
#    include <boost/preprocessor/iteration/detail/iter/limits/forward3_256.hpp>
#    include <boost/preprocessor/iteration/detail/iter/limits/forward3_512.hpp>
#    elif BOOST_PP_LIMIT_ITERATION == 1024
#    include <boost/preprocessor/iteration/detail/iter/limits/forward3_256.hpp>
#    include <boost/preprocessor/iteration/detail/iter/limits/forward3_512.hpp>
#    include <boost/preprocessor/iteration/detail/iter/limits/forward3_1024.hpp>
#    else
#    error Incorrect value for the BOOST_PP_LIMIT_ITERATION limit
#    endif
#
# endif
#
# undef BOOST_PP_ITERATION_DEPTH
# define BOOST_PP_ITERATION_DEPTH() 2
#
# undef BOOST_PP_ITERATION_START_3
# undef BOOST_PP_ITERATION_FINISH_3
# undef BOOST_PP_FILENAME_3
#
# undef BOOST_PP_ITERATION_FLAGS_3
# undef BOOST_PP_ITERATION_PARAMS_3
