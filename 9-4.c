#include <stdio.h>
void null_string (char s[]){
    *s='\0';
}
int main() {
    char s[] = "asd";
    null_string(s);
    printf("%s", s);

}