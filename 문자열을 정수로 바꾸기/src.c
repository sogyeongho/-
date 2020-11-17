int     solution(const char *s)
{
    int sum = 0;
    int sign = 1;
    int n = 0;
    int answer = 0;
    if (s[0] == '+' || s[0] == '-')
    {
        sign = (s[0] == '-') ? -1 : 1;
        n++;
    }
    while (s[n] != '\0')
    {
        sum = s[n] - '0' + sum * 10;
        n++;
    }
    answer = sum * sign;
    return (answer);
}