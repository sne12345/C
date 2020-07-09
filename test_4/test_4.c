#include <stdio.h>

int main(void)
{
	int m, n, i, prime, sum;

	scanf_s("%d", &m);
	scanf_s("%d", &n);

	sum = 0;
	
	for (int j = m; j <= n; j++)
	{
		prime = 1;
		i = 2;
		while (i < j)
		{
			if (j % i == 0)
			{
				prime = 0;
				break;
			}
			i++;
		}
		if (prime == 1)
			sum += j;
	}
	printf("%d\n", sum);

	return 0;
}