cmake_minimum_required(VERSION 3.10)
project(SampleSFML)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

add_executable(run src/main.cpp src/Points.cpp)
target_link_libraries(run PRIVATE sfml-graphics sfml-window sfml-system)
