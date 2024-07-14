

  #include<bits/stdc++.h>
  using namespace std;


  class Solution {

    public:
    
    bool findCycle(int node , int parent , vector<int> adj[] , int vis[]){
          
          vis[node] = 1;
          
          for(auto adjNode : adj[node]){
                
                if(!vis[adjNode]){
                     
                      if( findCycle(adjNode,node,adj,vis) ) return true;
                }
                
                else if( adjNode != parent){
                     
                     return true;
                }
          }
          
          return false;
    }
    
    
    bool isCycle(int V, vector<int> adj[]) {
        
        int vis[V] = {0};
        
        for(int i=0; i<V; i++){
             
              if(!vis[i]){
                   
                    if( findCycle(i,-1,adj,vis)) return true;
              }
        }
        
        return false;
    }

  };



  
  int main(){


    Solution gfg;

    vector<int> adj[] = {{1}, {0, 2, 4}, {1, 3}, {2, 4}, {1, 3}};   int V = 5;  int E = 5;

    vector<int> adj2[] = {{}, {2}, {1, 3}, {2}};   int V2 = 4; int E2 = 2;


    if(gfg.isCycle(V,adj)) cout<<"It has cycle"<<endl;

    else cout<<"It has no cycle"<<endl;

     if(gfg.isCycle(V2,adj2)) cout<<"It has cycle"<<endl;

    else cout<<"It has no cycle"<<endl;




     

  }

