#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

char* solution(int a, int b) 
{
    int month[12] = {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int d = 0;
    int n = 0;
    char dayname[22] = "FRISATSUNMONTUEWEDTHU";
    char* answer = (char*)malloc(sizeof(char) * 4);
    for(int m = 0; m < a - 1; m++)
        d = d + month[m];
    d = d + b - 1;
    if (d >= 7)   
        d = (d % 7) * 3;
    else
        d = d * 3;
    while (n < 3)
    {      
        answer[n] = dayname[d];
        n++;
        d++;
    }
    answer[n] = '\0';
    return answer;
}