class Solution {
public:
    bool isValid(string s) 
    {
        stack<char>sh;
        for(int i = 0 ; i < s.size() ; i++)
        {
            char ch=s[i];
            if(ch=='(' || ch == '{' || ch== '[')
            {
                sh.push(ch);
            }
            else
            {
                if(!sh.empty())
                {
                    char top =sh.top();
                    if((ch==')' && top=='(') || (ch=='}' && top=='{') || (ch==']' && top=='['))
                    {
                        sh.pop();
                    }
                    else
                    {
                        return false;
                    }

                }
                else
                {
                    return false;
                }
                
            }

        }
        return (sh.empty());
        
        
        
    }
};