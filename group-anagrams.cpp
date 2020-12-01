class Solution {
public:
    
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        map<string,vector<string>>m;
        
        if(strs.size()== 0)
            return {{}};
        
        for(auto s:strs)
        {
            string t = s;
            sort(t.begin(),t.end());
            m[t].push_back(s);
        }
        
        vector<vector<string>> v;
        for (auto &it : m)
        {
            v.push_back(it.second);
        }
        return v;
    }
};
