#include <stdio.h>
int main(void)
{
	int i, number, sum = 0;
	
	i = 1;
	while (i <= 5)
	{
		do
		{
			printf("0���� ū ���� �Է�(%d��°):", i);
			scanf("%d", &number);	
		} while (number <= 0);
		 
		sum += number;
		i++;
	}

	printf("�Էµ� ���� �� ��: %d\n", sum);
}