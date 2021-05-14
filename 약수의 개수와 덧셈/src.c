#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int get_divisor(int num)
{
	int rtn = 0;
	int i = 1;

	while (i <= num)
	{
		if (num % i == 0)
			rtn++;
		i++;
	}
	return (rtn);
}

int solution(int left, int right)
{
	int answer = 0;
	int num = 0;
	int divisor_num = 0;
	int sign = 1;

	while (left <= right)
	{
		divisor_num = get_divisor(left);
		sign = (divisor_num % 2 == 0) ?  1 : -1;
		num = left * sign;
		answer += num;
		left++;
	}
	return answer;
}