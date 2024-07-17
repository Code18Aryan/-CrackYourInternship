
   #include<bits/stdc++.h>
   using namespace std;

   class Solution {
     public:
    int majorityElement(vector<int>& nums) {

        int n=nums.size();
           
               // BRUTE FORCE 
        // for(int i=0; i<n; i++){
        //     int count=0;
        //     for(int j=0; j<n; j++){
        //         if(nums[j]==nums[i]){
        //             count++;
        //         }
        //     }
        //     if(count>n/2){
        //         return nums[i];
        //     }
        // }
        // return -1;

            
            map<int ,int>mpp;

            for(int i=0; i<n; i++){

                mpp[nums[i]]++;
            }

            for(auto it:mpp){

                if(it.second > n/2){

                    return it.first;
                }
            }
            return -1;

 


        
        
    }
};

  int main(){
     
     Solution leetcode;

    vector<int> nums = {3,2,3};
    vector<int> nums2 = {2,2,1,1,1,2,2};
    
    cout<<leetcode.majorityElement(nums)<<endl;
    cout<<leetcode.majorityElement(nums2);

    


  }