class Solution {
public:
    int smallestEvenMultiple(int n) 
    {
        int ans;
        if(n%2==0)
        {
            ans=n;
        }
        else{ans =2*n;}
        return ans;
        
    }
};