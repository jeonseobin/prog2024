// 048_printArray.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <stdio.h>

//void printArr(int a[], int n) {
//    for (int i = 0; i < n; i++)
//        printf("%d ", a[i]);
//    printf("\n");
//}

void printArr(int *a, int n) {
    for (int i = 0; i < n; i++)
        printf("%d ", a[i]);
    printf("\n");
}

void changeArr(int a[], int n)
{
    for (int i = 0; i < n; i++)
        a[i] *= a[i];
}

// 2차원 배열을 매개변수로 전달받는 방법
void  printArr2(int a[][4], int n)
{
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < 4; j++)
            printf("%4d", a[i][j]);
        printf("\n");
    }
}
int main()
{
    int a[] = { 1,2,3,4,5 };
    int b[3][4] = { {1,2,3,4}, {5,6,7,8}, {9,10,11,12} };

    printArr(a, 5);
    changeArr(a, 5);
    printArr(a, 5);

    printArr2(b, 3);    //2차원 배열을 매개변수로 전달하는 방법
}

