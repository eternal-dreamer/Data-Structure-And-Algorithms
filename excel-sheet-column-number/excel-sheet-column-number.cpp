class Solution {
public:
    int titleToNumber(string s) {
        int ans = 0;
        int n = s.length();
        for(int i = 0; i < n; i++)
        {
            ans += (pow(26,n-i-1)*(s[i]-'A' + 1));
        }
        return ans;
        
    }
};
