/*  �۳��� 20170389 �濵�а� 4�г� */
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