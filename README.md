# **Juego de Lotería en C**

Este es un programa sencillo de lotería  mexicana hecho en C, donde dos jugadores compiten por llenar un tablero de 4x4. Cada vez que se genera un número aleatorio, se decide si el Jugador 1 o el Jugador 2 llena una casilla dependiendo si el número es par o impar. Gana el jugador que logre llenar su tablero primero

---

## **Cómo compilar y ejecutar**

### **1. Compilar el programa**
Usa el compilador `gcc` para compilar los archivos del programa. Asegúrate de que los archivos `main.c`, `funciones.c` y `funciones.h` estén en la misma carpeta. Abre la terminal en esa carpeta y escribe:

```bash
gcc main.c funciones.c main.c -o loteria
```

Esto generará un archivo ejecutable llamado `loteria`.

### **2. Ejecutar el programa**
Para iniciar el juego, ejecuta el siguiente comando en la terminal:

```bash
./loteria
```

---

## **Cómo jugar**

Cuando ejecutas el programa, verás el siguiente menú:

```
1. Ver tableros de lotería de jugadores
2. Tirar carta
3. Salir
```

### **Opciones del menú**

1. **Ver tableros de jugadores**  
   - Muestra los tableros actuales de los dos jugadores.
   - Los tableros empiezan vacíos (llenos de `0`) y se van llenando con unos (`1`) a medida que avanza el juego.

2. **Tirar carta**  
   - El programa genera un número aleatorio entre 1 y 40.
   - Si el número es **par**, el Jugador 1 llena una casilla de su tablero.
   - Si el número es **impar**, el Jugador 2 llena una casilla de su tablero.
   - Cada casilla llena pasa de `0` a `1`.
   - El juego revisa automáticamente si algún jugador ha llenado todo su tablero. Si es así, el programa declara al ganador.

3. **Salir**  
   - Finaliza el programa.

---

## **Ejemplo de juego**

### **Inicio del programa**
Cuando el programa inicia, los tableros están vacíos y se ven así:

```
Jugador 1:
| 0 | 0 | 0 | 0 |
| 0 | 0 | 0 | 0 |
| 0 | 0 | 0 | 0 |
| 0 | 0 | 0 | 0 |

Jugador 2:
| 0 | 0 | 0 | 0 |
| 0 | 0 | 0 | 0 |
| 0 | 0 | 0 | 0 |
| 0 | 0 | 0 | 0 |
```

### **Tirar carta**
Supongamos que eliges la opción `2`. El programa genera un número, por ejemplo:

```
Número generado: 18
El número es par. Jugador 1 juega.
```

El programa llena una casilla aleatoria en el tablero del Jugador 1. Si revisas los tableros (opción `1`), podrían verse así:

```
Jugador 1:
| 1 | 0 | 0 | 0 |
| 0 | 0 | 0 | 0 |
| 0 | 0 | 0 | 0 |
| 0 | 0 | 0 | 0 |

Jugador 2:
| 0 | 0 | 0 | 0 |
| 0 | 0 | 0 | 0 |
| 0 | 0 | 0 | 0 |
| 0 | 0 | 0 | 0 |
```

### **Ganador**
El juego continúa llenando casillas hasta que un jugador logre llenar todo su tablero con unos (`1`). Por ejemplo:

```
Jugador 1:
| 1 | 1 | 1 | 1 |
| 1 | 1 | 1 | 1 |
| 1 | 1 | 1 | 1 |
| 1 | 1 | 1 | 1 |
```

El programa anunciará al ganador e imprimira el resultado final:

```
Jugador 2: LOTERIAAAAAA!!!
Jugador 1:
|1||1||1||1|
|1||0||0||0|
|1||0||0||1|
|0||0||0||0|

Jugador 2:
|1||1||1||1|
|1||1||1||1|
|1||1||1||1|
|1||1||1||1|
```

---

## **Archivos incluidos**

- **`main.c`**: Contiene el flujo principal del programa.
- **`funciones.c`**: Contiene las funciones para manejar los tableros y el juego.
- **`funciones.h`**: Define las estructuras y declara las funciones.

---

## **Notas importantes**

- Cada tablero es de 4x4 y empieza lleno de ceros (`0`).
- El programa llena aleatoriamente el tablero de manera automática.
- Usa un sistema operativo con terminal como Windows (con MinGW un port de gcc), Linux o macOS para ejecutar el programa.

---

## **¿Qué puedes aprender con este programa?**

- Uso de matrices para representar tableros.
- Generación de números aleatorios con `rand()`.
- Uso de funciones en C para estructurar el código.
---

**Creado por:** Jesus Arriaga estudiante UABC 
