#include <stdio.h>
void put_string(const char *s){//�ŵ�һ��
    while(*s++){
        putchar(*s);//����һ��
    }
}
int main() {
    char s[123] ;
    printf("�������ַ���:");
    scanf("%s",s);
    put_string(s);
}