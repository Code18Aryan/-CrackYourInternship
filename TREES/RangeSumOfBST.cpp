#include<bits/stdc++.h>
using namespace std;



  class TreeNode{

    public:

    int val;
    
    TreeNode* left;
    TreeNode* right;

    TreeNode(int val){
         
         this -> val = val;
         this -> left = NULL;
         this -> right = NULL;
    }

  };
 
class Solution {

    public:

    int rangeSumBST(TreeNode* root, int low, int high) {

        if( root == NULL) return 0;

        int leftSum = rangeSumBST(root -> left , low , high);
        int rightSum = rangeSumBST(root -> right,low , high);

        if( root -> val >= low && root -> val <= high){
             
              return root -> val + leftSum + rightSum;
        }

        return leftSum + rightSum;
        
    }
};



int main(){

   TreeNode* root = new TreeNode(10);
    root -> left = new TreeNode(5);
    root -> right = new TreeNode(15);
    root -> left -> left = new TreeNode(3);
    root -> left -> right = new TreeNode(7);
    root -> right -> right = new TreeNode(18);

    Solution leetcode;

     int sum = leetcode.rangeSumBST(root,7,15);

    

    






}