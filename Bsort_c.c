#include <stdio.h>
#define NUMBER 5
int[] bsort(int[] origin,int n){
    int temp= origin[0];
    for(int i =1; i<n; i++){
        for(int j =0; j<n-i ; j++){
          if(origin[j]>origin[j+1]){
            temp=origin[j];
            origin[j]=origin[j+1];
            origin[j+1]=temp;
          }  

    }
}