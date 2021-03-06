class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
      if(matrix.size() == 0 or matrix[0].size() == 0) 
          return false;
        int row = 0;
        int col = matrix[0].size()-1;
        while(row < matrix.size() and col >= 0)
        {
            if(matrix[row][col] == target)
                return true;
            else if(matrix[row][col] > target)
                col--;
            else
                row++;
        }
        return false;
    }
};
