#include <stdio.h>
#include <string.h>
#define num 128
void swap(char *a, char *b){
    char temp;
    temp=*a;
    *a=*b;
    *b=temp;

}

    
// // void rev_string(char s[][128],int n){
//     //先内部自我交换
   
    
//     char m[128];
//     int i=0;
//     for(int j=0;j<(n/2);j++){ 
//         int len=strlen(s[i]);
//         for(i=0;i<(len/2);i++){
//             swap(&s[j][i],&s[j][len-i-1]);
//         }
        
//         strcpy(m,s[i]);
//         strcpy(s[i],s[n-i-1]);
//         strcpy(s[n-i-1],m);
//         //外部交换完成
//         }
//         i=0;
//         for(int m=0;m<n;m++){ 
//         putchar('"');
//         int len2=strlen(s[m]);
//         while(s[m][i]){
//             putchar(s[m][i]);
//             i++;
//         }
//         putchar('"');
//         putchar(',');
//     }
// }
void rev_string(char s[][128], int n) {
    int i, j;
    for (i = 0; i < n; i++) {
        int j = 0;
        int g = strlen(s[i]);
        printf("s[%d]=\"", i);
        while (s[i][j])
        {
            
            putchar(s[i][(g - (j++) - 1)]);
        }puts("\"");
    }
}

int main(){
    int n;
    printf("将字符串逆向显示的个数:");
    scanf("%d", &n);
    char s[][128] = { "asdg","abc","cba","gfdaa" };
    rev_string(s,n);
}