class Solution {
public:
    
    bool dfsRec(int i,vector<vector<int>>& graph,vector<int>& visited,vector<int>& dfsVisited){

        visited[i] = true;
        dfsVisited[i] = true;

        for (auto x : graph[i]){

            if(!visited[x]){

                if (dfsRec(x, graph, visited, dfsVisited)) return true;                 
            }

            else if (dfsVisited[x]) return true;           
        }
        dfsVisited[i] = false;
        return false;
    }
   
    
    vector<int> eventualSafeNodes(vector<vector<int>>& graph) {
        int n = graph.size();
        vector<int> visited(n, false);
        vector<int> dfsVisited(n, false);
        vector<int> ans;

        for(int i=0; i<n; i++){
            if (!dfsRec(i, graph, visited, dfsVisited)){
                ans.push_back(i);
            }
        }
        return ans;
    }
};