class Solution {
public:

    void dfs(int s, int d,vector<vector<int>>& graph, vector<bool> vis, vector<int> path,vector<vector<int>>& ans){
        //Mark The Current Node and add to path
        vis[s] = true;
        path.push_back(s);

        //BaseCase
        if(s == d){
            ans.push_back(path);
            //No return ,need to back track
        }

        else{
            for(int v : graph[s]){
                if(!vis[v]){
                    dfs(v,d,graph,vis,path,ans);
                }
            }
        }

        //BackTrack
        path.pop_back();
        vis[s] = false;
    }
    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) {
        int V = graph.size();
        vector<vector<int>> ans;
        vector<bool> vis(V,false);
        vector<int> path;

        dfs(0, V-1, graph,vis,path,ans);
        return ans;
    }
};