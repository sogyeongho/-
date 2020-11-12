#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int     *solution(long long n)
{
    int len = 1;
    int i = 0;
    long long num = n;
    while (num > 10)
    {
        num /= 10;
        len++;
    }
    int *answer = (int *)malloc(sizeof(int) * len);
    while (n > 10)
    {
        answer[i] = n % 10;
        n /= 10;
        i++;
    }
    answer[i] = n;
    return (answer);
}