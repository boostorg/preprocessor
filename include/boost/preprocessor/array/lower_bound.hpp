//
// Copyright Antoine Leblanc 2015
// http://nauths.fr
//
// Distributed under the Boost Software License, Version 1.0. (See
// accompanying file LICENSE_1_0.txt or copy at
// http://www.boost.org/LICENSE_1_0.txt)
//

#ifndef BOOST_PREPROCESSOR_ARRAY_LOWER_BOUND_HPP
# define BOOST_PREPROCESSOR_ARRAY_LOWER_BOUND_HPP



# include <boost/preprocessor/comparison/less.hpp>
# include <boost/preprocessor/array/elem.hpp>
# include <boost/preprocessor/array/size.hpp>
# include <boost/preprocessor/tuple/elem.hpp>
# include <boost/preprocessor/discard.hpp>
# include <boost/preprocessor/while.hpp>
# include <boost/preprocessor/inc.hpp>
# include <boost/preprocessor/cat.hpp>
# include <boost/preprocessor/if.hpp>



/*
** BOOST_PP_ARRAY_LOWER_BOUND
** Finds the lower bound of a given element in a given *sorted* PP_ARRAY.
** Return value is the index of the lower bound in the array.
** _D variants use the next available PP_WHILE iteration
*/

# define BOOST_PP_ARRAY_LOWER_BOUND(     A, E) BOOST_PP_ALB_INDEX(                  BOOST_PP_WHILE(BOOST_PP_ALB_PRED, BOOST_PP_ALB_OP, (A, E, 0)))
# define BOOST_PP_ARRAY_LOWER_BOUND_D(D, A, E) BOOST_PP_ALB_INDEX(BOOST_PP_CAT(BOOST_PP_WHILE_, D)(BOOST_PP_ALB_PRED, BOOST_PP_ALB_OP, (A, E, 0)))



/*
** Internal helpers
*/

# define BOOST_PP_ALB_ARRAY_ELEM_IMPLEM(D, A, S, I) BOOST_PP_IF(BOOST_PP_LESS_D(D, I, S), BOOST_PP_ARRAY_ELEM, BOOST_PP_DISCARD_MAX_2)(I, A)

# define BOOST_PP_ALB_ARRAY_ELEM(D, S) BOOST_PP_ALB_ARRAY_ELEM_IMPLEM(D, BOOST_PP_ALB_ARRAY(S), BOOST_PP_ALB_ARRAY_SIZE(S), BOOST_PP_ALB_INDEX(S))
# define BOOST_PP_ALB_ARRAY_SIZE(S)    BOOST_PP_ARRAY_SIZE(BOOST_PP_ALB_ARRAY(S))
# define BOOST_PP_ALB_ARRAY(S)         BOOST_PP_TUPLE_ELEM(3, 0, S)
# define BOOST_PP_ALB_BOUND(S)         BOOST_PP_TUPLE_ELEM(3, 1, S)
# define BOOST_PP_ALB_INDEX(S)         BOOST_PP_TUPLE_ELEM(3, 2, S)

# define BOOST_PP_ALB_PRED(D, S) BOOST_PP_LESS_D(D, BOOST_PP_ALB_ARRAY_ELEM(D, S), BOOST_PP_ALB_BOUND(S))
# define BOOST_PP_ALB_OP(D, S) (BOOST_PP_ALB_ARRAY(S), BOOST_PP_ALB_BOUND(S), BOOST_PP_INC(BOOST_PP_ALB_INDEX(S)))



#endif /* !BOOST_PREPROCESSOR_ARRAY_LOWER_BOUND_HPP */
