# /* **************************************************************************
#  *                                                                          *
#  *     (C) Copyright Edward Diener 2014.
#  *     Distributed under the Boost Software License, Version 1.0. (See
#  *     accompanying file LICENSE_1_0.txt or copy at
#  *     http://www.boost.org/LICENSE_1_0.txt)
#  *                                                                          *
#  ************************************************************************** */
#
# /* See http://www.boost.org for most recent version. */
#
# include <boost/preprocessor/facilities/empty.hpp>
# include <boost/preprocessor/facilities/is_empty.hpp>
# include <boost/preprocessor/facilities/is_empty_or_1.hpp>
# include <boost/preprocessor/facilities/is_1.hpp>
# include <libs/preprocessor/test/test.h>

#if BOOST_PP_VARIADICS

#define DATA
#define OBJECT OBJECT2
#define OBJECT2
#define FUNC(x) FUNC2(x)
#define FUNC2(x)
#define FUNC_GEN() ()
#define FUNC_GEN2(x) ()
#define FUNC_GEN3() (&)
#define FUNC_GEN4(x) (y)
#define FUNC_GEN5() (y,z)
#define FUNC_GEN6() anything
#define FUNC_GEN7(x) anything

#if defined(BOOST_PP_VARIADICS_MSVC)

#define FUNC_GEN8(x,y) (1,2,3)
#define FUNC_GEN9(x,y,z) anything
  
/* These next five produce the wrong result in VC++ */

BEGIN BOOST_PP_IS_EMPTY(FUNC_GEN) == 1 END
BEGIN BOOST_PP_IS_EMPTY(FUNC_GEN2) == 1 END
BEGIN BOOST_PP_IS_EMPTY(FUNC_GEN3) == 1 END
BEGIN BOOST_PP_IS_EMPTY(FUNC_GEN4) == 1 END
BEGIN BOOST_PP_IS_EMPTY(FUNC_GEN5) == 1 END

/* This next should produce a compiler error but does not, and produces the incorrect result */

BEGIN BOOST_PP_IS_EMPTY(FUNC_GEN8) == 1 END

/* This next should produce a compiler error but does not */

BEGIN BOOST_PP_IS_EMPTY(FUNC_GEN9) == 0 END

#else

BEGIN BOOST_PP_IS_EMPTY(FUNC_GEN) == 0 END
BEGIN BOOST_PP_IS_EMPTY(FUNC_GEN2) == 0 END
BEGIN BOOST_PP_IS_EMPTY(FUNC_GEN3) == 0 END
BEGIN BOOST_PP_IS_EMPTY(FUNC_GEN4) == 0 END
BEGIN BOOST_PP_IS_EMPTY(FUNC_GEN5) == 0 END

#endif

BEGIN BOOST_PP_IS_EMPTY(BOOST_PP_EMPTY()) == 1 END
BEGIN BOOST_PP_IS_EMPTY(DATA BOOST_PP_EMPTY()) == 1 END
BEGIN BOOST_PP_IS_EMPTY(x BOOST_PP_EMPTY()) == 0 END
BEGIN BOOST_PP_IS_EMPTY(OBJECT BOOST_PP_EMPTY()) == 1 END
BEGIN BOOST_PP_IS_EMPTY(FUNC(z) BOOST_PP_EMPTY()) == 1 END
BEGIN BOOST_PP_IS_EMPTY(FUNC_GEN6) == 0 END
BEGIN BOOST_PP_IS_EMPTY(FUNC_GEN7) == 0 END
  
#endif
