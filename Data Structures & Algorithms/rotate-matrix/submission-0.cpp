class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        vector<vector<int>> mat(matrix.size(),vector<int>(matrix[0].size(),0));
        
        for(int i=0;i<matrix.size();i++){
            for(int j=0;j<matrix[0].size();j++){
                mat[i][j]=matrix[i][j];
            }
        }
           for(int i=0;i<matrix.size();i++){
            for(int j=0;j<matrix[0].size();j++){
                matrix[j][matrix.size()-1-i]=mat[i][j];
            }
        }

    }
};
