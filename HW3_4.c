/*************************************
HW3_4 �۳��� 20170389 �濵�а� 4�г�
*************************************/

#include <stdio.h>
int main(void)
{
	int base, height, area, width, circumference;

	printf("�غ��� ���̸� �Է��ϼ���: ");
	scanf_s("%d %d", &base, &height);

	area = base * height * 0.5;
	printf("�غ��� ���̰� ���� %d�� %d�� �ﰢ���� ���̴� %d�̴�\n", base, height, area);
	
	printf("���簢���� ���ο� ���̸� �Է��ϼ���: ");
	scanf_s("%d %d", &width, &height);

	circumference = 2 * (width + height);
	area = width * height;
	printf("���ο� ���̰� ���� %d�� %d�� ���簢���� �ѷ��� ���̴� %d�� %d�̴�\n", width, height, circumference, area);

	return 0;
}