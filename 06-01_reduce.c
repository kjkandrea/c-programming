#include <stdio.h>
int reduce(int array[], int length);

int main()
{
    int arr[] = {1,
                 2,
                 3,
                 4,
                 5,
                 6,
                 7};

    int length = sizeof(arr) / sizeof(arr[0]);

    printf("total : %d\n", reduce(arr, length));
}

int reduce(int array[], int length)
{
    int acc = 0;

    for (int i = 0; i < length; i += 1)
    {
        acc += array[i];
    }

    return acc;
}