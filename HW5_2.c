/*  송나은 20170389 경영학과 4학년 */
#include <stdio.h>
#define PI 3.141592

int main(void)
{
	int radius;

	printf("Enter a radius : ");
	scanf_s("%d", &radius);
	printf("The area of a circle with %d :\t\t%lf\n", radius, radius * radius * PI);
	printf("The circumference of a circle with %d :\t%lf\n", radius, radius * 2 * PI);

	return 0;
}