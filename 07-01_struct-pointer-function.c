#include <stdio.h>

struct num
{
    int x;
    int y;
    int sum;
    int mul;
};

int calc(struct num *);

int main()
{
    struct num number1;
    number1.x = 10;
    number1.y = 20;
    calc(&number1);

    printf("x: %d\n", number1.x);
    printf("y: %d\n", number1.y);
    printf("sum: %d\n", number1.sum);
    printf("mul: %d\n", number1.mul);

    return 0;
}

int calc(struct num *number2)
{
    number2->sum = number2->x + number2->y;
    number2->mul = number2->x * number2->y;

    return 0;
}