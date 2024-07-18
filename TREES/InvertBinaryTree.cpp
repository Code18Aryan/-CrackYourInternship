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
public:

    TreeNode* invertTree(TreeNode* root) {

        if( root == NULL) return NULL;

        swap(root -> left , root -> right);

        invertTree(root -> left);
        invertTree(root -> right);

        return root;
   
    }
};

void printTree(TreeNode* root){
     
     if(root == NULL) return ;

     
     printTree(root -> left);
     
     printTree(root -> right);

     cout<<root -> val<<" ";
}


int main(){

    TreeNode* root = new TreeNode(4);
    root -> left = new TreeNode(2);
    root -> right = new TreeNode(7);
    root -> left -> left = new TreeNode(1);
    root -> left -> right = new TreeNode(3);
    root -> right -> left = new TreeNode(6);
    root -> right -> right = new TreeNode(9);

    Solution leetcode;

    TreeNode*  invertedTree = leetcode.invertTree(root);

    printTree(invertedTree);






}