# /* Copyright (C) 2001
#  * Housemarque Oy
#  * http://www.housemarque.com
#  *
#  * Distributed under the Boost Software License, Version 1.0. (See
#  * accompanying file LICENSE_1_0.txt or copy at
#  * http://www.boost.org/LICENSE_1_0.txt)
#  */
#
# /* Revised by Paul Mensonides (2002) */
# /* Revised by Edward Diener (2011,2020) */
#
# /* See http://www.boost.org for most recent version. */
#
# ifndef BOOST_PREPROCESSOR_CONFIG_LIMITS_HPP
# define BOOST_PREPROCESSOR_CONFIG_LIMITS_HPP
#
# if defined(BOOST_PP_LIMIT_TUPLE)
# undef BOOST_PP_LIMIT_TUPLE
# endif
# if defined(BOOST_PP_LIMIT_DIM)
# undef BOOST_PP_LIMIT_DIM
# endif
# if defined(BOOST_PP_LIMIT_REPEAT)
# undef BOOST_PP_LIMIT_REPEAT
# endif
# if defined(BOOST_PP_LIMIT_FOR)
# undef BOOST_PP_LIMIT_FOR
# endif
# if defined(BOOST_PP_LIMIT_ITERATION)
# undef BOOST_PP_LIMIT_ITERATION
# endif
# if defined(BOOST_PP_LIMIT_ITERATION_DIM)
# undef BOOST_PP_LIMIT_ITERATION_DIM
# endif
# if defined(BOOST_PP_LIMIT_SEQ)
# undef BOOST_PP_LIMIT_SEQ
# endif
# if defined(BOOST_PP_LIMIT_SLOT_SIG)
# undef BOOST_PP_LIMIT_SLOT_SIG
# endif
# if defined(BOOST_PP_LIMIT_SLOT_COUNT)
# undef BOOST_PP_LIMIT_SLOT_COUNT
# endif

# if defined(BOOST_PP_LIMIT_WHILE)
# if !(BOOST_PP_LIMIT_WHILE == 256 || BOOST_PP_LIMIT_WHILE == 512)
# undef BOOST_PP_LIMIT_WHILE
# define BOOST_PP_LIMIT_WHILE 256
# endif
# else
# define BOOST_PP_LIMIT_WHILE 256
# endif

# if defined(BOOST_PP_LIMIT_MAG)
# if !(BOOST_PP_LIMIT_MAG == 256 || BOOST_PP_LIMIT_MAG == 512)
# undef BOOST_PP_LIMIT_MAG
# define BOOST_PP_LIMIT_MAG 256
# elif BOOST_PP_LIMIT_WHILE < BOOST_PP_LIMIT_MAG
# define BOOST_PP_LIMIT_WHILE BOOST_PP_LIMIT_MAG
# endif
# else
# define BOOST_PP_LIMIT_MAG 256
# endif

# define BOOST_PP_LIMIT_TUPLE 64
# define BOOST_PP_LIMIT_DIM 3
# define BOOST_PP_LIMIT_REPEAT 256
# define BOOST_PP_LIMIT_FOR 256
# define BOOST_PP_LIMIT_ITERATION 256
# define BOOST_PP_LIMIT_ITERATION_DIM 3
# define BOOST_PP_LIMIT_SEQ 256
# define BOOST_PP_LIMIT_SLOT_SIG 10
# define BOOST_PP_LIMIT_SLOT_COUNT 5
#
# endif
