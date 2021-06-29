class Solution {
public:
     vector<vector<int>>a;
    int n;
    void sub(vector<int>& b,int i,vector<int> &ans)
    {
        
        a.push_back(ans);
        for(int j = i ; j < n; j++)
        {
            
            ans.push_back(b[j]);
            sub(b, j+1, ans);
            ans.pop_back();
        }
    }
    vector<vector<int>> subsets(vector<int>& b) {
        vector<int> ans;
         n = b.size();
        sub(b,0,ans);
        return a;
    }
};