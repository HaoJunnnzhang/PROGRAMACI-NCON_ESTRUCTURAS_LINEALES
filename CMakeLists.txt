cmake_minimum_required(VERSION 3.20)
project(reparto CXX)

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

add_compile_options(-Wall -Wextra -Wpedantic -Wshadow -g)

# Modules: every .cpp in src/ except main.cpp
file(GLOB MODULOS CONFIGURE_DEPENDS "src/*.cpp")
list(REMOVE_ITEM MODULOS "${CMAKE_SOURCE_DIR}/src/main.cpp")

add_executable(reparto src/main.cpp ${MODULOS})
target_include_directories(reparto PRIVATE include)

# One executable per test battery: tests/test_<modulo>.cpp
enable_testing()
file(GLOB PRUEBAS CONFIGURE_DEPENDS "tests/test_*.cpp")
foreach(prueba ${PRUEBAS})
    get_filename_component(nombre ${prueba} NAME_WE)
    add_executable(${nombre} ${prueba} ${MODULOS})
    target_include_directories(${nombre} PRIVATE include)
    add_test(NAME ${nombre} COMMAND ${nombre})
endforeach()
