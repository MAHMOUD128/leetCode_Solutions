class Solution {
public:
    int findShortestSubArray(vector<int>& nums) {
        int n = nums.size();
        vector <int> count(n);
        int sum = 1;
        for(int i = 0 ; i < n ; i++)
        {
            count[nums[i]]++;
        }
        for(int i = 0 ; i < n ; i++)
        {
            if(count[i] != 0)
            {
                sum *= count[i];
            }
        }
        return sum;
    }
};