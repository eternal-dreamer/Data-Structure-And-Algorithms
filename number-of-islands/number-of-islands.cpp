class Solution {
public:
    int m,n;
    bool dfs(int i, int j, vector<vector<char>>& grid)
    {
        if(grid[i][j] == '1')
        {
            grid[i][j] = '0';
            if(i-1 >= 0)
                dfs(i-1, j, grid);
            if(i+1 < m)
                dfs(i+1, j, grid);
            if(j-1 >= 0)
                dfs(i, j-1, grid);
            if(j+1 < n)
                dfs(i, j+1, grid);
            return true;
        }
        return false;
    }
    int numIslands(vector<vector<char>>& g) {
        m = g.size();
        n = g[0].size();
        int ans = 0;
        for(int i = 0 ; i < m; i++)
            for(int j = 0; j < n; j++)
                if(dfs(i,j, g))
                    ans++;
        return ans;
    }
};