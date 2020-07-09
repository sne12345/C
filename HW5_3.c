/*  송나은 20170389 경영학과 4학년 */
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