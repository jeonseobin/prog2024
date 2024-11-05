// 055_macro.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <stdio.h>
//#define SQUARE(x) x*x
//#define SQUARE(x) (x)*(x)
#define SQUARE(x) ((x)*(x))


int square(int x)
{
    return x * x;
}

int main()
{
    int a = 5;

    //printf("%d\n", SQUARE(a));  //매크로
    //printf("%d\n", square(a));  // 함수
    //printf("%d\n", a*a);    // 수식

    printf("%d\n", SQUARE(a+1));  // 매크로
    printf("%d\n", square(a+1));  // 함수
    //printf("%d\n", (a+1) * (a+1));    // 수식

    a = 4;
    printf("%d\n", 100/SQUARE(a + 1));  // 매크로  // 100 / (4+1)*(4+1)  20 * 5 = 100
    printf("%d\n", 100/square(a + 1));  // 함수
}