#include <stdio.h>
int main(){
    char s[]="ABC";
     for(int n;n<(int)sizeof(s);n++){
        s[n]=' ';
    }
   //*s=0;//数组除了初始赋值，其他情况均不可以，但是指针可以
    printf("%s",s);
}