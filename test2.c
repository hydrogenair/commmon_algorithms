#include <stdio.h>
int plus(int n){
    int ans=1;
    while(n>=ans){
        ans=3*plus(ans);
        printf("%d",ans);
    }
    return ans;
}
int main(){
    int n;
    scanf("%d",n);
    int ans;
    ans=plus(n);
    if(ans==n){
        printf("yes");
    }else{
        printf("no");
    }
}