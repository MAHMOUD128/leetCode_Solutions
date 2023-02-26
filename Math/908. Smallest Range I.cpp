class Solution {
public:
    int smallestRangeI(vector<int>& A, int k) 
    {
        int largest=A[0];
        int smalest=A[0];
        for(int i = 0 ; i < A.size(); i++)
        {
            largest =max(A[i],largest);
            smalest =min(A[i],smalest);

        }
        smalest += k;
        largest -= k;
        return max(0,(largest-smalest));
        
    }
};