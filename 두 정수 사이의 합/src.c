long long   soulution(int a, int b)
{
    long long answer = 0;
    int end;
    int start;

    start = a >= b ? b : a;
    end = a < b ? b : a;
    while (start <= end)
    {
        answer += start;
        start++;
    }
    return (answer);
}