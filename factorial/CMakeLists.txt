add_library(factorial factorial.cc)
add_executable(factorial_test factorial_test.cc)
target_link_libraries(factorial_test factorial GTest::gtest_main)
gtest_add_tests(TARGET factorial_test)
