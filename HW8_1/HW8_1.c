/* 20170389 �濵�а� �۳��� */
#include <stdio.h>

int main(void)
{
	int num, i, result, answer, correct;

	printf("�� ���� �����Ͻðڽ��ϱ�? : ");
	scanf_s("%d", &num);

	correct = 0;
	for (i = 1; i < 10; i++) 
	{
		printf("%d * %d = ", num, i);
		scanf_s("%d", &result);
		answer = (num * i);
		
		if (result == answer)
			correct += 1;
	}

	printf("%d���� �����ܿ��� %d���� �¾ҽ��ϴ�.\n", num, correct);
	return 0;
}