class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int n= matrix[0].size();
        int m = matrix.size();
        vector<int>columns(n,1);
        vector<int>rows(m,1);
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(matrix[i][j]==0){
                    rows[i]=0;
                    columns[j]=0;
                }
            }
        }
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(rows[i]==0 || columns[j]==0){
                    matrix[i][j]=0;
                }
            }
        }
        

    }
};
