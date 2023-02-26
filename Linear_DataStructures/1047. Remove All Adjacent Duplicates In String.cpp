class Solution {
public:
    string removeDuplicates(string s) 
    {
        stack<char>sh;
        for(int i = 0 ; i < s.size(); i++)
        {
            if(!sh.empty() && sh.top()==s[i])
            {
                sh.pop();
            }
            else
            {
                sh.push(s[i]);
            }
            
        }
        string sl="";
        while(!sh.empty())
        {
            sl +=sh.top();
            sh.pop();
        }
        reverse(sl.begin(),sl.end());
        return sl;
        
    }
};