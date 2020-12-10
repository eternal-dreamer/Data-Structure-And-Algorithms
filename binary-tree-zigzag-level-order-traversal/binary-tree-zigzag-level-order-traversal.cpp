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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>> zigzag;
        
        queue<TreeNode*> q;
        if(root)
        q.push(root);
    int z = 1;
        while(!q.empty())
        {
            int n =q.size();
            vector<int>v;
            while(n)
            {
                TreeNode*x = q.front();
               
                v.push_back(x->val);
                if(x->left)
                q.push(x->left);
                if(x->right)
                q.push(x->right);
                 q.pop();
                n--;
            }
            if(z == 0)
                reverse(v.begin(),v.end());
            zigzag.push_back(v);
            z?z=0:z=1;
            
        }
        return zigzag;    
        
    }
};
