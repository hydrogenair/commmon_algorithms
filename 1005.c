// #include <stdio.h>
// int main(){
//     int n;
//     int i=0;
//     scanf("%d",&n);
//     int a[n];
//     for(i=0;i<n;i++){
//         scanf("%d",&a[i]);
//     }
//     int b[128];
//     int temp=0;
    
//     while(*a){
//         int flag=0;
//         int *m=b;
//          while(*m){
//            if(temp==*m){
//             flag=1;
//             break;   
//            }
//         }
//         if(n%2==0){
//             temp=n/2;
            
//         }else{
//             temp=(3*n+1)/2;
//         }
//         for(i=0;i<128;i++){
//             b[i]=temp;
//         }
//         if(flag==0){
//             printf("%d",*a);
//         }

//     }

// }
#include <stdio.h>
#include <string.h>
#define N 101
int main()
{
    int n,i,r,j,flag = 0,mark[N];//flag��Ϊ����Կ��������ʽ
    scanf("%d",&n);
    memset(mark,-1,sizeof(mark));//mark�����ʼ��Ϊ-1
    for(i = 0; i < n; i++){
        scanf("%d",&r);
        mark[r] = 0;//�����������±���ʽ��������mark
    }
    for(r = 2; r <= 100; r++){
        j = r;
        if(mark[j] == 0){
            do{
                if(j % 2 == 0){
                    //�����if�����м���j < 100��Ϊ��
                    //��ֹ�����±�Խ��
                    j /= 2;
                    if(j<100){
                       mark[j] = 1;
                    }
                }
                else{
                    j = 3 * j + 1;
                }
            }while(j != 2);
        }
    }
    for(i = 100; i > 1; i--){
        //flag==0ʱΪ��һ��������ݣ���ǰ�治��ӿո�
        //flag==1ʱΪ�ڶ�������������ݣ�ǰ���һ�ո�
        if((mark[i] == 0)&&(flag == 0)){
            printf("%d",i);
            flag = 1;
        }
        else if((mark[i] == 0)&&(flag == 1)){
            printf(" %d",i);
        }
    }
    printf("\n");
    return 0;
}
