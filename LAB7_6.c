#include <stdio.h>

int main(void)
{
	int i;
	int studentNum;
	int score;
	int sum = 0;

	printf("Enter a student number: ");
	scanf("%d", &studentNum);

	i = 1;
	while (i <= studentNum)
	{
		printf("Enter a score : ");
		scanf("%d", &score);

		sum += score;

		i++;
	}
	printf("The total is %d \n", sum);

	return 0;
}