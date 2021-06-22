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
    int in;
    unordered_map<int,int> m;
    TreeNode* b(vector<int>& p,int l , int r)
    {
        if(l > r)
            return NULL;
        TreeNode* a = new TreeNode(p[in]);
        int i = m[p[in]];
        in--;
        if(l == r)
            return a;
        a->right = b(p,i+1,r);
        a->left = b(p,l,i-1);
        return a;
    }
        
    TreeNode* buildTree(vector<int>& i, vector<int>& p) {
        int n = i.size();
        in = n-1;
        
        for(int j = 0; j < n;j++)
            m[i[j]] = j;
        return b(p,0,n-1);
        
    }
};