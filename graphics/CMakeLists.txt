add_library(painter painter.cc)
add_executable(painter_test painter_test.cc)
target_link_libraries(painter_test painter GTest::gmock_main)
gtest_add_tests(TARGET painter_test)
