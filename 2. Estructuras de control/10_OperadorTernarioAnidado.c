// 10. Anidando el operador ternario: El mayor de tres números

#include <stdio.h>

int main() {
    int a = 2, b = 3, c = 1, d;

    if( a > b )
        if( a > c )
            d = a;
        else
            if( c > b )
                d = c;
            else
                d = b;
    else
        if( b > c )
            d = b;
        else
            if( c > a )
                d = c;
            else
                d = a;

    printf("if-else: El mayor es %d.\n",d);

    d = (a > b) ? ((a > c) ? a : ((c > b) ? c : b)) : ((b > c) ? b : ((c > a) ? c : a));

    printf("ternario: El mayor es %d.\n",d);

    if( a > b && a > c )
        d = a;
    else if( b > a && b > c )
        d = b;
    else
        d = c;

    printf("if-else: El mayor es %d.\n",d);

    d = (a > b && a > c) ? a : ((b > a && b > c) ? b : c);

    printf("ternario: El mayor es %d.\n",d);

    return 0;
}