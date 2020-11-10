#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

long long   solution(long long n)
{
    long long   answer = 0;
    while (answer * answer < n)
        answer++;
    if (answer * answer < n)
        return (-1);
    else
    {
        answer++;
        answer *= answer;
    }
    return (answer);
}