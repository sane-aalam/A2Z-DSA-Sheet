
// 1. simple traversal the 4-direction into the matrix
// 2. count the number of 1's 

class Solution {
  public:
    int findCoverage(vector<vector<int>>& matrix) {
        // Code here
        int n = matrix.size();
        int m = matrix[0].size();
        int numberCoverageCount = 0;
        
        int delrow[4] = {-1, 1, 0, 0};
        int delcol[4] =  {0, 0, -1, 1};
        
        for(int row = 0; row < n; row ++){
            for(int col = 0; col < m; col++){
                if(matrix[row][col] == 0){
                    int fourDirection = 4;
                    for(int direction = 0; direction < fourDirection; direction++){
                        int newrow = row + delrow[direction];
                        int newcol = col + delcol[direction];
                        
                        if(newrow >= 0 && newrow < n && newcol >= 0 && newcol < m 
                        && matrix[newrow][newcol] == 1){
                            numberCoverageCount ++;
                        }
                    }
                }
            }
        }
        return numberCoverageCount;
    }
};