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
# ifndef BOOST_PREPROCESSOR_SEQ_ELEM_HPP
# define BOOST_PREPROCESSOR_SEQ_ELEM_HPP
#
# include <boost/preprocessor/cat.hpp>
# include <boost/preprocessor/config/config.hpp>
# include <boost/preprocessor/facilities/empty.hpp>
#
# /* BOOST_PP_SEQ_ELEM */
#
# if ~BOOST_PP_CONFIG_FLAGS() & BOOST_PP_CONFIG_MWCC()
#    define BOOST_PP_SEQ_ELEM(i, seq) BOOST_PP_SEQ_ELEM_I(i, seq)
# else
#    define BOOST_PP_SEQ_ELEM(i, seq) BOOST_PP_SEQ_ELEM_I((i, seq))
# endif
#
# if BOOST_PP_CONFIG_FLAGS() & BOOST_PP_CONFIG_MSVC()
#    define BOOST_PP_SEQ_ELEM_I(i, seq) BOOST_PP_SEQ_ELEM_II((BOOST_PP_SEQ_ELEM_ ## i seq))
#    define BOOST_PP_SEQ_ELEM_II(res) BOOST_PP_SEQ_ELEM_IV(BOOST_PP_SEQ_ELEM_III res)
#    define BOOST_PP_SEQ_ELEM_III(x, _) x BOOST_PP_EMPTY()
#    define BOOST_PP_SEQ_ELEM_IV(x) x
# elif BOOST_PP_CONFIG_FLAGS() & BOOST_PP_CONFIG_MWCC()
#    define BOOST_PP_SEQ_ELEM_I(par) BOOST_PP_SEQ_ELEM_II ## par
#    define BOOST_PP_SEQ_ELEM_II(i, seq) BOOST_PP_SEQ_ELEM_III(BOOST_PP_SEQ_ELEM_ ## i ## seq)
#    define BOOST_PP_SEQ_ELEM_III(im) BOOST_PP_SEQ_ELEM_IV(im)
#    define BOOST_PP_SEQ_ELEM_IV(x, _) x
# else
#    if defined(__IBMC__) || defined(__IBMCPP__)
#        define BOOST_PP_SEQ_ELEM_I(i, seq) BOOST_PP_SEQ_ELEM_II(BOOST_PP_CAT(BOOST_PP_SEQ_ELEM_ ## i, seq))
#    else
#        define BOOST_PP_SEQ_ELEM_I(i, seq) BOOST_PP_SEQ_ELEM_II(BOOST_PP_SEQ_ELEM_ ## i seq)
#    endif
#    define BOOST_PP_SEQ_ELEM_II(im) BOOST_PP_SEQ_ELEM_III(im)
#    define BOOST_PP_SEQ_ELEM_III(x, _) x
# endif
#
# include <boost/preprocessor/config/limits.hpp>
#
# if BOOST_PP_LIMIT_SEQ == 256
# include <boost/preprocessor/seq/limits/elem_256.hpp>
# elif BOOST_PP_LIMIT_SEQ == 512
# include <boost/preprocessor/seq/limits/elem_256.hpp>
# include <boost/preprocessor/seq/limits/elem_512.hpp>
# else
# error Incorrect value for the BOOST_PP_LIMIT_SEQ limit
# endif
#
# endif
