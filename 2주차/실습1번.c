#include <stdio.h>
int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    if (a > b) {
        printf("가장 큰 수는 %d 입니다", a);
    }
    else {
        printf("가장 큰 수는 %d 입니다.", b);
    }
    return 0;
}