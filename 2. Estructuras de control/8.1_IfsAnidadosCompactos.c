// 8.1. Anidando sentencias if-else (Mezclando colores)
// Sin que dé asco verlo

#include<stdio.h>

int main() {
    int rojo = 1, verde = 2, azul = 3, color1, color2;

    color1 = azul;
    color2 = verde;

    if( color1 == rojo )
        if( color2 == verde )
            printf("Amarillo!");
        else
            printf("Morado!");
    if( color1 == verde )
        if( color2 == azul )
            printf("Cian!");
        else
            printf("Amarillo!");
    if( color1 == azul )
        if( color2 == rojo )
            printf("Morado!");
        else
            printf("Cian!");
    printf("\n");

    return 0;
}