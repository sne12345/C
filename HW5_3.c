/*  �۳��� 20170389 �濵�а� 4�г� */
#include <stdio.h>
#define BASE 32
#define CONVERSION_FACTOR 9.0 / 5.0

int main(void)
{
	double celsius;
	double fahrenheit;

	printf("Enter a celsius temperature : ");
	scanf_s("%lf", &celsius);
	printf("Fahrenheit Equivalent : %lf\n", (celsius * CONVERSION_FACTOR) + BASE);

	return 0;
}