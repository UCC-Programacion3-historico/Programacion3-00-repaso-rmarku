project(test)

add_subdirectory(lib/gtest-1.8.0)
include_directories(${gtest_SOURCE_DIR}/include ${gtest_SOURCE_DIR})

set(TEST_SOURCE_FILES 01_POO/test.cpp
        02_Templates/test.cpp
        03_Excepciones/test.cpp
        04_CalcSegundos/test.cpp
        05_OperatorOverload/test.cpp
        06_Tiempo/test.cpp)

add_executable(run_test ${TEST_SOURCE_FILES} )
target_link_libraries(run_test gtest gtest_main)