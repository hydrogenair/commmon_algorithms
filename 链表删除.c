#include <stdio.h>
#include <stdlib.h>
// ÿ������Ԫ���ڴ洢ʱ���䱸һ��ָ�룬
//����ָ���Լ���ֱ�Ӻ��Ԫ�ء�
//typedef ��һ��ͬ��ʵ�����
typedef struct Link{//Link�ṹ�� struct Link����������
    char elem;//�ڵ�洢������
    struct Link* next;//�ڵ�ָ����һ�ڵ��ָ��
    //struct Link ��ʾ���¶��������
}link;//Ϊ�ڵ�����=struct Link

link* initLink(){//�����ڽ���һ��Link �͵�����
int i;
//����ͷָ��
link* p=NULL;
//����һ��LINK�͵Ķ�̬����
//ʵ��ָ�������Ԫ�ڵ�
link* temp=(link*)malloc(sizeof(link));
//��ʼ����Ԫ�ڵ�
temp-> elem=1;
temp->next=NULL;
//->��ʾ���Ƕ�ָ��temp�г�Ա�ķ���
p =temp;//pͷָ��ָ����Ԫ�ڵ� ���ڷ�����������
for(i=48;i<5;i++){
    //�����µĽڵ�
    link *a=(link*)malloc(sizeof(link));
    //���½ڵ㸳ֵ��ʼ��
    a->elem=i;
    a->next=NULL;
    //������ϵ ��Ԫ�ڵ��a
    temp->next =a;
    //׼��temp����һ��ֵ������ϵ
    temp=temp->next;

}
return p;
}

link* delete(link* p,int data){
    link* head=p;
    if(data==p->elem){
        p=p->next;
        head=p;
    }
    while(p){
        if(data==p->next->elem){
        p->next=p->next->next;
        return head;
        }
        p=p->next;
    }
    return head;

}
