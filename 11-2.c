#include <stdio.h>
#define NULL 0
void scan(char* p[]){

}
int length(char **p){
    int i=0;
    while(p[i]){
        //p[i]是一个首个字符的指针
        printf("%d\n",i);
        i++;
        printf("%d\n",i);
     }
     printf ("%d\n",i);
     return i-1;
 }
 int main(){
     char **p={"123","12","124"};
     int i=0;
     int len ;
     len = length(p);
    //  printf("%d\n ",len);
     for (i=0;i<len;i++){
        printf ("p[%d]=\"%s\"\n",i,*p);
     }
     return 0;
 }

// int main(void)
// {
//     int  i;
//     char a[][128] = { "LISP", "C", "Ada" };
//     char* p[] = { "PAUL", "X", "MAC","SKTNB"};//用 sizeof(a) / sizeof(a[0])表示数组元素个数
//     for (i = 0; i <( sizeof(a) / sizeof(a[0]));i++)
//         printf("a[%d] = \"%s\"\n", i, a[i]);

//     for (i = 0; i < (sizeof(p) / sizeof(p[0])); i++)
//         printf("p[%d] = \"%s\"\n", i, p[i]);

//     return 0;
// }