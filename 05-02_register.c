#include <stdio.h>

int main()
{
    register int i;
    int sum = 0;

    for (i = 0; i <= 10; i += 1)
    {
        sum += i;
    }

    printf("sum : %d\n", sum);
}