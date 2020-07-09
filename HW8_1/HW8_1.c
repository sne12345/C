/* 20170389 경영학과 송나은 */
#include <stdio.h>

int main(void)
{
	int num, i, result, answer, correct;

	printf("몇 단을 연습하시겠습니까? : ");
	scanf_s("%d", &num);

	correct = 0;
	for (i = 1; i < 10; i++) 
	{
		printf("%d * %d = ", num, i);
		scanf_s("%d", &result);
		answer = (num * i);
		
		if (result == answer)
			correct += 1;
	}

	printf("%d단의 구구단에서 %d개를 맞았습니다.\n", num, correct);
	return 0;
}