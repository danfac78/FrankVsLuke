cmake_minimum_required(VERSION 3.4.0)
project(LukeVSFrank VERSION 0.1.0)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

#include(CTest)
#enable_testing()

add_executable(LukeVSFrank src/main.cpp)

target_compile_options(LukeVSFrank INTERFACE   -Wall -Wextra)
target_include_directories(LukeVSFrank PUBLIC /usr/include/SDL2)
target_link_libraries(LukeVSFrank PUBLIC SDL2 SDL2_image)


set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
