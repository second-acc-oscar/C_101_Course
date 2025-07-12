// 6. Usando el if-else

#include <stdio.h>

int main() {
    int unNumero;

    printf("Dame el numero (entero):    ");
    scanf("%d", &unNumero);

    if( unNumero > 10 )
        printf("Vaya bestia!");
    else
        printf("Lo importante es que tiene bonitos sentimientos.\n");

    return 0;
}