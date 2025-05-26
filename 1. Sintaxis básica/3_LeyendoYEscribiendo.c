// 3. Usando scanf y printf

#include <stdio.h> //Standard Input-Output Header

int main() {
    int unInt, max, checo, lecccclerc;
    float unFloat;
    
    printf("Cual es el numero del Checo Perez:   ");
    scanf("%d", &unInt);
    printf("El numero de Chequito es:    %d", unInt);

    printf("\n\nIngresa ahora el numero de Max:    ");
    scanf("%d", &unInt);
    printf("El numero de Max Verstapen es:    %d", unInt);
    
    printf("\n\nAhora ingresa los numeros de Checo, Max y Charles Leclerc separados por espacios:    ");
    scanf("%d %d %d", &checo, &max, &lecccclerc);
    printf("Checo: %d\nMax: %d\nLeclerc: %d", checo, max, lecccclerc);

    printf("\n\nAhora ingresa la estatura (en metros) de Chequito:    ");
    scanf("%f", &unFloat);
    printf("La estatura de Chequito deidad es:    %f\n", unFloat);

    return 0;
}