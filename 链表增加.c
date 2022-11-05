#include <stdio.h>
#include <stdlib.h>
//遍历链表
typedef struct Link{
    int elem;
    struct Link* next;
}link;

link* initlink(){
    int i;
    link* p;//头指针
    link* temp;//尾指针，中间变量


    temp=(link*)malloc(sizeof(link));
    temp->next=NULL;
    p=temp;
    int len = 0;//定义链表的长度
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
     link* temp = p;//将temp指针重新指向头结点
     //只要temp指针指向的结点的next不是Null，就执行输出语句。
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
	display(frontcreate(List));//将头结点传入，打印该链表
	return 0;
}
