#include <stdio.h>

int     max(int a, int b)
{
    if (a > b)
        return a;
    else
        return b;
}

int     main()
{
    int     a;
    int     b;
    int     m;

    a = 7;
    b = 9;
    m = max(a, b);
    printf("le valeur maximent est: %d", m);
}