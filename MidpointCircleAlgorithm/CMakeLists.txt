cmake_minimum_required(VERSION 3.14)
project(MidpointCircleAlgorithm)

set(CMAKE_CXX_STANDARD 14)

set(OpenGlLinkers -lglut -lGLU -lGL)

add_executable(MidpointCircleAlgorithm main.cpp)

target_link_libraries(MidpointCircleAlgorithm ${OpenGlLinkers})