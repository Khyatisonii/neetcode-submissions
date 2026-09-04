class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        set<int> si;
        set<int> sj;
        for(int i=0;i<matrix.size();i++){
            for(int j=0;j<matrix[0].size();j++){
                if(matrix[i][j]==0){
                    si.insert(i);
                    sj.insert(j);
                }
            }
        }
        for(int i=0;i<matrix.size();i++){
            for(int j=0;j<matrix[0].size();j++){
                if(si.find(i)!=si.end() || sj.find(j)!=sj.end()){
                    matrix[i][j]=0;
                }
            }
        }
    }
};
