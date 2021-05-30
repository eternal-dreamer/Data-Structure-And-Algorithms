class Solution {
public:
    int mincostTickets(vector<int>& d, vector<int>& c) {
        int n = d.size();
        vector<int> dp(365 + 31,0);
        set<int> s;
        for(int i : d)
            s.insert(i);
        for(int i = 365; i >= 1; i--)
        {
            if(s.find(i) == s.end())
                dp[i] = dp[i+1];
            else
            {
                dp[i] =min( min(dp[i+1]+c[0] , dp[i+7] + c[1]) , dp[i+30]+c[2]);
            }
        }
      return   dp[1];
    }
};