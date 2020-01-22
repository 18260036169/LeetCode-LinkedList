class Solution {
public:
    ListNode* swapPairs(ListNode* head) {
        if ( head == nullptr || head->next == nullptr )
            return head;
        
        ListNode *dummyHead = new ListNode(-1);
        dummyHead->next = head;
        
        ListNode *pre = dummyHead;
        ListNode *cur = head;
        ListNode *temp = nullptr;
        
        // 模板：while(...)循环
        // 交换当然是需要一对元素，单个元素不在考虑范畴
        while ( cur != nullptr && cur->next != nullptr ) {
            temp = cur->next;
            // 画图分析出的交换step
            // 读者可自行分析顺序上是否可以颠倒，画图分析，一目了然
            cur->next = temp->next;
            temp->next = cur;
            pre->next = temp;
            
            // 模板：当对下一轮的pre，cur位置到底处在哪里有疑惑时，想一想pre，cur位置和原来的相对位置相比均应变化2个位置 
            pre = cur;
            cur = cur->next;
        }
        
        return dummyHead->next;
    }
};
