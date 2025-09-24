#include <stdio.h>

int    Factorielle(int  n)
{
    int     i;
    int     total;

    total = 1;
    i = 1;
    while (i <= n)
    {
        total *= i;
        i++;
    }
    return total;
}

int     main()
{
    int     number;
    int     f;

    printf("entre valeur de number: ");
    scanf("%d", &number);

    f = Factorielle(number);
    printf("factorial of %d is : %d", number, f);

}