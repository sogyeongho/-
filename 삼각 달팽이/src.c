#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int     *solution(int n)
{
    int arr[n][n];
    int number = 1; 
    int *answer = (int*)calloc(n * (n+1) / 2, sizeof(int));
    int k = 0;
    int i = 0;
    int j = 0;
    int re = 0;

    while (re < n - k)
    {
        while (re < n - k)
        {
            arr[i][j] = number;
            number++;
            i++;
            re++;
        }
        re = 0;
        k++;
        i--;
        j++;
        while (re < n - k)
        {
            arr[i][j] = number;
            number++;
            j++;
            re++;
        }
        re = 0;
        k++;
        j -= 2;
        i--;
        while (re < n - k)
        {
            arr[i][j] = number;
            number++;
            i--;
            j--;
            re++;
        }
        re = 0;
        k++;
        i += 2;
        j++; 
    }  
    i = 0;
    j = 0;
    k = 0;
    while(i < n)
    {
        while (j <= i)
        {
            answer[k] = arr[i][j];
            k++;
            j++;
        }
        i++;
        j = 0;
    }
    return (answer);
}