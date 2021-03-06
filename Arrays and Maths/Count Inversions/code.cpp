long long merge(long long arr[], long long temp[], int l, int m, int r)
    {
        long long int count = 0;
        
        long long int i = l;
        long long int j = m + 1;
        long long int k = l;
        
        while(i <= m && j <= r)
         {
             if(arr[i] <= arr[j])
               temp[k++] = arr[i++];
             else
                {
                    temp[k++] = arr[j++];
                    count += m + 1 - i;
                }        
         }
         
        while(i <= m)
          temp[k++] = arr[i++];
          
        while(j <= r)
          temp[k++] = arr[j++];
          
        for(long long int i = l; i <= r; i++)
          arr[i] = temp[i];
          
        return count;  
    }
    
    long long int mergeSort(long long arr[], long long temp[], int l, int r)
    {
        long long int count = 0;
        if(r > l)
          {
              long long int m = l + (r - l)/2;
              count += mergeSort(arr, temp, l, m);
              count += mergeSort(arr, temp, m + 1, r);
              count += merge(arr, temp, l, m , r);
              
          }
          
        return count;  
    }
    
    long long int inversionCount(long long arr[], long long N)
    {
        long long int temp[N];
        return mergeSort(arr, temp, 0, N - 1);
    }
