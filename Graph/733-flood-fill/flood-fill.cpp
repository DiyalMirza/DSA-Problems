class Solution {
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int r, int c, int newColor) {
        
    //edgecase
    if (image.empty()) return {};


    //intialize
    int originalColor=image[r][c];
    if (originalColor==newColor) return image;


    int rows = image.size();
    int cols = image[0].size();

    vector<pair<int,int>> directions = {{1,0},{0,1},{-1,0},{0,-1}};


    //BFS

    queue<pair<int,int>> q;
    q.push({r,c});
    image[r][c] = newColor;

    

    while(!q.empty()){
        auto [x,y] = q.front();
        q.pop();

        for(auto [dx,dy] : directions){

            int newx = x + dx;
            int newy = y + dy;

            if(newx>=0 && newy>=0 && newx<rows && newy <cols && image[newx][newy] == originalColor ) {

                image[newx][newy] = newColor;
                q.push({newx, newy});
            }
        }
    }


    return image;
    }
};