//
// Copyright Antoine Leblanc 2015
// http://nauths.fr
//
// Distributed under the Boost Software License, Version 1.0. (See
// accompanying file LICENSE_1_0.txt or copy at
// http://www.boost.org/LICENSE_1_0.txt)
//

#ifndef BOOST_PREPROCESSOR_TUPLE_CAT_HPP
# define BOOST_PREPROCESSOR_TUPLE_CAT_HPP

# include <boost/preprocessor/config/config.hpp>
# if BOOST_PP_VARIADICS



#  include <boost/preprocessor/comparison/greater.hpp>
#  include <boost/preprocessor/tuple/push_back.hpp>
#  include <boost/preprocessor/tuple/pop_front.hpp>
#  include <boost/preprocessor/tuple/elem.hpp>
#  include <boost/preprocessor/while.hpp>
#  include <boost/preprocessor/cat.hpp>



/*
** BOOST_PP_TUPLE_CAT
** Concatenates two PP_TUPLEs.
** _D variant uses the next available PP_WHILE iteration
*/

#  define BOOST_PP_TUPLE_CAT(     A1, A2) BOOST_PP_TC_P(                  BOOST_PP_WHILE(BOOST_PP_TC_PRED, BOOST_PP_TC_OP, (A1, A2)))
#  define BOOST_PP_TUPLE_CAT_D(D, A1, A2) BOOST_PP_TC_P(BOOST_PP_CAT(BOOST_PP_WHILE_, D)(BOOST_PP_TC_PRED, BOOST_PP_TC_OP, (A1, A2)))



/*
** Internal helpers
*/

#  define BOOST_PP_TC_1(S) BOOST_PP_TUPLE_ELEM(0, S)
#  define BOOST_PP_TC_2(S) BOOST_PP_TUPLE_ELEM(1, S)
#  define BOOST_PP_TC_P(S) BOOST_PP_TUPLE_PUSH_BACK(BOOST_PP_TC_1(S), BOOST_PP_TUPLE_ELEM(0, BOOST_PP_TC_2(S)))
#  define BOOST_PP_TC_PRED(D, S) BOOST_PP_GREATER(BOOST_PP_TUPLE_SIZE(BOOST_PP_TC_2(S)), 1)
#  define BOOST_PP_TC_OP(  D, S) (BOOST_PP_TC_P(S), BOOST_PP_TUPLE_POP_FRONT(BOOST_PP_TC_2(S)))



# endif /* BOOST_PP_VARIADICS */

#endif /* !BOOST_PREPROCESSOR_TUPLE_CAT_HPP */
