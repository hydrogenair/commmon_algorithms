#include <stdio.h>
#include <stdlib.h>
typedef int ElementType;
//遍历链表
typedef struct Link{
    ElementType elem;
    struct Link* next;
}link;

link* initlink(){
    int i;
    link* p;//头指针
    link* temp;//尾指针，中间变量


    temp=(link*)malloc(sizeof(link));
    if (temp == NULL)
		{
			printf("新结点创建失败\n");//malloc函数开辟空间失败
			exit(-1);
		}
    temp->next=NULL;
    p=temp;
    int len = 0;//定义链表的长度
	printf("请输入待存放结点个数:>");
	scanf("%d", &len);

    for(i=0;i<len;i++){
        link* a=(link*)malloc(sizeof(link));
        if (a == NULL)
		{
			printf("新结点创建失败\n");//malloc函数开辟空间失败
			exit(-1);
		}
        printf("请输入第%d个数:>", i + 1);
		scanf("%d", &(a->elem));
        a->next=NULL;

        temp->next=a;
        temp=a;
        //a的next是在下一次temp->next赋值的
        }
    return p->next;

}

void goList(link* p) {
    link* temp =p;
    if(temp==NULL){
        printf("链表为空");
    }
    while(temp){
        printf("%d",p->elem);
        temp=temp->next;
    }
    printf("\n");
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
int main()
{
	link* List = initlink();
    display(List);//链表创建好后，用List接收头结点位置
	goList(List);//将头结点传入，打印该链表
	return 0;
}