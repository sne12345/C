/*  송나은 20170389 경영학과 4학년 */
#include <stdio.h>

int main(void)
{
	const double PI = 3.141592;
	int radius;
	double area;

	printf("Enter a radius : ");
	scanf_s("%d", &radius);
	printf("The area of a circle with %d : %lf\n", radius, radius * radius * PI);

	return 0;
}