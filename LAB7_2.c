#include <stdio.h>

int main(void)
{
	char op;
	int operand1, operand2;
	int answer;

	printf("Enter an operator : ");
	scanf("%c", &op);
	printf("Enter the first operand : ");
	scanf("%d", &operand1);
	printf("Enter the second operand : ");
	scanf("%d", &operand2);

	switch (op)
	{
		case '+' : 
			answer = operand1 + operand2;
			break;
		case '-' : 
			answer = operand1 - operand2;
			break;
		case '*' : 
			answer = operand1 * operand2;
			break;
		case '/' : 
			answer = operand1 / operand2;
			break;
	}

	printf("%d %c %d = %d \n", operand1, op, operand2, answer);

	return 0;
}