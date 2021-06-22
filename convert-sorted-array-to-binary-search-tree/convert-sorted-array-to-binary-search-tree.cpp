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
    TreeNode*bst(vector<int>& n,int s,int e)
    {
        TreeNode*p;
        if(s > e)
            return NULL;
        int m = (s+e)/2;
        int v = n[m];
        p = new TreeNode(v);
        p->left = bst(n,s,m-1);
        p->right = bst(n,m+1,e);
        return p;
        
    }
    TreeNode* sortedArrayToBST(vector<int>& n) {
        return bst(n,0,n.size()-1);
    }
};