#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int check_ok(int *lottos, int *win_nums, int len, int *zero)
{
    int i = 0;
    int j = 0;
    int ok_count = 0;
    
    while (i < len)
    {
        j = 0;
        while (j < len)
        {
            if (lottos[j] == win_nums[i])
                ok_count++;
            j++;
        }
        if (lottos[i] == 0)
            *zero = *zero + 1;
        i++;
    }
    return (ok_count);
}

int get_rank(int ok)
{
    int rank = 0;

    if (ok == 6)
        rank = 1;
    else if (ok == 5)
        rank = 2;
    else if (ok == 4)
        rank = 3;
    else if (ok == 3)
        rank = 4;
    else if (ok == 2)
        rank = 5;
    else
        rank = 6;
    return (rank);
}

int* solution(int lottos[], size_t lottos_len, int win_nums[], size_t win_nums_len) 
{
    int* answer = (int*)malloc(sizeof(int) * 2);
    int min_ok = 0;
    int max_ok = 0;
    int zero = 0;
    
    min_ok = check_ok(lottos, win_nums, lottos_len, &zero); //맞힌 갯수
    max_ok = min_ok + zero;
    answer[0] = get_rank(max_ok);
    answer[1] = get_rank(min_ok);
    return (answer);
}