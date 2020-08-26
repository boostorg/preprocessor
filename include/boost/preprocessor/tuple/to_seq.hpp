# /* **************************************************************************
#  *                                                                          *
#  *     (C) Copyright Paul Mensonides 2002-2011.                             *
#  *     (C) Copyright Edward Diener 2011.                                    *
#  *     Distributed under the Boost Software License, Version 1.0. (See      *
#  *     accompanying file LICENSE_1_0.txt or copy at                         *
#  *     http://www.boost.org/LICENSE_1_0.txt)                                *
#  *                                                                          *
#  ************************************************************************** */
#
# /* Revised by Edward Diener (2020) */
#
# /* See http://www.boost.org for most recent version. */
#
# ifndef BOOST_PREPROCESSOR_TUPLE_TO_SEQ_HPP
# define BOOST_PREPROCESSOR_TUPLE_TO_SEQ_HPP
#
# include <boost/preprocessor/cat.hpp>
# include <boost/preprocessor/config/config.hpp>
# include <boost/preprocessor/control/if.hpp>
# include <boost/preprocessor/facilities/overload.hpp>
# include <boost/preprocessor/tuple/size.hpp>
# include <boost/preprocessor/variadic/size.hpp>
# include <boost/preprocessor/variadic/has_opt.hpp>
#
# /* BOOST_PP_TUPLE_TO_SEQ */
#
# if BOOST_PP_VARIADICS
#    if BOOST_PP_VARIADICS_MSVC
#        define BOOST_PP_TUPLE_TO_SEQ(...) BOOST_PP_TUPLE_TO_SEQ_I(BOOST_PP_OVERLOAD(BOOST_PP_TUPLE_TO_SEQ_O_, __VA_ARGS__), (__VA_ARGS__))
#        define BOOST_PP_TUPLE_TO_SEQ_I(m, args) BOOST_PP_TUPLE_TO_SEQ_II(m, args)
#        define BOOST_PP_TUPLE_TO_SEQ_II(m, args) BOOST_PP_CAT(m ## args,)
#        define BOOST_PP_TUPLE_TO_SEQ_O_1(tuple) BOOST_PP_CAT(BOOST_PP_TUPLE_TO_SEQ_, BOOST_PP_TUPLE_SIZE(tuple)) tuple
#    else
#        define BOOST_PP_TUPLE_TO_SEQ(...) BOOST_PP_OVERLOAD(BOOST_PP_TUPLE_TO_SEQ_O_, __VA_ARGS__)(__VA_ARGS__)
#        if BOOST_PP_VARIADIC_HAS_OPT()
#            define BOOST_PP_TUPLE_TO_SEQ_O_1(tuple) BOOST_PP_TUPLE_TO_SEQ_O_1_SIZE(BOOST_PP_VARIADIC_SIZE tuple, tuple)
#            define BOOST_PP_TUPLE_TO_SEQ_O_1_SIZE(size,tuple) BOOST_PP_CAT(BOOST_PP_TUPLE_TO_SEQ_, BOOST_PP_IF(size,size,1)) tuple
#        else
#            define BOOST_PP_TUPLE_TO_SEQ_O_1(tuple) BOOST_PP_CAT(BOOST_PP_TUPLE_TO_SEQ_, BOOST_PP_VARIADIC_SIZE tuple) tuple
#        endif
#    endif
#    define BOOST_PP_TUPLE_TO_SEQ_O_2(size, tuple) BOOST_PP_TUPLE_TO_SEQ_O_1(tuple)
# else
#    if ~BOOST_PP_CONFIG_FLAGS() & BOOST_PP_CONFIG_MWCC()
#        define BOOST_PP_TUPLE_TO_SEQ(size, tuple) BOOST_PP_TUPLE_TO_SEQ_I(size, tuple)
#        if ~BOOST_PP_CONFIG_FLAGS() & BOOST_PP_CONFIG_MSVC()
#            define BOOST_PP_TUPLE_TO_SEQ_I(s, t) BOOST_PP_TUPLE_TO_SEQ_ ## s t
#        else
#            define BOOST_PP_TUPLE_TO_SEQ_I(s, t) BOOST_PP_TUPLE_TO_SEQ_II(BOOST_PP_TUPLE_TO_SEQ_ ## s t)
#            define BOOST_PP_TUPLE_TO_SEQ_II(res) res
#        endif
#    else
#        define BOOST_PP_TUPLE_TO_SEQ(size, tuple) BOOST_PP_TUPLE_TO_SEQ_OO((size, tuple))
#        define BOOST_PP_TUPLE_TO_SEQ_OO(par) BOOST_PP_TUPLE_TO_SEQ_I ## par
#        define BOOST_PP_TUPLE_TO_SEQ_I(s, t) BOOST_PP_TUPLE_TO_SEQ_ ## s ## t
#    endif
# endif
#
# include <boost/preprocessor/config/limits.hpp>
#
# if BOOST_PP_LIMIT_TUPLE == 64
# include <boost/preprocessor/tuple/limits/to_seq_64.hpp>
# elif BOOST_PP_LIMIT_TUPLE == 128
# include <boost/preprocessor/tuple/limits/to_seq_64.hpp>
# include <boost/preprocessor/tuple/limits/to_seq_128.hpp>
# elif BOOST_PP_LIMIT_TUPLE == 256
# include <boost/preprocessor/tuple/limits/to_seq_64.hpp>
# include <boost/preprocessor/tuple/limits/to_seq_128.hpp>
# include <boost/preprocessor/tuple/limits/to_seq_256.hpp>
# else
# error Incorrect value for the BOOST_PP_LIMIT_TUPLE limit
# endif
#
# endif
