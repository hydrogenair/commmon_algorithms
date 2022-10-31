#include <stdio.h>
#define num 128
void del_digit(char s[]){
    int i=0;
    while(s[i]){
        if(s[i]-'0'<0||s[i]-'0'>9){
            putchar(s[i]);
        }
        i++;
    }
}
int main(){
    char x[num];
    printf("ÇëÊäÈë×Ö·û´®:");
    scanf("%s", x);
    printf("%s", x);
    putchar('\n');
    del_digit(x);
}