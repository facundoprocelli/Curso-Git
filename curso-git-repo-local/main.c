#include <stdio.h>
#include <stdlib.h>
#include "listas.h"

int main()
{
    int a = 1;
    int b = 2;

    int c = suma(a, b);
    printf("%i", c);

    int d = restar(b, a);
    printf("%i", d);

    int x = dividir(a,b);
    printf("%i", x);

    printf("Hello world!\n");
    return 0;
}
