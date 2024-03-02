#include <stdio.h>
void swap(int x, int y);
void swapRef(int *x, int *y);

int main()
{
    int x = 1, y = 2;
    swap(x, y);
    printf("call by value : x: %d, y: %d\n", x, y);

    x = 1;
    y = 2;

    swapRef(&x, &y);
    printf("call by reference : x: %d, y: %d\n", x, y);

    return 0;
}

void swap(int x, int y)
{
    int temp;
    temp = x;
    x = y;
    y = temp;
}

void swapRef(int *x, int *y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}