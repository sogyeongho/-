#include <string.h>
#include <stdlib.h>

char        *solution(const char *s)
{
    int     len = strlen(s) - 1;
    char    temp;
    char    *answer = (char *)malloc(sizeof(char) *(strlen(s) + 1));

    strcpy(answer, s);
    for (int i = 0; i < len; i++)
    {
        for (int j = 0; j < len - i; j++)
        {
            if (answer[j] < answer[j + 1])
            {
                temp = answer[j];
                answer[j] = answer[j + 1];
                answer[j + 1] = temp;
            }
        }
    }
    return (answer);
}