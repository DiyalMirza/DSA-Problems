class Solution {
public:

    bool dfsRec(int i,vector<int>& visited, vector<int>& dfsVisited,vector<vector<int>>& adj){
        visited[i] = true;
        dfsVisited[i] = true;


        for (auto x : adj[i]){
            if(!visited[x]){
                    if(dfsRec(x, visited, dfsVisited, adj)) return true;
            }
            
            else if (dfsVisited[x]) return true;      
        }

        dfsVisited[i] = false;
        return false;
    }



    bool canFinish(int numCourses, vector<vector<int>>& prereq) {
        // numCourses = nodes, prereq = edges

        int n = numCourses;
        vector<int> visited(n, false);
        vector<int> dfsVisited(n, false);

        vector<vector<int>> adj(n);

        
            for(auto x: prereq){
                adj[x[1]].push_back(x[0]);
            }
        
        for (int i=0; i<n; i++){
            if(!visited[i]){
                if(dfsRec(i,visited, dfsVisited, adj)) return false;
                
            }
          
        }

          return true;
        

        
    }
};