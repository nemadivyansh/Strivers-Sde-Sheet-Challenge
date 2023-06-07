#include <bits/stdc++.h>
int Findways(int i , int j , vector<vector<int>> &dp)
{
        if(i < 0) return 0;
        if(j < 0) return 0;

        if(dp[i][j] != -1) return dp[i][j];
        if(i == 0 && j == 0) return 1;
        
        int goLeft = Findways(i, j - 1, dp);
        int goUp = Findways(i - 1, j, dp);
        
        return dp[i][j] = goUp + goLeft;    
}

int uniquePaths(int m, int n) {
  vector<vector<int>> dp(m + 1, vector<int>(n + 1, -1));
  return Findways(m - 1, n - 1, dp);
}
