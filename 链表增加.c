#include <stdio.h>
#include <stdlib.h>
typedef int ElementType;
//��������
typedef struct Link{
    ElementType elem;
    struct Link* next;
}link;

link* initlink(){
    int i;
    link* p;//ͷָ��
    link* temp;//βָ�룬�м����


    temp=(link*)malloc(sizeof(link));
    if (temp == NULL)
		{
			printf("�½�㴴��ʧ��\n");//malloc�������ٿռ�ʧ��
			exit(-1);
		}
    temp->next=NULL;
    p=temp;
    int len = 0;//��������ĳ���
	printf("���������Ž�����:>");
	scanf("%d", &len);

    for(i=0;i<len;i++){
        link* a=(link*)malloc(sizeof(link));
        if (a == NULL)
		{
			printf("�½�㴴��ʧ��\n");//malloc�������ٿռ�ʧ��
			exit(-1);
		}
        printf("�������%d����:>", i + 1);
		scanf("%d", &(a->elem));
        a->next=NULL;

        temp->next=a;
        temp=a;
        //a��next������һ��temp->next��ֵ��
        }
    return p->next;

}

void goList(link* p) {
    link* temp =p;
    if(temp==NULL){
        printf("����Ϊ��");
    }
    while(temp){
        printf("%d",p->elem);
        temp=temp->next;
    }
    printf("\n");
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
int main()
{
	link* List = initlink();
    display(List);//�������ú���List����ͷ���λ��
	goList(List);//��ͷ��㴫�룬��ӡ������
	return 0;
}