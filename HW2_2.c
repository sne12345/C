#include <stdio.h>
int main(void) {
	// ���� ���� �� ����
	int number = 7;
	int square = number * number;
	int cube = number * number * number;

	// ���� ����Ͽ� ���
	printf("The square number of %d is %d \n", number, square);
	printf("The cube number of %d is %d \n", number, cube);

	return 0;
}