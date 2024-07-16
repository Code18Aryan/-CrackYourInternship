
   #include<bits/stdc++.h>
   using namespace std;

   class Solution {

    public:
    
    vector<int> twoSum(vector<int>& nums, int target) {

        int n = nums.size();

        unordered_map<int,int> mpp;

        for(int i=0; i<n; i++){
             
              int numRequired = target - nums[i];

              if(mpp.find(numRequired) != mpp.end()){
                 
                   return {i,mpp[numRequired]};
              }

              else mpp[nums[i]] = i;
        }

        return {-1,-1};
        
    }
};

  int main(){
     
     Solution leetcode;

    vector<int> nums = {2,7,11,15}; 
    vector<int> nums2 = {3,2,4};
    vector<int> nums3 = {3,3};

    int target = 9;
    int target2 = 6;
    int target3 = 6;

    vector<int> ans =  leetcode.twoSum(nums,target);
    vector<int> ans2 =  leetcode.twoSum(nums2,target2);
    vector<int> ans3 = leetcode.twoSum(nums3,target3);

    for(auto x : ans) cout<<x<<" ";
    cout<<endl;
    for(auto x : ans2) cout<<x<<" ";
    cout<<endl;
    for(auto x : ans3) cout<<x<<" ";

  }