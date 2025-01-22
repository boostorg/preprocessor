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

#if defined(__clang__) && defined(__CUDACC__) && defined(__CUDA__)

static_assert(BOOST_PP_VARIADICS == 1, "");

#else

static_assert(0 == 1, "");

#endif

int main(void) {
    return 0;
}
