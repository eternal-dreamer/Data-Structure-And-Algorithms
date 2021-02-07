class Solution {
public:
    vector<int> shortestToChar(string s, char c) {
         vector<int> t;
        for(int i = 0 ;i < s.length(); i++)
        {
            if(s[i] == c)
                t.push_back(i);
        }
        vector<int> ans;
        for(int i = 0;i<s.length(); i++)
        {
            int m = s.length();
            for(int j = 0; j< t.size();j++)
            {
                m = min(m,abs(i - t[j]));
            }
            ans.push_back(m);
        }
return ans;
        
    }
};