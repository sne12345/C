/*************************************
HW3_4 송나은 20170389 경영학과 4학년
*************************************/

#include <stdio.h>
int main(void)
{
	int base, height, area, width, circumference;

	printf("밑변과 높이를 입력하세요: ");
	scanf_s("%d %d", &base, &height);

	area = base * height * 0.5;
	printf("밑변과 높이가 각각 %d와 %d인 삼각형의 넓이는 %d이다\n", base, height, area);
	
	printf("직사각형의 가로와 높이를 입력하세요: ");
	scanf_s("%d %d", &width, &height);

	circumference = 2 * (width + height);
	area = width * height;
	printf("가로와 높이가 각각 %d와 %d인 직사각형의 둘레와 넓이는 %d와 %d이다\n", width, height, circumference, area);

	return 0;
}