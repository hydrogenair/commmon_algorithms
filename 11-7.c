#include <stdio.h>
#include <ctype.h>
void str_toupper(char* s){
    while (*s){
        *s=toupper(*s);
        *s++;
    }

}
int main(void)
{
    char str[128];

    printf("�������ַ�����");
    scanf("%s", str);

    str_toupper(str);
    printf("��д��ĸ��%s\n", str);
 return 0;
}