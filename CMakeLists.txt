cmake_minimum_required(VERSION 3.6)
project(dak-engine)

set(CMAKE_CXX_STANDARD 17)  # for c++17


file(GLOB_RECURSE SOURCE_FILES "src/*.cpp")

add_executable(dak-engine ${SOURCE_FILES})

find_package(OpenGL REQUIRED)
include_directories( ${OPENGL_INCLUDE_DIRS} )


add_subdirectory(glfw)
include_directories(glfw/include)

target_link_libraries(dak-engine glfw ${GLFW_LIBRARIES})
target_link_libraries(dak-engine glfw ${OPENGL_glu_LIBRARY} ${GLFW_LIBRARIES})

target_link_libraries(dak-engine ${OPENGL_LIBRARIES})