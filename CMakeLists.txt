# https://cmake.org/cmake/help/book/mastering-cmake/cmake/Help/guide/tutorial/
cmake_minimum_required(VERSION 3.28.3)
set(CMAKE_CXX_STANDARD 20)

project(whispering_vr_subtitles_display_plugin VERSION 0.1)

set(SOURCE_FILES src/main.cpp)

# build
set(TARGET_NAME whispering_vr_plugin)
add_executable(${TARGET_NAME} ${SOURCE_FILES})
