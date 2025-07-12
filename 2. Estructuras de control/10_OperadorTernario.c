// 10. Conociendo el operador ternario

#include <stdio.h>

int main() {
    int num1, num2, elMayor;

    num1 = 13;
    num2 = 69;

    if( num1 > num2 )
        elMayor = num1;
    else
        elMayor = num2;

    printf("if-else: El mayor es: %d\n",elMayor);

    elMayor = num1 > num2 ? num1 : num2;

    printf("ternario: El mayor es: %d\n",elMayor);

    return 0;
}

// ¿Cuáles son las características del operador ternario?