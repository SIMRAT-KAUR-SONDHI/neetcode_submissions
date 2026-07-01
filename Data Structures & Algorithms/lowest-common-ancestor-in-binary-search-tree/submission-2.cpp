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
    TreeNode* Lca (TreeNode* root, TreeNode* p, TreeNode* q){
        if(root==NULL){
            return root;
        }
        if(root==p){
            return p;
        }
        if(root==q){
            return q;
        }
        if(root->val < p->val ){
            return Lca(root->right,p,q);
        }
        if(root->val > q->val){
            return Lca(root->left,p,q);
        }
        if(p->val < root->val and root->val <q->val){
            return root;
        }
        
    }
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        if(root==NULL){
            return root;
        }

        if(p->val < q->val){
            return Lca (root,p,q);
        }
        else{
            return Lca (root,q,p);
        }
    }
};
