#include <stdio.h>
void adjust_point (int *n){
    if(*n<0){
        *n=0;
    }else if(*n>100){
        *n=100;
    }
}
int main() {
    int x;
    printf("请输入一个数：");
    scanf("%d", &x);
    adjust_point(&x);
    printf("修改后的值是%d",x);
}