#include <stdio.h>
int test(char* p1,char* p2){
    char* a=p1;
    char* b=p2;
    int i=0;
    int ans=1;
    while(*a!=NULL){
        if(*a==1&&*b==0){
            i+=1;
        }  
        *a++;  
    }
    if(i==0){
        return 0;
    }
    
    for(int j=0;j<i;j++){
        ans=2*ans;
    }
    return ans;
}