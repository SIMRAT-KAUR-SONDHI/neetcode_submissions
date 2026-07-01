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
    int fun(TreeNode* root, bool & length){
        if(root==NULL) return 0;
        int i = fun(root->left,length);
        int j = fun(root->right,length);
        if(abs(i-j)>1){
            length = false;
        }
        return max(i,j)+1;
    }
    bool isBalanced(TreeNode* root) {
        bool length = true;
        if(root==NULL) return true;
        fun(root,length);
        return length;
    }
};
