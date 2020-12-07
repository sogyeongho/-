#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

void    quicksort(int arr[], int start, int end)
{
    int pivot = start;
    int i = start + 1;
    int j = end;
    int temp;
    if (start >= end)
        return ;
    while (i <= j)
    {
        while (i <= end && arr[i] <= arr[pivot])
            i++;
        while (j > start && arr[j] >= arr[pivot])
            j--;
        if (i > j)
        {
            temp = arr[j];
            arr[j] = arr[pivot];
            arr[pivot] = temp;
        }
        else
        {
            temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }
    quicksort(arr, start, j - 1);
    quicksort(arr, j + 1, end);
}
void    quicksort2(int arr[], int start, int end)
{
    int pivot = start;
    int i = start + 1;
    int j = end;
    int temp;
    if (start >= end)
        return ;
    while (i <= j)
    {
        while (i <= end && arr[i] >= arr[pivot])
            i++;
        while (j > start && arr[j] <= arr[pivot])
            j--;
        if (i > j)
        {
            temp = arr[j];
            arr[j] = arr[pivot];
            arr[pivot] = temp;
        }
        else
        {
            temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }
    quicksort2(arr, start, j - 1);
    quicksort2(arr, j + 1, end);
}
int     solution(int A[], size_t A_len, int B[], size_t B_len) 
{
    int answer = 0;
    quicksort(A, 0, A_len - 1);
    quicksort2(B, 0, B_len - 1);
    for (int i = 0; i < A_len; i++)
        answer = answer + A[i] * B[i]; 
    return (answer);
}