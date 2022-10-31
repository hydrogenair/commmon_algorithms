#include <stdio.h>
#define num 128
void swap(char *a, char *b){
    char temp;
    temp=*a;
    *a=*b;
    *b=temp;

}
void rev_string(char s[]){
    int len=strlen(s);
    for(int i=0;i<(len/2);i++){
        swap(&s[i],&s[len-i-1]);
    }
    int j=0;
     while(s[j]){
        putchar(s[j++]);
     }
}
int main (){
    char x[num];
    printf("ÇëÊäÈë×Ö·û´®:");
    scanf("%s", x);
    printf("%s", x);
    putchar('\n');
    rev_string(x);
}