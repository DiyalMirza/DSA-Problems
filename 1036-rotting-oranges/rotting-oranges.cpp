class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {

        //Initialize
        int rows=grid.size();
        int cols=grid[0].size();
        if (rows < 1 || cols < 1) return -1;
        queue<pair<int,int>>q;
        int freshCount=0;


        //NestedLoop
        for(int i=0; i<rows; i++){
            for(int j=0; j<cols; j++){

                if(grid[i][j] == 2) q.push({i, j});
                else if(grid[i][j] == 1) freshCount++;
            }
        }

        //Setup

        int min=0;
        //up,down,right,left
        int dx[]={-1,0,1,0};
        int dy[]={0,1,0,-1};

        //BFS

        while(!q.empty() && freshCount > 0){
            int size=q.size();
            
            for(int i=0; i<size; i++){
                auto[r,c]=q.front();
                q.pop();


                for(int i=0; i<4; i++){

                    int nr = r + dx[i];
                    int nc = c + dy[i];

                    if(nr>=0 && nr<rows && nc>=0 && nc<cols && grid[nr][nc] == 1){

                        grid[nr][nc] = 2;
                        q.push({nr, nc});
                        freshCount--;
                    }

                }

            }
            min++;
        }


        //Return

        if (freshCount == 0) return min;
        return -1;
        
    }
};