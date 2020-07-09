#include <stdio.h>

int main(void)
{
	int month;

	scanf_s("%d", &month);

	if (month >= 1 && month <= 12)
		printf("%d¿ù\n", month);
	else
		printf("incorrect\n");

	return 0;
}