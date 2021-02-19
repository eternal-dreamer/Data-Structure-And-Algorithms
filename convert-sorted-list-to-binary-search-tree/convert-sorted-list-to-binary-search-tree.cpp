/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
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
    TreeNode* construct(ListNode* &head,int count){
        if(count==0) return NULL;
        
        TreeNode* left=construct(head,count/2);
        TreeNode* newnode=new TreeNode(head->val);
        head=head->next;
        TreeNode* right=construct(head,(count-1)/2);
        newnode->left=left;
        newnode->right=right;
        return newnode;
    }
    TreeNode* sortedListToBST(ListNode* head) {
        if(!head) return NULL;
        int len = 0;
        ListNode* temp = head;
        while(temp != NULL)
        {
            temp = temp->next;
            len++;
        }
        ListNode* s = head;
        return construct(s,len);
        
    }
};