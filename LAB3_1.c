/******************************************
LAB3_1 송나은 20170389 경영학과 4학년
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