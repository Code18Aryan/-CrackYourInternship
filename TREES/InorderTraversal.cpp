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
    vector<int> inorderTraversal(TreeNode* root) {

        vector<int> ans;
        if(root == NULL) return ans;

        TreeNode* current = root;

        while( current != NULL){
             
              if( current -> left == NULL){
                   
                    ans.push_back(current -> val);
                    current = current -> right;
              }

              else{
                   
                    TreeNode* prev = current -> left;

                    while( prev -> right != NULL && prev -> right != current){
                         
                         prev = prev -> right;
                    }

                    if( prev -> right == NULL){

                        prev -> right = current;
                        current = current -> left;
                    }

                    else{
                           
                           prev -> right = NULL;
                           ans.push_back(current -> val);
                           current = current -> right;
                    }
              }
        }

        return ans;
        
    }
};





int main(){

    TreeNode* root = new TreeNode(1);
    root -> right = new TreeNode(2);
    root -> right -> left = new TreeNode(3);

    Solution leetcode;

    vector<int> ans = leetcode.inorderTraversal(root);
 
    for(auto x : ans) cout<<x<<" ";

    

    






}