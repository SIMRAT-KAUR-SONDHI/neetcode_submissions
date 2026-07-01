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
    void fun(TreeNode* root, int maxSofar){
        if(root==NULL){
            return ;
        }
        if(root->val >= maxSofar){
            res++;
           
        }

        maxSofar = max(maxSofar,root->val);

        fun(root->left,maxSofar);
        fun(root->right,maxSofar);
        return;
    }
    int goodNodes(TreeNode* root) {
        if(root==NULL){
            return 0;
        }
        fun(root,root->val);
        return res;
    }
};
