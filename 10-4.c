#include <stdio.h>
void set_idx(int *v, int n){
    for(int i=0;i<n;i++){
        v[i]=i;//*(v+i)=i;
    }
}
int main() {
    int i;
    int x[number];
    set_idx(x, number);
    for (i = 0; i < number; i++) {
        printf("x[%d]=%d", i,x[i] );
            putchar('\n');
    }
    


}