cmake_minimum_required(VERSION 2.8.12)
project(TestGit)

message(${CMAKE_BINARY_DIR})
message(${CMAKE_SOURCE_DIR})

set(CMAKE_CXX_FLAGS "-g -Wall")

add_subdirectory(app)
add_subdirectory(lib)

