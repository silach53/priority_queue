project(alekseev_a_r LANGUAGES C CXX)
cmake_minimum_required(VERSION 3.12)

set(CMAKE_CXX_STANDARD 14)

enable_testing()

include_directories(prj.lab prj.thirdparty)
add_subdirectory(prj.lab)