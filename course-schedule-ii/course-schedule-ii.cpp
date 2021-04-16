class Solution {
public:
    vector<int> ans;
    bool iscycle(vector<int>&v,vector<vector<int>>& p,int i)
    {
        v[i] = 1;
            for(auto x : p[i])
            {
                if(v[x] == 1)
                    return true;
                if(v[x] == 0 and iscycle(v,p,x))
                    return true;
                    
                    
            }
        v[i] = 2;
        return false;
    }
    void dfs(vector<int>&v,vector<vector<int>>& p,int i)
    {
        v[i] = 1;
        for(auto x: p[i])
        {
            if(v[x] == 0)
                dfs(v,p,x);
        }
        ans.push_back(i);
    }
    vector<int> findOrder(int n, vector<vector<int>>& pr) {
        vector<vector<int>> p(n);
        for(auto x: pr )
            p[x[1]].push_back(x[0]);
    
        
        vector<int> v(n,0);
        for(int i = 0; i< n; i++)
        { if(v[i] == 0)
            {
                if(iscycle(v,p,i))
                    return {};
            }
        }
        vector<int> vi(n,0);
        for(int i = 0; i< n; i++)
        { if(vi[i] == 0)
            {
                dfs(vi,p,i);
            }
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};