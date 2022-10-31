#include <stdio.h>
#define num 128
void put_string(const char s[]){
    int n=0;
    while (s[n]){
        n++;
    }
    for(;n+1>0;n--){
        putchar(s[n-1]);
    }
}
int main(){
    char x[num];
    printf("ÇëÊäÈë×Ö·û´®:");
    scanf("%s", x);
    printf("%s", x);
    putchar('\n');
    put_string(x);

}