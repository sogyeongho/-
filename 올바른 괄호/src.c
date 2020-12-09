#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

bool        solution(const char *s)
{
    bool    answer = true;
    int     n = 0;
    int     count = 0;
    while (s[n])
    {
        if (s[0] == ')')
        {
            answer = false;
            return (answer);
        }
        if (s[n] == '(')
            count++;
        else if (s[n] == ')')
            count--;
        if (count < 0)
        {
            answer = false;
            return (answer);
        }
        n++;
    }
    if (s[n - 1] == '(')
    {
        answer = false;
        return (answer);
    }
    answer = (count == 0) ? true : false;
    return (answer);
}