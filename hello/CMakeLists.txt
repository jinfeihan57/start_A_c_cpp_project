
cmake_minimum_required(VERSION 3.16.3)
project(hello)

set(HELLO_SRC ${CMAKE_CURRENT_SOURCE_DIR}/hello.cpp
              ${CMAKE_CURRENT_SOURCE_DIR}/hello1.cpp)

add_library(hellolib SHARED ${HELLO_SRC})

if (CMAKE_SYSTEM_NAME MATCHES "Windows")
    set(LIBRARY_OUTPUT_PATH ${HELLO_WORLD_BIN_ROOT})
endif ()
