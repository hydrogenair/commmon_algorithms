#include <stdio.h>
#include <stdlib.h>

typedef struct Link{
    char num;
    struct Link* next;
}link;

link* initlink(){
    int i;
    //����ͷָ��
    link *p=NULL;
    //����ͷ�ڵ�
    link* temp=(link*)malloc(sizeof(link));
    //��ʼ��ͷ�ڵ�
    temp->num=NULL;
    temp->next=NULL;
    //ͷָ��ָ��ͷ�ڵ�
    p=temp;
    //��ֵ�������ڵ�
    for(i='0';i<='5';i++){
        link* a=(link*)malloc(sizeof(link));
        //�ȳ�ʼ��
        a->num=i;
        a->next=NULL;
        //�ڸ�ֵ
        temp->next=a;
        temp=a;
        //�ڵ�һ�ֵ�ʱ��temp����ͷ�ڵ�
        //֮��;�˳�� ��Ϊһ���м���
    }
    return p->next;
}

void  display(link* p){
    while(p){
        //ͷ�ڵ�Ϊ�� ����������Ԫ�ڵ�
        printf("%c",p->num);
        p=p->next;
    }
    printf("\n");
}

int main() {
    // int size;
    link*p = NULL;
    // scanf("%d",&size);
    printf("��ʼ������Ϊ��\n");
    p = initlink();
    display(p);
    return 0;
}