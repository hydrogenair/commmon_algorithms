#include<stdio.h>
void swap(int* px, int*py) {
    int temp = *px;
    *px = *py;
    *py = temp;
}



void  sort3(int*n1, int*n2, int*n3) {
    if (*n1 > *n2) {
        swap(n1, n2);
    }
    if (*n1 > * n3) {
        swap(n1, n3);
    }
    if (*n2 > * n3) {
        swap(n2, n3);
    }
}
