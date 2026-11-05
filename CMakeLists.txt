# to rebuild and run, use this command: cmake --build build && ./build/simulator

cmake_minimum_required(VERSION 3.16)

project(NBodySimulator LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

add_executable(simulator
    src/main.cpp
    src/Vector2D.cpp
    src/Body.cpp
    src/Simulation.cpp
)

target_include_directories(simulator PRIVATE include)

target_compile_options(simulator PRIVATE
    -Wall
    -Wextra
    -Wpedantic
)