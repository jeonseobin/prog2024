// 054_enum.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <stdio.h>

enum color { Red, Green, Blue};
int main()
{
	color x, y;

	x = Red;
	y = Blue;

	printf("%d %d\n", x, y);

	if (x == Red)
		printf("Red\n");
}

