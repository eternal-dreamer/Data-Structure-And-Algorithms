class Solution {
public:
    int maxProfit(int k, vector<int>& a) {
        int n = a.size();
        if(n == 0)
            return 0;
        int dp[k+1][n];
        for(int i = 0; i < k+1; i++)
        {
            int prev = INT_MIN;
            for(int j = 0; j < n; j++)
            {
                if(i == 0 or j == 0)
                    dp[i][j] = 0;
                else
                {prev = max(prev,dp[i-1][j-1] - a[j-1]);
                dp[i][j] = max(dp[i][j-1], prev + a[j]);}
                
            }
        }
        return dp[k][n-1];
    }
};