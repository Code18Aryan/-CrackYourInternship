  #include<bits/stdc++.h>
  using namespace std;


  class Solution {

    public:

        vector<int> bfsOfGraph(int V, vector<int> adj[]) {
        
        int vis[V] = {0};
        vis[0] = 1;
        
        vector<int>ans;
        
        queue<int> q;
        
        q.push(0);
        
        while(!q.empty()){
             
              int node = q.front();
              ans.push_back(node);
              
              q.pop();
              
              for(auto adjNode : adj[node]){
                  
                   if(!vis[adjNode]){ 
                       
                       vis[adjNode] = 1;
                       q.push(adjNode);
                   }
              }
        }
        
        return ans;
        
        
    }

  };





  int main(){
     
      vector<int> adj[] = {{1,2,3},{},{4},{},{}};
      int V = 5;
      int E = 4;

      Solution gfg;


      vector<int> bfs = gfg.bfsOfGraph(V,adj);

      for(auto x : bfs) cout<<x<<" ";
  }