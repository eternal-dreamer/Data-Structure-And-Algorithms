class Solution {
public:
    int countSquares(vector<vector<int>>& m) {
        int n = m.size();
        int r = m[0].size();
        vector<vector<int>> dp(m);
        for(int i = 1; i < n; i++)
        {
            for(int j = 1; j < r;j++)
            {
                if(m[i][j])
                    dp[i][j] = min(dp[i-1][j],min(dp[i-1][j-1],dp[i][j-1])) +1 ;
        
            }
        }
        int ans = 0;
        for(int i = 0; i < n; i++)
        {
            for(int j = 0; j < r; j++)
                ans += dp[i][j];
        }
        return ans;
    }
};