#include <stdio.h>
#include <stdlib.h>
typedef struct Link{
    int num;
    struct Link next;
}link;
//����ѭ����
link* initlink(int size){
    int i=0;
    link* p;
    link* temp=(link*)malloc(sizeof(link));
    temp->next=1;
    temp->num=NULL;
    
    p=temp;

    for(i=1;i<size;i++){
        link*a =(link*)malloc(sizeof(link));
        a->next=NULL;
        a->num=i;

        temp->next=a;
        temp=a;
    }
    temp->next=p;
    return p;
}
void find(link* head,int m ){
    //1��ʼ��ֻ�з���p->next==pʱ��
   //˵��pʤ��
    link* p=head;
    link* tail=NULL;
    while(p->next!=p){
        for(int i=1;i<=m;i++;){
            //�ҵ�m
            //tail����ǰһ���˵�λ��
            tail=p;
            p=p->next;
        }
        //��p����
        tail->next=p->next;
        free(p);
        p=tail->next;
    }
    printf("%d\n",p->num);
}   
