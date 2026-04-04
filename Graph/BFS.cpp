#include<bits/stdc++.h>
using namespace std;
vector<int> bfsofGraph(int v, vector<int> adj[]){
    vector<int> bfs;
    vector<int> vis(v, 0); // Initialize all vertices as unvisited
   queue<int> q;
    vis[0] = 1; // Mark the starting vertex as visited
   q.push(0); // Start BFS from vertex 0
    //queue<int> q;
   // q.push(0);
    while(!q.empty()){
        int node = q.front();
        q.pop();
        bfs.push_back(node);
        for(auto it : adj[node]){
            if(!vis[it]){
                vis[it] = 1;
                q.push(it);
            }
        }
    }
    return bfs;
}
int main(){
      int v = 4;   // number of vertices (0,1,2,3)

    vector<int> adj[v];

    // Manually adding edges
    adj[0] = {1, 2};
    adj[1] = {0};
    adj[2] = {0, 3};
    adj[3] = {2};

    vector<int> result = bfsofGraph(v, adj);

    for(int node : result)
        cout << node << " ";

    return 0;
}