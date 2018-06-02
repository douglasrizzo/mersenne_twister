cmake_minimum_required(VERSION 3.8)
project(mersenne_twister)

set(CMAKE_CXX_STANDARD 11)

SET(GCC_ERROR_RETURN_TYPE "-Werror=return-type")
add_definitions(${GCC_ERROR_RETURN_TYPE})

set(SOURCE_FILES MersenneTwister.hpp test/main.cpp)
add_executable(mersenne_twister ${SOURCE_FILES})
