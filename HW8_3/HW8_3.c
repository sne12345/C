/* 20170389 경영학과 송나은 */
#include <stdio.h>

int main(void)
{
	int rows, columns;

	printf("Enter the number of rows : ");
	scanf_s("%d", &rows);
	printf("Enter the number of columns : ");
	scanf_s("%d", &columns);

	for (int i = 1; i <= rows; i++)
	{
		for (int j = 1; j <= columns; j++)
			printf("%d", i);
		printf("\n");
	}

	return 0;
}