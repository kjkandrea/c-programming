#include <stdio.h>
#define Square(x) ((x) * (x))

int main()
{
    printf("%d\n", Square(2));

    // main 함수의 반환값이 0 인 이유는 실행 성공을 나타내기 위한 관례이다.
    return 0;
}