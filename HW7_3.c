/* 20170389 �濵�а� �۳���*/
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
	printf("%d�� Factorial ���� %d�̴�.\n", number, factorial);

	return 0;
}