class Solution {
public:
    bool backspaceCompare(string s, string t) 
    {
        string one ="",two="";
       stack<char>s1,s2;
       for(int i =0 ; i < s.size() ; i++)
       {
           if((s1.empty() || !s1.empty()) && s[i] !='#')
           {
               s1.push(s[i]);
           }
           if(!s1.empty() && s[i] =='#')
           {
               s1.pop();
           }
       }
       for(int i =0 ; i < t.size() ; i++)
       {
           if((s2.empty() || !s2.empty()) && t[i] !='#')
           {
               s2.push(t[i]);
           }
           if(!s2.empty() && t[i] =='#')
           {
               s2.pop();
           }
       }
       while(!s1.empty())
       {
           one +=s1.top();
           s1.pop();
       }
       while(!s2.empty())
       {
           two +=s2.top();
           s2.pop();
       }
       return one == two;
        
        
        
    }
};