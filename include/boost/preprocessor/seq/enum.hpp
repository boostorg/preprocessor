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
# ifndef BOOST_PREPROCESSOR_SEQ_ENUM_HPP
# define BOOST_PREPROCESSOR_SEQ_ENUM_HPP
#
# include <boost/preprocessor/cat.hpp>
# include <boost/preprocessor/config/config.hpp>
# include <boost/preprocessor/seq/size.hpp>
#
# /* BOOST_PP_SEQ_ENUM */
#
# if BOOST_PP_CONFIG_FLAGS() & BOOST_PP_CONFIG_EDG()
#    define BOOST_PP_SEQ_ENUM(seq) BOOST_PP_SEQ_ENUM_I(seq)
#    define BOOST_PP_SEQ_ENUM_I(seq) BOOST_PP_CAT(BOOST_PP_SEQ_ENUM_, BOOST_PP_SEQ_SIZE(seq)) seq
# elif BOOST_PP_CONFIG_FLAGS() & BOOST_PP_CONFIG_MWCC()
#    define BOOST_PP_SEQ_ENUM(seq) BOOST_PP_SEQ_ENUM_I(BOOST_PP_SEQ_SIZE(seq), seq)
#    define BOOST_PP_SEQ_ENUM_I(size, seq) BOOST_PP_CAT(BOOST_PP_SEQ_ENUM_, size) seq
# else
#    define BOOST_PP_SEQ_ENUM(seq) BOOST_PP_CAT(BOOST_PP_SEQ_ENUM_, BOOST_PP_SEQ_SIZE(seq)) seq
# endif
#
# include <boost/preprocessor/config/limits.hpp>
#
# if BOOST_PP_LIMIT_SEQ == 256
# include <boost/preprocessor/seq/limits/enum_256.hpp>
# elif BOOST_PP_LIMIT_SEQ == 512
# include <boost/preprocessor/seq/limits/enum_256.hpp>
# include <boost/preprocessor/seq/limits/enum_512.hpp>
# else
# error Incorrect value for the BOOST_PP_LIMIT_SEQ limit
# endif
#
# endif
