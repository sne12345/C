// num�� �Ҽ��̸� 1�� �ƴϸ� 0�� ��ȯ�ϴ� �Լ��� ����ϸ� ���ϴ�.
#include <stdio.h>

int is_Prime(int n);

int main(void)
{
	int a[20], p[20], np[20]; // p�� �Ҽ��� np�� �Ҽ��ƴ� ���� ���� �迭
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