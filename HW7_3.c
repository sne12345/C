/* 20170389 경영학과 송나은*/
#include <stdio.h>

int main(void)
{
	int number, i, factorial;

	printf("Enter a number : ");
	scanf_s("%d", &number);

	factorial = 1;
	i = 2;
	while (i <= number)
	{
		factorial = (factorial * i);
		i++;
	}
	printf("%d의 Factorial 값은 %d이다.\n", number, factorial);

	return 0;
}