ListNode* removeNthFromEnd(ListNode* head, int n) 
    {
        ListNode *temp = new ListNode(-1);
        temp -> next = head;
        ListNode *slow = temp;
        ListNode *fast = temp;
        while (n--)
          fast = fast -> next;
        
        while (fast != NULL && fast -> next != NULL) 
        {
            fast = fast -> next;
            slow = slow -> next;
        }
        slow -> next = slow -> next -> next;
        return temp -> next;
        
    }
