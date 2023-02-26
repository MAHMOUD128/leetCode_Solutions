class Solution {
public:
    int longestPalindrome(string s) 
    {
        map<char,int>m;
        for(auto it:s)
        {
            m[it]++;
        }
        int ans = 0 ;
        bool odd = false;
        for(auto it:m)
        {
            if(it.second % 2 == 0)
            {
                ans +=it.second;
            }
            else
            {
                odd = true;
                ans +=(it.second -1);

            }
        }
        if(odd)
        {
            ans++;
        }
        return ans;


    

        
    }
};