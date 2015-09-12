//
// Copyright Antoine Leblanc 2015
// http://nauths.fr
//
// Distributed under the Boost Software License, Version 1.0. (See
// accompanying file LICENSE_1_0.txt or copy at
// http://www.boost.org/LICENSE_1_0.txt)
//

#ifndef BOOST_PREPROCESSOR_ARRAY_SORT_HPP
# define BOOST_PREPROCESSOR_ARRAY_SORT_HPP



# include <boost/preprocessor/array/lower_bound.hpp>
# include <boost/preprocessor/array/insert.hpp>



/*
** BOOST_PP_ARRAY_SORT
** Sorts the given PP_ARRAY.
** _U variants remove duplicates.
** _D variants use the next available PP_WHILE iteration
*/

# define BOOST_PP_ARRAY_SORT(A)        BOOST_PP_AS_RES(BOOST_PP_WHILE(                  BOOST_PP_AS_PRED, BOOST_PP_AS_OP,   (A, 0, (0, ()))))
# define BOOST_PP_ARRAY_SORT_U(A)      BOOST_PP_AS_RES(BOOST_PP_WHILE(                  BOOST_PP_AS_PRED, BOOST_PP_AS_OP_U, (A, 0, (0, ()))))
# define BOOST_PP_ARRAY_SORT_D(D, A)   BOOST_PP_AS_RES(BOOST_PP_CAT(BOOST_PP_WHILE_, D)(BOOST_PP_AS_PRED, BOOST_PP_AS_OP,   (A, 0, (0, ()))))
# define BOOST_PP_ARRAY_SORT_U_D(D, A) BOOST_PP_AS_RES(BOOST_PP_CAT(BOOST_PP_WHILE_, D)(BOOST_PP_AS_PRED, BOOST_PP_AS_OP_U, (A, 0, (0, ()))))



/*
** Boost 1.49.0 compatibility
*/

# ifndef BOOST_PP_TUPLE_REM_0
#  define BOOST_PP_TUPLE_REM_0()
# endif



/*
** Internal helpers
*/

# define BOOST_PP_AS_LB(D, S) BOOST_PP_ARRAY_LOWER_BOUND_D(D, BOOST_PP_AS_RES(S), BOOST_PP_AS_ARRAY_ELEM(S))

# define BOOST_PP_AS_ARRAY_ELEM(S)  BOOST_PP_ARRAY_ELEM(BOOST_PP_AS_INDEX(S), BOOST_PP_AS_ARRAY(S))
# define BOOST_PP_AS_ARRAY_SIZE(S)  BOOST_PP_ARRAY_SIZE(BOOST_PP_AS_ARRAY(S))
# define BOOST_PP_AS_ARRAY(S)       BOOST_PP_TUPLE_ELEM(3, 0, S)
# define BOOST_PP_AS_INDEX(S)       BOOST_PP_TUPLE_ELEM(3, 1, S)
# define BOOST_PP_AS_RES(S)         BOOST_PP_TUPLE_ELEM(3, 2, S)

# define BOOST_PP_AS_MERGE(  D, E, R, P) BOOST_PP_ARRAY_INSERT_D(D, R, P, E)
# define BOOST_PP_AS_MERGE_R(D, E, R, P) BOOST_PP_IF(BOOST_PP_LESS(E, BOOST_PP_ARRAY_ELEM(P, R)), BOOST_PP_AS_MERGE(D, E, R, P), R)
# define BOOST_PP_AS_MERGE_U(D, E, R, P) BOOST_PP_IF(BOOST_PP_LESS(P, BOOST_PP_ARRAY_SIZE(R)), BOOST_PP_AS_MERGE_R, BOOST_PP_AS_MERGE)(D, E, R, P)

# define BOOST_PP_AS_PRED(D, S) BOOST_PP_LESS_D(D, BOOST_PP_AS_INDEX(S), BOOST_PP_AS_ARRAY_SIZE(S))
# define BOOST_PP_AS_OP(  D, S) (BOOST_PP_AS_ARRAY(S), BOOST_PP_INC(BOOST_PP_AS_INDEX(S)), BOOST_PP_AS_MERGE  (D, BOOST_PP_AS_ARRAY_ELEM(S), BOOST_PP_AS_RES(S), BOOST_PP_AS_LB(D, S)))
# define BOOST_PP_AS_OP_U(D, S) (BOOST_PP_AS_ARRAY(S), BOOST_PP_INC(BOOST_PP_AS_INDEX(S)), BOOST_PP_AS_MERGE_U(D, BOOST_PP_AS_ARRAY_ELEM(S), BOOST_PP_AS_RES(S), BOOST_PP_AS_LB(D, S)))



#endif /* !BOOST_PREPROCESSOR_ARRAY_SORT_HPP */
