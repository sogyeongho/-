#include <stdbool.h>
#include <stdio.h>

bool check(int n)
{
    int i = 2;
    while (i < n)
    {
        if(n % i == 0)
            return (false);
        i++;
    }
    return (true);
}
int solution(int nums[], size_t nums_len)
{
    int answer = 0;
    int number = 0;
    for (int i = 0; i < nums_len - 2; i++)
    {
        for(int j = i + 1; j < nums_len -1; j++)
        {
            for(int k = j + 1; k < nums_len; k++)
            {
                number = nums[i] + nums[j] + nums[k];
                if (check(number) == true)
                    answer++;
            }
        }
    }
    return (answer);
}