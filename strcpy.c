#include <stdio.h>
//复制字符串
void str_copy(char* d,const char* s){
    while(*d++=*s++)
    ;
    //int i =0;
    //while(d[i]=s[i])
    // i++;
    //效率低 每次都要重新找
}