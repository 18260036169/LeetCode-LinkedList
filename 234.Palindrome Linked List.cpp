class Solution {
public:
    bool isPalindrome(ListNode* head) {
        if ( !head || !head->next )
            return true;
        
        ListNode *slow = head, *fast = head, *pre = nullptr;
        
        // 快慢指针找到链表中点
        while ( fast ) {
            slow = slow->next;
            fast = fast->next ? fast->next->next : fast->next;
        }
        
        // 逆序链表后半部分
        while ( slow ) {
            ListNode *temp = slow->next;
            slow->next = pre;
            pre = slow;
            slow = temp;
        }
        
        // head与pre同步往下走，对整个链表元素进行遍历，比较每一个元素，但凡有任意两个链表元素不想等则return false
        while ( head && pre ) {
            if ( head->val != pre->val )
                return false;
            
            head = head->next;
            pre = pre->next;
        }
        
        return true;
    }
};
