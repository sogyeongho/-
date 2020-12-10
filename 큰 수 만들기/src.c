#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char        *solution(const char *number, int k)
{
    char    *answer = (char *)malloc(1000000);
    int     num_len = strlen(number);
    int     target_len = num_len - k;
    int     i = 0;
    int     j = 0;
    int     point = 0;

    while (1)
    {
        char    max_num = 0;
        for (i = point; i < num_len - target_len + 1; i++)
        {
            if (number[i] > max_num)
            {
                max_num = number[i];
                point = i + 1;
            }
        }
        answer[j] = max_num;
        j++;
        target_len--;
        if (point == (num_len - target_len + 1))
        {
            for(i = point; i < num_len; i++)
            {
                answer[j] = number[i];
                j++;
            }
            break ;
        }
        if (j == (num_len - k))
            break ;
    }
    answer[j] = '\0';
    return (answer);
}