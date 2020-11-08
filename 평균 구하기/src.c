#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

double      solution(int arr[], size_t arr_len)
{
    double  answer = 0;
    double  sum = 0;
    for (int i = 0; i < arr_len; i++)
        sum = arr[i];
    answer = sum / arr_len;
    return (answer);
}