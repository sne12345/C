/* 20170389 경영학과 송나은 */
#include <stdio.h>

int main(void)
{
	int number, score, best, worst, i;

	printf("Enter the number of scores : ");
	scanf_s("%d", &number);
	printf("Enter a score : ");
	scanf_s("%d", &score);

	best = score;
	worst = score;
	for (i = 2; i <= number; i++)
	{
		printf("Enter a score : ");
		scanf_s("%d", &score);

		if (best < score)
			best = score;
		if (worst > score)
			worst = score;
	}

	printf("The best score is %d\n", best);
	printf("The worst score is %d\n", worst);

	return 0;
}