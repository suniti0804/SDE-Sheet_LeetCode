 ListNode* reverse(ListNode* root)
    {
        if(root == NULL)
            return NULL;
        ListNode* prev = NULL;
        ListNode* curr = root;
        ListNode* next;
        while(curr != NULL)
        {
            next = curr -> next;
            curr -> next = prev;
            prev = curr;
            curr = next;
        }
       return prev; 
    }
    
    bool isPalindrome(ListNode* head) 
    {
        ListNode* slow = head;
        ListNode* fast = head;
        while(fast != NULL && fast -> next != NULL)
        {
            slow = slow -> next;
            fast = fast -> next -> next;
        }
       slow = reverse(slow);
       fast = head;
       while(slow != NULL)
       {
           if(fast -> val != slow -> val)
               return 0;
           slow = slow -> next;
           fast = fast -> next;
       }
      return 1;  
    }
