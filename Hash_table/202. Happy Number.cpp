class Solution {
public:
    bool isHappy(int n) 
    {
        map<int,bool>m;
        while(n !=1)
        {
            auto it = m.find(n);
            if(it != m.end())
                return false;
            m[n] = true;
            int sum =0;
            while(n>0)
            {
                sum +=(pow(n%10,2));
                n /=10;
            }
            n = sum;

        }
        return true;
        
    }
};