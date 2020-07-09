#include <stdio.h>
// 문자열 w2가 문자열 w1의 start위치에 있으면 1을, 아니면 0을 반환하는 함수
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

int main(void) // main은 변경하지 말고 사용한다. 변경시 감점
{
	char s1[20], s2[20];
	int i, j;

	scanf_s("%s", s1, sizeof(s1));
	scanf_s("%s", s2, sizeof(s2));

	for (i = 0; s1[i] != '\0'; i++)
		printf("%d", is_word_in_word(s1, i, s2));
}