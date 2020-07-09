#include <stdio.h>

int main(void)
{
	char grade;
	int score;
	
	printf("Enter your grade: ");
	scanf("%c", &grade);

	if (grade == 'A')
	{
		printf("Enter your score: ");
		scanf("%d", &score);
		printf("점수가 %d이면 A를 받는군요.\n", score);
	}
	return 0;
}