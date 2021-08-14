int n = nums.size();
        int count1 = 0, count2 = 0;
        int first = INT_MAX, second = INT_MAX;
        
        for(int i = 0; i < n; i++)
        {
            if(first == nums[i])
                count1++;
            else if(second == nums[i])
                count2++;
            else if(count1 == 0)
            {
                first = nums[i];
                count1++;
            }
            else if(count2 == 0)
            {
                second = nums[i];
                count2++;
            }
            else
            {
                count1--;
                count2--;
            }
        }
        
        count1 = 0, count2 = 0;
        for(int i = 0; i < n; i++)
        {
            if(nums[i] == first)
                count1++;
            else if(nums[i] == second)
                count2++;
        }
        
        
        vector<int> res;
        if(count1 > n/3)
            res.push_back(first);
        if(count2 > n/3)
            res.push_back(second);
        
        return res;
        
    }
