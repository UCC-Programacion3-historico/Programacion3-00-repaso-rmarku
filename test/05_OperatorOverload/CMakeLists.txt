include_directories(${gtest_SOURCE_DIR}/include ${gtest_SOURCE_DIR})


add_executable(05_OperatorOverload_test test.cpp)
target_link_libraries(05_OperatorOverload_test gtest gtest_main)
