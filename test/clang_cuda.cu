# /* **************************************************************************
#  *                                                                          *
#  *     (C) Copyright Edward Diener 2019.
#  *     Distributed under the Boost Software License, Version 1.0. (See
#  *     accompanying file LICENSE_1_0.txt or copy at
#  *     http://www.boost.org/LICENSE_1_0.txt)
#  *                                                                          *
#  ************************************************************************** */
#
# /* See http://www.boost.org for most recent version. */
#
# include <boost/preprocessor/cat.hpp>
#
# define BEGIN typedef int BOOST_PP_CAT(test_, __LINE__)[((
# define END )==1) ? 1 : -1];

#if defined(__clang__) && defined(__CUDACC__) && defined(__CUDA__)

BEGIN BOOST_PP_VARIADICS == 1 END

#else

BEGIN 0 == 1 END

#endif

int main(void) {
    return 0;
}
