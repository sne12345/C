#include <stdio.h>

int main(void)
{
	int key, num, numKey, count;

	scanf_s("%d", &key);

	count = 0;
	num = 1;
	numKey = -1;
	while (num != -1)
	{
		scanf_s("%d", &num);
		if (count != -1)
			count++;
		if (count != -1) {
			if (key == num)
			{
				numKey = count;
				count = -1;
			}
		}
	}
	if (numKey != -1)
		printf("%d\n", numKey);
	else
		printf("not found\n");

	return 0;
}