cmake_minimum_required(VERSION 3.6)
project(project1)

set(CMAKE_CXX_STANDARD 11)  # for c++11

find_package(X11 REQUIRED)
link_libraries(${X11_LIBRARIES})
include_directories(${X11_INCLUDE_DIR})

set(SOURCE_FILES main.cpp Window.cpp Display.cpp)
add_executable(project1 ${SOURCE_FILES})