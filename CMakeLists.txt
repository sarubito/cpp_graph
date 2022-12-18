cmake_minimum_required(VERSION 3.0)
project(cpp_graph)
set(CMAKE_CXX_STANDARD 17)

find_package(Boost REQUIRED)
include_directories("${Boost_INCLUDE_DIRS}")
link_directories("${Boost_INCLUDE_DIRS}")
add_executable(graph graph.cpp)
target_link_libraries(graph ${Boost_INCLUDE_DIRS})
