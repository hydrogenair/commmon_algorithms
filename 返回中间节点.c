#include <stdio.h>
typedef struct Link{
    int num;
    struct Link* next; 
}link;

link* initlink(){
    int i;
    link* p=NULL;
    link* temp=(link*)malloc(sizeof(link));
    temp->num=NULL;
    temp->next=NULL;
    if (temp == NULL)
		{
			printf("�½�㴴��ʧ��\n");//malloc�������ٿռ�ʧ��
			exit(-1);
		}
    p=temp;

    for(i=0,i<5;i++){
        link* a= (link*)malloc(sizeof(link));
        if(temp==NULL){
            printf("�½ڵ㴴��ʧ��\n");
            exit(-1);
        }
        a->num=i;
        a->next=NULL;
        temp->next =a;
        temp=a;
    }
    return p;
    
}

//2.������м���

//����һ������ͷ��� head �ķǿյ���������������м��㡣

//����������м��㣬�򷵻صڶ����м��㡣

int getlen(link* head){
    int len=0;
    link*p=haed;
    while(p){
        len++;
    }
    return len;
}

link* middlepointer(linl* head){
    int len=getlen(head)/2;
    link*p =head;
    while(len>0){
        p=p->next;
        len--;
       }
    retrun p;
   
}