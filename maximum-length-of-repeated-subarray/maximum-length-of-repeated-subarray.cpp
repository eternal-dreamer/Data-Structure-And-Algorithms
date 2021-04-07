class Solution {
public:
    int findLength(vector<int>& a, vector<int>& b) {
        vector<vector<int>> dp(a.size()+1,vector<int>(b.size()+1,0));
          int ans = 0;  
        for(int i = 0; i < a.size(); i++)
        {
            for(int j = 0; j < b.size();j++)
                
                if(a[i] == b[j])
                { dp[i+1][j+1] = 1 + dp[i][j];
                 ans = max(ans,dp[i+1][j+1]);
                }
            
        }
        return ans;
    }
};