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
    vector<vector<int>> v;
    int ans = 0;
    void sum(TreeNode* root, int k,vector<int>&a)
    {
        if(root == NULL)
            return;
        a.push_back(root->val);
        ans += root->val;
        if(root->left == NULL and root->right == NULL and ans == k)
        {
            v.push_back(a);
        }
        sum(root->left,k,a);
        sum(root->right,k,a);
        ans -= root->val;
        a.pop_back();
    }
    vector<vector<int>> pathSum(TreeNode* root, int k) {
        vector<int>a;
        sum(root,k,a);
        return v;
    }
};