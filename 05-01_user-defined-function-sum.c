#include <stdio.h>     // 표준 함수 stdio.h 라이브러리를 사용
int sum(int a, int b); // 함수의 원형 선언

int main()
{
    printf // 표준함수
        ("%d\n",
         sum(     // 호출함수
             1, 2 // 실 매개변수
             ));
    return 0;
}

// 함수 헤더 int sum(int a, int b)
// 피호출 함수
int                // 반환 자료형
    sum            // 함수 명
    (int a, int b) // 형식 매개변수
{
    return a + b;
}