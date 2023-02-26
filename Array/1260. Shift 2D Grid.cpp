class Solution {
public:
    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) 
    {
        int m = grid[0].size();
        int n = grid.size();
        vector<vector<int>> grid2(n, vector<int> (m, 0));
        while (k--){
            for (int i = 0; i < n; i++){
                for (int j = 0; j < m-1; j++){
                    grid2[i][j+1] = grid[i][j];
                }
            }
            for (int i = 0; i < n-1 ; i++)
                grid2[i+1][0] = grid[i][m-1];
            grid2[0][0] = grid[n-1][m-1];
            grid = grid2;
            
        }
        return grid;
    }
};