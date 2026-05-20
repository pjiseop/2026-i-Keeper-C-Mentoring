#include <stdio.h>

int main() {
    int t;
    int f = 300;
    int o = 60;
    int s = 30;
    scanf("%d", &t);
    printf("%d분", t / 60);
    if(t % f % o % s == 0) {
        printf("5분 %d번 1분 %d번 30초 %d번", t / f, t % f / o,t % f % o /s);
    }
    else {
        printf("-1");
    }
    return 0;
}