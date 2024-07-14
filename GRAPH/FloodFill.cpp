
  #include<bits/stdc++.h>
  using namespace std;


  class Solution {

    public:

        vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {

        vector<vector<int>> matrix = image;

        int originalColor = image[sr][sc];
        int newColor = color;

        matrix[sr][sc] = newColor;

        int n = image.size();
        int m = image[0].size();

        vector<int> changeRow = {-1,0,+1,0};
        vector<int> changeCol = {0,+1,0,-1};

        queue<pair<int,int>> q;
        q.push({sr,sc});
        

        while(!q.empty()){
             
              int row = q.front().first;
              int col = q.front().second;
              
              q.pop();

              for(int i=0; i<4; i++){
                 
                  int nRow = row + changeRow[i];
                  int nCol = col + changeCol[i];

                  if(nRow < n && nRow >= 0 && nCol < m && nCol >= 0 && image[nRow][nCol] == originalColor && matrix[nRow][nCol] != newColor){
                     
                        matrix[nRow][nCol] = newColor;
                        q.push({nRow,nCol});
                  }
              }
        }


        return matrix;

        }
  };




  int main(){


    Solution leetcode;
     
      vector<vector<int>> image = {  

           {1,1,1},{1,1,0},{1,0,1}
      };

      int sr = 1;
      int sc = 1;
      int color = 2;

      vector<vector<int>> ans = leetcode.floodFill(image,sr,sc,color);

      for(int i=0; i<image.size(); i++){
         
          for(int j=0; j<image[0].size(); i++){
             
                cout<<ans[i][j]<<" ";
          }

          cout<<endl;
      }




  }