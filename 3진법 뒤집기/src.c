
int     ft_leng(int n)
{
    int index = 0;
    while (n >= 3)
    {
        n/= 3;
        index++;
    }
    return (index);
}

int     solution(int n)
{
    int answer = 0;
    int a = 1;
    int num[ft_leng(n)];
    int index = 0;
    while (n > 0)
    {
        num[index] = n % 3;
        n /= 3;
        index++;
    }
    while (index > 0)
    {
        answer = answer + num[index -1] * a;
        a *= 3;
        index--;
    }
    return (answer);
}