#include <stdio.h>


int is_prime(int n);

int main(void) {
    printf("%d\n", is_prime(7));  // 1
    printf("%d\n", is_prime(8));  // 0
    return 0;
}


int is_prime(int n) {
    if (n < 2) return 0;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return 0;
    }
    return 1;
}