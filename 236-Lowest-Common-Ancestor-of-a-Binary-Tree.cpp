/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* n1, TreeNode* n2) {
         if(root==NULL || root==n1 || root==n2){
           return root;
       }
       TreeNode* lt=lowestCommonAncestor(root->left,n1,n2);
       TreeNode* rt=lowestCommonAncestor(root->right,n1,n2);
       if(lt==NULL){return rt;}
       else if(rt==NULL){return lt;}
       else{return root;}
    }
};