class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int rowsCount = matrix.size();
        int columnCount = matrix[0].size();
        int i = 0; 
        int j = rowsCount-1;
        while(i<j){
            int middle = (i+j)/2;
            if(matrix[middle][columnCount-1] < target) {
                i = middle+1;
            }else if(matrix[middle][columnCount-1] > target){
                j = middle;
            }else {
                return true;   
            }
        }

        int k =0; 
        int l = columnCount - 1;

        while(k<=l){
            int middle = (k+l)/2;
            if(matrix[i][middle] < target){
                k = middle+1;
            }
            else if(matrix[i][middle] > target){
                l = middle-1;
            }
            else {return true;}
        }

        return false;
    }
};