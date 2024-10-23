// 045_function.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <stdio.h>

int itemCnt = 0; // 전역변수(global variable)
int money = 100;

void buyItem(int price, int cnt)
{
	if (money >= price) {
		itemCnt += cnt;
		money -= price;
		printf("아이템을 구매했습니다.\n");
		printf("아이템 개수 : %d\n", itemCnt);
		printf("잔액: %d\n", money);
	}
	else {
		printf("잔액이 부족합니다.\n");
	}
}

int plus(int a, int b)
{
	return a + b;
}

int main()
{
	/*buyItem(30);

	buyItem(40);

	buyItem(20);*/

	buyItem(30, 5);

	buyItem(40, 7);

	buyItem(20, 1);

	buyItem(30, 2);

	int sum = plus(3, 5);
	printf("%d\n", sum);
}

