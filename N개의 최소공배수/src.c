#include <stdlib.h>

int gcd(int a, int b)
{
    int temp = 0;
    while (b != 0)
    {
        temp = a % b;
        a = b;
        b = temp;
    }
    return (a);
}

int lcm(int a, int b)
{
    return ((a * b) / gcd(a,b));
}

int solution(int arr[], size_t arr_len)
{
    int answer = 0;
    int n = 1;
    while (n < arr_len)
    {
        arr[0] = lcm(arr[0], arr[n]);  
        n++;
    }
    answer = arr[0];
    return (answer);
}