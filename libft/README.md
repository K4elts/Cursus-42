*Este proyecto ha sido creado como parte del currículo de 42 por aliao-tr*

# 📖 Descripción

Este proyecto de libft es una colección de funciones escritas en C que recrean parte de la biblioteca estándar y añaden utilidades adicionales para la manipulacion de cadenas, memoria, conversión de datos y listas enlazadas.

El objetivo de este proyecto es comprender el funcionamiento interno de funciones fundamentales y crear una base reutilizable para futuros proyectos.

# 📝 Instrucciones

Para poder hacer uso de la librería se compilará usando el comando `make` para crear el archivo libft.a. A continuación hay que incluir la librería libft.h en el programa y enlazarlo al compilar el proyecto. Una vez hecho se podrá usar todas las funciones implementadas en la librería. En caso de necesitar eliminar los archivos generados o recompilar se podrá hacer uso de los comandos `make clean`, `make fclean` y `make re`.

1. Compilar la librería ejecutando `make` el cual creará un archivo llamado libft.a.
2. Incluir la librería en el programa `#include "libft.h"`.
3. Compilar el programa con `cc -Wall -Wextra -Werror <nombre del programa>`.
4. Ejecutar el programa con la libreria `./a.out libft.a`.

# 🔍 Recursos

Durante el desarrollo de esta librería se han utilizado diferentes recursos para comprender el funcionamiento y correcta implementación de esta. Dichos recursos han sido las páginas del manual de UNIX (`man`), los materiales de aprendizaje proporcionados por 42, páginas como https://makefiletutorial.com/ para la comprensión de Makefile, https://www.geeksforgeeks.org/ y https://www.w3schools.com/ para mejor entendimiento de C, el uso de `francinnete paco` (https://github.com/WaRtr0/francinette-image) como una parte de testeo y en especial la ayuda entre pares como parte del aprendizaje.

En cuanto al uso de la IA, esta se ha usado únicamente para detallar el contenido del README.md y el índice de funciones.

## 📚 Índice de Funciones

### Caracteres

| Función      | Descripción                                           |
| ------------ | ----------------------------------------------------- |
| `ft_isalpha` | Comprueba si un carácter es una letra alfabética.     |
| `ft_isdigit` | Comprueba si un carácter es un dígito decimal.        |
| `ft_isalnum` | Comprueba si un carácter es alfanumérico.             |
| `ft_isascii` | Comprueba si un carácter pertenece al conjunto ASCII. |
| `ft_isprint` | Comprueba si un carácter es imprimible.               |
| `ft_toupper` | Convierte una letra minúscula a mayúscula.            |
| `ft_tolower` | Convierte una letra mayúscula a minúscula.            |

### Cadenas

| Función       | Descripción                                                          |
| ------------- | -------------------------------------------------------------------- |
| `ft_strlen`   | Calcula la longitud de una cadena.                                   |
| `ft_strlcpy`  | Copia una cadena limitando el tamaño de destino.                     |
| `ft_strlcat`  | Concatena cadenas limitando el tamaño total.                         |
| `ft_strchr`   | Busca la primera aparición de un carácter en una cadena.             |
| `ft_strrchr`  | Busca la última aparición de un carácter en una cadena.              |
| `ft_strncmp`  | Compara dos cadenas hasta un número determinado de caracteres.       |
| `ft_strnstr`  | Busca una subcadena dentro de otra cadena.                           |
| `ft_strdup`   | Reserva memoria y duplica una cadena.                                |
| `ft_substr`   | Extrae una subcadena a partir de una posición dada.                  |
| `ft_strjoin`  | Une dos cadenas en una nueva cadena.                                 |
| `ft_strtrim`  | Elimina caracteres especificados al inicio y al final de una cadena. |
| `ft_split`    | Divide una cadena en varias usando un delimitador.                   |
| `ft_strmapi`  | Aplica una función a cada carácter creando una nueva cadena.         |
| `ft_striteri` | Aplica una función a cada carácter modificando la cadena original.   |

### Memoria

| Función      | Descripción                                            |
| ------------ | ------------------------------------------------------ |
| `ft_memset`  | Rellena un bloque de memoria con un valor específico.  |
| `ft_bzero`   | Inicializa un bloque de memoria a cero.                |
| `ft_memcpy`  | Copia un bloque de memoria en otro.                    |
| `ft_memmove` | Copia memoria gestionando correctamente solapamientos. |
| `ft_memchr`  | Busca un byte concreto dentro de un bloque de memoria. |
| `ft_memcmp`  | Compara dos bloques de memoria.                        |
| `ft_calloc`  | Reserva memoria e inicializa todos los bytes a cero.   |

### Conversión

| Función   | Descripción                                      |
| --------- | ------------------------------------------------ |
| `ft_atoi` | Convierte una cadena numérica en un entero.      |
| `ft_itoa` | Convierte un entero en una cadena de caracteres. |

### Entrada y Salida

| Función         | Descripción                                           |
| --------------- | ----------------------------------------------------- |
| `ft_putchar_fd` | Escribe un carácter en un descriptor de archivo.      |
| `ft_putstr_fd`  | Escribe una cadena en un descriptor de archivo.       |
| `ft_putendl_fd` | Escribe una cadena seguida de un salto de línea.      |
| `ft_putnbr_fd`  | Escribe un número entero en un descriptor de archivo. |

### Listas Enlazadas

| Función           | Descripción                                             |
| ----------------- | ------------------------------------------------------- |
| `ft_lstnew`       | Crea un nuevo nodo de lista enlazada.                   |
| `ft_lstadd_front` | Añade un nodo al inicio de la lista.                    |
| `ft_lstsize`      | Devuelve el número de nodos de la lista.                |
| `ft_lstlast`      | Obtiene el último nodo de la lista.                     |
| `ft_lstadd_back`  | Añade un nodo al final de la lista.                     |
| `ft_lstdelone`    | Elimina un nodo liberando su contenido.                 |
| `ft_lstclear`     | Elimina y libera todos los nodos de una lista.          |
| `ft_lstiter`      | Recorre la lista aplicando una función a cada nodo.     |
| `ft_lstmap`       | Crea una nueva lista aplicando una función a cada nodo. |
