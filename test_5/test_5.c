#include <stdio.h>

int main(void)
{
	int deposit, deposit1, target, count, month, year;

	scanf_s("%d", &deposit);
	scanf_s("%d", &target);

	count = 1;
	deposit1 = deposit * 1.02;
	while (deposit1 < target)
	{
		if (deposit1 >= target)
			break;
		deposit1 = (deposit1 + deposit) * 1.02;
		count++;
	}

	month = count % 12;
	year = count / 12;
	printf("%d %d %d\n", year, month, deposit1);

	return 0;
}