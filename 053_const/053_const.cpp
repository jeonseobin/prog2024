// 053_const.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <stdio.h>
#define PI 3.141592
//const double PI = 3.141592;

double getArea(double r) {
    return PI * r * r;
}

int main()
{
    printf("%f\n", getArea(10));
}

