#include <stdio.h>
#include <stdlib.h>

typedef struct Link{
    char num;
    struct Link* next;
}link;

link* initlink(){
    int i;
    //创建头指针
    link *p=NULL;
    //创建头节点
    link* temp=(link*)malloc(sizeof(link));
    //初始化头节点
    temp->num=NULL;
    temp->next=NULL;
    //头指针指向头节点
    p=temp;
    //赋值给其他节点
    for(i='0';i<='5';i++){
        link* a=(link*)malloc(sizeof(link));
        //先初始化
        a->num=i;
        a->next=NULL;
        //在给值
        temp->next=a;
        temp=a;
        //在第一轮的时候temp代表头节点
        //之后就就顺移 作为一个中间量
    }
    return p->next;
}

void  display(link* p){
    while(p){
        //头节点为空 跳过进入首元节点
        printf("%c",p->num);
        p=p->next;
    }
    printf("\n");
}

int main() {
    // int size;
    link*p = NULL;
    // scanf("%d",&size);
    printf("初始化链表为：\n");
    p = initlink();
    display(p);
    return 0;
}