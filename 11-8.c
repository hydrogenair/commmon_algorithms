#include <stdio.h>
void del_digit(char *str){
    while(*s){
        if(*s-'0'<0||*s-'0'>9){
            putchar(*s);
        }
        *s++;
    }
}
int main() {
    char c[128];
    printf("ÇëÊäÈë×Ö·û´®£º");
    scanf("%s", c);
    int m = strtoi(c);
    printf("%d",m);
}