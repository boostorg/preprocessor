//
// Copyright Antoine Leblanc 2015
// http://nauths.fr
//
// Distributed under the Boost Software License, Version 1.0. (See
// accompanying file LICENSE_1_0.txt or copy at
// http://www.boost.org/LICENSE_1_0.txt)
//

#ifndef BOOST_PREPROCESSOR_TUPLE_SORT_HPP
# define BOOST_PREPROCESSOR_TUPLE_SORT_HPP

# include <boost/preprocessor/config/config.hpp>
# if BOOST_PP_VARIADICS



#  include <boost/preprocessor/array/lower_bound.hpp>
#  include <boost/preprocessor/tuple/insert.hpp>



/*
** BOOST_PP_TUPLE_SORT
** Sorts the given PP_TUPLE.
** _U variants remove duplicates.
** _D variants use the next available PP_WHILE iteration
*/

#  define BOOST_PP_TUPLE_SORT(A)        BOOST_PP_TS_RES(BOOST_PP_WHILE(                  BOOST_PP_TS_PRED, BOOST_PP_TS_OP,   (A, 0, (0, (0)))))
#  define BOOST_PP_TUPLE_SORT_U(A)      BOOST_PP_TS_RES(BOOST_PP_WHILE(                  BOOST_PP_TS_PRED, BOOST_PP_TS_OP_U, (A, 0, (0, (0)))))
#  define BOOST_PP_TUPLE_SORT_D(D, A)   BOOST_PP_TS_RES(BOOST_PP_CAT(BOOST_PP_WHILE_, D)(BOOST_PP_TS_PRED, BOOST_PP_TS_OP,   (A, 0, (0, (0)))))
#  define BOOST_PP_TUPLE_SORT_U_D(D, A) BOOST_PP_TS_RES(BOOST_PP_CAT(BOOST_PP_WHILE_, D)(BOOST_PP_TS_PRED, BOOST_PP_TS_OP_U, (A, 0, (0, (0)))))



/*
** Boost 1.49.0 compatibility
*/

#  ifndef BOOST_PP_TUPLE_REM_0
#   define BOOST_PP_TUPLE_REM_0()
#  endif



/*
** Internal helpers
*/

#  define BOOST_PP_TS_LB(D, S) BOOST_PP_ARRAY_LOWER_BOUND_D(D, BOOST_PP_TS_OUT(S), BOOST_PP_TS_TUPLE_ELEM(S))

#  define BOOST_PP_TS_TUPLE_ELEM(S)  BOOST_PP_TUPLE_ELEM(BOOST_PP_TS_INDEX(S), BOOST_PP_TS_TUPLE(S))
#  define BOOST_PP_TS_TUPLE_SIZE(S)  BOOST_PP_TUPLE_SIZE(BOOST_PP_TS_TUPLE(S))
#  define BOOST_PP_TS_TUPLE(S)       BOOST_PP_TUPLE_ELEM(3, 0, S)
#  define BOOST_PP_TS_INDEX(S)       BOOST_PP_TUPLE_ELEM(3, 1, S)
#  define BOOST_PP_TS_OUT(S)         BOOST_PP_TUPLE_ELEM(3, 2, S)
#  define BOOST_PP_TS_RES(S)         BOOST_PP_ARRAY_TO_TUPLE(BOOST_PP_TS_OUT(S))

#  define BOOST_PP_TS_MERGE(  D, E, R, P) BOOST_PP_ARRAY_INSERT_D(D, R, P, E)
#  define BOOST_PP_TS_MERGE_R(D, E, R, P) BOOST_PP_IF(BOOST_PP_LESS(E, BOOST_PP_ARRAY_ELEM(P, R)), BOOST_PP_TS_MERGE(D, E, R, P), R)
#  define BOOST_PP_TS_MERGE_U(D, E, R, P) BOOST_PP_IF(BOOST_PP_LESS(P, BOOST_PP_ARRAY_SIZE(R)), BOOST_PP_TS_MERGE_R, BOOST_PP_TS_MERGE)(D, E, R, P)

#  define BOOST_PP_TS_PRED(D, S) BOOST_PP_LESS_D(D, BOOST_PP_TS_INDEX(S), BOOST_PP_TS_TUPLE_SIZE(S))
#  define BOOST_PP_TS_OP(  D, S) (BOOST_PP_TS_TUPLE(S), BOOST_PP_INC(BOOST_PP_TS_INDEX(S)), BOOST_PP_TS_MERGE  (D, BOOST_PP_TS_TUPLE_ELEM(S), BOOST_PP_TS_OUT(S), BOOST_PP_TS_LB(D, S)))
#  define BOOST_PP_TS_OP_U(D, S) (BOOST_PP_TS_TUPLE(S), BOOST_PP_INC(BOOST_PP_TS_INDEX(S)), BOOST_PP_TS_MERGE_U(D, BOOST_PP_TS_TUPLE_ELEM(S), BOOST_PP_TS_OUT(S), BOOST_PP_TS_LB(D, S)))



# endif /* BOOST_PP_VARIADICS */

#endif /* !BOOST_PREPROCESSOR_TUPLE_SORT_HPP */
