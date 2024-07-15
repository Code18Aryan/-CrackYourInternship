  #include<bits/stdc++.h>
  using namespace std;


  class Solution {
   public:

    void bfs(int row, int col , vector<vector<int>>& vis,vector<vector<char>>& island){
         
          vis[row][col] = 1;
          
          queue<pair<int,int>> q;
          q.push({row,col});

          int m = island.size();
          int n = island[0].size();

          vector<int> changeRow = {-1,0,+1,0};
          vector<int> changeCol = {0,+1,0,-1};

          while(!q.empty()){
             
              int row = q.front().first;
              int col = q.front().second;

              q.pop();

              for(int i=0; i<4; i++){
                 
                  int nRow = row + changeRow[i];
                  int nCol = col + changeCol[i];

                  if(nRow >=0 && nRow < m && nCol >= 0 && nCol < n && island[nRow][nCol] == '1' && vis[nRow][nCol] == 0){
                     
                      q.push({nRow,nCol});
                      vis[nRow][nCol] = 1;
                  }
              }
          }
    }


    int numIslands(vector<vector<char>>& grid) {

        vector<vector<char>> island = grid;

        int m = island.size();
        int n = island[0].size();

        vector<vector<int>> vis(m, vector<int>(n,0));

        int numberOfIsland = 0;

        for(int i=0; i<m; i++){
             
              for(int j=0; j<n; j++){
                 
                 if(island[i][j] == '1' && vis[i][j] == 0){
                     
                      numberOfIsland++;

                      bfs(i,j,vis,island);
                 }
                  
              }
        }

        return numberOfIsland;
        
    }
};




  int main(){
     
      vector<vector<char>> grid =
       {

       {'1','1','1','1','0'},
       {'1','1','0','1','0'},
       {'1','1','0','0','0'},
       {'0','0','0','0','0'}

      };

      vector<vector<char>> grid2 =
       {

       {'1','1','0','0','0'},
       {'1','1','0','0','0'},
       {'0','0','1','0','0'},
       {'0','0','0','1','1'}

      };

      

      Solution leetcode;


      cout<<leetcode.numIslands(grid)<<endl;
      cout<<leetcode.numIslands(grid2);


  }