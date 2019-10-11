cmake_minimum_required(VERSION 3.10)
project(ARFF)
set(CMAKE_CXX_STANDARD 11)

file(GLOB SRC ./src/*.cpp)
file(GLOB HEAD ./src/*.h)
add_library(ARFF ${SRC} ${HEAD})

