class Solution {
public:
    int lcs(string s, string t)
    {
        int n = s.length();
        vector<vector<int>> dp(n+1,vector<int>(n+1,0));
        for(int i = 0; i < n+1; i++)
        {
            for(int j = 0; j < n+1; j++)
            {
                if( i == 0 or j == 0)
                    continue;
                if(s[i-1] == t[j-1])
                    dp[i][j] = 1+dp[i-1][j-1];
                else
                    dp[i][j] = max(dp[i-1][j],dp[i][j-1]);
            }
        }
        return dp[n][n];
    }
    int minInsertions(string s) {
        int n = s.length();
        string t = s;
        reverse(s.begin(),s.end());
        return n - lcs(s,t);
    }
};