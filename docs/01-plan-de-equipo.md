# Plan de equipo (E0)

## Pareja

| Nombre | Usuario de git |
|---|---|
| Hao Jun Zhang | HaoJunnnzhang |
| Pablo | _(usuario de GitHub de Pablo)_ |

## Módulos y reparto

Regla: quien implementa un módulo **no** escribe sus pruebas; las escribe el otro leyendo solo la cabecera.
Cada uno implementa al menos una estructura completa con su regla de tres (destructor, constructor de copia y asignación).

| Módulo | Restricción del caso que lo justifica | Implementa | Prueba |
|---|---|---|---|
| `Cola` | La cinta y las reentregas se procesan en orden de llegada (FIFO) | Hao Jun | Pablo |
| `Pila` | La furgoneta solo da acceso a lo último cargado (LIFO) | Pablo | Hao Jun |
| `ListaContigua` | La ruta se modifica por posición, por el medio; versión sobre bloque contiguo que crece | Hao Jun | Pablo |
| `ListaEnlazada` | Misma interfaz que `ListaContigua`, versión enlazada | Pablo | Hao Jun |
| `Paquete` | Datos de un paquete: identificador, parada y kilos | Pablo | Hao Jun |
| `Centro` + `main` | Lee las órdenes y coordina las estructuras | Los dos (Hao Jun: órdenes de ruta y carga; Pablo: entrega, fallos y cierre de día) | Cada uno prueba la parte del otro |

Así cada uno implementa dos estructuras con regla de tres y prueba las dos del otro.

## Papeles

| Papel | Responsable | Qué hace |
|---|---|---|
| Integración y `main` | Hao Jun | Revisa y fusiona las ramas en `main`; pone las etiquetas de entrega (`E0`, `E1`, ...) |
| `README` y estado | Pablo | Mantiene al día la tabla de estado del `README` después de cada fusión |
| Registro de defectos | Hao Jun | Comprueba que cada defecto encontrado queda apuntado |
| Cuaderno de decisiones y actas | Pablo | Apunta las decisiones y lo acordado en cada reunión |
| Memoria | Los dos | Cada uno redacta la parte de sus estructuras y revisa la del otro |

## Horarios

| Cuándo | Qué |
|---|---|
| Martes y jueves, en clase | Trabajo conjunto y reunión de 10 minutos: qué hizo cada uno y qué hará |
| _(día y hora fuera de clase)_ | Sesión de trabajo juntos |
| _(medio: WhatsApp / Discord ...)_ | Comunicación diaria; respondemos en menos de 24 horas |

## Compromisos

1. Nadie hace commit directamente a `main`; se trabaja en ramas `modulo/<nombre>` y se fusiona cuando el módulo está Hecho.
2. `main` siempre compila y pasa `make test`; si se rompe, se arregla antes de la siguiente clase.
3. Cada uno hace al menos un commit por sesión de trabajo, con su propio usuario y con mensaje `[modulo] qué hace`.
4. Quien implementa un módulo no escribe sus pruebas.
5. Toda decisión de diseño se apunta en el cuaderno de decisiones el mismo día, con fecha y nombre.
6. Antes de fusionar una rama, el otro la revisa y la entiende.
7. Cada entrega se etiqueta al menos un día antes de la fecha límite.
