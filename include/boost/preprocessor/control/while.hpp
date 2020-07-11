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
# ifndef BOOST_PREPROCESSOR_CONTROL_WHILE_HPP
# define BOOST_PREPROCESSOR_CONTROL_WHILE_HPP
#
# include <boost/preprocessor/arithmetic/dec.hpp>
# include <boost/preprocessor/cat.hpp>
# include <boost/preprocessor/config/config.hpp>
# include <boost/preprocessor/debug/error.hpp>
# include <boost/preprocessor/detail/auto_rec.hpp>
# include <boost/preprocessor/list/fold_left.hpp>
# include <boost/preprocessor/list/fold_right.hpp>
# include <boost/preprocessor/logical/bitand.hpp>
# include <boost/preprocessor/config/limits.hpp>
#
# /* BOOST_PP_WHILE */
#
# if 0
#    define BOOST_PP_WHILE(pred, op, state)
# endif
#
# if BOOST_PP_LIMIT_WHILE == 256
# define BOOST_PP_WHILE BOOST_PP_CAT(BOOST_PP_WHILE_, BOOST_PP_DEC(BOOST_PP_AUTO_REC(BOOST_PP_WHILE_P, 256)))
# elif BOOST_PP_LIMIT_MAG == 512
# define BOOST_PP_WHILE BOOST_PP_CAT(BOOST_PP_WHILE_, BOOST_PP_DEC(BOOST_PP_AUTO_REC(BOOST_PP_WHILE_P, 512)))
# else
# error Incorrect value for the BOOST_PP_LIMIT_WHILE limit
# endif
#
# define BOOST_PP_WHILE_P(n) BOOST_PP_WHILE_P_DEC(BOOST_PP_DEC(n))
#
# if BOOST_PP_CONFIG_FLAGS() & BOOST_PP_CONFIG_EDG()
#    define BOOST_PP_WHILE_P_DEC(n) BOOST_PP_BITAND(BOOST_PP_CAT(BOOST_PP_WHILE_CHECK_, BOOST_PP_CAT(BOOST_PP_WHILE_ , n)(BOOST_PP_WHILE_F, BOOST_PP_NIL, BOOST_PP_NIL)), BOOST_PP_BITAND(BOOST_PP_CAT(BOOST_PP_LIST_FOLD_LEFT_CHECK_, BOOST_PP_CAT(BOOST_PP_LIST_FOLD_LEFT_ , n)(BOOST_PP_NIL, BOOST_PP_NIL, BOOST_PP_NIL)), BOOST_PP_CAT(BOOST_PP_LIST_FOLD_RIGHT_CHECK_, BOOST_PP_CAT(BOOST_PP_LIST_FOLD_RIGHT_ , n)(BOOST_PP_NIL, BOOST_PP_NIL, BOOST_PP_NIL))))
# else
#    define BOOST_PP_WHILE_P_DEC(n) BOOST_PP_BITAND(BOOST_PP_CAT(BOOST_PP_WHILE_CHECK_, BOOST_PP_CAT(BOOST_PP_WHILE_ , n)(BOOST_PP_WHILE_F, BOOST_PP_NIL, BOOST_PP_NIL)), BOOST_PP_CAT(BOOST_PP_LIST_FOLD_LEFT_CHECK_, BOOST_PP_CAT(BOOST_PP_LIST_FOLD_LEFT_ , n)(BOOST_PP_NIL, BOOST_PP_NIL, BOOST_PP_NIL)))
# endif
#
# define BOOST_PP_WHILE_F(d, _) 0
#
# if BOOST_PP_CONFIG_FLAGS() & BOOST_PP_CONFIG_EDG()
#    include <boost/preprocessor/control/detail/edg/while.hpp>
# elif BOOST_PP_CONFIG_FLAGS() & BOOST_PP_CONFIG_MSVC()
#    include <boost/preprocessor/control/detail/msvc/while.hpp>
# elif BOOST_PP_CONFIG_FLAGS() & BOOST_PP_CONFIG_DMC()
#    include <boost/preprocessor/control/detail/dmc/while.hpp>
# else
#    include <boost/preprocessor/control/detail/while.hpp>
# endif
#
# if BOOST_PP_LIMIT_WHILE == 256
# define BOOST_PP_WHILE_257(p, o, s) BOOST_PP_ERROR(0x0001)
# elif BOOST_PP_LIMIT_MAG == 512
# define BOOST_PP_WHILE_513(p, o, s) BOOST_PP_ERROR(0x0001)
# endif
#
# define BOOST_PP_WHILE_CHECK_BOOST_PP_NIL 1
#
# if BOOST_PP_LIMIT_WHILE == 256
# include <boost/preprocessor/control/limits/while_256.hpp>
# elif BOOST_PP_LIMIT_MAG == 512
# include <boost/preprocessor/control/limits/while_256.hpp>
# include <boost/preprocessor/control/limits/while_512.hpp>
# endif
#
# endif
