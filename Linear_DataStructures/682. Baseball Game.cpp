class Solution {
public:
    int calPoints(vector<string>& op) 
    {
        stack<int>sh;
        for(int i = 0 ; i < op.size() ; i++)
        {
            if(op[i]=="C")
            {
                sh.pop();
            }
            else if(op[i]=="D")
            {
                int n =2*sh.top();
                sh.push(n);
            }
            else if(op[i] == "+")
            {
                int n1=sh.top();
                sh.pop();
                int sum = sh.top()+n1;
                sh.push(n1);
                sh.push(sum);
            }
            else
            {
                int val =stoi(op[i]);
                sh.push(val);

            }
        }
        int summ=0;
        while(!sh.empty())
        {
            summ +=sh.top();
            sh.pop();

        }
        return summ;
        
    }
};