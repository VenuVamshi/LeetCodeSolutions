class Solution {
public:
    bool isBipartite(vector<vector<int>>& graph) {
        int V = graph.size();
        vector<bool> vis(V,false);
        vector<int> col(V,-1);

        queue<int> q;
        //Handle disconnected components
        for(int i = 0 ; i < V; i++){
            if(!vis[i]){

                q.push(i);
                vis[i] = true;
                col[i] = 0;

                while(!q.empty()){

                    int cur = q.front();q.pop();

                    for(int v : graph[cur]){
                        if(!vis[v]){
                            vis[v] = true;
                            col[v] = 1 - col[cur];
                            q.push(v);
                        }
                        else{//same color on adj vertices
                            if(col[v] == col[cur]){
                                return false;
                            }
                        }
                    }
                }

            }
        }
        return true;
    }
};