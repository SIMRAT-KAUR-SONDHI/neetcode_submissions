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
    int maxDepth(TreeNode* root) {
        int level=1;
        if(root==NULL){
            return 0;
        }
        if(root->left==NULL or root->right==NULL){
            level++;
        }
        int r1=maxDepth(root->left)+1;
        int r2=maxDepth (root->right)+1;
        return max(r1,r2);
    }
};
