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
    //�ߵľ���
	int loop=min(row,col)/2;
	int remind=min(row,col)%2;	
    
    //0��ʣ�� 1��ʣ�� 
	int startx=0;
    int starty=0;
    int i=startx;
    int j=starty;
    int offset=1;
    int count=0;
	while(loop--){
		
		//���Ϸ�������
		for(j=starty;j<col-offset;j++){	//i=0
            ans[count++]=matrix[i][j];
		}
		
		//���ҷ����ϵ���
		for(i=startx;i<row-offset;i++){	//j=col-offset
			ans[count++]=matrix[i][j];
		}
		
		//���´����� 
		for(;j>starty;j--){	//i=row-offset
			ans[count++]=matrix[i][j];
		}
		
		//������µ���
		for(;i>startx;i--){	//j=starty
			ans[count++]=matrix[i][j];
		} 
		
		//һȦ��ӡ���
		startx++;starty++;offset++;i=startx;j=starty; 
	}
	
	//�ж��Ƿ���ʣ��
	if(remind==1){	//��ʣ�� 
		if(row<col){	//���ʣ��һ�� 
			for(j=starty;j<col-offset+1;j++){
				ans[count++]=matrix[i][j];
			}
		}else{			//���ʣ��һ�� 
			for(i=startx;i<row-offset+1;i++){
				ans[count++]=matrix[i][j];
			}
		}
	}

    return ans;
}





