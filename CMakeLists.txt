cmake_minimum_required(VERSION 3.22)
project(GoogleTestDemo)

# GoogleTest requires at least C++14
set(CMAKE_CXX_STANDARD 14)

include(FetchContent)
FetchContent_Declare(
  googletest
  GIT_REPOSITORY https://github.com/google/googletest.git
  GIT_TAG release-1.12.1
)
FetchContent_MakeAvailable(googletest)

enable_testing()

add_executable(hello_test hello_test.cc)
target_link_libraries(hello_test GTest::gtest_main)

include(GoogleTest)
gtest_add_tests(TARGET hello_test)

add_subdirectory(factorial)
add_subdirectory(queue)
add_subdirectory(graphics)
