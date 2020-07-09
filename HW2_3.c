#include <stdio.h>
int main(void) {
	// 변수 선언 및 배정, 계산
	int totalSeconds, hour, minute, seconds;
	totalSeconds = 14000;
	hour = totalSeconds / 60 / 60;
	minute = totalSeconds % 3600 / 60;
	seconds = totalSeconds % 60 % 60;


	// 출력
	printf("%d seconds:\n", totalSeconds);
	printf("%dh %dm %ds", hour, minute, seconds);

	return 0;

}