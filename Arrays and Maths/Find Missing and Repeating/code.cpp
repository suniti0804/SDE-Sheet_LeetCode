 int *findTwoElement(int *A, int n) 
    {
         long long int n_sum = (n*(n+1))/2, n_sq_sum = (n*(n+1)*(2*n +1))/6;
         long long int missing = 0, repeating = 0;

         for(int i = 0; i < n; i++)
         {
            n_sum -= (long long int)A[i];
            n_sq_sum -= (long long int)A[i]*(long long int)A[i];
         }

         missing = (n_sum + n_sq_sum/n_sum)/2;
         repeating = missing - n_sum;
         long long int* ans = new long long int(2);
         ans[0] = repeating;
         ans[1] = missing;
         return ans;
    }


int *findTwoElement(int *A, int n) 
    {   
        int count[n + 1];
        memset(count, 0, sizeof(count));
        for(int i = 0; i < n; i++)
          count[A[i]]++;

        int* ans = new int(2);
        for(int i = 1; i <= n; i++)
        {
            if(count[i] == 0)
              ans[1] = i;
            if(count[i] == 2)
              ans[0] = i;
        }

        return ans;
    }
