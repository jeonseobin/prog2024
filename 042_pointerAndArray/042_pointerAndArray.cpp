﻿// 042_pointerAndArray.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <stdio.h>

int main()
{
    // 10개 짜리 정수배열 선언
    int a[10] = { 10, 20, 30, 40, 50, 60, 70, 80, 90, 100 };

    // 정수형 포인터 선언
    int* p;

    p = a;
    printf("%d\n", *p);
    printf("%d %d\n", *(p + 1), *p + 1);

    printf("%p %p %p %p\n", a, &a[0], p+1, &a[1]);
    printf("%p %p %p %p\n", p, &p[0], a + 1, &p[1]);

}