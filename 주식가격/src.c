#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int     *solution(int prices[], size_t prices_len)
{
    int sec = 0;
    int j = 0;
    int *answer = (int *)malloc(sizeof(int) * prices_len);

    for (int i = 0; i < prices_len - 1; i++)
    {
        j = i + 1;
        while (j < prices_len)
        {
            sec++;
            if (prices[i] > prices[j])
                break ;
            j++;
        }
        answer[i] = sec;
        sec = 0;
    }
    answer[prices_len - 1] = 0;
    return (answer);
}