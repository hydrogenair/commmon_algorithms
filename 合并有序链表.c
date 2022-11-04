//合并两个有序链表
struct ListNode* mergeTwoLists(struct ListNode* l1, struct ListNode* l2){
    if(li==NULL){
        return l2;
    }
    if(l2==NULL){
        return l1;
    }

    struct ListNode* p1=l1;
    struct ListNode* p2=l2;
    struct ListNode* head//=NULL;//保存初始地址
    struct ListNode* r2=NULL;//r2中间变量

    while(p1!=NULL&&p2!=NULL){
        if(p1->val<=p2->num){
            if(r2==NULL){//头指针
                head=r2=p1;//保存第一个元素位置
            }else{
                r2->next=p1;
                r2=p1;
            }
            p1=p1->next;
        }else{
            if(r2==NULL){
                head=r2=p2;
            }else{
                r2->next=p2;
                r2=p2;
            }
            p2=p2->next;
        }
    }
     //长度不一
      if(p1==NULL){
            r2->next=p2;//剩余均为l2
        }else{
            r2->next=p1;
        }
        return head;

}