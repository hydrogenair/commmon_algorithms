#include <stdio.h>
int str_char(const char *s,int c){
    int i=0;
    if(*s==c){
        return 0;
    }
    while (*s++){
        i++;
        if(*s==c){
            return i; 
        }
    }
   return -1;
}

int main() {
    char s[128] ;
    char c ;
    printf("Ҫ�������ַ��ǣ�");
    scanf("%c", &c);
    printf("�������ַ���:");
    scanf("%s",s);
    
    printf("%d", str_char(s, c));
}