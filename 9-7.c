#include <stdio.h>
#define NUM 128
void put_stringn(const char s[],int n){
    int j=0;
    int m =0;
    for(int i=0; i<n; i++){
           for(int j=0;j<(int)sizeof(s);j++){
              putchar(s[j]);
              m++;
        }
    
    // while(s[j])
    // {
    //     putchar(s[j++]);
    //     m++;
    // }
    //j=0;
    printf("%d\n",m);
    //m=0;
    } 

    
}
int main(){
    int n;
    char s[NUM];
    scanf("%s",s);
    scanf("%d",&n);
    put_stringn(s,n);
}