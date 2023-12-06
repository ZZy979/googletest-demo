add_library(queue queue.cc)
add_executable(queue_test queue_test.cc)
target_link_libraries(queue_test queue GTest::gtest_main)
gtest_add_tests(TARGET queue_test)
