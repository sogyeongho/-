#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

char        *solution(const char *s)
{
    int     len = strlen(s);
    int     i = 0;
    bool    num = (len % 2 == 1) ? true : false;
    int     n = (num == true) ? 1 : 2;
    char    *answer = (char *)malloc(sizeof(char) * (n + 1));

    if (num == true)
    {
        answer[i] = s[len / 2];
        answer[i + 1] = '\0';
    }
    else
    {
        while (i < 2)
        {
            answer[i] = s[len / 2 - 1 + i];
            i++;
        }
        answer[i] = '\0';
    }
    return (answer);
}