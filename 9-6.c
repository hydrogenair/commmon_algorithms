#include <stdio.h>
#define num 128
//��ָ��
int str_char(const char s[], int c){
    for(int i=0;i<num;i++){
        if(*s++ - '0'==c){
            return i;
        }
       
    } return -1;
}
int main(){
    int c;
    char x[num];
    printf("�������ַ���:");
    scanf("%s", x);
    scanf("%d",&c);

    putchar('\n');
    printf("%d", str_char(x, c));
}