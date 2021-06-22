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
    pair<int,bool> isb(TreeNode* root)
    {
        if(root == NULL)
            return {0,true};
        pair<int,bool> ans = {0,false};
         pair<int,bool> l = isb(root->left);
        pair<int,bool> r = isb(root->right);
        ans.first = max(l.first,r.first)+1;
        if(l.second and r.second and abs(l.first - r.first) <= 1)
        {
            ans.second = true;
        }
        return ans;
    }
    bool isBalanced(TreeNode* root) {
        pair<int,bool> ans = isb(root);
        return ans.second;
    }
};