#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int arrmax_len(int numbers_len)
{
    int max_len = 0;
    for (int i = 1; i < numbers_len; i++)
        max_len = max_len + numbers_len - i;
    return (max_len);
}

int *arrmax(int numbers[], int numbers_len, int max_len)
{
    int index = 0;
    int j = 0;
    int *arrmax;
    arrmax = (int *)malloc(sizeof(int) * max_len);
    for(int i = 0; i < numbers_len - 1; i++)
    {
        j = i + 1;
        while (j < numbers_len)
        {
            arrmax[index] = numbers[i] + numbers[j];
            index++;
            j++;
        }
    }
    return (arrmax);
}

int ds_len(int *max_numbers, int max_len)
{
    int res_len = 0;
    bool check[200];
    for (int i = 0; i < 200; i++)
        check[i] = true;
    for (int i = 0; i < max_len; i++)
    {
        if (check[max_numbers[i]] == true)
        {
            check[max_numbers[i]] = false;
            res_len++;
        }
    }
    return (res_len);
}

int *ds_value(int *max_numbers, int max_len)
{
    int index = 0;
    int *arr;
    bool check[200];
    arr = (int *)malloc(sizeof(int) * max_len);
    for (int i = 0; i < 200; i++)
        check[i] = true;
    for (int i = 0; i < max_len; i++)
    {
        if (check[max_numbers[i]] == true)
        {
            arr[index] = max_numbers[i];
            check[max_numbers[i]] = false;
            index++;
        }
    }
    return (arr);
}

int *sort_arr(int arr[], int arr_len)
{
    int j = 1;
    int temp = 0;
    for(int i = 0; i < arr_len - 1; i++)
    {
        while (j < arr_len)
        {
            if (arr[i] > arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
            j++;
        }
        j = i + 1;
    }
    return (arr);
}

int* solution(int numbers[], size_t numbers_len)
{
    int max_len = arrmax_len(numbers_len);
    int *max_numbers = (int *)malloc(sizeof(int) * max_len);
    max_numbers = arrmax(numbers, numbers_len, max_len);
    int res_len = ds_len(max_numbers, max_len);
    int *ds_arr = (int *)malloc(sizeof(int) * max_len); 
    ds_arr = ds_value(max_numbers, max_len);
    int answer = (int *)malloc(sizeof(int) * res_len);
    answer = sort_arr(ds_arr, res_len);
        return (answer);
}