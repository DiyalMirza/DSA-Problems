class Solution {
public:

    //edgecase
    //intialize
    //Loop (MainGrid Traversal)
    
    //{BFS}

         
    
            


    int numIslands(vector<vector<char>>& grid) {

    //edgecase
    if (grid.empty()) return 0;


    //intialize
    int islandCount=0;
    int rows = grid.size();
    int cols = grid[0].size();

    vector<pair<int,int>> directions = {{1,0},{0,1},{-1,0},{0,-1}};


    
    //Loop (MainGrid Traversal)

    for (int r=0; r<rows; r++){
        for (int c=0; c<cols; c++){

             //BFS

            if (grid[r][c]=='1'){
                
                islandCount++;

                queue<pair<int,int>> q;
                q.push({r,c});

                grid[r][c]='0';

                while(!q.empty()){
                    auto [x,y] = q.front();
                    q.pop();

                    for(auto [dx,dy] : directions){

                        int newx = x + dx;
                        int newy = y + dy;


                        if(newx>=0 && newy>=0 && newx<rows && newy <cols && grid[newx][newy] == '1' ) {

                            grid[newx][newy] = '0';

                            q.push({newx, newy});
                        }
                    }
                }




            }

        }
    }

    return islandCount;
   
        
    }
};