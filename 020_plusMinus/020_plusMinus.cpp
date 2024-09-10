// 020_plusMinus.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <stdio.h>

int main()
{
	int x;

	printf("숫자를 입력하시오 : ");
	scanf_s("%d", &x);

	if (x > 0)
		printf("양수입니다\n");

	else if (x == 0)
		printf("0입니다.\n");

	else
		printf("음수입니다.\n");
}


