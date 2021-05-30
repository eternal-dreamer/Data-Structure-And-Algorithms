class Solution {
public:
    bool isEqual(char a, char b){
        if(a == '.') return true;
        return a == b;
    }
    bool isMatch(string s, string p) {
        int n1 = p.size(), n2 = s.size();
        vector<vector<bool>> dp(n1+1, vector<bool> (n2+1, false));
        dp[0][0] = true;
        for(int i=1; i<n1+1; i++){
            if(p[i-1] == '*') dp[i][0] = dp[i-2][0];
            for(int j=1; j<n2+1; j++){
                if(isEqual(p[i-1], s[j-1])){
                    dp[i][j] = dp[i-1][j-1];
                }
                else if(p[i-1] == '*'){
                    if(isEqual(p[i-2], s[j-1])){
                        dp[i][j] = dp[i][j-1];
                    }
                    dp[i][j] = dp[i][j] || dp[i-2][j];
                }
            }
        }
        return dp[n1][n2];
        
    }
};