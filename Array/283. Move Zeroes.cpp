class Solution {
public:
    void moveZeroes(vector<int>& nums) 
    {
        int n = nums.size();
        int j = 0;
        //this to shift real number to the left
        for(int i = 0 ; i < n ; i++)
        {
            if(nums[i] != 0)
            {
                nums[j] = nums[i];
                j++;
            }
        }
        //[1,2,3, , ]
        //in frist case: the ( j = 3 ) here.
        for(;j<n;)
        {
            nums[j++] = 0;
        }
        //[1,2,3,0,0]

        
    }
};