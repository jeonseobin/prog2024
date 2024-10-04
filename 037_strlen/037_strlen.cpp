// 037_strlen.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#define _CRT_SECURE_NO_WARNINGS // 이거를 작성하면 표준 C언어로 쓸 수 있음
#include <stdio.h>
#include <string.h>

int main()
{
    // char s[] = "hello"; 배열의 칸수는 6이라고 출력됨 hello\0까지 포함함.
    char s[100] = "hello";
    int len = strlen(s);

    printf("배열의 칸수 : %d\n", (int)sizeof(s));
    printf("문자열의 길이 : %d\n", len);

    char s1[] = "hello";
    char s2[100];

    strcpy(s2, s1);
    printf("s1 : %s\n", s1);
    printf("s2 : %s\n", s2);

    // 문자열 상수를 복사할 수 있다.
    strcpy(s2, "konyang University");
    printf("s1 : %s\n", s1);
    printf("s2 : %s\n", s2);

    char greeting[100] = "Hello, ";
    char name[100];

    printf("이름 입력 : ");
    scanf("%s", name);

    strncat(greeting, name,
        sizeof(greeting)-sizeof(name)-1);
    strcat(greeting, "!");

    printf("%s\n", greeting);

    // 주의할 점! 문자배열은 반드시 '\0'로 끝나있어야 한다.
    //char str[10]; 결과값에서 이상한 문자가 나오는데 그 이유는 s가 초기화 되어 있지 않기 때문임.
    char str[10] = "";
    strcat(str, "Hello");
    printf("%s\n", str);

    // char str1[] = "tample"; 이건 t가 s보다 더 크기 때문에 결과값은 +1이 나옴.
    char str1[] = "sample";
    char str2[] = "simple";

    printf("%d\n", strcmp(str1, str2));
}