// 8. Usando operadores lógicos

#include <stdio.h>

int main() {
    int numero1, numero2;

    printf("Introduce un numero entero:\t");
    scanf("%d",&numero1);

    if( numero1 ) // if( numero != 0 )
        printf("El numero ingresado es diferente de cero.\n");

    printf("Introduce otro numero:\t");
    scanf("%d",&numero2);

    if( numero2 % 2 == 0 )
        printf("El numero2 es par. :D\n");

    if( numero1 && numero2 % 2 == 0 )
        printf("Se cumplieron las dos condiciones anteriores.\n");

    if( numero1 % 2 == 0 && numero2 % 2 == 0 )
        printf("Ambos numeros ingresados son pares.\n");

    if( numero1 % 2 == 0 || numero2 % 2 == 0 )
        printf("Al menos uno de los dos números es par.\n");

    if( numero1 % 2 != 0 && numero2 % 2 != 0 )
        printf("numero1 no es par, y numero2 tampoco es par.\n");

    if( ! (numero1 % 2 == 0 && numero2 % 2 == 0) )
        printf("Los dos numeros son no pares.\n");

    if( numero1 > 0 && numero1 <= 100 )
        printf("El numero uno se encuentra entre 1 y 100.\n");

    if( numero1 == 100 || numero2 == 100 )
        printf("Uno de los dos numeros son 100.\n");

    return 0;
}