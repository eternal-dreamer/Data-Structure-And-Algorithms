/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int maxLevelSum(TreeNode* root) {
        queue<TreeNode*> values;
        values.push(root);
        int maxsum = INT_MIN, maxlevel = 0,level = 1;
        while(!values.empty())
        {
            int n = values.size();
            int sum = 0;
            while(n --)
            {
                TreeNode*x = values.front();
                sum += x->val;
                values.pop();
                if(x->left)
                    values.push(x->left);
                if(x->right)
                    values.push(x->right);
            }
            
            if(maxsum < sum)
            {
                maxsum = sum;
                maxlevel = level;
            }
            level ++;
        }
        return maxlevel;
    }
};
