class Solution {
public:
    ListNode* swapPairs(ListNode* head) {
        if ( head == nullptr || head->next == nullptr )
            return head;
        
        ListNode *pre = head;
        ListNode *cur = head->next;
        ListNode *temp = nullptr;
        
        //  单独拎出第一种情况写一段代码
        pre->next = cur->next;
        cur->next = pre;
        // head变化一下
        head = cur;
        
        // 并不会出现cur = pre->next不存在的情况，因为这种情况只存在于链表中仅有两个元素，而这个元素已经被我们上面的判断过滤掉了
        pre = head->next;
        cur = pre->next;
        
        // 共性部分的代码
        while ( cur && cur->next ) {
            temp = cur->next->next;
            pre->next = cur->next;
            cur->next = temp;
            pre->next->next = cur;
        }
        
        return head;
    }
};
