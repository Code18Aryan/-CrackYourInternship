#include<bits/stdc++.h>
using namespace std;

class Solution
{
    
    
    private:
    
    void topoSort(int node ,vector<int> adj[] , int vis[] , stack<int> &st){
         
         vis[node] = 1;
         
         for(auto x : adj[node]){
              
              if(!vis[x]) topoSort(x,adj,vis,st);
         }
         
         st.push(node);
    }
    
    
    
    
	public:
	//Function to return list containing vertices in Topological order. 
	vector<int> topoSort(int V, vector<int> adj[]) 
	{
	    
	    // Doing toposort using dfs and stack ;
	    // Toposort using bfs is khans algorithn
	    
	    
	    int vis[V] = {0};
	    
	    vector<int> ans;
	    
	    stack<int> st;
	    
	    for(int i=0; i<V; i++){
	         
	         if(!vis[i]){
	             
	              topoSort(i,adj,vis,st);
	         }
	    }
	    
	    
	    while(!st.empty()){
	         
	          ans.push_back(st.top());
	          st.pop();
	    }
	    
	    
	    return ans;
	}

    void print(vector<int> &nums){
         
          for(auto x : nums) cout<<x<<" ";
    }
	
};

int main(){

  vector<int> adj[] = {{},{0},{0},{0}};

    Solution gfg;

    vector<int> ans = gfg.topoSort(4,adj);

    gfg.print(ans);

    
     
     

}