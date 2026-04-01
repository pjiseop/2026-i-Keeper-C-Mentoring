#include <stdio.h>
int main() {
    int a;
    scanf("%d", &a);
    if (a >= 90) {
        printf("당신의 시험 등급은 A 입니다.");
    } 
    else if (a >= 80) {
        printf("당신의 시험 등급은 B 입니다.");
    }
    else if (a >= 70) {
        printf("당신의 시험 등급은 C 입니다.");
    }
    else if (a >= 60) {
        printf("당신의 시험 등급은 D 입니다.");
    }
    else if (a >= 50) {
        printf("당신의 시험 등급은 E 입니다.");
    }
    else {
        printf("당신의 시험 등급은 F 입니다.");
    }
   return 0;
}