// num이 소수이면 1을 아니면 0을 반환하는 함수를 사용하면 편리하다.
#include <stdio.h>

int is_Prime(int n);

int main(void)
{
	int a[20], p[20], np[20]; // p는 소수를 np는 소수아닌 수를 담을 배열
	int i;
	int n;
	int pcount = 0, npcount = 0;

	scanf_s("%d", &n);
	for (i = 0; i < n; i++) {
		scanf_s("%d", &a[i]);
		if (is_Prime(a[i]) == 1)
			p[pcount++] = a[i];
		else
			np[npcount++] = a[i];
	}
	for (int k = 0; k < pcount; k++)
		printf("%d ", p[k]);
	for (int k = 0; k < npcount; k++)
		printf("%d ", np[k]);

	return 0;
}
int is_Prime(int n) 
{
	int bool1 = 1;
	for (int i = 2; i < n; i++) {
		if (n % i == 0)
			bool1 = 0;
	}
	if (bool1 == 1)
		return 1;
	else
		return 0;
}