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

    int sumOfLeftLeaves(TreeNode* root) {

        if( root == NULL) return 0;

        if(root -> left == NULL && root -> right == NULL) return 0;

        queue<TreeNode*> q;
        q.push(root);

        int sumOfLeaves  = 0;

        while( !q.empty()){
             
              TreeNode* node = q.front();
              q.pop();

              if( node -> left != NULL &&  node -> left -> left == NULL && node -> left -> right == NULL){
                     
                      sumOfLeaves = sumOfLeaves +  node -> left -> val;
                  }

                  if( node -> left != NULL) q.push( node -> left);
                  if( node -> right != NULL) q.push( node -> right);
              
        }

        return sumOfLeaves;
        
    }
};




int main(){

    TreeNode* root = new TreeNode(3);
    root -> left = new TreeNode(9);
    root -> right = new TreeNode(20);
    root -> right -> left = new TreeNode(15);
    root -> right -> right = new TreeNode(7);

    Solution leetcode;

    cout<<leetcode.sumOfLeftLeaves(root);

    






}