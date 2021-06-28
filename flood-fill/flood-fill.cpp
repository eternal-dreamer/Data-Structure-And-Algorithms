class Solution {
public:
    
    void dfs(vector<vector<int>>& a,int p, int i, int j, int n, int m,int c)
    {
        if( i < 0 or j < 0 or i > n-1 or j > m-1)
            return;
        if(a[i][j] == c)
            return;
        if(a[i][j] != p)
            return;
        a[i][j] = c;
        
            dfs(a,p,i-1,j,n,m,c);
        dfs(a,p,i,j-1,n,m,c);
        dfs(a,p,i+1,j,n,m,c);
        dfs(a,p,i,j+1,n,m,c);
        
    }
    vector<vector<int>> floodFill(vector<vector<int>>& a, int sr, int sc, int c) {
        
        int n = a.size();
        int m = a[0].size();
        dfs(a,a[sr][sc],sr,sc,n,m,c);
        return a;
    }
};