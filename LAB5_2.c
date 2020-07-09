/*  송나은 20170389 경영학과 4학년 */
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