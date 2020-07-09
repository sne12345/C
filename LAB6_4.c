#include <stdio.h>

int main(void)
{
	char grade;
	int score;
	
	printf("Enter a student grade(A or F):");
	scanf("%c", &grade);

	if (grade == 'A')
	{
		printf("Enter your GOOD score:");
		scanf("%d", &score);
		printf("점수가 %d이면 좋은성적을 맞는군요. 계속 열심히해요.\n", score);
	}
	else
	{
		printf("Enter your BAD score:");
		scanf("%d", &score);
		printf("점수가 %d이라니 더 열심히 해야겠네요.\n", score);
	}

	return 0;
}