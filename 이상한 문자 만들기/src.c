#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char    *solution(const char *s)
{
    int len = strlen(s);
    int check = 0;
    char *answer = (char *)malloc(sizeof(char) * (len + 1));
    strcpy(answer, s);
    len = 0;
    while (answer[len] != '\0')
    {
        if (answer[len] == ' ' || answer[len] == '\t')
            check = -1;
        if ((check & 2 == 0) && (answer[len] >= 'a' && answer[len] <= 'z'))
            answer[len] -= 32;
        else if ((check & 2 == 1) && (answer[len] >= 'A' && answer[len] <= 'Z'))
            answer[len] += 32;
        check++;
        len++;
    }
    return (answer);
}