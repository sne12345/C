/* 20170389 �濵�а� �۳��� */
#include <stdio.h>

int main(void)
{
	for (int i = 1; i < 10; i++)
	{
		for (int j = 2; j <= 8; j = j + 2)
		{
			printf("%d * %d = %d\t", i, j, i * j);
		}
		printf("\n");
	}

	return 0;
}