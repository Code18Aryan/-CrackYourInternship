
   #include<bits/stdc++.h>
   using namespace std;

    class Solution { 

    public:
    
    void moveZeroes(vector<int>& nums) {
 
        int n=nums.size();

        int j;

          for(int i=0; i<n; i++){

              if(nums[i]==0){

                  j=i;
                  break;

              }
          }


          for(int i=j+1; i<n; i++){

              if(nums[i]!=0){

                  swap(nums[i],nums[j]);

                  j++;

              }
          }
         

    }
};

  int main(){
     
     Solution leetcode;

    vector<int> nums = {0,1,0,3,12};
    vector<int> nums2 = {0};
    
    leetcode.moveZeroes(nums);
    leetcode.moveZeroes(nums2);

    for(auto x : nums) cout<<x<<" ";
    cout<<endl;
    for(auto x : nums2) cout<<x<<" ";


  }