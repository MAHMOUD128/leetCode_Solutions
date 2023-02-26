class Solution {
private:
    bool valid(char ch)
    {
        if( (ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z') || (ch >= '0' && ch <= '9'))
        {
            return 1;
        }
        return 0;
    }
    char toLowerCase(char ch) 
    {
        if( (ch >='a' && ch <='z') || (ch >='0' && ch <='9') )
            return ch;
        else
        {
            char temp = ch - 'A' + 'a';
            return temp;
        }
    }
public:
    bool isPalindrome(string s) 
    {
        vector<char>v;
        for(int i=0 ; i < s.size(); i++)
        {
           if(valid(s[i]))
           {
               v.push_back(toLowerCase(s[i]));
           }

        }  
        auto temp = v;
        reverse(temp.begin(), temp.end());
        return temp == v;
        
    }
};