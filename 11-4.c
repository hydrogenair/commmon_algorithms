#include <stdio.h>
void put_string(const char *s){//放第一个
    while(*s++){
        putchar(*s);//放下一个
    }
}
int main() {
    char s[123] ;
    printf("请输入字符串:");
    scanf("%s",s);
    put_string(s);
}