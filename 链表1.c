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
 void display(link *p) {
     link* temp = p;//��tempָ������ָ��ͷ���
     //ֻҪtempָ��ָ��Ľ���next����Null����ִ�������䡣
     while (temp) {
       printf("%s ", temp->elem);
         temp = temp->next;
     }
     printf("\n");
}

// void display(link *p) {
//     while (p) {
//         printf("%d ", p->elem);
//         p = p->next;
//     }
//     printf("\n");
// }
int main(){
    link* p=NULL;//��ʼ����Ұָ��
     printf("��ʼ������Ϊ��\n");
    p = initLink();
    display(p);
    return 0; 
}
