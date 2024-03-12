#include <stdio.h>
void change(int *);

int main()
{
    int a = 0;
    printf("a : %d\n", a);
    change(&a);
    printf("a : %d\n", a);

    return 0;
}

void change(int *x)
{
    *x = 1;
}