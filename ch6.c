#include <stdio.h>

int     Fibonacci(int   n)
{
    if (n == 0) return 0;
    if (n == 1) return 1;
    return(Fibonacci(n - 1) + Fibonacci(n - 2));
}

int     main()
{
    int     number;
    int     fi;
 
    printf("entre valeur de number: ");
    scanf("%d", &number);

    fi = Fibonacci(number);
    printf("%d", fi);
}