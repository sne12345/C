/************************************
HW3_3 송나은 20170389 경영학과 4학년
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