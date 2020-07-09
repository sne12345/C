#include <stdio.h>

int main(void)
{
	int num,count;

	scanf_s("%d", &num);
	
	count = 0;
	while (num != 0)
	{
		if (num > 0)
			count++;
		num = num / 10;
	}
	printf("%d\n", count);

	return 0;
}