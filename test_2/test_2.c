#include <stdio.h>

int main(void)
{
	int num, sum;

	scanf_s("%d", &num);

	sum = 0;
	for (int i = 1; i <= num; i++)
	{
		if (num % i == 0)
			sum += i;
	}
	printf("%d\n", sum);

	return 0;
}