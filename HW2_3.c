#include <stdio.h>
int main(void) {
	// ���� ���� �� ����, ���
	int totalSeconds, hour, minute, seconds;
	totalSeconds = 14000;
	hour = totalSeconds / 60 / 60;
	minute = totalSeconds % 3600 / 60;
	seconds = totalSeconds % 60 % 60;


	// ���
	printf("%d seconds:\n", totalSeconds);
	printf("%dh %dm %ds", hour, minute, seconds);

	return 0;

}