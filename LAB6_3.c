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
		printf("������ %d�̸� A�� �޴±���.\n", score);
	}
	return 0;
}