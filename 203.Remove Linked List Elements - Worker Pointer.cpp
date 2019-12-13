class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
        // 模板：工人指针从街区门房开始运动 
        ListNode *dummyHead = new ListNode (-1);
        dummyHead->next = head;
        ListNode *cur = dummyHead;
        
        // 模板：while ( ... ) 
        while ( cur->next ) {
            if ( cur->next->val == val ) {
                cur->next = cur->next->next;
            }
            else
                cur = cur->next;
        }
        
        return dummyHead->next;
    }
};
