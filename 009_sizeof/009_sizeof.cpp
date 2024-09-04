// 009_sizeof.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <stdio.h>

int main()
{
    printf("sizeof char = %d\n", sizeof(char));
    printf("sizeof short = %d\n", sizeof(short));
    printf("sizeof long = %d\n", sizeof(long));
    printf("sizeof int = %d\n", sizeof(int));
    printf("sizeof long long = %d\n", sizeof(long long));

    printf("sizeof float = %d\n", sizeof(float));
    printf("sizeof double = %d\n", sizeof(double));

    char c;
    short s;
    long l;
    int i;
    long long ll;
    float f;
    double d;

    printf("sizeof char = %d\n", sizeof(char));
    printf("sizeof short = %d\n", sizeof(short));
    printf("sizeof long = %d\n", sizeof(long));
    printf("sizeof int = %d\n", sizeof(int));
    printf("sizeof long long = %d\n", sizeof(long long));

    printf("sizeof float = %d\n", sizeof(float));
    printf("sizeof double = %d\n", sizeof(double));


}

