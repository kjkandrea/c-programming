#include <stdio.h>
int callCounts();

int main()
{
    int i = 0;
    while (10 > i)
    {

        printf("call counts %d\n", callCounts());
        i += 1;
    };

    return 0;
}

int callCounts()
{
    static int counts;
    counts += 1;
    return counts;
}