 int len(ListNode* head)
    {
        ListNode* current = head;
        int len = 0;
        while(current != NULL)
        {
            current = current -> next;
            len++;
        }
        return len;
    }
    
    ListNode* reverseKGroup(ListNode* head, int k) 
    {
        if(head == NULL || len(head) < k) 
            return head;
        
        ListNode* prev = NULL;
        ListNode* curr = head;
        ListNode* next;
        
        int count = 0;
        while(count < k && curr != NULL)
        {
            next = curr -> next;
            curr -> next = prev;
            prev = curr;
            curr = next;
            count++;
        }
        
        if(next != NULL)
            head -> next = reverseKGroup(next, k);
        
        return prev;
        
    }
