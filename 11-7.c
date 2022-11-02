#include <stdio.h>
#include <ctype.h>
void str_toupper(char* s){
    while (*s){
        *s=toupper(*s);
        *s++;
    }

}
int main(void)
{
    char str[128];

    printf("ÇëÊäÈë×Ö·û´®£º");
    scanf("%s", str);

    str_toupper(str);
    printf("´óĞ´×ÖÄ¸£º%s\n", str);
 return 0;
}