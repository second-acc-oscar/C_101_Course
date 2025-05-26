// 6. Ifs con varias instrucciones

#include <stdio.h>

int main() {
    int entrada, salida;

    printf("Dame el numero (entero):    ");
    scanf("%d", &entrada);

    if( entrada > 10 ) {
        printf("\nAhora estoy haciendo mas de una cosa si es mayor a diez.\n");
        printf("Por ejemplo, escribir muchas lineas, o hacer operaciones.\n");
        salida = entrada - 1;
        salida = salida / 2;
        printf("Esto no se puede SIN las llaves.\n");
    }
    else {
        printf("\nJaja, saco menos de diez.\n");
        printf("Te falta calle, vro.\n");
        salida = 0;
    }

    printf("\nFinalmente...\n");
    printf("La salida es:    %d\n", salida);

    return 0;
}

// ¿Cuándo se puede utilizar con y sin llaves el if-else?