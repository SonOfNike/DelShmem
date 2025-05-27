cmake_minimum_required(VERSION 3.10.0)
project(DelShmem VERSION 0.1.0 LANGUAGES C CXX)

add_executable(DelShmem main.cpp)

include(CTest)
enable_testing()

set_property(TARGET DelShmem PROPERTY CXX_STANDARD 17)