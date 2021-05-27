class Solution {
public:
    int findTheCity(int n, vector<vector<int>>& edges, int distanceThreshold) {
        vector<vector<int>> v(n,vector<int>(n,INT_MAX));
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                v[i][j] = INT_MAX/2;
            }
            v[i][i] = 0;
        }
        for(auto s : edges)
        {
            v[s[0]][s[1]] = s[2];
             v[s[1]][s[0]] = s[2];
        }
        for(int k = 0; k < n; k++)
        for(int i = 0; i < n; i++)
            for(int j = 0; j < n;j++)
            { if(i != k or j != k)
               if(v[i][k] +v[k][j] < v[i][j])
                v[i][j] = v[i][k] + v[k][j];
            }
        
       int ans = INT_MAX;
           int d = 0;
        for(int i = 0; i <n; i++)
        {
            int f = 0;
            for(int j = 0; j < n ; j++)
                if(v[i][j] <= distanceThreshold)
                    f++;
            if(f <= ans)
            {ans = min(f,ans);
             d = i;
             }
        }
        return d;
    }
};