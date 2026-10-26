# El centro de reparto

Proyecto de *Programación con estructuras lineales* (curso 2026-27).

## Cómo se compila
```
make        # construye ./reparto
make test   # ejecuta todas las baterías de tests/
make san    # pruebas + ficheros de datos/ con AddressSanitizer
./reparto < datos/<fichero>.txt
```

En Windows (MSYS2) AddressSanitizer no está disponible: `make SANFLAGS=` y `make test SANFLAGS=`.

### Con CMake (C++23)
```
cmake -S . -B build-cmake
cmake --build build-cmake
./build-cmake/run_app < datos/<fichero>.txt
```

### Con VS Code
`.vscode/tasks.json` trae tres tareas (Ctrl+Shift+B o *Terminal → Run Task*):
- **C++: compilar el fichero activo**
- **C++: compilar todos los .cpp de la carpeta**
- **C++: compilar el fichero activo CON sanitizers**

## Estado

| Módulo | Implementa | Prueba | Estado |
|---|---|---|---|

## Estructura
- `include/` cabeceras (el contrato)
- `src/` implementaciones y `main`
- `tests/` una batería por módulo
- `datos/` ficheros de órdenes
- `docs/` documentación (`01-plan-de-equipo.md`)
