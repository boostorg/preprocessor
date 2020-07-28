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
# ifndef BOOST_PREPROCESSOR_SEQ_FOLD_RIGHT_HPP
# define BOOST_PREPROCESSOR_SEQ_FOLD_RIGHT_HPP
#
# include <boost/preprocessor/arithmetic/dec.hpp>
# include <boost/preprocessor/cat.hpp>
# include <boost/preprocessor/detail/auto_rec.hpp>
# include <boost/preprocessor/seq/fold_left.hpp>
# include <boost/preprocessor/seq/reverse.hpp>
# include <boost/preprocessor/seq/seq.hpp>
#
# /* BOOST_PP_SEQ_FOLD_RIGHT */
#
# if 0
#    define BOOST_PP_SEQ_FOLD_RIGHT(op, state, seq) ...
# endif
#
# include <boost/preprocessor/config/limits.hpp>
#
# if BOOST_PP_LIMIT_SEQ == 256
# define BOOST_PP_SEQ_FOLD_RIGHT BOOST_PP_CAT(BOOST_PP_SEQ_FOLD_RIGHT_, BOOST_PP_DEC(BOOST_PP_AUTO_REC(BOOST_PP_SEQ_FOLD_LEFT_P, 256)))
# define BOOST_PP_SEQ_FOLD_RIGHT_257(op, st, ss) BOOST_PP_ERROR(0x0005)
# elif BOOST_PP_LIMIT_SEQ == 512
# define BOOST_PP_SEQ_FOLD_RIGHT BOOST_PP_CAT(BOOST_PP_SEQ_FOLD_RIGHT_, BOOST_PP_DEC(BOOST_PP_AUTO_REC(BOOST_PP_SEQ_FOLD_LEFT_P, 512)))
# define BOOST_PP_SEQ_FOLD_RIGHT_513(op, st, ss) BOOST_PP_ERROR(0x0005)
# elif BOOST_PP_LIMIT_SEQ == 1024
# define BOOST_PP_SEQ_FOLD_RIGHT BOOST_PP_CAT(BOOST_PP_SEQ_FOLD_RIGHT_, BOOST_PP_DEC(BOOST_PP_AUTO_REC(BOOST_PP_SEQ_FOLD_LEFT_P, 1024)))
# define BOOST_PP_SEQ_FOLD_RIGHT_1025(op, st, ss) BOOST_PP_ERROR(0x0005)
# else
# error Incorrect value for the BOOST_PP_LIMIT_SEQ limit
# endif
#
# if BOOST_PP_LIMIT_SEQ == 256
# include <boost/preprocessor/seq/limits/fold_right_256.hpp>
# elif BOOST_PP_LIMIT_SEQ == 512
# include <boost/preprocessor/seq/limits/fold_right_256.hpp>
# include <boost/preprocessor/seq/limits/fold_right_512.hpp>
# elif BOOST_PP_LIMIT_SEQ == 1024
# include <boost/preprocessor/seq/limits/fold_right_256.hpp>
# include <boost/preprocessor/seq/limits/fold_right_512.hpp>
# include <boost/preprocessor/seq/limits/fold_right_1024.hpp>
# endif
#
# endif
