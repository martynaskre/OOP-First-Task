cmake_minimum_required(VERSION 3.21)
project(1_uzd)

set(CMAKE_CXX_STANDARD 14)

if (CMAKE_BUILD_TYPE MATCHES Release)
    set(CMAKE_CXX_FLAGS "-O2")
endif()

set(SOURCE_FILES main.cpp)
add_executable(1_uzd ${SOURCE_FILES})

include_directories(src)
add_subdirectory(src)

target_link_libraries(1_uzd 1_uzd_src)

add_subdirectory(tests)