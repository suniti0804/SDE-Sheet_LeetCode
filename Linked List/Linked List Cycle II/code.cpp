ListNode *detectCycle(ListNode *head) 
    {
        ListNode* slow = head;
        ListNode* fast = head;
        while(fast != NULL && fast -> next != NULL)
        {
            slow = slow -> next;
            fast = fast -> next -> next;
            if(slow == fast)
            {
                slow = head;
                if(slow == fast)
                   return head;
                else
                {
                    while(slow -> next != fast -> next)
                    {
                        slow = slow -> next;
                        fast = fast -> next;
                    }
                   return slow -> next; 
                }
            }
        }
       return NULL; 
        
    }
