/*************************************
LAB3_4 �۳��� 20170389 �濵�а� 4�г�
*************************************/

#include <stdio.h>
int main(void)
{
	int base, height, area;

	printf("�غ��� ���̸� �Է��ϼ���: ");
	scanf_s("%d %d", &base, &height);

	area = base * height * 0.5;
	printf("�غ��� ���̰� ���� %d�� %d�� �ﰢ���� ���̴� %d�̴�\n", base, height, area);

	return 0;
}