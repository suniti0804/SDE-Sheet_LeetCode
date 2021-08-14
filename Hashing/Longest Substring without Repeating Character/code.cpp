int lengthOfLongestSubstring(string s)
    {
        int res = 0;
        vector<int> lastIndex(256, -1); //j is the ending point of window
        int i = 0;                 // i is the starting point of window
        for(int j = 0; j < s.length(); j++)
         {
             i = max(i, lastIndex[s[j]] + 1);
             res = max(res, j - i + 1);
            
             lastIndex[s[j]] = j;
         }
         
        return res; 
    }
