#include <stdio.h>
#include <stdlib.h>
//��������
typedef struct Link{
    int elem;
    struct Link* next;
}link;

link* initlink(){
    int i;
    link* p;//ͷָ��
    link* temp;//βָ�룬�м����


    temp=(link*)malloc(sizeof(link));
    temp->next=NULL;
    p=temp;
    int len = 0;//��������ĳ���
	scanf("%d", &len);

    for(i=0;i<len;i++){
        link* a=(link*)malloc(sizeof(link));
		scanf("%d", &(a->elem));
        a->next=NULL;

        temp->next=a;
        temp=a;
        }
    return p->next;

}

void display(link *p) {
     link* temp = p;//��tempָ������ָ��ͷ���
     //ֻҪtempָ��ָ��Ľ���next����Null����ִ�������䡣
     while (temp) {
       printf("%d ", temp->elem);
         temp = temp->next;
     }
     printf("\n");
}
link* frontcreate(link* p){
    int data;
    link* head =p;
    scanf("%d",&data);
    int i=1;
    link* pnew=(link*)malloc(sizeof(link));
    scanf("%d",&pnew->elem);
    if(data==1){
        pnew->next=p;
        return pnew;
        
    }else{
        while (p)
        {
            if(data==i){
                pnew->next=p->next;
                head->next=pnew;
                i++;
                return head;
            }
            p=p->next;
        }
        
    }

}


int main()
{
	link* List = initlink();
    display(List);
	display(frontcreate(List));//��ͷ��㴫�룬��ӡ������
	return 0;
}
