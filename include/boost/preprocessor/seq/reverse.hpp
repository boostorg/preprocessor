# /* **************************************************************************
#  *                                                                          *
#  *     (C) Copyright Paul Mensonides 2002.
#  *     Distributed under the Boost Software License, Version 1.0. (See
#  *     accompanying file LICENSE_1_0.txt or copy at
#  *     http://www.boost.org/LICENSE_1_0.txt)
#  *                                                                          *
#  ************************************************************************** */
#
# /* See http://www.boost.org for most recent version. */
#
# ifndef BOOST_PREPROCESSOR_SEQ_REVERSE_HPP
# define BOOST_PREPROCESSOR_SEQ_REVERSE_HPP
#
# include <boost/preprocessor/config/config.hpp>
# include <boost/preprocessor/cat.hpp>
# include <boost/preprocessor/arithmetic/div.hpp>
# include <boost/preprocessor/control/if.hpp>
# include <boost/preprocessor/facilities/empty.hpp>
# include <boost/preprocessor/facilities/identity.hpp>
# include <boost/preprocessor/seq/first_n.hpp>
# include <boost/preprocessor/seq/rest_n.hpp>
# include <boost/preprocessor/seq/fold_left.hpp>
# include <boost/preprocessor/seq/size.hpp>
# include <boost/preprocessor/config/limits.hpp>
#
# /* BOOST_PP_SEQ_REVERSE */
#
# if ~BOOST_PP_CONFIG_FLAGS() & BOOST_PP_CONFIG_EDG()
#    if BOOST_PP_LIMIT_SEQ == 256
#       define BOOST_PP_SEQ_REVERSE(seq) BOOST_PP_SEQ_FOLD_LEFT(BOOST_PP_SEQ_REVERSE_O, BOOST_PP_EMPTY, seq)()
#    else
#       define BOOST_PP_SEQ_REVERSE(seq) BOOST_PP_SEQ_REVERSE_HALVES(BOOST_PP_DIV(BOOST_PP_SEQ_SIZE(seq),2),seq)
#       define BOOST_PP_SEQ_REVERSE_HALVES(half,seq) \
                BOOST_PP_IF(half,BOOST_PP_SEQ_REVERSE_NAMT,BOOST_PP_IDENTITY_N(seq,2))(half,seq)
#       define BOOST_PP_SEQ_REVERSE_NAMT(half,seq) \
                BOOST_PP_SEQ_DO_REVERSE(BOOST_PP_SEQ_REST_N(half,seq)) BOOST_PP_SEQ_DO_REVERSE(BOOST_PP_SEQ_FIRST_N(half,seq))
#       define BOOST_PP_SEQ_DO_REVERSE(seq) BOOST_PP_SEQ_FOLD_LEFT(BOOST_PP_SEQ_REVERSE_O, BOOST_PP_EMPTY, seq)()
#    endif
# else
#    define BOOST_PP_SEQ_REVERSE(seq) BOOST_PP_SEQ_REVERSE_I(seq)
#    if BOOST_PP_LIMIT_SEQ == 256
#       define BOOST_PP_SEQ_REVERSE_I(seq) BOOST_PP_SEQ_FOLD_LEFT(BOOST_PP_SEQ_REVERSE_O, BOOST_PP_EMPTY, seq)()
#    else
#       define BOOST_PP_SEQ_REVERSE_I(seq) BOOST_PP_SEQ_REVERSE_HALVES(BOOST_PP_DIV(BOOST_PP_SEQ_SIZE(seq),2),seq)
#    endif
# endif
#
# define BOOST_PP_SEQ_REVERSE_O(s, state, elem) (elem) state
#
# /* BOOST_PP_SEQ_REVERSE_S */
#
# if ~BOOST_PP_CONFIG_FLAGS() & BOOST_PP_CONFIG_EDG()
#    if BOOST_PP_LIMIT_SEQ == 256
#       define BOOST_PP_SEQ_REVERSE_S(s, seq) BOOST_PP_SEQ_FOLD_LEFT_ ## s(BOOST_PP_SEQ_REVERSE_O, BOOST_PP_EMPTY, seq)()
#    else
#       define BOOST_PP_SEQ_REVERSE_S(s, seq) BOOST_PP_SEQ_REVERSE_HALVES_S(s,BOOST_PP_DIV(BOOST_PP_SEQ_SIZE(seq),2),seq)
#       define BOOST_PP_SEQ_REVERSE_HALVES_S(s,half,seq) \
               BOOST_PP_IF(half,BOOST_PP_SEQ_REVERSE_NAMT_S,BOOST_PP_IDENTITY_N(seq,3))(s,half,seq)
#       define BOOST_PP_SEQ_REVERSE_NAMT_S(s,half,seq) \
               BOOST_PP_SEQ_DO_REVERSE_S(s,BOOST_PP_SEQ_REST_N(half,seq)) BOOST_PP_SEQ_DO_REVERSE_S(s,BOOST_PP_SEQ_FIRST_N(half,seq))
#       define BOOST_PP_SEQ_DO_REVERSE_S(s, seq) BOOST_PP_SEQ_FOLD_LEFT_ ## s(BOOST_PP_SEQ_REVERSE_O, BOOST_PP_EMPTY, seq)()
#    endif
# else
#    define BOOST_PP_SEQ_REVERSE_S(s, seq) BOOST_PP_SEQ_REVERSE_S_I(s, seq)
#    if BOOST_PP_LIMIT_SEQ == 256
#       define BOOST_PP_SEQ_REVERSE_S_I(s, seq) BOOST_PP_SEQ_FOLD_LEFT_ ## s(BOOST_PP_SEQ_REVERSE_O, BOOST_PP_EMPTY, seq)()
#    else
#       define BOOST_PP_SEQ_REVERSE_S_I(s, seq) BOOST_PP_SEQ_REVERSE_HALVES_S(s,BOOST_PP_DIV(BOOST_PP_SEQ_SIZE(seq),2),seq)
#    endif
# endif
#
# endif
