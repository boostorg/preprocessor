//
// Copyright Antoine Leblanc 2015
// http://nauths.fr
//
// Distributed under the Boost Software License, Version 1.0. (See
// accompanying file LICENSE_1_0.txt or copy at
// http://www.boost.org/LICENSE_1_0.txt)
//

#ifndef BOOST_PREPROCESSOR_DISCARD_HPP
# define BOOST_PREPROCESSOR_DISCARD_HPP



# include <boost/preprocessor/config/limits.hpp>
# include <boost/preprocessor/config/config.hpp>



# if BOOST_PP_VARIADICS

#  define BOOST_PP_DISCARD(...)
#  define BOOST_PP_DISCARD_MIN(...) 0
#  define BOOST_PP_DISCARD_MAX(...) BOOST_PP_LIMIT_MAG

# endif /* BOOST_PP_VARIADICS */



# define BOOST_PP_DISCARD_1(a)
# define BOOST_PP_DISCARD_2(a, b)
# define BOOST_PP_DISCARD_3(a, b, c)
# define BOOST_PP_DISCARD_4(a, b, c, d)
# define BOOST_PP_DISCARD_5(a, b, c, d, e)
# define BOOST_PP_DISCARD_6(a, b, c, d, e, f)
# define BOOST_PP_DISCARD_7(a, b, c, d, e, f, g)
# define BOOST_PP_DISCARD_8(a, b, c, d, e, f, g, h)
# define BOOST_PP_DISCARD_9(a, b, c, d, e, f, g, h, i)

# define BOOST_PP_DISCARD_MIN_1(a)                         0
# define BOOST_PP_DISCARD_MIN_2(a, b)                      0
# define BOOST_PP_DISCARD_MIN_3(a, b, c)                   0
# define BOOST_PP_DISCARD_MIN_4(a, b, c, d)                0
# define BOOST_PP_DISCARD_MIN_5(a, b, c, d, e)             0
# define BOOST_PP_DISCARD_MIN_6(a, b, c, d, e, f)          0
# define BOOST_PP_DISCARD_MIN_7(a, b, c, d, e, f, g)       0
# define BOOST_PP_DISCARD_MIN_8(a, b, c, d, e, f, g, h)    0
# define BOOST_PP_DISCARD_MIN_9(a, b, c, d, e, f, g, h, i) 0

# define BOOST_PP_DISCARD_MAX_1(a)                         BOOST_PP_LIMIT_MAG
# define BOOST_PP_DISCARD_MAX_2(a, b)                      BOOST_PP_LIMIT_MAG
# define BOOST_PP_DISCARD_MAX_3(a, b, c)                   BOOST_PP_LIMIT_MAG
# define BOOST_PP_DISCARD_MAX_4(a, b, c, d)                BOOST_PP_LIMIT_MAG
# define BOOST_PP_DISCARD_MAX_5(a, b, c, d, e)             BOOST_PP_LIMIT_MAG
# define BOOST_PP_DISCARD_MAX_6(a, b, c, d, e, f)          BOOST_PP_LIMIT_MAG
# define BOOST_PP_DISCARD_MAX_7(a, b, c, d, e, f, g)       BOOST_PP_LIMIT_MAG
# define BOOST_PP_DISCARD_MAX_8(a, b, c, d, e, f, g, h)    BOOST_PP_LIMIT_MAG
# define BOOST_PP_DISCARD_MAX_9(a, b, c, d, e, f, g, h, i) BOOST_PP_LIMIT_MAG



#endif /* !BOOST_PREPROCESSOR_DISCARD_HPP */
