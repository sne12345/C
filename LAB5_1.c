/*  �۳��� 20170389 �濵�а� 4�г� */
#include <stdio.h>

int main(void)
{
	char gender;
	int age;
	double height;

	printf("Enter your gender : ");
	scanf_s("%c", &gender);
	printf("Enter your age : ");
	scanf_s("%d", &age);
	printf("Enter your height : ");
	scanf_s("%lf", &height);
	printf("����\t����\tŰ\t\n");
	printf("%c\t%d\t%lf\t\n",gender,age,height);

	return 0;
}