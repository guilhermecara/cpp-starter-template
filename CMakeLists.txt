cmake_minimum_required(VERSION 3.20)
project(project VERSION 0.1.0 LANGUAGES CXX C)

# Standard C++20
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

# 1. Core Static Library
add_library(project_lib STATIC
    src/App.cpp
)

target_include_directories(project_lib PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    $<INSTALL_INTERFACE:include>
)

# 2. Application Executable
add_executable(project src/main.cpp)
target_link_libraries(project PRIVATE project_lib)

# 3. Unit Tests
enable_testing()
add_subdirectory(tests)
