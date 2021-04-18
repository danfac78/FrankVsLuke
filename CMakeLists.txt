cmake_minimum_required(VERSION 3.4.0)
project(LukeVSFrank VERSION 0.1.0)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

#include(CTest)
#enable_testing()

#You need to set the dafaults to propagate to subdirectories
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

# Link this 'library' to set the c++ standard / compile-time options requested
add_library(project_options INTERFACE)
target_compile_features(project_options INTERFACE cxx_std_17)

# Prefer pthread over system thread - DEVONO stare prima del find_package!
set(CMAKE_THREAD_PREFER_PTHREAD TRUE)
set(THREADS_PREFER_PTHREAD_FLAG TRUE)
find_package(Threads REQUIRED)

add_executable(
    LukeVSFrank
    src/main.cpp
    src/gfx/common/coord.h
    src/gfx/common/coord.cpp
    src/gfx/common/IMovable.h
    src/gfx/bitmap/bitmap.h
    src/gfx/bitmap/bitmap.cpp
)

target_compile_options(LukeVSFrank INTERFACE   -Wall -Wextra  -Wpedantic -Wnull-dereference -Wformat=2 -Wmisleading-indentation -Wduplicated-cond -Wduplicated-branches)
target_include_directories(LukeVSFrank PUBLIC /usr/include/SDL2)
target_link_libraries(LukeVSFrank PUBLIC project_options SDL2 SDL2_image Threads::Threads)


set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
