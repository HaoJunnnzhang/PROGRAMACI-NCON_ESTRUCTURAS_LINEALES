# El centro de reparto

Proyecto de *Programación con estructuras lineales* (curso 2026-27).

## Cómo se compila
```
make        # construye ./reparto
make test   # ejecuta todas las baterías de tests/
make san    # pruebas + ficheros de datos/ con AddressSanitizer
./reparto < datos/ejemplo.txt
```

## Estado

| Módulo | Implementa | Prueba | Estado |
|---|---|---|---|
| Contador (ejemplo, se borrará) | — | — | Hecho |

## Estructura
- `include/` cabeceras (el contrato)
- `src/` implementaciones y `main`
- `tests/` una batería por módulo
- `datos/` ficheros de órdenes
- `docs/` documentación (ver `docs/00-indice.md`)
