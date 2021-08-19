 ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) 
    {
        ListNode* ptrA = headA;
        ListNode* ptrB = headB;
        
        if(ptrA == NULL || ptrB == NULL)
             return NULL;
        while(ptrA != ptrB)
        {
            ptrA = ptrA -> next;
            ptrB = ptrB -> next;
            
            if(ptrA == ptrB)
                return ptrA;
            if(ptrA == NULL)
                ptrA = headB;
            if(ptrB == NULL)
                ptrB = headA;
        }
       return ptrA; 
    }
