#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

int         rm_zero(char *str, int tr_len)
{
    int     index = 0;
    int     count = 0;
    while (str[index])
    {
        if (str[index] == '0')
            count++;
        index ++;
    }
    return (count);
}

char        *tr_base(char *str, int rm_len)
{
    int     new_len = 1;
    int     num = rm_len;
    int     i = 1;

    while (rm_len)
    {
        rm_len /= 2;
        new_len++;
    }
    new_len--;
    free(str);
    str = (char *)malloc(sizeof(char) * (new_len + 1));
    while (num)
    {
        str[new_len - i] = num % 2 + '0';
        num /= 2;
        i++;
    }
    str[new_len] = '\0';
    return (str);
}

int         *solution(const char *s)
{
    char    *str = strdup(s);
    int     *answer = (int*)malloc(sizeof(int) * 2);
    int     rm_len = 0;
    int     tr_len = strlen(str);
    int     count = 0;
    int     n = 0;
    
    while (1)
    {
        if (rm_len == 1 && str[0] == '1')
            break;
        count += rm_zero(str, tr_len);
        rm_len = tr_len - rm_zero(str, tr_len);
        str = tr_base(str, rm_len);
        tr_len = strlen(str);
        n++;
    }
    answer[0] = n;
    answer[1] = count;
    return (answer);
}