#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

long long pgd(int w, int h)
{
    long long temp;
    long long w1 = (long long)w;
    long long h1 = (long long)h;
    while (h1 != 0)
    {
        temp = w1 % h1;
        w1 = h1;
        h1 = temp;
    }
    return (w1);
}
long long solution(int w, int h)
{
    long long temp = 0;
    long long w1 = (long long)w;
    long long h1 = (long long)h;
    if (w1 != h1)
        temp = (w1 / pgd(w, h) + h1 /pgd(w, h) - 1) * pgd(w, h);
    else
        temp = w1;
    long long answer = w1 * h1 - temp;
    return (answer);
}