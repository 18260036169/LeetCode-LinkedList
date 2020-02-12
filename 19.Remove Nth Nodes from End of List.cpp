class Solution1 {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode *fast = head, *slow = head;
        // 先让fast指针走n个单位
        for ( int i = 0; i < n; ++i )
            fast = fast->next;
        // 题目中保证了N一定有效，所以无须担心我们的fast会出现先循环过了N步后就出现了fast不存在的情况
        /* 当fast走到了尽头，成为了倒数第一，就说明此时的N为链表的总长度，也就是说倒数第N个元素也就是链表的第一个元素，
        于是我们只需要返回第一个链表结点之后的部分就可以了(这里并没有设置dummyHead，因此head就是第一个结点) */
        if ( !fast )
            return head->next;
		
		    // 模版：while ( ... )
        while ( fast->next ){
            fast = fast->next;
            slow = slow->next;
        }
        // 删除操作一笔带过
        slow->next = slow->next->next;

        return head;
    }
};

// 这种方式在循环中就处理了fast是否合法
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode *fast = head, *slow = head;
        for ( int i = 0; i < n; ++i ) {
        	// 如果fast下一步不会走出街区，就继续走 
            if ( fast->next )
                fast = fast->next;
            // 一旦要走出链表了
            else 
                return head->next;
        }
        
        while ( fast->next ){
            fast = fast->next;
            slow = slow->next;
        }
        slow->next = slow->next->next;

        return head;
    }
};
