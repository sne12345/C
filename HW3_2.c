/************************************
HW3_2 송나은 20170389 경영학과 4학년
*************************************/

#include <stdio.h>
int main(void)
{
	int totalSeconds, hour, minute, seconds;
	
	printf("Enter the total seconds: ");
	scanf_s("%d", &totalSeconds);
	printf("---Calculation Result---\n");
	printf("%d seconds\n", totalSeconds);
	
	hour = totalSeconds / 3600;
	minute = totalSeconds % 3600 / 60;
	seconds = totalSeconds % 60;
	printf("%dh %dm %ds\n", hour, minute, seconds);
	
	return 0;
}