class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) 
    {
        vector<int>v;
        int n = nums.size();
        map<int,int>m;
        for(int i = 0 ; i < n ; i++)
        {
            int ans =target - nums[i];
            if (m.find(ans) != m.end())
            {
                v.push_back(i);
                v.push_back(m.find(ans)->second);
                break;
            }
            else
            {
                m[nums[i]] = i;
            }
        }
        return v;
        
    }
};