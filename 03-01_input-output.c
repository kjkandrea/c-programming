#include <stdio.h>

int main()
{
    char leftName[16];
    char rightName[16];

    printf("이름을 입력하세요: ");
    scanf("%s", leftName);
    printf(
        "%s은 영혼과 육체의 이원성에 대해 아무것도 모르고 혐오감이 무엇인지도 모른다\n",
        leftName);

    printf("이름을 입력하세요: ");
    scanf("%s", rightName);
    printf(
        "그래서 %s는 그의 곁에 있으면 기분이 좋고 편안했던 것이다.\n",
        rightName);

    return 0;
};