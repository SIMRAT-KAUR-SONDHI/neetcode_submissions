/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */

class Solution {
public:
    bool fun(TreeNode* root, TreeNode* subRoot){
        if(root==NULL and subRoot==NULL){
            return true;
        }
        if(root==NULL or subRoot==NULL){
            return false;
        }
        if(root->val != subRoot->val){
            return false;
        }
        bool left =fun(root->left,subRoot->left);
        bool right = fun(root->right,subRoot->right);
        if(left==true and right==true){
            return true;
        }
        else{
            return false;
        }
    }
    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
        if(subRoot == NULL)
            return true;

        if(root == NULL)
            return false;
        if(root->val == subRoot->val && fun(root,subRoot)){
            return true;
        }
        return isSubtree(root->left, subRoot )|| isSubtree(root->right,subRoot);

    }
};
