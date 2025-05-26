// 7. Anidando sentencias if-else (Mezclando colores)

#include <stdio.h>

int main() {
    int rojo = 1, verde = 2, azul = 3, color1, color2;

    color1 = azul;
    color2 = verde;

    if( color1 == rojo ) {
        if( color2 == verde ) {
            printf("Amarillo!");
        }
        else {
            // color2 = ¿?
            printf("Morado!");
        }
    }
    else {
        if( color1 == verde ) {
            if( color2 == azul ) {
                printf("Cian!");
            }
            else {
                // color2 = ¿?
                printf("Amarillo!");
            }
        }
        else {
            // color1 = ¿?
            if( color2 == rojo ) {
                printf("Morado!");
            }
            else {
                // color2 = ¿?
                printf("Cian!");
            }
        }
    }
    printf("\n");

    return 0;
}

// ¿Qué significa la palabra anidar?