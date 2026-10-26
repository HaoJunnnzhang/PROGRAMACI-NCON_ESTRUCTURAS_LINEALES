# Plan de equipo (E0)

## Pareja
| Nombre | Usuario de git |
|---|---|
|  |  |
|  |  |

## Módulos y reparto
<!-- Quién IMPLEMENTA cada módulo y quién lo PRUEBA (nunca la misma persona).
     Cada uno escribe al menos una estructura completa con su regla de tres. -->

| Módulo | Para qué (restricción del caso) | Implementa | Prueba |
|---|---|---|---|
| Cola | Cinta y reentregas: se procesan en orden de llegada |  |  |
| Lista contigua | Ruta: inserción/borrado/consulta por posición en medio |  |  |
| Lista enlazada | Ruta: misma interfaz que la contigua |  |  |
| Pila | Furgoneta: solo se accede a lo último cargado |  |  |
| Centro + main | Lee órdenes y coordina las estructuras |  |  |

## Papeles
<!-- Ej.: responsable del README y las etiquetas, responsable del registro de defectos, de las actas... -->
- 
- 

## Horarios
<!-- Cuándo y dónde trabajáis juntos, cómo os comunicáis y en cuánto tiempo respondéis. -->
- 
- 

## Compromisos (comprobables)
1. Nadie hace commit directamente a `main`; se trabaja en `modulo/<nombre>`.
2. `main` siempre compila y pasa `make test`; si se rompe, se arregla antes de la siguiente sesión.
3. Al menos un commit por sesión de trabajo, con mensaje `[modulo] qué hace`.
4. Quien implementa un módulo no escribe sus pruebas.
5. Toda decisión de diseño se apunta en `03-registro-decisiones.md` el mismo día.
6. 
