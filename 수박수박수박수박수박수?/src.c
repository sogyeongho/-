#include <stdlib.h>
#include <string.h>

char        *solution(int n)
{
    int     i = 0;
    char    *answer = (char *)malloc(sizeof(char) * (n * 3));
    strcpy(answer, "수");
    while (i < n - 1)
    {
        if (i % 2 == 1)
        {
            char *odd = "수";
            strcat(&answer[i], odd);
        }
        else
        {
            char *even = "박";
            strcat(&answer[i], even);
        }
        i++;
    }
    return (answer);
}