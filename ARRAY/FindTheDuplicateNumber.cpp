  #include<bits/stdc++.h>
  using namespace std;


  class Solution {

    public:

    int findDuplicate(vector<int>& nums) {

        int n = nums.size();

        if( n == 0) return -1;

        unordered_map<int,int> mpp;

        for(int i=0; i<n; i++){
             
              mpp[nums[i]]++;
        }


        for(auto it : mpp){
             
              if(it.second >= 2){
                 
                  return it.first;
              }
        }
        
        return -1;
    }
};

  int main(){
     
     Solution leetcode;

    vector<int> nums = {1,3,4,2,2};
    vector<int> nums2 = {3,1,3,4,2};
    vector<int> nums3 = {3,3,3,3,3};

     cout<<leetcode.findDuplicate(nums)<<endl;
     cout<<leetcode.findDuplicate(nums2)<<endl;
     cout<<leetcode.findDuplicate(nums3)<<endl; 

  }