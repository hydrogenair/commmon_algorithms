#include <stdio.h>
void arr_sort(int *p,int n)
{
    int step = 0;//步长
    int temp = 0;//用来保存第二段数据
    int i,j;
 
    for(step = n / 2;step > 0;step /= 2)
    {
        for(i = step;i < n;i++)//分组
        {
            temp = p[i];//待插入的数
            for(j = i - step;j >= 0 && p[j] > temp;j -= step)//j>0防超数组
            {
                p[j + step] = p[j];
                //当满足条件时第一次j+step = i;后面的j+step = 上一次j的值
            }
            p[j + step] = temp;
        }
    }
}

