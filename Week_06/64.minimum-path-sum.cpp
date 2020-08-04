class Solution {
public:
    int minPath = INT_MAX;
    int m=0;
    int n=0;
    int minPathSum(vector<vector<int>>& grid) {
        m = grid.size();
        n = grid[0].size();
        if(m==0||n==0) return 0;
  //      traverse(grid, 0, 0, 0);
  //      return minPath;
 
        vector<vector<int>> dp = vector < vector <int> > (m, vector <int> (n,0));
        dp[0][0] = grid[0][0];
        for (int i = 1; i < m; i++) {
            dp[i][0] = dp[i - 1][0] + grid[i][0];
        }
        for (int j = 1; j < n; j++) {
            dp[0][j] = dp[0][j - 1] + grid[0][j];
        }
        for (int i = 1; i < m; i++) {
            for (int j = 1; j < n; j++) {
                dp[i][j] = min(dp[i - 1][j], dp[i][j - 1]) + grid[i][j];
            }
        }
        return dp[m - 1][n - 1];
    }
    void traverse(vector<vector<int>> &grid, int i, int j, int tmpResult){
        if(i>=m-1 && j>=n-1){
            minPath=min(minPath, tmpResult+grid[i][j]);
            return;
        }
        if(tmpResult>=minPath)  return;
        if(i<m-1){
            traverse(grid, i+1, j, tmpResult+grid[i][j]);
        }
        if(j<n-1){
            traverse(grid, i, j+1, tmpResult+grid[i][j]);
        }
    }
};
