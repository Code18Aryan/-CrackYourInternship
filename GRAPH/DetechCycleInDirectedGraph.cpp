  #include<bits/stdc++.h>
  using namespace std;


  class Solution {

    public:
    
     bool isCyclic(int V, vector<int> adj[]) {
        
        vector<int> indegree(V,0);
        
        queue<int> q;
        
        int cnt = 0;
        
        for(int i=0; i<V; i++){
             
              for(auto adjNode : adj[i]){
                   
                    indegree[adjNode]++;
              }
        }
        
        for(int i=0; i<V; i++){
             
              if(indegree[i] == 0) q.push(i);
        }
        
        while(!q.empty()){
            
            
            int node = q.front();
            q.pop();
            
            cnt++;
            
            for(auto adjNode : adj[node]){
                 
                 indegree[adjNode]--;
                 
                 if(indegree[adjNode] == 0) q.push(adjNode);
            }
            
        }
        
        if( cnt ==V) return false;
        
        return true;
        
     }

  };


  int main(){

    Solution gfg;

    vector<int>adj[] = {   {1} , {2} , {3} , {3}

    };

    int v = 4;

    if(gfg.isCyclic(v,adj)) cout<<" It has cycle"<<endl;

    else cout<<"It has no cycle "<<endl;

     
      
  }
