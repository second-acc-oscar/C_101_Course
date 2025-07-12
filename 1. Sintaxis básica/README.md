# Sintaxis básica del lenguaje C

Para que un programa haga lo que queremos que haga, debemos saber cómo decirle que haga las cosas, ésto se hace mediante un **lenguaje de programación**, que para nosotros será el lenguaje C.

Como en todo lenguaje, en C existe una cierta **sintaxis** que debe de cumplirse, ésto es, cómo se combinan y ordenan las palabras para formar oraciones con **significado**. En el contexto de la programación, la sintaxis define **exactamente** cómo debe escribirse, básicamente, todo en el programa.
Si un elemento está mal escrito, por ejemplo, si la función `printf` se escribe mal: `pritnf`. No solo no cumplirá la función que tiene prevista, sino que ésto acarreará un error que no permitirá al programa ni siquiera ser ejecutado.

## 1. Hola, mundo!

El *Hola, mundo* es un programa típico entre los aprendices de programación, su propósito es imprimir en pantalla la frase *Hola, mundo!* (la declaración de que acaba de nacer tu programa, y está saludando al *mundo*, en general, el mundo de posibilidades que puedes crear, que se han abierto gracias a tu aprendizaje en la programación).

En él se establecen los elementos mínimos que debe tener un programa en un cierto lenguaje para que sea funcional.
En este caso, hay que resaltar la forma en que se da inicio, con `#include<stdio.h>`: Comienza con un numeral porque es una directiva de pre-procesamiento, ésto quiere decir que hará cosas antes de que el programa se *compile*.

Nuestra unidad fundamental al momento de escribir código son las *funciones*. Nosotros podemos crear nuestras funciones (como se verá más adelante) y para que el código sirva necesitamos un conjunto de funciones pre-establecidas (escritas por el creador del lenguaje). Existen tantas funciones que están agrupadas por *paquetes*.
Con la palabra `include` estamos *importando* un paquete de funciones *nativas* (pre-establecidas) para utilizarlas en el programa.

Como es común, las palabras que utilizamos como sintaxis son contracciones de nombres más descriptivos, así, `stdio` es la forma corta de escribir *standard input-output* (entrada y salida estándar); y el `.h` indica que es un *header* o encabezado, ésto es, debe escribirse en las primeras líneas de código del programa.

Entonces, al hacer `#include<stdio.h>` estamos importando (haciendo visibles y utilizables) las funciones nativas de entrada (lectura) y salida (escritura) de datos estándar.

Por otro lado, con la sintaxis:
<pre>
int main() {

    return 0;
}
</pre>
Estamos declarando otra función, la función principal.
El `main` es el punto de entrada desde el cuál nuestro programa va a empezar su ejecución. En general (y por ahora, porque hay mejores formas de hacerlo), todo lo que escribamos que queramos haga el programa debe escribirse dentro del método `main` (específicamente, después de la llave que abre, y antes del `return 0;`).
> 📔 **Nota:** Sólo puede haber 1 método `main` en un programa.

Finalmente, la función que hace posible el *Hola, mundo* es `printf`, el acortamiento para *print function* (función de impresión). La sintaxis básica es sencilla, en su forma base para imprimir únicamente texto arbitrario: `printf("");`. Y entre comillas se escribe el texto deseado.

La entrada y salida *estándar* es, para nosotros, la pantalla de la terminal (salida, escritura) y el teclado (entrada, lectura).

Finalmente, habrás notado que hay texto escrito a propósito a lo largo de todos los programas. Existe la libertad de escribir todo lo que quieras sin que ésto interfiera en el flujo de ejecución en el programa, ésto se puede hacer mediante comentarios.
Para hacer un comentario que ocupe una sola línea la sintaxis es escribir dos diagonales `//` y todo lo que esté después será ignorado. Se pueden hacer comentarios multi-línea con la sintaxis `/* */`: `/*` para abrir el bloque, y `*/` para cerrarlo, y todo lo que esté escrito entremedio será ignorado.

<pre>
// Éste es un comentario de una sola línea

/* Éste es
un comentario
en varias
líneas */
</pre>

> 💻 **Para practicar**
> 
> Escribe otro programa desde cero, imprimiendo lo que tú quieras, prueba a hacer textos más largos, prueba los comentarios en una línea y los multi-línea para entender qué hace el código. Borra por partes los elementos que se vieron aquí y observa qué sucede, ¿compila? Si no compila, ¿por qué, qué aviso es el que da el compilador? Si sí compila, ¿hace lo que debería de hacer, qué cambió?

## 2. Tipos de datos

Los elementos o _actores_ alrededor de los cuales se escribe un programa, son los datos. Los datos son almacenados en elementos llamados _variables_.

Así como existen **palabras reservadas** (sintaxis) para hacer cosas en el programa, podemos definir nuestras propias _palabras reservadas_ para definir _variables_, las variables almacenan datos.

En general, existen los siguientes datos:

| **Dato** | **Descripción** |
| - | - |
| Enteros | Números en el conjunto de los **naturales**, no poseen parte decimal. |
| Decimales | Números en el conjunto de los **reales**, también llamados de **punto flotante**, tienen parte entera **y** parte decimal. |
| Caracteres | Caracteres alfanuméricos: letras, números y los definidos en el conjunto ASCII estándar y extendido, además de secuencias de escape. |
[Conjunto de caracteres ASCII](https://elcodigoascii.com.ar/)

Para declarar variables de estos tipos de datos se utilizan las **palabras reservadas** correspondientes, además, existen varios tipos de enteros y varios tipos de flotantes. La diferencia radica en el límite del valor mínimo y máximo que son capaces de almacenar, lo que se muestra en la siguiente tabla.

| Tipo de dato | Valor mínimo | Valor máximo |
| - | - | - |
| `short int` | -32,768 |  32,767 |
| `unsigned short int` | 0 |  65,535 |
| `int` | -2,147,483,648 | 2,147,483,647 |
| `unsigned int` | 0 |  4,294,967,295 |
| `long int` | -9,223,372,036,854,775,808 | -9,223,372,036,854,775,80 |
| `unsigned long int` | 0 | 18,446,744,073,709,551,615 |
| `float` | ~1.175e-38 | ~3.402e+38 |
| `double` | ~2.225e-308 | ~1.797e+308 |
| `long double` | ~1.19e+4932 | ~1.19e+4932 |
> ⚠️ **Donde se utiliza la notación científica**
> 1e+10 = 1 x 10^{10}
> 1e-10 = 1 x 10^{-10}

La forma en que los límites de estos números funciona depende de la cantidad en memoria que ocupa cada tipo de dato.
Es importante conocer estos datos y estar familiarizados con ellos porque un mal análisis puede causar errores de ***overflow***, lo que significa que se intenta guardar un valor que no está en los límites establecidos.

Por ejemplo, intentar guardar el número 102,521 en un `short int` sería causa de **overflow** porque supera el máximo valor que puede almacenar (32,767), ésto causa que el comportamiento sea **indefinido**, y en lugar de guardar el número deseado, se guarda un número no esperado (en este caso, -28551). Para este caso, lo correcto hubiera sido utilizar el tipo de dato `int`.

Es importante conocer que este tipo de errores existen y por ello hacer el análisis correspondiente eventualmente, sin embargo, para los *driver programs* que se realizan en el curso, seá suficiente con trabajar los tipos de dato `int`, `float` y `char`.
> 🔎 Un *driver program* es un pequeño programa para que pruebes tu código, sin embargo, un *driver program* no es una aplicación. A lo largo del curso los *driver program* estarán dentro de la función `main()`.

Todos los tipos de datos presentados hasta el momento son llamados *nativos*, ya que vienen implementados y listos para usar de forma nativa en el lenguaje. Más adelante se verá cómo es que existen otros tipos de datos más complejos.

Si se quiere profundizar en los tipos de datos primitivos que existen en el lenguaje C, queda de tarea para el estudiante investigar las siguientes librerías: `<limits.h>`, `<float.h>`, `<stdint.h>`, `<inttypes.h>`.

<hr>

Para crear un elemento en nuestro código que sea capaz de almacenar alguno de los datos ya vistos, es necesario **crear una variable**, ésto es un elemento del programa.
Para crear una variable sólo se necesita:
1. Indicar el tipo de dato que va a almacenar.
2. Nombrar a la variable.
A hacer estos dos puntos se le conoce como **declarar** una variable.

Al nombre de la variable se le llama *identificador*, los identificadores es como crear nuestras propias *palabras reservadas*, de tal forma que, siempre que utilices el identificador en tu código, la máquina sabe qué elemento es el que quieres utilizar. Los identificadores pueden ser asignados tanto a variables, como a constantes, funciones y librerías, como se verá más adelante.

**Reglas de los identificadores:**
1. **Son únicos**. Dos elementos no pueden compartir el mismo identificador.
2. **No contienen caracteres conflictivos**. Si hay conflicto o no puede depender del entorno, sin embargo se recomienda utilizar únicamente números y caracteres del alfabeto inglés para definirlos, además del guión y guión bajo.
3. **Debe empezar por una letra**. Aunque después pueda ponerse números y guiones, éstos no pueden ser el primer carácter del identificador.
4. **Es sensible a mayúsculas y minúsculas**: `miVariable` será reconocida diferente de `MiVariable`.
5. **No pueden llamarse igual a una palabra reservada**. Intentar declarar una variable que se llame `main`, `int` o `printf` incurriría un error de sintaxis, violando la regla 1.

Entonces, para declarar una variable (hacerla utilizable en el programa) se sigue la sintaxis:
`tipoDeDato identificador;`
Como en la mayoría de instrucciones, debe de terminar con un punto y coma: `;`.

Por ejemplo:
<pre>
int un_entero;
float un-flotante;
int XLR8;
long int Z;
char LETRA;
double a2_sigma-87;
</pre>

Son declaraciones válidas.

Aunque si se quiere declarar más de una variable, y todas son del **mismo tipo**, se puede hacer en la misma línea, separadas por comas:

<pre>
int int1, int2, entero3, entero4;
float f1, F2, f_3, f4;
char unChar, dos_char, tres-char;
</pre>

Siguiendo la misma línea, una variable declarada se puede **inicializar**, lo que significa **asignarle** un valor inicial a una variable.

Para hacer ésto se utiliza el operador de asignación: `=`. A diferencia de las matemáticas, aquí el signo de igual no significa que una cosa es igual a otra, sino que, a lo que está a la *izquierda* del igual, se le va a asignar lo que está a la *derecha* del igual.
Ésto hace que en pseudocódigo, se utilice directamente el símbolo de la flecha: ←.

Por ejempo, para que la variable `x` contenga al número 5, se escribiría:
<pre>
int x = 5;
</pre>
Si se declara también al mismo tiempo.

Otros ejemplos:
<pre>
int uno = 1, b = 27, alpha = -234;
double eps = 0.000000001;
char uno = '1', asd = 'c';
</pre>

¿Para qué utilizamos variables?

La variable es un elemento que permite **guardar** un valor en ella y, como su nombre lo indica, el valor que guardan puede variar a lo largo de la ejecución del programa. Esencialmente, si `int x = 5`, cada vez que en el programa se utilice `x`, en verdad es como si se sustituyera directamente por el `5`, o el valor que tenga en ese momento.

> 💻 **Para practicar**
> 
> Escribe un *driver program* por tu cuenta, donde declares variables de todos los tipos enseñados en la tabla. Sigue las reglas para nombrar identificadores y luego prueba a compilar tu programa violando estas mismas reglas, ¿qué errores suelta el compilador, por qué no se puede compilar así?
> Asigna valores a estas mismas variables, ¿qué pasa cuando asignas un valor decimal a una variable entera, y cuando haces *overflow* a una variable?, ¿qué pasa cuando utilizas una variable que no ha sido declarada antes?

## 3. Operadores aritméticos

