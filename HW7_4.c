/* 20170389 �濵�а� �۳���*/
#include <stdio.h>

int main(void)
{
	int number, score, total, i;
	double average;

	printf("Enter a student number : ");
	scanf_s("%d", &number);

	total = 0;
	i = 1;
	while (i <= number)
	{
		printf("Enter a score : ");
		scanf_s("%d", &score);
		total = total + score;
		i++;
	}
	
	if (number != 0) 
		average = ((double)total / number);
	else
		average = 0;

	printf("The total is %d\n", total);
	printf("The average is %.1lf\n", average);

	return 0;
}