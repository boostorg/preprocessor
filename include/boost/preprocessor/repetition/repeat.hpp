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
# /* Revised by Edward Diener (2020) */
#
# /* See http://www.boost.org for most recent version. */
#
# ifndef BOOST_PREPROCESSOR_REPETITION_REPEAT_HPP
# define BOOST_PREPROCESSOR_REPETITION_REPEAT_HPP
#
# /* BOOST_PP_REPEAT */
#
# include <boost/preprocessor/cat.hpp>
# include <boost/preprocessor/config/config.hpp>
# include <boost/preprocessor/debug/error.hpp>
# include <boost/preprocessor/detail/auto_rec.hpp>
# include <boost/preprocessor/tuple/eat.hpp>
#
# if 0
#    define BOOST_PP_REPEAT(count, macro, data)
# endif
#
# define BOOST_PP_REPEAT BOOST_PP_CAT(BOOST_PP_REPEAT_, BOOST_PP_AUTO_REC(BOOST_PP_REPEAT_P, 4))
#
# define BOOST_PP_REPEAT_P(n) BOOST_PP_CAT(BOOST_PP_REPEAT_CHECK_, BOOST_PP_REPEAT_ ## n(1, BOOST_PP_NIL BOOST_PP_TUPLE_EAT_3, BOOST_PP_NIL))
#
# define BOOST_PP_REPEAT_CHECK_BOOST_PP_NIL 1
# define BOOST_PP_REPEAT_CHECK_BOOST_PP_REPEAT_1(c, m, d) 0
# define BOOST_PP_REPEAT_CHECK_BOOST_PP_REPEAT_2(c, m, d) 0
# define BOOST_PP_REPEAT_CHECK_BOOST_PP_REPEAT_3(c, m, d) 0
#
# define BOOST_PP_REPEAT_1(c, m, d) BOOST_PP_REPEAT_1_I(c, m, d)
# define BOOST_PP_REPEAT_2(c, m, d) BOOST_PP_REPEAT_2_I(c, m, d)
# define BOOST_PP_REPEAT_3(c, m, d) BOOST_PP_REPEAT_3_I(c, m, d)
# define BOOST_PP_REPEAT_4(c, m, d) BOOST_PP_ERROR(0x0003)
#
# define BOOST_PP_REPEAT_1_I(c, m, d) BOOST_PP_REPEAT_1_ ## c(m, d)
# define BOOST_PP_REPEAT_2_I(c, m, d) BOOST_PP_REPEAT_2_ ## c(m, d)
# define BOOST_PP_REPEAT_3_I(c, m, d) BOOST_PP_REPEAT_3_ ## c(m, d)
#
# define BOOST_PP_REPEAT_1ST BOOST_PP_REPEAT_1
# define BOOST_PP_REPEAT_2ND BOOST_PP_REPEAT_2
# define BOOST_PP_REPEAT_3RD BOOST_PP_REPEAT_3
#
# include <boost/preprocessor/config/limits.hpp>
#
# if BOOST_PP_LIMIT_REPEAT == 256
# include <boost/preprocessor/repetition/limits/repeat_256.hpp>
# elif BOOST_PP_LIMIT_REPEAT == 512
# include <boost/preprocessor/repetition/limits/repeat_256.hpp>
# include <boost/preprocessor/repetition/limits/repeat_512.hpp>
# else
# error Incorrect value for the BOOST_PP_LIMIT_REPEAT limit
# endif
#
# endif
