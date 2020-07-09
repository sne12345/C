/*****************************************
HW3_1 송나은 20170389 경영학과 4학년
*****************************************/

#include <stdio.h>
int main(void)
{
	int score1, score2, average;

	printf("Enter two scores : ");
	scanf_s("%d %d", &score1, &score2);

	average = (score1 + score2) / 2;
	printf("The average is %d\n", average);

	return 0;
}