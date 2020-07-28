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
# ifndef BOOST_PREPROCESSOR_SEQ_FOLD_LEFT_HPP
# define BOOST_PREPROCESSOR_SEQ_FOLD_LEFT_HPP
#
# include <boost/preprocessor/arithmetic/dec.hpp>
# include <boost/preprocessor/cat.hpp>
# include <boost/preprocessor/control/if.hpp>
# include <boost/preprocessor/debug/error.hpp>
# include <boost/preprocessor/detail/auto_rec.hpp>
# include <boost/preprocessor/seq/seq.hpp>
# include <boost/preprocessor/seq/size.hpp>
#
# /* BOOST_PP_SEQ_FOLD_LEFT */
#
# if 0
#    define BOOST_PP_SEQ_FOLD_LEFT(op, state, seq) ...
# endif
#
# include <boost/preprocessor/config/limits.hpp>
#
# if BOOST_PP_LIMIT_SEQ == 256
# define BOOST_PP_SEQ_FOLD_LEFT BOOST_PP_CAT(BOOST_PP_SEQ_FOLD_LEFT_, BOOST_PP_DEC(BOOST_PP_AUTO_REC(BOOST_PP_SEQ_FOLD_LEFT_P, 256)))
# elif BOOST_PP_LIMIT_SEQ == 512
# define BOOST_PP_SEQ_FOLD_LEFT BOOST_PP_CAT(BOOST_PP_SEQ_FOLD_LEFT_, BOOST_PP_DEC(BOOST_PP_AUTO_REC(BOOST_PP_SEQ_FOLD_LEFT_P, 512)))
# elif BOOST_PP_LIMIT_SEQ == 1024
# define BOOST_PP_SEQ_FOLD_LEFT BOOST_PP_CAT(BOOST_PP_SEQ_FOLD_LEFT_, BOOST_PP_DEC(BOOST_PP_AUTO_REC(BOOST_PP_SEQ_FOLD_LEFT_P, 1024)))
# else
# error Incorrect value for the BOOST_PP_LIMIT_SEQ limit
# endif
#
# define BOOST_PP_SEQ_FOLD_LEFT_P(n) BOOST_PP_SEQ_FOLD_LEFT_P_DEC(BOOST_PP_DEC(n))
# define BOOST_PP_SEQ_FOLD_LEFT_P_DEC(n) BOOST_PP_CAT(BOOST_PP_SEQ_FOLD_LEFT_CHECK_, BOOST_PP_CAT(BOOST_PP_SEQ_FOLD_LEFT_I_,n)(BOOST_PP_SEQ_FOLD_LEFT_O, BOOST_PP_NIL, (nil), 1))
# define BOOST_PP_SEQ_FOLD_LEFT_O(s, st, _) st
#
# if BOOST_PP_LIMIT_SEQ == 256
# define BOOST_PP_SEQ_FOLD_LEFT_257(op, st, ss) BOOST_PP_ERROR(0x0005)
# define BOOST_PP_SEQ_FOLD_LEFT_I_257(op, st, ss, sz) BOOST_PP_ERROR(0x0005)
# elif BOOST_PP_LIMIT_SEQ == 512
# define BOOST_PP_SEQ_FOLD_LEFT_513(op, st, ss) BOOST_PP_ERROR(0x0005)
# define BOOST_PP_SEQ_FOLD_LEFT_I_513(op, st, ss, sz) BOOST_PP_ERROR(0x0005)
# endif
#
# define BOOST_PP_SEQ_FOLD_LEFT_CHECK_BOOST_PP_NIL 1
#
# define BOOST_PP_SEQ_FOLD_LEFT_F(op, st, ss, sz) st
#
# if BOOST_PP_LIMIT_SEQ == 256
# include <boost/preprocessor/seq/limits/fold_left_256.hpp>
# elif BOOST_PP_LIMIT_SEQ == 512
# include <boost/preprocessor/seq/limits/fold_left_256.hpp>
# include <boost/preprocessor/seq/limits/fold_left_512.hpp>
# elif BOOST_PP_LIMIT_SEQ == 1024
# include <boost/preprocessor/seq/limits/fold_left_256.hpp>
# include <boost/preprocessor/seq/limits/fold_left_512.hpp>
# include <boost/preprocessor/seq/limits/fold_left_1024.hpp>
# endif
#
# endif
