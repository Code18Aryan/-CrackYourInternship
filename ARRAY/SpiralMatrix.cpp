#include<bits/stdc++.h>
using namespace std;


    class Solution {

    public:

    vector<int> spiralOrder(vector<vector<int>>& matrix) {

        int n = matrix.size();
        int m = matrix[0].size();

        vector<int> nums;

        if(n == 0 || m == 0) return nums;

        int top = 0; int bottom = n-1; int left = 0; int right = m-1;


        while( left <= right && top <= bottom){
             
              for(int i=left; i<=right; i++){
                   
                    nums.push_back(matrix[top][i]);
              }

              top++;

              for(int i=top; i<=bottom; i++){
                   
                    nums.push_back(matrix[i][right]);
              }

              right--;


              if( top <= bottom){
                   
                    for(int i=right; i>=left; i--){
                         
                         nums.push_back(matrix[bottom][i]);
                    }

                    bottom--;
              }

              if( left <= right){
                   
                   for(int i=bottom; i>=top; i--){
                        
                        nums.push_back(matrix[i][left]);
                   }

                   left++;
              }
        }

        return nums;
        
    }

    void print(vector<int>&nums){
         
         for(auto x : nums) cout<<x<<" ";
    }
};

int main(){


     vector<vector<int>> matrix = {{1,2,3},{4,5,6},{7,8,9}};

     Solution leetcode;

     vector<int> ans = leetcode.spiralOrder(matrix);

      leetcode.print(ans);

     
     

}