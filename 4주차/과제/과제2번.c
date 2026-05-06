#include <stdio.h>
int main()
{
    char string[100];
    
    scanf("%[^\n]s", string);

    for(int i = 0; i < 100; i++) {
        if(string[i] == '\0') {
            break;
        }
        if(string[i] == ' ') {
        printf(" ");
        continue;
        }
        if(string[i] >= 'A' && string[i] <= 'Z') {
            printf("%c", string[i]+32);
        } if (string[i] >= 'a' && string[i] <= 'z') {
            printf("%c", string[i]-32);
        }
    }
    return 0;
}