class Solution {
public:
    int up(vector<vector<int>>& dp, int m, int n, const vector<vector<int>>& grid) {
        if (m < 0 || n < 0) return 0;   
        if (grid[m][n] == 1) return 0;
        if (m == 0 && n == 0) return 1; 

        if (dp[m][n] != -1) return dp[m][n];

        int left = up(dp, m, n - 1, grid);
        int upMove = up(dp, m - 1, n, grid);

        return dp[m][n] = left + upMove;
    }

    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        int m = obstacleGrid.size();
        int n = obstacleGrid[0].size();
        vector<vector<int>> dp(m, vector<int>(n, -1));
        return up(dp, m - 1, n - 1, obstacleGrid); 
    }
};
