/******************************************
LAB3_1 �۳��� 20170389 �濵�а� 4�г�
******************************************/

#include <stdio.h>
int main(void)
{
	int x, y;

	printf("Enter the first number : ");
	scanf_s("%d", &x);
	printf("Enter the second number : ");
	scanf_s("%d", &y);

	printf("%d + %d = %d\n", x, y, x + y);
	printf("%d - %d = %d\n", x, y, x - y);
	printf("%d * %d = %d\n", x, y, x * y);
	printf("%d / %d = %d\n", x, y, x / y);

	return 0;
}