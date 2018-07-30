set (srcs
        MyMath.cpp)

set (hdrs
    MyMath.hpp)

add_library(mymath STATIC
        ${srcs}
        ${hdrs})

target_include_directories(mymath
    PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
