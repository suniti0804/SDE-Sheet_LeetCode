 //Memoization
    int t[101][101];
    int solve(int m, int n)
    {
        if(m == 1 || n == 1)
            return 1;
        if(t[m][n] != -1)
        return t[m][n];
        return t[m][n] = solve(m - 1, n) + solve(m, n - 1);
    }
    
    int uniquePaths(int i, int j)
    {
        memset(t, -1, sizeof(t));
        return solve(i, j);
    }
    
    //Bottom Up DP
    int uniquePaths(int m, int n) 
    {
        int t[m][n];
        
        for(int i = 0; i < m; i++)
            t[i][0] = 1;
        for(int j = 0; j < n; j++)
            t[0][j] = 1;
        
        for(int i = 1; i < m; i++)
        {
            for(int j = 1; j < n; j++)
                t[i][j] = t[i - 1][j] + t[i][j - 1];
            
        }
        
        return t[m - 1][n - 1];
    } 
