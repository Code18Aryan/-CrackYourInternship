
#include<bits/stdc++.h>
using namespace std;

 class Solution{
     

      public:

      int findMajorityElement(vector<int>&nums){
         
         unordered_map<int,int> mpp;
         
         for(int i=0; i<nums.size(); i++){
             
              mpp[nums[i]]++;
         }

         for(auto x : mpp){
             
              if(x.second >= nums.size()/2) return x.first;
         }

         return -1;
      }

      
      
 };


int main(){

     vector<int> nums = {1,2,3,3,4,4,4,4,4,2,2,4,4};

     Solution leetcode;

     cout<<leetcode.findMajorityElement(nums);



     
}