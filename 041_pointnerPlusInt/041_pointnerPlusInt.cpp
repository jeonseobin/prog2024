// 041_pointnerPlusInt.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <stdio.h>

int main()
{
    int a = 10;
    int* ptr = &a;

    printf("ptr = %p\n", ptr);
    printf("ptr+1 = %p\n", ptr + 1);
    printf("ptr+2 = %p\n", ptr + 2);
}

