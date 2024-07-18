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


     bool symmetrical( TreeNode* left , TreeNode* right){
          
           if( left == NULL && right == NULL) return true;
           if( left == NULL || right == NULL) return false;

           if( left -> val != right -> val) return false;


           return symmetrical( left -> left , right -> right) && symmetrical(
                    
            left -> right , right -> left );
     }   


    bool isSymmetric(TreeNode* root) {

        if( root == NULL) return true;

        return symmetrical( root -> left, root -> right);
        
    }
};




int main(){

    TreeNode* root = new TreeNode(1);
    root -> left = new TreeNode(2);
    root -> right = new TreeNode(2);
    root -> left -> left = new TreeNode(3);
    root -> left -> right = new TreeNode(4);
    root -> right -> left = new TreeNode(4);
    root -> right -> right = new TreeNode(3);

    Solution leetcode;

    if(leetcode.isSymmetric(root)) cout<<"The Given Tree Is Symmetrical"<<endl;

    else cout<<"The Given Tree Is Not Symmetrical";






}