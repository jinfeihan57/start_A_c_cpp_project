
cmake_minimum_required(VERSION 3.16.3)
project(test)
# 将 gtest 添加到项目中
add_subdirectory(${HELLO_WORLD_PROJECT_ROOT}/thirdpart/googletest-1.13.0 googletest)

add_executable(test_hello ${CMAKE_CURRENT_SOURCE_DIR}/test_hello.cpp)
target_include_directories(test_hello PUBLIC ${HELLO_WORLD_PROJECT_ROOT}/thirdpart/googletest-1.13.0/googletest/include)
target_include_directories(test_hello PUBLIC ${HELLO_WORLD_PROJECT_ROOT})
target_link_libraries(test_hello PUBLIC hellolib gtest gtest_main)

add_test(NAME test_hello
         COMMAND test_hello)
