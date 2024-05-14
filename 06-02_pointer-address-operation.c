#include <stdio.h>

int main()
{
    int array[] = {10,
                   20,
                   30,
                   40,
                   50};
    int *p;

    p = &array[0]; // 첫번째 요소 주소값 할당

    printf("*p = %d\n", *p);
    printf("*(p + 1) = %d\n", *(p + 1)); // (p번지 + 1) 번지의 내용
    printf("*p + 1 = %d\n", *p + 1);     // p번지의 내용에 1을 더한 값

    p = p + 3;
    printf("*p = %d\n", *p);

    return 0;
}