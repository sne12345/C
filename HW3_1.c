/*****************************************
HW3_1 �۳��� 20170389 �濵�а� 4�г�
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