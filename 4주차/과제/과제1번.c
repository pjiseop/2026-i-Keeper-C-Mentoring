#include <stdio.h>
int main()
{
    
    char string[100];
    
    scanf("%[^\n]s", string);
    
    for(int i = 0; i < 100; i++) {
    
        if(string[i] == '\0') {
            break;
        }
        if(string[i] == 65 || string[i] == 69 || string[i] == 73 || string[i] == 79 || string[i] == 85 || string[i] == 97 || string[i] == 101 || string[i] == 105 || string[i] == 111 || string[i] == 117) {
            printf("."); }
       else {
             printf("%c", string[i]);
    }
    
     }
     printf("\n"); 
}
    
    
    
