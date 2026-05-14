int change(int x) {
    x = x + 10;   
    return x;      
}

int main(void) {
    int x = 5;
    int y = change(x);  
    printf("%d %d\n", x, y);  
}