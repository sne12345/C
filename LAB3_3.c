/*************************************
LAB3_3 �۳��� 20170389 �濵�а� 4�г�
**************************************/

#include <stdio.h>
int main(void)
{
	int totalMinutes, hour, minute;

	printf("Enter hour : ");
	scanf_s("%d", &hour);
	printf("Enter minute : ");
	scanf_s("%d", &minute);

	totalMinutes = hour * 60 + minute;
	printf("Total %d minutes\n", totalMinutes);

	return 0;
}