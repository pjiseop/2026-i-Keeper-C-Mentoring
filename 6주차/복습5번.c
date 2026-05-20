#include <stdio.h>

int main() {
    int n;
    int s;
    int res;
    char string[1000];

    scanf("%d", &n);

    for(int i = 0; i < n; i++) {

        scanf("%d %s", &s, string);

        for(int j = 0; j < s / 2; j++) {

            if(string[j] != string[s - j - 1]) {
                res = 0;
                break;
            }
        }

        if(res == 1) {
            printf("YES\n");
        }
        else {
            printf("NO\n");
        }
    }

    return 0;
}