#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

bool        solution(int x)
{
    int     sum = 0;
    int     n = x;
    bool    answer =  true;
    
    while (x >= 10)
    {
        sum = sum + x % 10;
        x /= 10;
    }
    sum = sum + x % 10;
    answer = (n % sum = 0) ? true : false;
    return (answer);
}