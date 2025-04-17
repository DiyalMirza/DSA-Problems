class Solution {
public:

    void dfs(int r, int c, vector<vector<char>>& board){

        //step 1
        if (r < 0 || r >= board.size() || c < 0 || c >= board[0].size() || board[r][c] != 'O') return;

        //step 2
        board[r][c] = 'S';

        //step 3
        dfs(r+1, c, board);
        dfs(r-1, c, board);
        dfs(r, c+1, board);
        dfs(r, c-1, board);
    }




    void solve(vector<vector<char>>& board) {

        //intialize
        int rows = board.size();
        int cols = board[0].size();
        if (rows == 0 || cols == 0) return;


        //rows
        for (int r=0; r<rows; ++r){

            if(board[r][0] == 'O') dfs(r, 0, board);

            if(board[r][cols-1] == 'O') dfs(r, cols-1, board);

        }


        //cols
        for (int c=0; c<cols; ++c){

            if(board[0][c] == 'O') dfs(0, c, board);

            if(board[rows-1][c] == 'O') dfs(rows-1, c, board);
            
        }

        //nested loops 

        for(int i=0; i<rows; i++){
            for(int j=0; j<cols; j++){

                if(board[i][j] == 'O') board[i][j] = 'X';

                else if(board[i][j] == 'S') board[i][j] = 'O';

            }
        }
        
    }
};