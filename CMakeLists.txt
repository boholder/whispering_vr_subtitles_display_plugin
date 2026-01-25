# https://cmake.org/cmake/help/book/mastering-cmake/cmake/Help/guide/tutorial/
cmake_minimum_required(VERSION 3.28.3)
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED True)

project(whispering_vr_subtitles_display_plugin VERSION 0.1)

set(TNAME whispering_vr_plugin)
add_executable(${TNAME} src/main.cpp)

add_subdirectory(third)

target_link_libraries(${TNAME}
        PRIVATE opengl32
        PRIVATE openvr_api
        PRIVATE rawdraw
)
