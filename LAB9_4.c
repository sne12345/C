#include <stdio.h>
int main(void)
{
	int i;
	int number, sum = 0;
	
	i = 1;
	while (i <= 5)
	{
		printf("0���� ū ���� �Է�(%d��°):", i);
		scanf("%d", &number);

		sum += number;

		i++;
	}

	printf("�Էµ� ���� �� ��: %d\n", sum);
}