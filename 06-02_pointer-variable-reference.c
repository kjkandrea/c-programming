#include <stdio.h>

#pragma GCC diagnostic ignored "-Wformat"

int main()
{
    int *p, i = 3, j;

    p = &i; // 포인터변수 p는 변수 i 의 주소를 가리킴
    j = *p; // 포인터변수 p가 가리키는 주소에 있는 값을 변수 j에 대입
    j++;

    printf("*p = %d\n", *p);
    printf(" p = %x\n", p);
    printf(" i = %d\n", i);
    printf(" j = %d\n", j);
}