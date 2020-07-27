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
# ifndef BOOST_PREPROCESSOR_ARITHMETIC_DEC_HPP
# define BOOST_PREPROCESSOR_ARITHMETIC_DEC_HPP
#
# include <boost/preprocessor/config/config.hpp>
#
# /* BOOST_PP_DEC */
#
# if ~BOOST_PP_CONFIG_FLAGS() & BOOST_PP_CONFIG_MWCC()
#    define BOOST_PP_DEC(x) BOOST_PP_DEC_I(x)
# else
#    define BOOST_PP_DEC(x) BOOST_PP_DEC_OO((x))
#    define BOOST_PP_DEC_OO(par) BOOST_PP_DEC_I ## par
# endif
#
# define BOOST_PP_DEC_I(x) BOOST_PP_DEC_ ## x
#
# include <boost/preprocessor/config/limits.hpp>
#
# if BOOST_PP_LIMIT_MAG == 256
# include <boost/preprocessor/arithmetic/limits/dec_256.hpp>
# elif BOOST_PP_LIMIT_MAG == 512
# include <boost/preprocessor/arithmetic/limits/dec_256.hpp>
# include <boost/preprocessor/arithmetic/limits/dec_512.hpp>
# elif BOOST_PP_LIMIT_MAG == 1024
# include <boost/preprocessor/arithmetic/limits/dec_256.hpp>
# include <boost/preprocessor/arithmetic/limits/dec_512.hpp>
# include <boost/preprocessor/arithmetic/limits/dec_1024.hpp>
# else
# error Incorrect value for the BOOST_PP_LIMIT_MAG limit
# endif
#
# endif
