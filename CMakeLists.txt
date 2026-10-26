# Se necesita la versión 3.20 o superior para reconocer C++23
cmake_minimum_required(VERSION 3.20)
project(reparto)

# Activa el estándar C++23
set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED True)
# Desactiva las extensiones del compilador (recomendado: C++ estándar y portable)
set(CMAKE_CXX_EXTENSIONS OFF)

# Recoge automáticamente los .cpp (CONFIGURE_DEPENDS refresca la lista al crear ficheros nuevos)
file(GLOB SRC_FILES CONFIGURE_DEPENDS "src/*.cpp")

add_executable(run_app ${SRC_FILES})
target_include_directories(run_app PRIVATE include)

# Opcional: si usas GCC, añade avisos extra para encontrar errores
if(CMAKE_CXX_COMPILER_ID STREQUAL "GNU")
    target_compile_options(run_app PRIVATE -Wall -Wextra)
endif()
