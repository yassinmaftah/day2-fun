#include <stdio.h>

int     somme(int   a, int  b)
{
    return (a + b);
}

int main()
{
    int     a;
    int     b;
    int     s;

    a = 5;
    b = 8;

    s = somme(a,b);
    printf("%d + %d = %d", a,b,s);
}