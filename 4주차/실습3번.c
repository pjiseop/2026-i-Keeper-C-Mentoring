#include <stdio.h>
int main()
{
    char string[100];
    int arr[10] = {0,};

    scanf("%s", string);

    for(int i = 0; i < 100; i++) {
        if (string[i] == '\0') {
            break;
        }
       arr[string[i] - 48]++;
    }

    printf("\n");

    for(int i = 0; i < 10; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}