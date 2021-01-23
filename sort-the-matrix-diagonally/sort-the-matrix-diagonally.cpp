class Solution {
public:
    void sortutil(vector<vector<int>>& mat, int r, int c)
    {
        int i = r, j = c;
        int m = mat.size(), n = mat[0].size();
        vector<int> temp;
        while(i < m and j < n)
        {
           temp.push_back(mat[i++][j++]);
        
        }
        sort(temp.begin(),temp.end());
        i = r;
        j = c;
        int in = 0;
        while(i < m and j < n)
        {
            mat[i++][j++] = temp[in++];
        }
    }
    vector<vector<int>> diagonalSort(vector<vector<int>>& mat) {
        for(int i = 0;i< mat.size();i++)
            sortutil(mat,i,0);
        for(int j = 1;j < mat[0].size();j++)
            sortutil(mat,0,j);
        return mat;
        
    }
};
