
int pibo(int n)
{
    int pibo_temp = 1;
    int pibo_num = 1;
    int pibo_B = 1;
    if (n > 2)
    {
        for(int i = 2; i < n; i++)
        {
            pibo_temp = pibo_num;
            pibo_num = ((pibo_num % 1234567) + (pibo_B % 1234567)) % 1234567;
            pibo_B = pibo_temp; 
        }
    }
    return (pibo_num);
}
int solution(int n) 
{
    int answer = pibo(n);
    return answer;
}