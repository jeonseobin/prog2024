// 046_scope.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <stdio.h>

int a = 10; // 전역 변수

void aaa()
{
    printf("in aaa: a = %d\n", a);
}

void bbb()
{
    int a = 20; // 로컬 변수

    printf("in bbb: a = %d\n", a); // 가까운 변수로 사용
}

int main()
{
    aaa();
    bbb();
}

