#include <stdio.h>
int main(void)
{
	int num, i;
	int sum = 0, product = 1;

	printf("Enter an number:");
	scanf("%d", &num);

	i = 0;
	while (i < num)
	{
		sum += 3;
		product *= 3;
		i++;
	}

	printf("3을 %d번 더한 값은 %d이다\n", num, sum);
	printf("3을 %d번 곱한 값은 %d이다\n", num, product);

	return 0;
}