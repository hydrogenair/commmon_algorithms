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
			printf("新结点创建失败\n");//malloc函数开辟空间失败
			exit(-1);
		}
    p=temp;

    for(i=0,i<5;i++){
        link* a= (link*)malloc(sizeof(link));
        if(temp==NULL){
            printf("新节点创建失败\n");
            exit(-1);
        }
        a->num=i;
        a->next=NULL;
        temp->next =a;
        temp=a;
    }
    return p;
    
}

//2.链表的中间结点

//给定一个带有头结点 head 的非空单链表，返回链表的中间结点。

//如果有两个中间结点，则返回第二个中间结点。

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