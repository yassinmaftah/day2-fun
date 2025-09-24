#include <stdio.h>

int     min(int a, int b)
{
    if (a < b)
        return a;
    else
        return b;
}

int     main()
{
    int     a;
    int     b;
    int     miniment;

    a = 7;
    b = 9;
    miniment = min(a, b);
    printf("le valeur miniment est: %d", miniment);
}