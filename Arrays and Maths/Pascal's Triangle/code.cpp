vector<vector<int>> generate(int n)
    {
        vector<vector<int>> res;
        for (int line = 1; line <= n; line++)
        {
            int C = 1; // used to represent C(line, i)
            vector<int> temp;
            for (int i = 1; i <= line; i++)
            {
                // The first value in a line is always 1
                temp.push_back(C);
                C = C * (line - i) / i;
            }
            res.push_back(temp);
        }
        
        return res;
    }
