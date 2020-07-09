#include <stdio.h>
int main(void) {
	// 변수 선언 및 배정
	int number = 7;
	int square = number * number;
	int cube = number * number * number;

	// 변수 사용하여 출력
	printf("The square number of %d is %d \n", number, square);
	printf("The cube number of %d is %d \n", number, cube);

	return 0;
}