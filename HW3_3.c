/************************************
HW3_3 �۳��� 20170389 �濵�а� 4�г�
*************************************/

#include <stdio.h>
int main(void)
{
	int totalSeconds, hour, minute, seconds;

	printf("Enter h m s: ");
	scanf_s("%d %d %d", &hour, &minute, &seconds);
	printf("---Calculation Result---\n");

	totalSeconds = hour * 3600 + minute * 60 + seconds;
	printf("Total %d seconds\n", totalSeconds);

	return 0;
}