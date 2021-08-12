 int *findTwoElement(int *A, int len) 
    {
        long long int Sum_N = (len * (len+1) ) /2, Sum_NSq = (len * (len +1) *(2*len +1) )/6;
        long long int missingNumber=0, repeating=0;

        for(int i=0;i<len; i++)
        {
           Sum_N -= (long long int)A[i];
           Sum_NSq -= (long long int)A[i]*(long long int)A[i];
        }

        missingNumber = (Sum_N + Sum_NSq/Sum_N)/2;
        repeating= missingNumber - Sum_N;
        int* ans = new int(2);
        ans[0] = repeating;
        ans[1] = missingNumber;
        return ans;
    }
