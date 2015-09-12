//
// Copyright Antoine Leblanc 2015
// http://nauths.fr
//
// Distributed under the Boost Software License, Version 1.0. (See
// accompanying file LICENSE_1_0.txt or copy at
// http://www.boost.org/LICENSE_1_0.txt)
//

#ifndef BOOST_PREPROCESSOR_ARRAY_CAT_HPP
# define BOOST_PREPROCESSOR_ARRAY_CAT_HPP



# include <boost/preprocessor/array/push_back.hpp>
# include <boost/preprocessor/array/pop_front.hpp>
# include <boost/preprocessor/array/elem.hpp>
# include <boost/preprocessor/tuple/elem.hpp>
# include <boost/preprocessor/while.hpp>
# include <boost/preprocessor/cat.hpp>



/*
** BOOST_PP_ARRAY_CAT
** Concatenates two PP_ARRAYs.
** _D variant uses the next available PP_WHILE iteration
*/

# define BOOST_PP_ARRAY_CAT(     A1, A2) BOOST_PP_AC_1(                  BOOST_PP_WHILE(BOOST_PP_AC_PRED, BOOST_PP_AC_OP, (A1, A2)))
# define BOOST_PP_ARRAY_CAT_D(D, A1, A2) BOOST_PP_AC_1(BOOST_PP_CAT(BOOST_PP_WHILE_, D)(BOOST_PP_AC_PRED, BOOST_PP_AC_OP, (A1, A2)))



/*
** Internal helpers
*/

# define BOOST_PP_AC_1(S) BOOST_PP_TUPLE_ELEM(2, 0, S)
# define BOOST_PP_AC_2(S) BOOST_PP_TUPLE_ELEM(2, 1, S)
# define BOOST_PP_AC_PRED(D, S) BOOST_PP_ARRAY_SIZE(BOOST_PP_AC_2(S))
# define BOOST_PP_AC_OP(  D, S) (BOOST_PP_ARRAY_PUSH_BACK(BOOST_PP_AC_1(S), BOOST_PP_ARRAY_ELEM(0, BOOST_PP_AC_2(S))), BOOST_PP_ARRAY_POP_FRONT(BOOST_PP_AC_2(S)))



#endif /* !BOOST_PREPROCESSOR_ARRAY_CAT_HPP */
