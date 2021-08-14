 double myPow(double x, int n)
    {
        double ans = 1; // Initialize result
        long y = abs((long)n);
        while (y > 0) 
        {
            if (y & 1)
                ans = ans * x;
            y = y >> 1; 
            x = x * x; 
        }
        return n < 0 ? 1/ans : ans;
    }
