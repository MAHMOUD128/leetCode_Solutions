class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) 
    {
        bool check = false;
        int n = nums.size();
        map<int,int>m;
        for(int i = 0 ; i < n ; i++)
        {
            int ans = nums[i];
            if (m.find(ans) != m.end() && abs(i-m.find(ans)->second) <=k)
            {
                check = true;
            }
            else
            {
                m[nums[i]] = i;
            }
            
        }
        return check;
        
    }
};