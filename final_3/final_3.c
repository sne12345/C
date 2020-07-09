
#include <stdio.h>
int cal_odd_digit(int num);

int main(void) // main은 변경하지 않는다. 변경시 감점 처리
{
	int n;

	scanf_s("%d", &n);
	n *= 3;

	printf("%d\n", cal_odd_digit(n));
}

int cal_odd_digit(int num)
{
	int sum_odd = 0;

	while (num != 0)
	{
		int num_1 = num % 10;
		if (num_1 % 2 == 1)
			sum_odd += num_1;

		num /= 10;
	}

	return sum_odd;
}
