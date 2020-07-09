#include <stdio.h>
int main(void)
{
	int i, number, sum = 0;
	
	i = 1;
	while (i <= 5)
	{
		do
		{
			printf("0보다 큰 수를 입력(%d번째):", i);
			scanf("%d", &number);	
		} while (number <= 0);
		 
		sum += number;
		i++;
	}

	printf("입력된 값의 총 합: %d\n", sum);
}