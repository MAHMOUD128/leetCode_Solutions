class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int n = mat.size();
        int m = mat[0].size();
        int primary=0,secondary =0,total=0;
        for(int i = 0 ; i < n ; i ++)
        {
            for(int j = 0 ; j < m ; j++)
            {
                
                if(i==j)
                {
                    primary +=mat[i][j];
                }
                if(i+j == n-1)
                {
                    secondary += mat[i][j];
                }
                if(n%2 == 0)
                {
                    total = primary + secondary;
                }
                else
                {
                    total = primary + secondary - mat[n/2][m/2];
                }
                
                
            }
        }
        return total;

    }
};