include_directories(${gtest_SOURCE_DIR}/include ${gtest_SOURCE_DIR})


add_executable(01_POO_test test.cpp)
target_link_libraries(01_POO_test gtest gtest_main)


