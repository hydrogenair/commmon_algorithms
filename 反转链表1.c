//��ת����
//������ÿ���ڵ�����ȡ����ͷ�嵽������
//��Ϊԭ����ķ�ת��
//��Ϊ�ı��˵�ǰ�ڵ�� next ָ��
//�����ȱ��� next ��ַ��
struct ListNode* reverseList(struct ListNode* head){
  struct ListNode* newhead =NULL;//������ı�ͷ
  //�ɲ�����ָ��
  struct ListNode* temp =head;
//temp����ĳ��ָ���λ��
  while(temp){
    //temp �����λ��
    struct ListNode* next = temp->next;
        //��tempͷ�嵽������
        temp->next = newhead;
        newhead = temp;
        temp = next;
  }
  return newhead;

}