#include <stdio.h>
int main(void)
{
	int i;
	int num;

	printf("Enter a number : ");
	scanf("%d", &num);

	i = 1;
	while (i <= num)
	{
		if (i % 3 == 0 || i % 5 == 0)
			printf("%d ", i);
		i++;
	}
	printf("\n");

	return 0;
}