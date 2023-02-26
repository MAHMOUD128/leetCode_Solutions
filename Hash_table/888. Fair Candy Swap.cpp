class Solution {
public:
    vector<int> fairCandySwap(vector<int>& A, vector<int>& B) 
    {
        int sum1 = accumulate(A.begin(),A.end(),0);
        int sum2 = accumulate(B.begin(),B.end(),0);
        vector<int>ans;
        map<int,int>m;
        for(auto it:B)
        {
            m[it]++;
        }
        for(auto it:A)
        {
            if(m.find(it+(sum2 - sum1)/2) != m.end())
            {
                ans.push_back(it);
                ans.push_back(it+(sum2 - sum1));
                return ans;
            }
        }
        return ans;
    }
};