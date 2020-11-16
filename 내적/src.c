#include <stdio.h>
#include <stdlib.h>

int     solution(int a[], size_t a_len, int b[], size_t b_len)
{
    int answer = 0;
    int index = 0;
    while (index < a_len)
    {
        answer = answer + a[index] * b[index];
        index++;
    }
    return (answer);
}