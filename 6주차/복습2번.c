#include <stdio.h>

int main() {
    int n; 
    int A = 0;
    int B = 0;
    char string[1000];

    scanf("%d", &n);
    printf("%d\n", n);

    scanf("%s", string);

    for(int i = 0; i < n; i++) {
        if(string[i] == 'A') {
            A++;
        }
        else if(string[i] == 'b') {
            B++;
        }
    }
    if(A > B) {
        printf("A");
    }
    else if(A < B) {
        printf("B");
    }
    else {
        printf("0");
    }
    return 0;
}