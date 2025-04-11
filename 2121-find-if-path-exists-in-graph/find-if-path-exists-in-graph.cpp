class Solution {
public:
    bool validPath(int n, vector<vector<int>>& edges, int s, int end) {
        vector<vector<int>>adj(n);

        for(auto& edge : edges){
            adj[edge[0]].push_back(edge[1]);
            adj[edge[1]].push_back(edge[0]);
        }



        
        vector <bool> visited (n, false);
        visited[s]= true;

        queue<int> q;
        q.push(s);

        while(!q.empty()){

            int node = q.front();
            q.pop();

            if (node == end)
                return true;

            for(int neighbour:adj[node]){

                if(!visited[neighbour]){
                    visited[neighbour]=true;
                    q.push(neighbour);
                }
            }

        }
        return false;

        
    }




};