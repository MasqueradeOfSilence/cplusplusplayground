cmake_minimum_required(VERSION 3.10)
project(cplusplusplayground)

set(CMAKE_CXX_STANDARD 17)

# Add executable
add_executable(${PROJECT_NAME} src/main.cpp)

target_include_directories(${PROJECT_NAME} PRIVATE ${CMAKE_SOURCE_DIR}/src)
