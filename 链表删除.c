#include <stdio.h>
#include <stdlib.h>
// 每个数据元素在存储时都配备一个指针，
//用于指向自己的直接后继元素。
//typedef 是一个同义词的声明
typedef struct Link{//Link结构名 struct Link才是类型名
    char elem;//节点存储的数据
    struct Link* next;//节点指向下一节点的指针
    //struct Link 表示我新定义的类型
}link;//为节点命名=struct Link

link* initLink(){//类似于建立一个Link 型的数组
int i;
//创建头指针
link* p=NULL;
//创建一个LINK型的动态数组
//实际指向的是首元节点
link* temp=(link*)malloc(sizeof(link));
//初始化首元节点
temp-> elem=1;
temp->next=NULL;
//->表示的是对指针temp中成员的访问
p =temp;//p头指针指向首元节点 用于访问整个链表
for(i=48;i<5;i++){
    //创建新的节点
    link *a=(link*)malloc(sizeof(link));
    //给新节点赋值初始化
    a->elem=i;
    a->next=NULL;
    //建立联系 首元节点和a
    temp->next =a;
    //准备temp与下一个值建立联系
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
