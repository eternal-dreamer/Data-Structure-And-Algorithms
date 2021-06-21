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
    TreeNode*in(TreeNode*root,int v)
    {
        if(root == NULL)
            return new TreeNode(v);
        if(root->val >= v)
            root->left = in(root->left,v);
        else if(root->val < v)
            root->right = in(root->right,v);
        return root;
    }
    TreeNode* bstFromPreorder(vector<int>& p) {
       TreeNode* root =NULL;
        int n = p.size();
    
        for(int i = 0; i < n; i++){
            root = in(root, p[i]);
        }
      
        
        
        return root;
    }
};