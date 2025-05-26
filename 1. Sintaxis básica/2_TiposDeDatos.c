// 2. Tipos de datos primitivos

#include <stdio.h>

int main() {
    int unEntero; // Número natural
    long int enteroEvolucionado;
    long otroLargo;
    long long superDuperMegaUltraLargo;

    float unDecimal; // Número real
    double decimalEvolucionado; // Double = Doble precisión (más decimales)
    long double superDuperMegaUltraDoble;

    char unaLetra;

    unEntero = 22;
    enteroEvolucionado = 2103044359;
    otroLargo = 1256789012;
    superDuperMegaUltraLargo = 9123456789123456789;

    unDecimal = 8.7;
    decimalEvolucionado = 0.9912039102;
    superDuperMegaUltraDoble = 1.151561894351894987;

    // Causa de Overflow
    unEntero = 12345678901;

    return 0;
}