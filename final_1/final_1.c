
#include <stdio.h>
int main(void)
{
	int a[20];
	int n, key;
	int i, count = 0;
	scanf_s("%d", &n);

	for (i = 0; i < n; i++)
		scanf_s("%d", &a[i]);
	
	scanf_s("%d", &key);
	for (int j = 0; j < n; j++) {
		if (a[j] == key)
			count++;
	}
	printf("%d", count);

	return 0;
}