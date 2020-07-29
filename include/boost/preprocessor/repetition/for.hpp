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
# ifndef BOOST_PREPROCESSOR_REPETITION_FOR_HPP
# define BOOST_PREPROCESSOR_REPETITION_FOR_HPP
#
# include <boost/preprocessor/arithmetic/dec.hpp>
# include <boost/preprocessor/cat.hpp>
# include <boost/preprocessor/debug/error.hpp>
# include <boost/preprocessor/facilities/empty.hpp>
# include <boost/preprocessor/logical/bool.hpp>
# include <boost/preprocessor/detail/auto_rec.hpp>
# include <boost/preprocessor/config/limits.hpp>
#
# /* BOOST_PP_FOR */
#
# if 0
#    define BOOST_PP_FOR(state, pred, op, macro)
# endif
#
# if BOOST_PP_LIMIT_FOR == 256
# define BOOST_PP_FOR BOOST_PP_CAT(BOOST_PP_FOR_, BOOST_PP_DEC(BOOST_PP_AUTO_REC(BOOST_PP_FOR_P, 256)))
# elif BOOST_PP_LIMIT_FOR == 512
# define BOOST_PP_FOR BOOST_PP_CAT(BOOST_PP_FOR_, BOOST_PP_DEC(BOOST_PP_AUTO_REC(BOOST_PP_FOR_P, 512)))
# elif BOOST_PP_LIMIT_FOR == 1024
# define BOOST_PP_FOR BOOST_PP_CAT(BOOST_PP_FOR_, BOOST_PP_DEC(BOOST_PP_AUTO_REC(BOOST_PP_FOR_P, 1024)))
# else
# error Incorrect value for the BOOST_PP_LIMIT_FOR limit
# endif
#
# define BOOST_PP_FOR_P(n) BOOST_PP_FOR_P_DEC(BOOST_PP_DEC(n))
# define BOOST_PP_FOR_P_DEC(n) BOOST_PP_CAT(BOOST_PP_FOR_CHECK_, BOOST_PP_CAT(BOOST_PP_FOR_ , n)(1, BOOST_PP_FOR_SR_P, BOOST_PP_FOR_SR_O, BOOST_PP_FOR_SR_M))
#
# define BOOST_PP_FOR_SR_P(r, s) s
# define BOOST_PP_FOR_SR_O(r, s) 0
# define BOOST_PP_FOR_SR_M(r, s) BOOST_PP_NIL
#
# if BOOST_PP_CONFIG_FLAGS() & BOOST_PP_CONFIG_EDG()
#    include <boost/preprocessor/repetition/detail/edg/for.hpp>
# elif BOOST_PP_CONFIG_FLAGS() & BOOST_PP_CONFIG_MSVC()
#    include <boost/preprocessor/repetition/detail/msvc/for.hpp>
# elif BOOST_PP_CONFIG_FLAGS() & BOOST_PP_CONFIG_DMC()
#    include <boost/preprocessor/repetition/detail/dmc/for.hpp>
# else
#    include <boost/preprocessor/repetition/detail/for.hpp>
# endif
#
# if BOOST_PP_LIMIT_FOR == 256
#
# if BOOST_PP_CONFIG_FLAGS() & BOOST_PP_CONFIG_DMC()
# define BOOST_PP_FOR_257_PR(s, p) BOOST_PP_BOOL(p##(257, s))
# else
# define BOOST_PP_FOR_257_PR(s, p) BOOST_PP_BOOL(p(257, s))
# endif

# define BOOST_PP_FOR_257_ERROR() BOOST_PP_ERROR(0x0002)
# define BOOST_PP_FOR_257(s, p, o, m) \
    BOOST_PP_IIF \
        ( \
        BOOST_PP_FOR_257_PR(s,p), \
        BOOST_PP_FOR_257_ERROR, \
        BOOST_PP_EMPTY \
        ) \
    () \
/**/
#
# elif BOOST_PP_LIMIT_FOR == 512
#
# define BOOST_PP_FOR_513_PR(s, p) BOOST_PP_BOOL(p(513, s))

# define BOOST_PP_FOR_513_ERROR() BOOST_PP_ERROR(0x0002)
# define BOOST_PP_FOR_513(s, p, o, m) \
    BOOST_PP_IIF \
        ( \
        BOOST_PP_FOR_513_PR(s,p), \
        BOOST_PP_FOR_513_ERROR, \
        BOOST_PP_EMPTY \
        ) \
    () \
/**/
#
# elif BOOST_PP_LIMIT_FOR == 1024
#
# define BOOST_PP_FOR_1025_PR(s, p) BOOST_PP_BOOL(p(1025, s))

# define BOOST_PP_FOR_1025_ERROR() BOOST_PP_ERROR(0x0002)
# define BOOST_PP_FOR_1025(s, p, o, m) \
    BOOST_PP_IIF \
        ( \
        BOOST_PP_FOR_1025_PR(s,p), \
        BOOST_PP_FOR_1025_ERROR, \
        BOOST_PP_EMPTY \
        ) \
    () \
/**/
#
# endif
#
# define BOOST_PP_FOR_CHECK_BOOST_PP_NIL 1
#
# if BOOST_PP_LIMIT_FOR == 256
# include <boost/preprocessor/repetition/limits/for_256.hpp>
# elif BOOST_PP_LIMIT_FOR == 512
# include <boost/preprocessor/repetition/limits/for_256.hpp>
# include <boost/preprocessor/repetition/limits/for_512.hpp>
# elif BOOST_PP_LIMIT_FOR == 1024
# include <boost/preprocessor/repetition/limits/for_256.hpp>
# include <boost/preprocessor/repetition/limits/for_512.hpp>
# include <boost/preprocessor/repetition/limits/for_1024.hpp>
# endif
#
# endif
