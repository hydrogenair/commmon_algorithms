#include <stdio.h>
 void str_copy(char* d,const char* s){
     while(*d++=*s++)//
     ;
}
// char* str_copy(char* d, const char* s)
// {
//     char* t = d;

//     while (*d++ = *s++)
//         ;
//     return t;
// }
int main(){
    char str[128]="ABC";
    char tem[128];

    scanf("%s",tem);
    printf("tem= %s",str_copy(str,tem));
}