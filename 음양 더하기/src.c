#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// absolutes_len은 배열 absolutes의 길이입니다.
// signs_len은 배열 signs의 길이입니다.
int solution(int absolutes[], size_t absolutes_len, bool signs[], size_t signs_len)
{
	int answer = 0;
	int	idx = 0;
	int value = 0;
	int	sign = 1;

	while (idx < absolutes_len)
	{
		sign = (signs[idx] == true) ? 1 : -1; 
		value = absolutes[idx] * sign;
		answer = answer + value;
		idx++;
	}
	return (answer);
}