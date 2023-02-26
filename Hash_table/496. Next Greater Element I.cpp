class Solution {
public:
    int search(vector<int> &nums,int A)
{
    int i=0;
    for(i=0;i<nums.size();i++)
        if(nums[i] == A)
            break;
    
    if(i == nums.size() || i == nums.size()-1)
        return -1;
    
    for(;i<nums.size();i++)
        if(nums[i] > A)
            return nums[i];
    
    return -1;
}
vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
    
    vector<int> ans(nums1.size());
    for(int i=0;i<nums1.size();i++)
    {
        ans[i] = search(nums2,nums1[i]);
    }
    return ans;
}
    
};