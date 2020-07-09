/* 20170389 경영학과 송나은 */
#include <stdio.h>

int main(void)
{
	int i, j;

	i = 1;
	while (i < 10)
	{
		j = 2;
		while (j <= 8)
		{
			printf("%d * %d = %d\t", i, j, i * j);
			j = j + 2;
		}
		printf("\n");
		i++;
	}

	return 0;
}