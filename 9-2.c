#include <stdio.h>
int main(){
    char s[]="ABC";
     for(int n;n<(int)sizeof(s);n++){
        s[n]=' ';
    }
   //*s=0;//������˳�ʼ��ֵ����������������ԣ�����ָ�����
    printf("%s",s);
}