class Solution {
public:
    bool isPalindrome(int x) 
    {
        int orginal = x;
        long reverse =0;
        while(x != 0)
        {
            int last = x%10;
            reverse = reverse*10+last;
            x= x/10;
        }
        if(orginal <0)
        {
            return false;
        }
        else if(orginal == reverse)
        {
            return true;
        } 
        else
        {
            return false;
        }
    }
};