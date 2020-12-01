class Solution {
public:
   
    int numDecodings(string s) {
        vector<int> dp(s.size() + 1);
    if(s.size() == 0 || s[0] == '0' ) return 0;
    
    dp[0] = 1;
    dp[1] = 1;
    
    
    
    for(int i = 2; i <= s.size(); i++) {
        int var = (s[i-2] - '0') * 10 + (s[i-1] - '0');
        
        if(s[i-1] == '0') {
            if(var == 10 || var == 20) {
                dp[i] = dp[i-2];
                } else return 0;
        } else {
            
        if(var > 26 ) dp[i] = dp[i-1];
            
        else if (var >= 1 && var <= 9) dp[i] = dp[i-1];
            
        else dp[i] = dp[i-1] + dp[i-2];
        }
    }
    
        return dp[s.size()];
        
    }
};
