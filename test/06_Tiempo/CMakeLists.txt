include_directories(${gtest_SOURCE_DIR}/include ${gtest_SOURCE_DIR})


add_executable(06_Tiempo_test test.cpp)
target_link_libraries(06_Tiempo_test gtest gtest_main)
