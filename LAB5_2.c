/*  �۳��� 20170389 �濵�а� 4�г� */
#include <Stdio.h>
int main(void)
{
	char ch;
	int value;

	printf("Enter an alphabet : ");
	scanf_s("%c", &ch);
	printf("%c %d\n", ch, ch);

	printf("Enter a ascii value : ");
	scanf_s("%d", &value);
	printf("%d %c\n", value, value);

	return 0;
}