include_directories(${gtest_SOURCE_DIR}/include ${gtest_SOURCE_DIR})


add_executable(04_CalcSegundos_test test.cpp)
target_link_libraries(04_CalcSegundos_test gtest gtest_main)
