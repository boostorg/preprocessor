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
# ifndef BOOST_PREPROCESSOR_DETAIL_DMC_AUTO_REC_HPP
# define BOOST_PREPROCESSOR_DETAIL_DMC_AUTO_REC_HPP
#
# /* BOOST_PP_AUTO_REC */
#
# include <boost/preprocessor/config/limits.hpp>
#
# define BOOST_PP_LOCAL_AUTOREC 256
# if BOOST_PP_LOCAL_AUTOREC < BOOST_PP_LIMIT_SEQ
# undef BOOST_PP_LOCAL_AUTOREC
# define BOOST_PP_LOCAL_AUTOREC BOOST_PP_LIMIT_SEQ
# endif
# if BOOST_PP_LOCAL_AUTOREC < BOOST_PP_LIMIT_WHILE
# undef BOOST_PP_LOCAL_AUTOREC
# define BOOST_PP_LOCAL_AUTOREC BOOST_PP_LIMIT_WHILE
# endif
# if BOOST_PP_LOCAL_AUTOREC < BOOST_PP_LIMIT_REPEAT
# undef BOOST_PP_LOCAL_AUTOREC
# define BOOST_PP_LOCAL_AUTOREC BOOST_PP_LIMIT_REPEAT
# endif
# if BOOST_PP_LOCAL_AUTOREC < BOOST_PP_LIMIT_FOR
# undef BOOST_PP_LOCAL_AUTOREC
# define BOOST_PP_LOCAL_AUTOREC BOOST_PP_LIMIT_FOR
# endif
#
# if BOOST_PP_LOCAL_AUTOREC == 256
# undef BOOST_PP_LOCAL_AUTOREC
# include <boost/preprocessor/detail/dmc/auto_rec_256.hpp>
# elif BOOST_PP_LOCAL_AUTOREC == 512
# undef BOOST_PP_LOCAL_AUTOREC
# include <boost/preprocessor/detail/dmc/auto_rec_512.hpp>
# else
# undef BOOST_PP_LOCAL_AUTOREC
# endif
#
# endif
