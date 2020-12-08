class Solution {
public:
    string licenseKeyFormatting(string s, int k) {
       string alphanum = "";
        for(auto c: s)
            if(c != '-')
                alphanum += toupper(c);
        string ans = "";
        
        int i = alphanum.size()-1;
        int j = 0;
        while(i >= 0)
        {
            if(j == k)
            {
                ans += '-';
                j = 0;
            }
           ans += alphanum[i];
           i--;
            j++;
            
            
        }
        reverse(ans.begin(),ans.end());
       return ans; 
        
    }
};
