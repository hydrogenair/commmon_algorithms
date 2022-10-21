// 每次从待排序列中选出一个最小值，然后放在序列的起始位置，直到全部待排数据排完即可。
// 实际上，我们可以一趟选出两个值，一个最大值一个最小值，然后将其放在序列开头和末尾，这样可以使选择排序的效率快一倍。
#include <stdio.h>
void swap(int a,int b){
    int temp=a;
    a=b;
    b=temp;
}
void Selectsort (int[] arr,int n){
    //找出每组最大和最小 存下标 放在开头结尾
    //只用遍历数组长度-遍历次数*2
    int mini=begin;
    int maxi=end;
    int begin=0;
    int end=n-1;
    while(end>begin){
        for(int i=begin;i>=begin&&i<=end;i++ ){
        if(arr[i]>arr[max]){
            maxi=i;
        }elseif(arr[i]<begin){
            maxi=i;
        }
        }
        //已知最大数和最小数的序号
        //防止begin是最大数时被换走 导致找不到最大数！
        if(arr[begin]==maxi){
            maxi=mini;
        }

        swap(arr[begin],arr[mini]);
        swap(arr[maxi],arr[end]);

        begin+=1;
        end-=1;
    }

    
    




}