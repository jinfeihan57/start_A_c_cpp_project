
cmake_minimum_required(VERSION 3.16.3)
project(hello_world)

enable_testing()

option(BUILD_DEBUG "Builds test!!!" OFF)
if(BUILD_DEBUG)
    add_compile_options("-g")
endif()

set(HELLO_WORLD_PROJECT_ROOT ${CMAKE_CURRENT_SOURCE_DIR})
set(HELLO_WORLD_BIN_ROOT ${CMAKE_CURRENT_BINARY_DIR})

add_subdirectory(hello)
add_subdirectory(world)

add_executable(main ${CMAKE_CURRENT_SOURCE_DIR}/main.cpp)

target_link_libraries(main PUBLIC hellolib)
target_link_libraries(main PUBLIC worldlib)

# 设置 编译测试选项
option(BUILD_TEST "Builds test!!!" OFF)
if(BUILD_TEST)
    add_subdirectory(tests)
endif()
