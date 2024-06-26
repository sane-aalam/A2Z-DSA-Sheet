

bool isToepliz(vector<vector<int>>& mat) {
    // code here
    int N = mat.size();
    int M = mat[0].size();
    
    for(int i = 1; i<N; i++){
       for(int j = 1; j<M; j++){
           if(mat[i][j] != mat[i-1][j-1]){
               return false;
           }
       }
   }
    return true;
}