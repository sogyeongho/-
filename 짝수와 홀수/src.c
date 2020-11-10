#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

char        *solution*(int num)
{
    int     num = (num % 2 == 1) ? 3 : 4;
    char    *answer = (char *)malloc(sizeof(char) * (len + 1));

    answer = (num % 2 == 0) ? "Even" : "Odd";
    return (answer); 
}