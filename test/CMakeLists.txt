# Copyright 2018 Mike Dev
# Distributed under the Boost Software License, Version 1.0.
# See accompanying file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt
#
# NOTE: This does not run the UNIT-TESTS for Boost.PReprocessor.
#       It only tests, if the CMakeLists.txt file works as expected

cmake_minimum_required( VERSION 3.5 )

project( TestBoostPreprocessorCMakeSelfTest )

add_subdirectory( .. ${CMAKE_CURRENT_BINARY_DIR}/boost_preprocessor )

# arithmetic.cpp is a randomly chosen source file
# that is compilable on it's own.
add_executable( boost_preprocessor_self_test cmake_self_test.cpp )
target_link_libraries( boost_preprocessor_self_test Boost::preprocessor )

