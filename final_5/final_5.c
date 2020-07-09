
#include <stdio.h>
int checking(char w0[], char w[])
{
	int bool1 = 1;
	for (int i = 0; i < 5; i++) {
		if (w0[i] != w[i]) {
			bool1 = 0;
			break;
		}
	}
	return bool1;
}

int main(void)
{
	char w0[81] = "apple";
	char w1[81], w2[81], w3[81];

	scanf_s("%s", w1, sizeof(w1));
	scanf_s("%s", w2, sizeof(w2));
	scanf_s("%s", w3, sizeof(w3));

	printf("%d", checking(w0, w1));
	printf("%d", checking(w0, w2));
	printf("%d", checking(w0, w3));

	return 0;
}