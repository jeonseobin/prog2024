// 056_bit.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <stdio.h>

int main()
{
    int a = 5;
    int b = 4;

    printf("a & b = %d\n", a & b);
    printf("a | b = %d\n", a | b);
    printf("a ^ b = %d\n", a ^ b);
    printf("~a = %d\n", ~a);
    printf("~b = %d\n", ~b);
    printf("a << 2 = %d\n", a << 2);
    printf("a >> 2 = %d\n", a >> 2);

    // a &= b;  // a = a % b;
    // masking
    int x = 106;    // 0110 1010
    int mask = 15;  // 0000 1111

    x &= mask;  // x = x & mask;
    printf("Masking : %d\n", x);
}

