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

    int maxDepth(TreeNode* root) {

        if(root == NULL) return 0;

        int leftHeight = maxDepth(root -> left);
        int rightHeight = maxDepth(root -> right);

        return  1 + max(leftHeight , rightHeight);
        
    }
};



int main(){

    TreeNode* root = new TreeNode(3);
    root -> left = new TreeNode(9);
    root -> right = new TreeNode(20);
    root -> right -> left = new TreeNode(15);
    root -> right -> right = new TreeNode(7);

    Solution leetcode;

   cout<<leetcode.maxDepth(root);





}