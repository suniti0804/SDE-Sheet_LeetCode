int maxLen(int A[], int n)
{
    unordered_map<int, int> pre_sum;
    
    int sum = 0;
    int len = 0;
    
    for(int i = 0; i < n; i++)
      {
          sum += A[i];
          if(sum == 0)
            len = i + 1;
          if(pre_sum.find(sum) != pre_sum.end())
             len = max(len, i - pre_sum[sum]);
          else
            pre_sum[sum] = i;
      }
    return len;
}
