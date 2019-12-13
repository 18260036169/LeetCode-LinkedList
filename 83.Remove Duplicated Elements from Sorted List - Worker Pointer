class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        if ( !head || !head->next )
            return head;
        
        // 模板：工人指针附魔进入链表街区头部
        ListNode *cur = head;
        while ( cur && cur->next ) {
            if ( cur->val == cur->next->val ) 
                cur->next = cur->next->next;
            else
                cur = cur->next;
        }
        
        return head;
    }
};
