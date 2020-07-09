/*  송나은 20170389 경영학과 4학년 */
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
	printf("성별\t나이\t키\t\n");
	printf("%c\t%d\t%lf\t\n",gender,age,height);

	return 0;
}