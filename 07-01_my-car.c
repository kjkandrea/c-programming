#include <stdio.h>

struct vehicle
{
    char maker[15];
    long km;
    long cost;
};

int main()
{
    struct vehicle my_car = {"chevrolet", 50000, 1000};

    printf("Maker: %s\n", my_car.maker);
    printf("Kilometers: %ld\n", my_car.km);
    printf("Cost: %ld\n", my_car.cost);

    return 0;
}