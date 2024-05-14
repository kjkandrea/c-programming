#include <stdio.h>

#pragma GCC diagnostic ignored "-Wformat"

int main()
{
    int x = 1;
    int array[] = {1, 2, 3};

    printf("x address : %x\n", &x);
    printf("array address : %x\n", array);
    printf("array[0] address : %x\n", &array[0]);
    printf("array[1] address : %x\n", &array[1]);
}