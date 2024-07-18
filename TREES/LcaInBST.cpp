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

    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {

        if( root == NULL) return NULL;

        if( root -> val < p -> val && root -> val < q -> val){
             
              return lowestCommonAncestor(root -> right, p , q);
        }

        else if( root -> val > p -> val && root -> val > q -> val){
        
        
               return lowestCommonAncestor(root -> left, p , q);

        }
        
        return root;
        
    }
};




int main(){

    TreeNode* root = new TreeNode(6);
    root -> left = new TreeNode(2);
    root -> right = new TreeNode(8);
    root -> left -> left = new TreeNode(0);
    root -> left -> right = new TreeNode(4);
    root -> right -> left = new TreeNode(7);
    root -> right -> right = new TreeNode(9);
    root -> left -> right -> left= new TreeNode(3);
    root -> left -> right -> right = new TreeNode(5);

    TreeNode* p = new TreeNode(5);
    TreeNode* q = new TreeNode(7);


    Solution leetcode;

    TreeNode* ans = leetcode.lowestCommonAncestor(root,p,q);
    cout<<ans -> val;

    






}