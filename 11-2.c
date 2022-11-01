#include <stdio.h>
// int length (char *p[]){
//     int i =0;
//     while(*p[i]){//p[i]是一个首个字符的指针
//         i++;
//     }
//     return i;
// }
// int main(){
//     int i;
//     char *p[]={"123","12","124"};

//     int len =length(p);
//     for (i=0;i<len;i++){
//         printf ("p[%d]=\"%s\"\n",p[i]);
//     }
//     return 0;
// }

int main(void)
{
    int  i;
    char a[][128] = { "LISP", "C", "Ada" };
    char* p[] = { "PAUL", "X", "MAC","SKTNB"};//用 sizeof(a) / sizeof(a[0])表示数组元素个数
    for (i = 0; i <( sizeof(a) / sizeof(a[0]));i++)
        printf("a[%d] = \"%s\"\n", i, a[i]);

    for (i = 0; i < (sizeof(p) / sizeof(p[0])); i++)
        printf("p[%d] = \"%s\"\n", i, p[i]);

    return 0;
}