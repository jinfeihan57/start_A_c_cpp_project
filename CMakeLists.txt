
cmake_minimum_required(VERSION 3.16.3)
project(hello_world)

add_subdirectory(hello)
add_subdirectory(world)

add_executable(main main.cpp)

target_include_directories(main PUBLIC world)

target_link_libraries(main PUBLIC hellolib)
target_link_libraries(main PUBLIC worldlib)

# 将 gtest 添加到项目中
add_subdirectory(thirdpart/googletest-1.13.0)
