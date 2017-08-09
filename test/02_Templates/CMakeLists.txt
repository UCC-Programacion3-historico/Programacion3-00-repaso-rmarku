include_directories(${gtest_SOURCE_DIR}/include ${gtest_SOURCE_DIR})


add_executable(02_Template_test test.cpp)
target_link_libraries(02_Template_test gtest gtest_main)
