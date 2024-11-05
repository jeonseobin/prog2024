// 052_TimeT.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <stdio.h>


struct Time {
    int h, m, s;
};

int totalSec(Time t) {
    return t.h * 3600 + t.m * 60 + t.s;
}

int totalSecP(Time *t) {
    return t->h * 3600 + t->m * 60 + t->s;
}


int main()
{
    Time t = { 1, 22, 48 };

    printf("%d\n", totalSec(t));
    printf("%d\n", totalSecP(&t));

}

