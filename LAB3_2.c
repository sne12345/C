/*************************************
LAB3_2 �۳��� 20170389 �濵�а� 4�г�
*************************************/

#include <stdio.h>
int main(void)
{
	int totalMinutes, hour, minute;

	printf("Enter the total minutes : ");
	scanf_s("%d", &totalMinutes);

	printf("%d minutes\n", totalMinutes);
	hour = totalMinutes / 60;
	minute = totalMinutes % 60;
	printf("%dh %dm\n", hour, minute);
	
	return 0;

}