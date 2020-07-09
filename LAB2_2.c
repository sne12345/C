#include <stdio.h>
int main(void) {
	// 변수선언
	int number = 7;

	// 변수 사용하여 출력
	printf("The square number of %d is %d \n", number, number * number);
	printf("The cube number of %d is %d \n" , number, number * number * number);
	
	return 0;
}