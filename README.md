# Curso en C de programación básica para no programadores

Curso desarrollado para que el estudiate aprenda por sí mismo el lenguaje C; desde cero sin ningún conocimiento antecedente sobre la programación, hasta las estructuras de datos lineales, en dos unidades:

**I. Fundamentos de Programación** <br>
**II. Estructuras de Datos Lineales**

<hr>

Cada unidad está formada por varios temas, cada uno desarrollado en una carpeta numerada según el orden propuesto de aprendizaje.

A su vez, dentro de cada unidad existe una pequeña _lección_ con:
- Información útil del tema visto.
- Datos relevantes sobre el tema.
- Propósito de los códigos de la lección.
- Preguntas y dinámicas que complementan lo escrito.

El curso sigue la metodología de **aprender haciendo**, de manera que resulte eficaz para personas que no son afines a la programación (por ello se proponen ejercicios informales y descriptivos) pero que, aún así, necesiten aprenderla; por lo que en cada lección hay uno o más archivos de código que se proponen el estudiante escriba a mano cada uno (sin copiar y pegar, tecleando cada carácter en ellos).

<hr>

Los códigos siguen una numeración *independiente* a la de los temas, son secuenciales y se propone estudiarse uno tras otro, proponiéndose un efoque ***iterativo-incremental***: El contenido del curso está dividido en varios códigos (iteraciones), en cada iteración se presentan algunos conceptos (incrementos) y ejercicios, de manera que para cada interacción siguiente, se hace uso de conceptos nuevos **y** conceptos vistos.

Así, el estudiante aprenderá lo básico sobre el lenguaje C y la programación a la vez que hace programas sencillos en los que aplicar y ver en acción los conceptos estudiados.

El orden de las lecciones, según su unidad, son los siguientes:

## I. Fundamentos de programación

1. Sintaxis básica
2. Estructuras de control
3. Arreglos
4. Funciones
5. Recursividad
6. Estructuras
7. Apuntadores
8. Complementos al lenguaje C en la creación de proyectos

## II. Estructuras de datos lineales

9. El nodo
10. Pilas
11. Colas
12. Listas

<hr>

A lo largo del curso se estará trabajando con código en C, si no se está familiarizado con el proceso de compilar y ejecutar código mediante una terminal, es recomendable utilizar entornos en línea que automatizan ésto, tales como [Online GDB](https://www.onlinegdb.com/), sin embargo es altamente recomendable que, eventualmente, este proceso pase a hacerse de forma manual.
Para ésto primero hay que primero instalar el compilador, se puede seguir un [tutorial](https://www.youtube.com/watch?v=GEZLjRSY_m8&t=300s) muy sencillo para ésto.
Entonces, para compilar se hace uso de la sintaxis:
`gcc main.c -o main.exe`
Si compiló correctamente, no habrá ningún aviso, se habrá creado el archivo `main.exe` y se puede ejecutar mediante:
`./main.exe`
En el curso, sin embargo, se profundiza en la forma de compilar y ejecutar de manera manual código en C.