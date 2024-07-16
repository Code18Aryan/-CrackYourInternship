
   #include<bits/stdc++.h>
   using namespace std;

    class Solution { 

    public:

    void sortColors(vector<int>& nums) {

        int n=nums.size();

        int low=0;   int mid=0;  int high=n-1;
        
        while(mid <= high){

            if(nums[mid] == 0){

                swap(nums[mid++],nums[low++]);
               
            }

            else if(nums[mid] == 1){

                mid++;
            }

            else{

                swap(nums[mid],nums[high--]);
                
            }
        }

        
        
    }
};

  int main(){
     
     Solution leetcode;

    vector<int> nums = {2,0,2,1,1,0};
    vector<int> nums2 = {2,0,1};
    
    leetcode.sortColors(nums);
    leetcode.sortColors(nums2);

    for(auto x : nums) cout<<x<<" ";
    cout<<endl;
    for(auto x : nums2) cout<<x<<" ";


  }