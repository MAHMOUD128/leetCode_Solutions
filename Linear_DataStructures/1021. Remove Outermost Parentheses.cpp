class Solution {
public:
    string removeOuterParentheses(string s) {
        stack<char> tem;
        string re;
        for(int i=0; i<s.length(); i++){
           if(s[i]=='('){
               if(tem.size()>0) re.push_back(s[i]);
               tem.push(s[i]);
           }
           else{
               tem.pop();
               if(!tem.empty()) re.push_back(s[i]);
           }
        }
        return re;
    }
};