#include <stdio.h>

char hello[] = "Hello";

int main()
{
    int size = sizeof(hello);

    // 문자열의 마지막 부분에 null 문자 (\0) 이 할당되기에 사이즈는 6
    printf("hello[] size : %d byte\n", size);
}