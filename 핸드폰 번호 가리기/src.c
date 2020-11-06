#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

char        *solution(const char *phone_number)
{
    int     len = strlen(phone_number);
    int     n = 0;
    char *answer = (char *)malloc(sizeof(char) * (len + 1));
    while (phone_number[n])
    {
        if (n >= len - 4)
            answer[n] = phone_number[n];
        else
            answer[n] = '*';
        n++;
    }
    answer[n] = NULL;
    return (answer);
}