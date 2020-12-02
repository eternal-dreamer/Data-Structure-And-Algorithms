class Solution {
public:
    bool wordBreak(string s, vector<string>& wordDict) {
        map<char,vector<string>> m;
        for(auto c : wordDict)
        {
            m[c[0]].push_back(c);
        }
        vector<bool> dp(s.length()+1,0);
        dp[0] = 1;
        for(int i = 0; i < s.length(); i++)
        {
           for(auto e: m[s[i]])
               if(i + e.length() <= s.length() and dp[i] and e == s.substr(i,e.length()))
                   dp[i + e.length()] = 1;
        }
        return dp[s.length()];
    }
};
