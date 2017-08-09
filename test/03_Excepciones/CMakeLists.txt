include_directories(${gtest_SOURCE_DIR}/include ${gtest_SOURCE_DIR})


add_executable(03_Excepciones_test test.cpp)
target_link_libraries(03_Excepciones_test gtest gtest_main)
