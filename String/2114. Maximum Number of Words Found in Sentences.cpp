class Solution {
public:
    int mostWordsFound(vector<string>& sentences) 
    {
        
        int maxworld =0;
        for(auto it:sentences)
        {
            int countv = count(it.begin(),it.end(),' ')+1;
            maxworld =max(maxworld,countv);
        }
        
        return maxworld;
        
        
    }
};