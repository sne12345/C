#include <stdio.h>
// ���ڿ� w2�� ���ڿ� w1�� start��ġ�� ������ 1��, �ƴϸ� 0�� ��ȯ�ϴ� �Լ�
int is_word_in_word(char w1[], int start, char w2[]);
int is_word_in_word(char w1[], int start, char w2[])
{
	int bool1 = 1,count;
	int w1count = start;

	for (count = 0; w2[count] != '\0'; count++);
	for (int j = 0; j < count; j++) {
		if (w1[w1count++] != w2[j]) {
			bool1 = 0;
			break;
		}
	}
	return bool1;
}

int main(void) // main�� �������� ���� ����Ѵ�. ����� ����
{
	char s1[20], s2[20];
	int i, j;

	scanf_s("%s", s1, sizeof(s1));
	scanf_s("%s", s2, sizeof(s2));

	for (i = 0; s1[i] != '\0'; i++)
		printf("%d", is_word_in_word(s1, i, s2));
}