// 5. Corrigiendo un código con errores en entrada y salida

#include <studio.h>

int main() {
    int a;
    float aa;

    // 1. ¿Por qué no imprime el valor solicitado?
    printf("Ingresa un numero entero:    ");
    scanf("%i", a);
    printf("El numero ingresado es:    %d", a);

    // 2. ¿Dónde está el error aquí?
    printf("Ingresa un valor real:    ");
    scanf("%d", &aa);
    printf("El numero REAL es:    %f", aa);

    // 3. Si todo está bien, ¿dónde está el error?
    printf("Dame un numero ENTERO:    ");
    scanf("%d", &aa);
    printf("El numero ENTERO es:    %d", aa);

    // 4. ¿Por qué no se muestra?
    printf("Ingresa otro decimal:    ");
    scanf("%f", &aa);
    printf("El decimal ingresado es:    ", aa);

    return 0;
}

// ¿Por qué el programa no compila?