class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) 
    {
        int yep= 0 ;
        for(auto it:accounts)
        {
            yep = max(yep, accumulate(it.begin(),it.end(),0));
        }

        return yep;
    }
};