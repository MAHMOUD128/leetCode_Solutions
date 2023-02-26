class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) 
    {
        vector<int>v;
        map<int,int>m;
        for(auto it1:nums1) m[it1]=1;
        for(auto it2:nums2)
        {
            if(m.find(it2) !=m.end() && m[it2]==1)
            {
                v.push_back(it2);
            }
            m[it2]--;
        }
        return v;
        
    }
};