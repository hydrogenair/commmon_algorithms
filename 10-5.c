#include <stdio.h>
void arr_set(int v[],int n,int val){
    for(int i=0; i<n ;i++){
        v[i]=val;
    }
}
int main(){
    int i=0;
    int a[]={1,2,3,4,5};
    arr_set(&a[2],2,99);

    for(i=0; i<5; i++){
        printf("a[%d]=%d\n",i,a[i]);
    }
    return 0;
}