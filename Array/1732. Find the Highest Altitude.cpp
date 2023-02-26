class Solution {
public:
    int largestAltitude(vector<int>& gain) 
    {
        int n = gain.size();
        vector<int> high;
        high.push_back(0);
        for (int i = 0; i < n; ++i)
        {
            int sum = high[i]+gain[i];
            high.push_back(sum);

        }
        sort(high.rbegin(),high.rend());
        return high[0];
        
    }
};