#include <stdio.h>

int     mul(int   a, int  b)
{
    return (a * b);
}

int main()
{
    int     a;
    int     b;
    int     produit;

    a = 5;
    b = 8;

    produit = mul(a,b);
    printf("%d * %d = %d", a,b,produit);
}