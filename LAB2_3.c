#include <stdio.h>
int main(void) {
	// 변수 선언 및 배정
	int totalMinute, hour, minute;
	totalMinute = 130;
	 
	// 계산
	hour = totalMinute / 60;
	minute = totalMinute % 60;

	// 출력
	printf("%d분:\n", totalMinute);
	printf("%dh %dm\n", hour, minute);

	return 0;

}