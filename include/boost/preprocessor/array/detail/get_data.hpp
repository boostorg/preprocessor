# /* **************************************************************************
#  *                                                                          *
#  *     (C) Copyright Edward Diener 2014.                                    *
#  *     Distributed under the Boost Software License, Version 1.0. (See      *
#  *     accompanying file LICENSE_1_0.txt or copy at                         *
#  *     http://www.boost.org/LICENSE_1_0.txt)                                *
#  *                                                                          *
#  ************************************************************************** */
#
# /* See http://www.boost.org for most recent version. */
#
# ifndef BOOST_PREPROCESSOR_ARRAY_DETAIL_GET_DATA_HPP
# define BOOST_PREPROCESSOR_ARRAY_DETAIL_GET_DATA_HPP
#
# include <boost/preprocessor/config/config.hpp>
# include <boost/preprocessor/tuple/rem.hpp>
# include <boost/preprocessor/control/if.hpp>
#
# /* BOOST_PP_ARRAY_DETAIL_GET_DATA */
#
# define BOOST_PP_ARRAY_DETAIL_GET_DATA_NONE(size, data)
# define BOOST_PP_ARRAY_DETAIL_GET_DATA_ANY(size, data) BOOST_PP_TUPLE_REM(size) data
# define BOOST_PP_ARRAY_DETAIL_GET_DATA(size, data) \
	BOOST_PP_IF \
		( \
		size, \
		BOOST_PP_ARRAY_DETAIL_GET_DATA_ANY, \
		BOOST_PP_ARRAY_DETAIL_GET_DATA_NONE \
		) \
	(size,data) \
/**/
#
# endif /* BOOST_PREPROCESSOR_ARRAY_DETAIL_GET_DATA_HPP */
