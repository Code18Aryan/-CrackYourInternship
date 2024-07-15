  #include<bits/stdc++.h>
  using namespace std;


  class Solution {

    public:

       
    void dfs(int node , vector<int> adj[] , int vis[] , vector<int>&ans){
         
          vis[node] = 1;
          
          ans.push_back(node);
          
          for(auto x : adj[node]){
               
                if(!vis[x]){
                     
                      dfs(x,adj,vis,ans);
                }
          }
    }
  
  
    vector<int> dfsOfGraph(int V, vector<int> adj[]) {
        
        int vis[V] = {0};
        
        vector<int> ans;
        
        for(int i=0; i<V; i++){
             
              if(!vis[i]){
                   
                    dfs(i,adj,vis,ans);
              }
        }
        
        return ans;
    }

  };





  int main(){
     
      int V = 5;   vector<int> adj[] = {{2,3,1} , {0}, {0,4}, {0}, {2}};

      Solution gfg;


      vector<int> bfs = gfg.dfsOfGraph(V,adj);

      for(auto x : bfs) cout<<x<<" ";
  }