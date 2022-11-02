#include <stdio.h>
int str_chnum(const char*s ,int c){
    int i =0;
    while(*s!=NULL){
        if(*s==c){
        i++;
    }
        *s++;
    }
    return i;

}
int main() {
    char s[123] ;
    char c ;
    printf("要计数的字符是：");
    scanf("%c", &c);
    printf("请输入字符串:");
    scanf("%s",s);
    
    printf("%d", str_chnum(s, c));
}