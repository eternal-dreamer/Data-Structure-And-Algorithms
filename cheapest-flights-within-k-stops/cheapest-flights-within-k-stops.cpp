class Solution {
public:
    int findCheapestPrice(int n, vector<vector<int>>& flights, int src, int dst, int k) {
        map<int,vector<pair<int,int>>> g;
        
        for(auto f : flights)
        {
            g[f[0]].push_back({f[1],f[2]});
        }
        vector<int> c(n,-1);
    queue<pair<int,int>>q;
        q.push({0,src});
        c[src] = 0;
        k++;
        while(!q.empty())
        {
             if(!k)
                break;
            int l = q.size();
            for(int i = 0; i < l;i++)
            { auto cu = q.front();
            q.pop();
            for(auto e:g[cu.second])
            {
                int p = e.second + cu.first;
                if(c[e.first] == -1 || p < c[e.first])
                {
                    c[e.first] = p;
                    q.push({p,e.first});
                }
            }
            }
            k--;
        }
        return c[dst];
    }
};