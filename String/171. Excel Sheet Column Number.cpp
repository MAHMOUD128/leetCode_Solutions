class Solution {
public:
    int titleToNumber(string s) 
    {
        //we walk Right to Left
        //A = 1 * 26^0
        //AB= 1*26^1+2*26^0
        int po =0,result=0;
        for(int i = s.length()-1; i>=0 ;i--)
        {
            result+=(s[i] - 'A' + 1)*pow(26,po);
            po++;
        }
        return result;
    }
};