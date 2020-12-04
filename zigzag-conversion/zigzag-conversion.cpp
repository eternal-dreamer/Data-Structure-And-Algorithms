class Solution {
public:
    string convert(string s, int numrows) {
    if( numrows == 1)
        return s;
    vector<string>  z(numrows);
        int i = 0, n = s.length();
        while(i < n)
        {
            for(int j = 0;j<numrows and i<n;j++,i++)
                z[j] += s[i];
            for(int j = numrows-2;j>0 and i<n;i++,j--)
                z[j] += s[i];
            
        }
        string ans = "";
        for(int k = 0; k < z.size(); k++)
            ans += z[k];
       return ans; 
    }
};
