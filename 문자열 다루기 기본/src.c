#include <stdbool.h>

bool    solution(const char *s)
{
    bool    answer = true;
    int     n = 0;

    while (s[n] != '\0')
    {
        if (!(s[n] >= '0' && s[n] <= '9'))
            answer = false;
        n++;
    }
    if (!(n == 4 || n == 6))
        answer = false;
    return (answer);
}