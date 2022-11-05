#include <stdio.h>
int min(int a,int b){
    int min(int a,int b){
	return a<b?a:b;
}
}

int* spiralOrder(int** matrix, int matrixSize, int* matrixColSize, int* returnSize){
    
    int* ans=(int*)malloc(sizeof(int)*(matrixSize*(*matrixColSize)));
    *returnSize=(matrixSize*(*matrixColSize));
    
    int row=matrixSize;
    int col=matrixColSize[0];
    //走的距离
	int loop=min(row,col)/2;
	int remind=min(row,col)%2;	
    
    //0无剩余 1有剩余 
	int startx=0;
    int starty=0;
    int i=startx;
    int j=starty;
    int offset=1;
    int count=0;
	while(loop--){
		
		//最上方从左到右
		for(j=starty;j<col-offset;j++){	//i=0
            ans[count++]=matrix[i][j];
		}
		
		//最右方从上到下
		for(i=startx;i<row-offset;i++){	//j=col-offset
			ans[count++]=matrix[i][j];
		}
		
		//最下从左到右 
		for(;j>starty;j--){	//i=row-offset
			ans[count++]=matrix[i][j];
		}
		
		//最左从下到上
		for(;i>startx;i--){	//j=starty
			ans[count++]=matrix[i][j];
		} 
		
		//一圈打印完毕
		startx++;starty++;offset++;i=startx;j=starty; 
	}
	
	//判断是否有剩余
	if(remind==1){	//有剩余 
		if(row<col){	//最后剩下一行 
			for(j=starty;j<col-offset+1;j++){
				ans[count++]=matrix[i][j];
			}
		}else{			//最后剩下一列 
			for(i=startx;i<row-offset+1;i++){
				ans[count++]=matrix[i][j];
			}
		}
	}

    return ans;
}





