#include <stdio.h>
#define NUM 5
int main(){
    int i,j;
    char s[NUM][128];

    for(i =0;i<NUM; i++){
        printf("s[%d]:",i);
        scanf("%s",s[i]);
        if (/* condition */strcmp(s[i],"$$$$$"))
        {
           break; /* code */
        }
            
    }
    for(j=0;j<i;j++){
        printf("s[%d] = \"%s\"\n",i, s[i]);
        return 0;
    }
}