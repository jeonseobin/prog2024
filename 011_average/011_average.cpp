﻿// 011_average.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <stdio.h>

int main()
{
    int math = 95;
    int eng = 97;
    int kor = 88;

    int sum = math + eng + kor;
    double avg = (double)sum / 3.;  // 정수/정수 -> 정수

    printf("평균 : %f\n", avg);
}

