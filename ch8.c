#include <stdio.h>

int    check(int   n)
{
    if(n % 2 != 0) 
        return (0);
    else
        return (1);
}

int     main()
{
    int     number;
    int     ch;

    printf("entre valeur de number: ");
    scanf("%d", &number);

    ch = check(number);

    printf("%d", ch);
}