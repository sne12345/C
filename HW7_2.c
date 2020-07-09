/* 20170389 경영학과 송나은*/
#include <stdio.h>

int main(void)
{
	char operator;
	int firstOperand, secondOperand, result, answer;

	printf("Enter an operator : ");
	scanf_s("%c", &operator, sizeof(operator));
	printf("Enter the first operand : ");
	scanf_s("%d", &firstOperand);
	printf("Enter the second operand : ");
	scanf_s("%d", &secondOperand);
	printf("%d %c %d = ", firstOperand, operator, secondOperand);
	scanf_s("%d", &result);

	switch (operator)
	{
	case '+':
		answer = (firstOperand + secondOperand);
		break;
	case '-':
		answer = (firstOperand - secondOperand);
		break;
	case '*':
		answer = (firstOperand * secondOperand);
		break;
	case '/':
		answer = (firstOperand / secondOperand);
		break;
	}

	if (result == answer)
		printf("Right answer\n");
	else
	{
		printf("Wrong!\n");
		printf("%d is the right answer\n", answer);
	}

	return 0;
}