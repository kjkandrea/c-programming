#include <stdio.h>

int main()
{
    int in_money, coin_500, coin_100, coin_50, coin_10;

    printf("동전으로 교환할 금액은? ");
    scanf("%d", &in_money); // 값이 아니라 주소를 전달해야함으로 & 주소 연산자를 붙힘.

    coin_500 = in_money / 500;
    in_money = in_money % 500;
    coin_100 = in_money / 100;
    in_money = in_money % 100;
    coin_50 = in_money / 50;
    in_money = in_money % 50;
    coin_10 = in_money / 10;
    in_money = in_money % 10;
    printf("\n500원 : %d 개", coin_500);
    printf("\n100원 : %d 개", coin_100);
    printf("\n50원 : %d 개", coin_50);
    printf("\n10원 : %d 개", coin_10);
    printf("\n바꾸지 못한 금액 : %d 원\n", in_money);

    return 0;
}