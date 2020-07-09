#include <stdio.h>
int main(void) {
	// 변수 선언 및 배정
	int midterm = 100;
	int final = 90;

	// 계산 및 출력
	printf("이름\t\t중간\t학기말\t평균\n");
	printf("Suehee Pak\t%d\t%d\t%d", midterm, final, (midterm + final) / 2);

	return 0;

}