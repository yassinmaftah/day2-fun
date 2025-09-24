#include <stdio.h>

char    *strrev(char *str)
{
    int     i;
    int     j;
    char    temp;

    i = 0;
    j = 0;
    while(str[j])
        j++;
    j--;
    while(i < j)
    {
        temp = str[j];
        str[j] = str[i];
        str[i] = temp;
        i++;
        j--;
    }

	return (str);  
}

int     main()
{
    char    str[] = "yassin";
    char    *reve = strrev(str);
    printf("%s", reve);
}