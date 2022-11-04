//反转链表
//将链表每个节点依次取下来头插到新链表，
//即为原链表的反转；
//因为改变了当前节点的 next 指向，
//必须先保存 next 地址。
struct ListNode* reverseList(struct ListNode* head){
  struct ListNode* newhead =NULL;//新链表的表头
  //可操作的指针
  struct ListNode* temp =head;
//temp代替某个指针的位置
  while(temp){
    //temp 在这个位置
    struct ListNode* next = temp->next;
        //将temp头插到新链表
        temp->next = newhead;
        newhead = temp;
        temp = next;
  }
  return newhead;

}