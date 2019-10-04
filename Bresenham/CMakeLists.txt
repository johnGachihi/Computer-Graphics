cmake_minimum_required(VERSION 3.14)
project(Bresenham)

set(CMAKE_CXX_STANDARD 14)

set(OpenGlLinkers -lglut -lGLU -lGL)

add_executable(Bresenham main.cpp)

target_link_libraries(Bresenham ${OpenGlLinkers})