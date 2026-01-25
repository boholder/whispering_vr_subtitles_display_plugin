# https://cmake.org/cmake/help/book/mastering-cmake/cmake/Help/guide/tutorial/
cmake_minimum_required(VERSION 3.28.3)
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED True)

project(whispering_vr_subtitles_display_plugin VERSION 0.1)

# build
set(TARGET_NAME whispering_vr_plugin)
set(SOURCE_FILES src/main.cpp)
add_executable(${TARGET_NAME} ${SOURCE_FILES})
target_include_directories(${TARGET_NAME}
        PRIVATE third
)
target_link_libraries(${TARGET_NAME}
        PRIVATE opengl32
)