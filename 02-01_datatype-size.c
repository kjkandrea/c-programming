#include <stdio.h>
#include <limits.h>

void main() {
    char ch1 = CHAR_MIN;
    char ch2 = CHAR_MAX;
    short sh1 = SHRT_MIN;
    short sh2 = SHRT_MIN;
    int in1 = INT_MIN;
    int in2 = INT_MAX;
    long lo1 = LONG_MIN;
    long lo2 = LONG_MAX;
    long long ll1 = LLONG_MIN;
    long long ll2 = LLONG_MAX;

    printf("char 범위 : %lld ~ %lld \n", ch1, ch2);
    printf("short 범위 : %lld ~ %lld \n", sh1, sh2);
    printf("int 범위 : %lld ~ %lld \n", in1, in2);
    printf("long 범위 : %lld ~ %lld \n", lo1, lo2);
    printf("long long 범위 : %lld ~ %lld \n", ll1, ll2);
}