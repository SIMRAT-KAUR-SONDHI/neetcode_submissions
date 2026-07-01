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
    vector<int> rightSideView(TreeNode* root) {
        vector<int> res;
        if(root==NULL){
            return res;
        }
        queue<TreeNode*> q;
        q.push(root);
        while(! q.empty()){
            int length = q.size();
            for(int i=0;i<length;i++){
                TreeNode* t = q.front();
                q.pop();
                if(i==0){
                    res.push_back(t->val);
                }
                if(t->right != NULL){
                    q.push(t->right);
                }
                // else if( t-> left -> right != NULL){
                //     q.push(t->left->right);
                // }    
                if( t->left != NULL){
                    q.push(t->left);
                }
            }
        }
        return res;
    }
};
