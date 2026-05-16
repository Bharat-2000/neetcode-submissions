class Solution {
public:
    bool checkBlock(int r, int c, vector<vector<char>>& board){
        vector<int> vis(10, 0);
        for (int i = r; i<r+3; i++){
            for (int j = c; j<c+3; j++){
                if(board[i][j] == '.') continue;
                vis[board[i][j] - '0']++;
                if(vis[board[i][j] - '0'] > 1) {
                    cout<<i<<" value "<<j<<endl;
                    return false;
                }
            }
        }  
        return true;
    }
    bool isValidSudoku(vector<vector<char>>& board) {
        for (int i=0; i<9; i+=3){
            for(int j = 0; j<9; j+=3){
                if(!checkBlock(i, j, board)){
                    cout<<i<<" "<<j<<endl;
                    return false;
                }
            }
        }

        for(int i = 0; i<9; i++){
            vector<int> vis(10, 0);
            vector<int> vis2(10,0);
            for(int j =0; j<9; j++){
                if(board[i][j] == '.') continue;
                vis[board[i][j] - '0']++;
                if(vis[board[i][j] - '0'] > 1) {
                    return false;
                }
            }
            for (int k = 0; k<9; k++){
                if(board[k][i] == '.') continue;
                vis2[board[k][i] - '0']++;
                if(vis2[board[k][i] - '0'] > 1) {
                    return false;
                }
            }
        }

        return true;
    }
};



