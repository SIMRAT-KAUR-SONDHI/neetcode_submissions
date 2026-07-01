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
    int res=0;
    int fun(TreeNode* root){
        if(root==NULL) return 0;
        int i = fun(root->left);
        int j= fun(root->right);
        int sum = i+j;
        res=max(sum,res);
        return max(i,j)+1;
    }
    int diameterOfBinaryTree(TreeNode* root) {
        if(root==NULL) return 0;
        fun(root);
        return res;
    }
};
