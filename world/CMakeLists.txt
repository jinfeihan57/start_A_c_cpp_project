
cmake_minimum_required(VERSION 3.16.3)
project(world)

set(WORLD_SRC ${CMAKE_CURRENT_SOURCE_DIR}/world.cpp)

add_library(worldlib SHARED ${WORLD_SRC})
# 将头文件路径加到与库形成对应关系
target_include_directories(worldlib SYSTEM INTERFACE ${CMAKE_CURRENT_SOURCE_DIR})

if (CMAKE_SYSTEM_NAME MATCHES "Windows")
    set(LIBRARY_OUTPUT_PATH ${HELLO_WORLD_BIN_ROOT})
endif ()