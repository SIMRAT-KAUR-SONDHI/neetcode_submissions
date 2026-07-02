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
    unordered_map<int,int> in;
    int idx=0;
    TreeNode* fun(int low, int high, vector<int>& preorder){
       
        if(low>high){
            return NULL;
        }
        TreeNode * root = new TreeNode(preorder[idx]);
        idx++;
        int id = in[root->val];
        
        root->left = fun(low,id-1, preorder);
        root->right = fun (id+1, high,preorder);
        return root;
    }
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        
        for(int i=0;i<inorder.size();i++){
            in[inorder[i]]=i;
        }
        return fun(0,inorder.size()-1,preorder);
        
    }
};
