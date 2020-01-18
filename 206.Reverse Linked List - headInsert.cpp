class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        // 模板：建立起一个头结点
        ListNode *dummyHead = new ListNode (-1);
        ListNode *cur = head;
        
        // 模板：while( ... ) ...具体内容由这个工人指针到底是越过街区一步还是正好到达街区最后一幢房子
        while ( cur ) {
            ListNode *temp = cur->next;
            cur->next = dummyHead->next;
            dummyHead->next = cur;
            
            cur = temp;
        }
        
        return dummyHead->next;
    }
};
