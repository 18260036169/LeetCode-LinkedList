class Solution {
public:
    ListNode* reverseList(ListNode* head) {
    // 模板：使用pre和cur两个指针，有头结点/无头结点
    	ListNode *pre = nullptr, *cur = head;
        
        // 模板：while ( ... )
        while ( cur ) {
        // 模板：给下一次要去干活的房子涂上一个标记
            ListNode *temp = cur->next;
            cur->next = pre;
            pre = cur;
            cur = temp;
        }
        
        return pre;
    }
};
