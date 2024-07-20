
#include<bits/stdc++.h>
using namespace std;

 class Solution{
     
      public:

      void merge(vector<int>&nums1 , vector<int>&nums2){
         
         int n = nums1.size();
         int m = nums2.size();

         vector<int> ans;

         int left = 0;
         int right =0;

         while( left < n && right < m){

              if(nums1[left] < nums2[right]){
                 
                 ans.push_back(nums1[left++]);
                  
              }

              else ans.push_back(nums2[right++]);
         }

         while( left < n) ans.push_back(nums1[left++]);
         while( right < m ) ans.push_back(nums2[right++]);

         for(int i=0; i<m+n; i++){
             
             nums1[i] = ans[i];
         }
      }
 };


int main(){

     vector<int> nums1 = {1,2,3,0,0,0};
     vector<int> nums2 = {2,5,6};

     Solution leetcode;

     leetcode.merge(nums1,nums2);

     for(auto x : nums1) cout<<x<<" ";

     
}