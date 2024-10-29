// 047_factorial.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

// 숫자 n을 입력받아서 n!을 계산하시오
// (1) 반복문으로
// (2) 재귀함수를 사용하여

#include <stdio.h>

int factorial(int n);   // 함수원형(prototype)

int main()
{
    int n;

    printf("n 입력 : ");
    scanf_s("%d", &n);

    // (1) 1부터 100까지의 합을 구하시오
    int sum = 0;
    for (int i = 1; i <= 100; i++)
        sum += i;
    printf("%d\n", sum);
    

    // (2) 반복문
    // 1부터 100까지 반복문으로 더하듯이
    // 1부터 n까지 반복문으로 곱한다
    /*long long f = 1;
    for (int i = 1; i <= n; i++) {
        f = 1;
        for (int j = 1; j <= i; j++)
            f *= j;
        printf("%d! = %lld\n", i, f);
    }*/
 /*   int p = 1;
    for (int i = 1; i <= n; i++) {
        p *= i;
        printf("%d! = %d\n", i, p);
    }*/
    int p = 1;
    for (int i = 1; i <= n; i++)
        p *= i;
        printf("%d\n", p);


    // (3) 재귀함수
    printf("%d\n", factorial(n));
}

int factorial(int n)
{
    if (n == 1)
        return 1;
    return factorial(n - 1) * n;
}


