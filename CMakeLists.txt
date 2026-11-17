cmake_minimum_required(VERSION 3.21)
project(MiniHack VERSION 1.0.0)

# Geode's standard CMake integration.
find_package(Geode REQUIRED)

add_library(${PROJECT_NAME} SHARED
    src/main.cpp
    src/Config.cpp
    src/MiniHackMenu.cpp
)

setup_geode_mod(${PROJECT_NAME})
