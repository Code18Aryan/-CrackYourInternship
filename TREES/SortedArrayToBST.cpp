#include<bits/stdc++.h>
using namespace std;



  struct TreeNode {
      int val;
      TreeNode *left;
      TreeNode *right;
      TreeNode() : val(0), left(nullptr), right(nullptr) {}
      TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
      TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}

  };
 
class Solution {

private: 


    TreeNode* buildTree(vector<int>&nums, int low , int high){

        if( low > high) return NULL;

        int mid = low + (high - low) /2;

        TreeNode* root = new TreeNode(nums[mid]);

        root -> left = buildTree(nums,low,mid-1);

        root -> right = buildTree(nums,mid+1,high);


        return root; 
    
    }

public:

    TreeNode* sortedArrayToBST(vector<int>& nums) {

        int n = nums.size();

        TreeNode* root = buildTree(nums,0,n-1);

        return root;
        
    }
};

void printTree(TreeNode* root){
     
     if(root == NULL) return ;

     
     printTree(root -> left);

    cout<<root -> val<<" ";
     
     printTree(root -> right);

    
}


int main(){

   vector<int> nums = {-10,-3,0,5,9};

    Solution leetcode;

    TreeNode* root = leetcode.sortedArrayToBST(nums);

    printTree(root);






}