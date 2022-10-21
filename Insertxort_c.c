#include <stdio.h>
//void Insertsort(int[] arr, int n){//升序
//     for(int i=0; i<n-1; i++){//一共循环n-1次
//     int end=i;//记录插入的数 下次从end开始到0-end是一群排好的数
//     int temp = arr[end+1];//原因：最初值为零 temp来插
//         while(end){
//             if(temp<int[end]){
//                 temp=int[end];//错插入元素不变 向后移的是数列
//                 end--;
//             }else{
//                 break;
//             }
            
            
//         }
        
//      }
// }
void InsertSort(int* arr, int n)
{
	for (int i = 0; i < n - 1; ++i)
	{
		//记录排好有序序列最后一个元素的下标
		int end = i;
		//待插入的元素
		int tem = arr[end + 1];
		//单趟排
		while (end >= 0)
		{
			//比插入的数大就向后移
			if (tem < arr[end])
			{
				arr[end + 1] = arr[end];
				end--;
			}
			//比插入的数小，跳出循环
			else
			{
				break;
			}
		}
		//tem放到比插入的数小的数的后面
		arr[end  + 1] = tem;
		//代码执行到此位置有两种情况:
		//1.待插入元素找到应插入位置（break跳出循环到此）
		//2.待插入元素比当前有序序列中的所有元素都小（while循环结束后到此）
	}
}


