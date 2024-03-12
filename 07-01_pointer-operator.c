#include <stdio.h>

int main()
{
    int a, b;
    int *p;

    a = 5000;
    p = &a;
    b = *p;

    printf("b : %d\n", b);

    return 0;
}