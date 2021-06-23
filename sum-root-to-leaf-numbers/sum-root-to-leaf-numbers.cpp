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
    int ans = 0;
    void sum(TreeNode*root,string s)
    {
        if(root == NULL)
            return;
        if(root->right == NULL and root->left == NULL)
        {
            s += to_string(root->val);
            ans += stoi(s);
            s.pop_back();
        }
                    s += to_string(root->val);
        sum(root->left,s);
        sum(root->right,s);
    }
    int sumNumbers(TreeNode* root) {
        string s = "";
        sum(root,s);
        return ans;
    }
};