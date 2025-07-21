class Solution {
public:

    //dfs
    int dfs(int rows, int cols, vector<vector<int>>& grid){
         //step 1
        if (rows < 0 || rows >= grid.size() || cols < 0 || cols >= grid[0].size() || grid[rows][cols] != 1) return 0;

        //step 2
        grid[rows][cols] = 0;

        //step 3
        int area=1;
        area += dfs(rows+1, cols, grid);
        area += dfs(rows-1, cols, grid);
        area += dfs(rows, cols+1, grid);
        area += dfs(rows, cols-1, grid);

        return area;
    }


    int maxAreaOfIsland(vector<vector<int>>& grid) {

        //intialize
        int maxArea = 0;

        //nested loop
        for (int i = 0; i<grid.size(); ++i){
            for(int j = 0; j<grid[0].size(); ++j){

                if (grid[i][j] == 1){

                    maxArea = max(maxArea, dfs(i, j, grid));
                }
            }
        }


        //return
        return maxArea;
        
    }
};