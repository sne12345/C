#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	
	int num1, num2;
	int answer, yourAnswer;
	char ch;

	srand(time(NULL));

	do
	{
		num1 = rand() % 100;
		num2 = rand() % 100;

		printf("%d + %d = ", num1, num2);
		scanf("%d", &yourAnswer);

		answer = num1 + num2;

		if(answer == yourAnswer)
			printf("Your answer is right. \n");
		else
		{
			printf("Your answer is wrong. \n");
			printf("%d is the right answer\n", answer);
		}

		fflush(stdin);
		printf("Do you want to play again?(y/n)");
		scanf("%c", &ch);
	} while(ch == 'y');

	return 0;
}