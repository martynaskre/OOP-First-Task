project(1_uzd_tests)

include(FetchContent)
FetchContent_Declare(gtest QUIET URL https://github.com/google/googletest/archive/release-1.10.0.tar.gz)

set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
set(BUILD_GMOCK OFF CACHE BOOL "" FORCE)

FetchContent_MakeAvailable(gtest)

add_executable(1_uzd_tests student_test.cpp)

target_link_libraries(1_uzd_tests PRIVATE gtest_main 1_uzd_src)