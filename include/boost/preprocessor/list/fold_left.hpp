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
# ifndef BOOST_PREPROCESSOR_LIST_FOLD_LEFT_HPP
# define BOOST_PREPROCESSOR_LIST_FOLD_LEFT_HPP
#
# include <boost/preprocessor/arithmetic/dec.hpp>
# include <boost/preprocessor/cat.hpp>
# include <boost/preprocessor/control/while.hpp>
# include <boost/preprocessor/debug/error.hpp>
# include <boost/preprocessor/detail/auto_rec.hpp>
# include <boost/preprocessor/config/limits.hpp>
#
# /* BOOST_PP_LIST_FOLD_LEFT */
#
# if 0
#    define BOOST_PP_LIST_FOLD_LEFT(op, state, list)
# endif
#
# if BOOST_PP_LIMIT_WHILE == 256
# define BOOST_PP_LIST_FOLD_LEFT BOOST_PP_CAT(BOOST_PP_LIST_FOLD_LEFT_, BOOST_PP_DEC(BOOST_PP_AUTO_REC(BOOST_PP_WHILE_P, 256)))
# define BOOST_PP_LIST_FOLD_LEFT_257(o, s, l) BOOST_PP_ERROR(0x0004)
# elif BOOST_PP_LIMIT_WHILE == 512
# define BOOST_PP_LIST_FOLD_LEFT BOOST_PP_CAT(BOOST_PP_LIST_FOLD_LEFT_, BOOST_PP_DEC(BOOST_PP_AUTO_REC(BOOST_PP_WHILE_P, 512)))
# define BOOST_PP_LIST_FOLD_LEFT_513(o, s, l) BOOST_PP_ERROR(0x0004)
# elif BOOST_PP_LIMIT_WHILE == 1024
# define BOOST_PP_LIST_FOLD_LEFT BOOST_PP_CAT(BOOST_PP_LIST_FOLD_LEFT_, BOOST_PP_DEC(BOOST_PP_AUTO_REC(BOOST_PP_WHILE_P, 1024)))
# define BOOST_PP_LIST_FOLD_LEFT_1025(o, s, l) BOOST_PP_ERROR(0x0004)
# else
# error Incorrect value for the BOOST_PP_LIMIT_WHILE limit
# endif
#
# define BOOST_PP_LIST_FOLD_LEFT_D(d, o, s, l) BOOST_PP_LIST_FOLD_LEFT_ ## d(o, s, l)
# define BOOST_PP_LIST_FOLD_LEFT_2ND BOOST_PP_LIST_FOLD_LEFT
# define BOOST_PP_LIST_FOLD_LEFT_2ND_D BOOST_PP_LIST_FOLD_LEFT_D
#
# if BOOST_PP_CONFIG_FLAGS() & BOOST_PP_CONFIG_EDG()
#    include <boost/preprocessor/list/detail/edg/fold_left.hpp>
# elif BOOST_PP_CONFIG_FLAGS() & BOOST_PP_CONFIG_DMC()
#    include <boost/preprocessor/list/detail/dmc/fold_left.hpp>
# else
#    include <boost/preprocessor/list/detail/fold_left.hpp>
# endif
#
# define BOOST_PP_LIST_FOLD_LEFT_CHECK_BOOST_PP_NIL 1
#
# if BOOST_PP_LIMIT_WHILE == 256
# include <boost/preprocessor/list/limits/fold_left_256.hpp>
# elif BOOST_PP_LIMIT_WHILE == 512
# include <boost/preprocessor/list/limits/fold_left_256.hpp>
# include <boost/preprocessor/list/limits/fold_left_512.hpp>
# elif BOOST_PP_LIMIT_WHILE == 1024
# include <boost/preprocessor/list/limits/fold_left_256.hpp>
# include <boost/preprocessor/list/limits/fold_left_512.hpp>
# include <boost/preprocessor/list/limits/fold_left_1024.hpp>
# endif
#
# endif
