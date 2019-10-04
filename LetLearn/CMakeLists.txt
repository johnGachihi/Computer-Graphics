cmake_minimum_required(VERSION 3.14)
project(LetLearn)

set(CMAKE_CXX_STANDARD 14)

set(OpenGlLinkers -lglut -lGLU -lGL)

add_executable(LetLearn main.cpp)

target_link_libraries(LetLearn ${OpenGlLinkers})